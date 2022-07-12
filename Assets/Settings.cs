using UnityEngine;
using System.Collections;

public class Settings  {
	
	public static bool ShowObjectID = false; 		// Marks all movable tr2 object with ID in scene
	// These IDs are useful for detecting
	// individual tr2 movable item.
	
	public static bool ForceOpenAllDoors = true;    //Force open all doors in level
	public static bool ForceDisableAllBoulder = false;  //Force disable all boulder in level
	
	public static bool EnableIndoorShadow = false; 	//If enabled indoor objects will cast shadow
	public static bool PlatformUnityPro = true;   	//If enabled Unity Pro features will be used,
													//texture transparancy will be eabled.
													//Otherwise Unity Free features will be used.
													//If you dont have unity pro set it to false
	
	public static float DayNightTimeSpeed = 0.1f;   //Must be >=0
													//When 0 Day Night changes will not happen
	public static float DayLightIntensity = 0.65f;  	//Controls amount of day light
	
	public static bool LoadLevelFileFromUrl = false; //If enabled system will load level from url
													 //specified by LevelFileUrl. Url could be either
													 //file: url or http:
													 //otherwise system will load level from
													 //LevelFileLocalPath
	/*												
	00-Laras-Home.TR2
	01-Great-Wall.TR2
	02-Venice.TR2
	03-Bartolis-Hideout.TR2
	04-Opera-House.TR2
	05-Offshore-Rig.TR2
	06-Diving-Area.TR2
	07-40-Fathoms.TR2
	08-Wreck-of-the-Maria-Doria.TR2
	09-Living-Quarters.TR2
	10-The-Deck.TR2
	11-Tibetan-Foothills.TR2
	12-Barkhang-Monastery.TR2
	13-Catacombs-of-the-Talion.TR2
	14-Ice-Palace.TR2
	15-Temple-of-Xian.tr2
	16-Floating-Islands.TR2
	17-The-Dragons-Lair.TR2
	18-Home-Sweet-Home.TR2
	"https://raw.githubusercontent.com/andrewsyc/Tomb-Raider-1-2-3-4-5-Map-viewer-and-levels/master/Tomb-Raider-2/"
	*/
	public static string LevelFileUrl = "https://raw.githubusercontent.com/andrewsyc/Tomb-Raider-1-2-3-4-5-Map-viewer-and-levels/master/Tomb-Raider-2/01-Great-Wall.TR2"; 
	public static string LevelFileLocalPath = "Custom Demo Files/HILTOP.TR2";  
													//LevelFileLocalPath is default file path 
													//that system tries lo load if
													//if not specified otherwise
	public static string DefaultTR2FileExtension = "TR2";
													//This is default Tomb Raider 2 file extension
													//that file browser will look up.
	public static bool LoadDemoLevel = false;
    public static float SceneScaling = 0.0009765625f; //Scaling support for GI and Physics in Unity 5 and higher


	public static bool bUseFirstPersonCamera = true; // Set it true for first person VR view, otherwise set it false for third person view.
}
