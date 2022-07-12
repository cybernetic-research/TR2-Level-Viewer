using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System.IO;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;

public class ButtomWebScript : MonoBehaviour
{
    public static Text DbgText;
    static bool LoadDemoLevel = false;

    static TextAsset m_DemoData;
    //public ThirdPersonCam m_Camera = null;
    //public TextMesh m_Text3D = null;
    public Material m_SharedMaterial;
    static Level m_Level = null;
    static string m_LevelName = "Level";
    public static byte[] m_RawFileData = null;
    WWW m_www = null;

    //used in editor only
    static string m_SharedTexturePath = "/Level Texture/";
    static string m_SharedMaterialPath = "/Resources/room_material.mat";
    static string m_LastBrowsedPathForLevel = "";
    // Use this for initialization




    void Start()
    {
     DbgText = FindObjectOfType<Text>();
        DbgText.text = "Debug Info";
    }

#if UNITY_EDITOR
    [MenuItem("TR2 Editor/Create Level")]
    public static void Create()
    {
        //procedure to store last browsed path
        string path = PlayerPrefs.GetString("last_browsed_path", "");
        if (path == "")
        {
            path = EditorUtility.OpenFilePanel("Open Tomb Raider II Level File (*.TR2)", Application.dataPath, "*.tr2; *.TR2");
        }
        else
        {
            path = EditorUtility.OpenFilePanel("Open Tomb Raider II Level File (*.TR2)", path, "*.tr2; *.TR2");
        }
        PlayerPrefs.SetString("last_browsed_path", Path.GetDirectoryName(path));

        if (path != null)
        {
            Settings.LevelFileLocalPath = path;
            Parser.Tr2Level leveldata = LoadLevelFromFile(Settings.LevelFileLocalPath);
            if (leveldata != null)
            {
                leveldata.Camera = null;
                leveldata.Text3DPrefav = null;

                // generate shared texture
                Texture2D shared_texture = TextureUV.GenerateTextureTile(leveldata);
                if (!Directory.Exists(Application.dataPath + m_SharedTexturePath))
                {
                    Directory.CreateDirectory(Application.dataPath + m_SharedTexturePath);
                }
                //if(!File.Exists(Application.dataPath + "/Level Texture/" + Level.m_LevelName + ".png"))
                //File.WriteAllBytes(Application.dataPath + m_SharedTexturePath + Level.m_LevelName + ".png",shared_texture.EncodeToPNG());
                FileStream fstream = File.Open(Application.dataPath + m_SharedTexturePath + m_LevelName + ".png", FileMode.OpenOrCreate, FileAccess.ReadWrite);
                BinaryWriter bw = new BinaryWriter(fstream);
                bw.Write(shared_texture.EncodeToPNG());
                bw.Close();

                //load shared texture
                //Refresh assete database for newly created texture
                AssetDatabase.Refresh();

                TextureImporter teximp = TextureImporter.GetAtPath("Assets" + m_SharedTexturePath + m_LevelName + ".png") as TextureImporter;
                if (teximp == null)
                {
                    EditorUtility.DisplayDialog("Error", "Assets" + m_SharedTexturePath + m_LevelName + ".png" + " is not found in Assets ", "OK");
                    return;
                }
                else
                {
#if (UNITY_5_3_OR_NEWER || UNITY_5_3)
                    teximp.alphaSource = TextureImporterAlphaSource.FromInput;
                    teximp.filterMode = FilterMode.Bilinear;
                    teximp.wrapMode = TextureWrapMode.Clamp;
                    //teximp.sRGBTexture = true; 
                    teximp.textureType = TextureImporterType.Default;
                    teximp.maxTextureSize = 4096;
                    teximp.mipmapEnabled = false;
                    teximp.textureCompression = TextureImporterCompression.Uncompressed;
#else
					teximp.filterMode = FilterMode.Bilinear;
            		teximp.grayscaleToAlpha = false;
            		teximp.textureFormat = TextureImporterFormat.ARGB32;
            		teximp.wrapMode = TextureWrapMode.Clamp;
					teximp.maxTextureSize = 4096;
					teximp.mipmapEnabled = false;
#endif

                }

                //refresh assets to apply changes 
                AssetDatabase.Refresh();
                //reimport is need after import setting modification
                AssetDatabase.ImportAsset("Assets" + m_SharedTexturePath + m_LevelName + ".png");

                //load shared material
                Material shared_material = (Material)AssetDatabase.LoadAssetAtPath("Assets" + m_SharedMaterialPath, typeof(Material));

                if (shared_material == null)
                {
                    EditorUtility.DisplayDialog("Error", "Assets" + m_SharedMaterialPath + " is not found in Assets ", "OK");
                    return;
                }

                shared_material.mainTexture = (Texture)AssetDatabase.LoadAssetAtPath("Assets" + m_SharedTexturePath + m_LevelName + ".png", typeof(Texture));
                m_Level = BuildLevel(leveldata, shared_material, m_LevelName);
            }
        }
    }
#endif


    void MainMenuControls(bool LoadLevelFileFromUrl)
    {
        string info = "";
        if (!LoadLevelFileFromUrl) //Load level from local data file
        {
            LoadLevel();
        }
        else                         //We have to download data from url
        {
            if (m_RawFileData != null) //We have downloaded data!
            {
                LoadLevelFromUrl(m_RawFileData);
            }
            else                    //download data
            {
                info = "Init load level from url: " + Settings.LevelFileUrl;
                Debug.Log(info);
                DbgText.text = info;
                m_LevelName = Path.GetFileNameWithoutExtension(Settings.LevelFileUrl);
                m_www = new WWW(Settings.LevelFileUrl);
            }
        }
    }

    void LoadLevel()
    {
        string info = "";
        Parser.Tr2Level leveldata = LoadLevelFromFile(Settings.LevelFileLocalPath);
        if (leveldata != null)
        {
            //leveldata.Camera = m_Camera;
            //leveldata.Text3DPrefav = m_Text3D;
            if (m_SharedMaterial != null)
            {
                info = "Building level ";
                DbgText.text = info;
                m_SharedMaterial.mainTexture = TextureUV.GenerateTextureTile(leveldata);
                m_Level = BuildLevel(leveldata, m_SharedMaterial, m_LevelName);
            }
            else
            {
#if UNITY_EDITOR
                info = "Error - m_SharedMaterial is not set in GameObject: " + this.name;
                DbgText.text = info;
                EditorUtility.DisplayDialog("Error", "m_SharedMaterial is not set in GameObject:" + this.name, "OK");
#else
                Debug.LogError("m_SharedMaterial is not set in GameObject" + this.name);
#endif
            }

        }
        else
        {
            info = "loading browsewr level - Selected file is not tr2 type!";
            DbgText.text = info;
            //Selected file is not tr2 type! 
            Application.LoadLevel("Browser");
        }
    }

    static Parser.Tr2Level LoadLevelFromFile(string path)
    {
        string info = "";
        Parser.Tr2Level leveldata = null;
        if (path != null)
        {
#if UNITY_WEBPLAYER
				if(Settings.LoadDemoLevel)
				{
					m_DemoData = (TextAsset)Resources.Load("Demo Level", typeof(TextAsset));
					m_RawFileData = m_DemoData.bytes;
					leveldata = Parser.Parse(m_RawFileData);
					Level.m_LevelName = Path.GetFileNameWithoutExtension(path);
				}
#else
            if (LoadDemoLevel)
            {
                info = "loading Demo Level";
                DbgText.text = info;
                m_DemoData = (TextAsset)Resources.Load("Demo Level", typeof(TextAsset));
                m_RawFileData = m_DemoData.bytes;
            }
            else
            {
                info = "loading Level from: "+path;
                DbgText.text = info;

                FileStream fstream = File.Open(path, FileMode.Open, FileAccess.ReadWrite);
                BinaryReader br = new BinaryReader(fstream);
                m_RawFileData = br.ReadBytes((int)fstream.Length); //File.ReadAllBytes(path); //fixed file read access violation
                br.Close();
            }

            leveldata = Parser.Parse(m_RawFileData);
            m_LevelName = Path.GetFileNameWithoutExtension(path);
            Debug.Log("LoadLevelFromFile: " + m_LevelName);
#endif

        }
        return leveldata;
    }

    void LoadLevelFromUrl(byte[] data)
    {
        string info = "";
        if (data == null)
        {
            info = "game data is invalid!";
            DbgText.text = info;
            return;
        }
        info = "Parsing game data";
        DbgText.text = info;
        Parser.Tr2Level leveldata = Parser.Parse(data);
        if (leveldata != null)
        {
            //leveldata.Camera = m_Camera;
            //leveldata.Text3DPrefav = m_Text3D;
            if (m_SharedMaterial != null)
            {
                info = "Building Level data...";
                DbgText.text = info;

                m_SharedMaterial.mainTexture = TextureUV.GenerateTextureTile(leveldata);
                m_Level = BuildLevel(leveldata, m_SharedMaterial, m_LevelName);
            }
            else
            {

#if UNITY_EDITOR
                EditorUtility.DisplayDialog("Error", "m_SharedMaterial is not set in GameObject: " + this.name, "OK");
                info = "Error- m_SharedMaterial is not set in GameObject: " + this.name;
                DbgText.text = info;
#else
                Debug.LogError("m_SharedMaterial is not set in GameObject" + this.name);
#endif

            }

        }
        else 
        {
            info = "Level data is invalid";
            DbgText.text = info;
        }
    }

    // Update is called once per frame
    void Update()
    {
        string info = "";
        // show status of data download
        if (m_www != null && m_RawFileData == null)
        {
            info = "downloading data from web";
            DbgText.text = info;
            if (m_www.isDone && m_www.error == null)
            {
                info = "about to load downloaded data from web";
                DbgText.text = info;
                LoadLevelFromUrl(m_RawFileData);
                m_www = null;
            }
        }
    }

    public static Level BuildLevel(Parser.Tr2Level leveldata, Material sharedmaterial, string levelname)
    {
        string info = "";
        GameObject m_LevelRoot = new GameObject("Level " + levelname);
        info = "Building level: "+ "Level " + levelname;
        DbgText.text = info;
        Debug.LogError(info);

        SoundMananger sound_manager = null;
        if (Camera.main != null)
        {
            sound_manager = Camera.main.gameObject.AddComponent<SoundMananger>();
        }
        else
        {
            sound_manager = m_LevelRoot.AddComponent<SoundMananger>();
            info = "Error No Camera Found!";
            DbgText.text = info;
            Debug.LogError(info);

        }

        //creat level
        Level level = new Level(leveldata, sharedmaterial, m_LevelRoot.transform);
        if (leveldata == null)
        {
            info = " leveldata not initialized!";
            DbgText.text = info;
            Debug.LogError(info);
            return null;
        }

        //creat level manager

        LevelManager manager = m_LevelRoot.AddComponent<LevelManager>();
        manager.SharedMaterial = level.GetSharedMaterial();
        manager.InstancedMaterialWaterHolders = level.GetInstancedWaterHolderMaterials();
        manager.SharedMaterialWater = level.GetSharedWaterMaterial();
        manager.SetPlayer(Level.m_Player.GetComponent<Player>());
        manager.SetFollowCamera(Camera.main.transform);
        manager.SetSoundManager(sound_manager);

        info = "level loaded";
        DbgText.text = info;
        Debug.LogError(info);

        return level;
    }

  

    public void DoClickDemo() 
    {
        LoadDemoLevel = true;
        Debug.Log("DoClickDemo");
        MainMenuControls(false);
    }
    public void DoClickFile() 
    {
        LoadDemoLevel = false;
        Debug.Log("DoClickFile");
        MainMenuControls(false);
    }
    public void DoClickWeb()
    {
        Debug.Log("DoClickWeb");
        MainMenuControls(true);
    }
}
