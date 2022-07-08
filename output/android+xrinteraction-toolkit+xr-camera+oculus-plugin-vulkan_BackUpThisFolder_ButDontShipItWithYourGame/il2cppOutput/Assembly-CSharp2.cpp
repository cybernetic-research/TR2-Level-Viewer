#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85;
// KeyMap[]
struct KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F;
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
// Tr2Moveable[]
struct Tr2MoveableU5BU5D_tA0F03A7632A6712C9835BE64FF895B7B31072B83;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Parser/Tr2AnimCommand[]
struct Tr2AnimCommandU5BU5D_tA6858890875F9544482390FB501860EB47D05C7D;
// Parser/Tr2AnimDispatch[]
struct Tr2AnimDispatchU5BU5D_tB39F740A60F7EB81551970F27E562595036053CA;
// Parser/Tr2Animation[]
struct Tr2AnimationU5BU5D_t2FE3A62C42513B651E061CF22844E2299A43065A;
// Parser/Tr2BBox[]
struct Tr2BBoxU5BU5D_t64F981C057763511E0FA8B853DD474112583BC39;
// Parser/Tr2Camera[]
struct Tr2CameraU5BU5D_tE8399011281A977F13EF62011E44199E2301D5C3;
// Parser/Tr2CinematicFrame[]
struct Tr2CinematicFrameU5BU5D_tD6E3A9E23776499E1B657BFF1DFBFF3F017A0D27;
// Parser/Tr2Colour[]
struct Tr2ColourU5BU5D_t119EFD2B7198EF25368DC9930D22F459AF0E1CAC;
// Parser/Tr2Item[]
struct Tr2ItemU5BU5D_t3B27E17E840F0488791BFD0E2D27FA870ADCA708;
// Parser/Tr2Mesh[]
struct Tr2MeshU5BU5D_tAF13FD5AD9FA22942C2435CD076CBBBB493B8075;
// Parser/Tr2ObjectTexture[]
struct Tr2ObjectTextureU5BU5D_tBD9A38FA40706121765DDA793D01F80FE3F75F21;
// Parser/Tr2ObjectTextureVertex[]
struct Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8;
// Parser/Tr2Room[]
struct Tr2RoomU5BU5D_tA6D2EF5DE33ADCCA496B0AB5C3EC0AAAE42991A5;
// Parser/Tr2SoundDetails[]
struct Tr2SoundDetailsU5BU5D_t0A9AB54B79A4E309EF5D986E6E9CE680EDE975DD;
// Parser/Tr2SoundSource[]
struct Tr2SoundSourceU5BU5D_tFCEF7FEBACF212ADD18B383829FEC015E9E0873B;
// Parser/Tr2SpriteSequence[]
struct Tr2SpriteSequenceU5BU5D_tC669034B9DCAA35F94716C03AFA4CCDE476710D6;
// Parser/Tr2SpriteTexture[]
struct Tr2SpriteTextureU5BU5D_t7D20D1329D98A2328EFA15506134BBC98A82A5FD;
// Parser/Tr2StateChange[]
struct Tr2StateChangeU5BU5D_t62B21A81DD4B5D99C4CE893BDDB9C43E1F290AFA;
// Parser/Tr2StaticMesh[]
struct Tr2StaticMeshU5BU5D_t2EAAA3B65429CCF4E2BB73741686D844BF42D086;
// Parser/Tr2Textile16[]
struct Tr2Textile16U5BU5D_t9BC6E5F22234194ACD7B831A501FD13C69B1344F;
// Parser/Tr2Textile8[]
struct Tr2Textile8U5BU5D_tF9258075F9E9DA0534B93B74AAD13179C8B3E69B;
// Parser/TrExObjectTexture[]
struct TrExObjectTextureU5BU5D_tF4C1AB197D8E5A07A6082C05839E64B8AB5F86EE;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// AnimationTester
struct AnimationTester_t6BB7961DB199510B2316E60E19F8224EA0D72228;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ComputionModel
struct ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EditView
struct EditView_t08A45B6D5A42A13A3F94A9D26D6FED8A59E227CE;
// GoToDelegate
struct GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// KeyDownDelegate
struct KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63;
// KeyIdleDelegate
struct KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D;
// KeyMap
struct KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300;
// KeyMapper
struct KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Mouse
struct Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342;
// MouseMoveDelegate
struct MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// RaycastTest
struct RaycastTest_t2E5618DB487E1BE01E335CA36F67F9C8B47E9D44;
// Settings
struct Settings_t238E6F7D65D376985A1E92357A35537B90034B36;
// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TextureUV
struct TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3;
// ThirdPersonCam
struct ThirdPersonCam_t1596FEF7D95677995D2D8FB2950A63BC8749BA27;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// ViewPort
struct ViewPort_tBBE91202A232248D83079DE77DEA8C69BD4EF27D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Zip
struct Zip_t52BFB71E575125BEA84BBC235406418E20171865;
// Parser/Tr2Level
struct Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E;
// Parser/Tr2ObjectTexture
struct Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE;
// Parser/Tr2ObjectTextureVertex
struct Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D;
// Parser/Tr2Textile16
struct Tr2Textile16_t4DB14A650BD9C53DF6B0FB9AF1BD287858CC1ECB;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____1AD91C8504E7A1B22715C230487A276639D32332B1BF4A398496B0F4230EF48E_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral076E7F8F357BA42B4963F3123591140A909A8ABA;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1A2D1D4CC384A8AE89CB2C5B2DF27053E1F8B626;
IL2CPP_EXTERN_C String_t* _stringLiteral272A36C20C0554EF8120339F2A57BD3AC8B959A2;
IL2CPP_EXTERN_C String_t* _stringLiteral40C110D5081E326AF8BD47C108DCBD481AA3C97C;
IL2CPP_EXTERN_C String_t* _stringLiteral4868CA805F7BEDCBB5BAF567B2A80BF339CBBB3F;
IL2CPP_EXTERN_C String_t* _stringLiteral5CADE76EA82F94CCA916F608C467D6DC482AFC44;
IL2CPP_EXTERN_C String_t* _stringLiteral8238C136585C21BEEC7D80EC3D92177C0C04F99F;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral919B2CB3DE1A27948FE44FF039B56B34D67EC4AE;
IL2CPP_EXTERN_C String_t* _stringLiteralB3D7A586C2F8992E47FE5D0417BAF0FFBA4BAF9A;
IL2CPP_EXTERN_C String_t* _stringLiteralD6C8D70287ED4A45381206005181E0923043AA20;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAD78EC6222045FCEBFA1DA487D439D864686BD6;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85;
struct KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F;
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Tr2ObjectTextureU5BU5D_tBD9A38FA40706121765DDA793D01F80FE3F75F21;
struct Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8;
struct Tr2Textile16U5BU5D_t9BC6E5F22234194ACD7B831A501FD13C69B1344F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// ComputionModel
struct ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC  : public RuntimeObject
{
};

struct ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields
{
	// System.Int32[] ComputionModel::STACK
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___STACK_0;
	// System.Int32 ComputionModel::SP
	int32_t ___SP_1;
};

// KeyMap
struct KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300  : public RuntimeObject
{
	// function KeyMap::func
	int32_t ___func_0;
	// UnityEngine.KeyCode KeyMap::key
	int32_t ___key_1;
	// System.Int32 KeyMap::InterfaceCode
	int32_t ___InterfaceCode_2;
};

// Settings
struct Settings_t238E6F7D65D376985A1E92357A35537B90034B36  : public RuntimeObject
{
};

struct Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields
{
	// System.Boolean Settings::ShowObjectID
	bool ___ShowObjectID_0;
	// System.Boolean Settings::ForceOpenAllDoors
	bool ___ForceOpenAllDoors_1;
	// System.Boolean Settings::ForceDisableAllBoulder
	bool ___ForceDisableAllBoulder_2;
	// System.Boolean Settings::EnableIndoorShadow
	bool ___EnableIndoorShadow_3;
	// System.Boolean Settings::PlatformUnityPro
	bool ___PlatformUnityPro_4;
	// System.Single Settings::DayNightTimeSpeed
	float ___DayNightTimeSpeed_5;
	// System.Single Settings::DayLightIntensity
	float ___DayLightIntensity_6;
	// System.Boolean Settings::LoadLevelFileFromUrl
	bool ___LoadLevelFileFromUrl_7;
	// System.String Settings::LevelFileUrl
	String_t* ___LevelFileUrl_8;
	// System.String Settings::LevelFileLocalPath
	String_t* ___LevelFileLocalPath_9;
	// System.String Settings::DefaultTR2FileExtension
	String_t* ___DefaultTR2FileExtension_10;
	// System.Boolean Settings::LoadDemoLevel
	bool ___LoadDemoLevel_11;
	// System.Single Settings::SceneScaling
	float ___SceneScaling_12;
	// System.Boolean Settings::bUseFirstPersonCamera
	bool ___bUseFirstPersonCamera_13;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// TextureUV
struct TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3  : public RuntimeObject
{
};

struct TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields
{
	// UnityEngine.Rect[] TextureUV::uvRects
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___uvRects_0;
	// System.Single TextureUV::cmult
	float ___cmult_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Zip
struct Zip_t52BFB71E575125BEA84BBC235406418E20171865  : public RuntimeObject
{
};

// Parser/Tr2Level
struct Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E  : public RuntimeObject
{
	// System.Byte[] Parser/Tr2Level::FileName
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FileName_0;
	// System.UInt32 Parser/Tr2Level::Version
	uint32_t ___Version_1;
	// Parser/TR2VersionType Parser/Tr2Level::EngineVersion
	int32_t ___EngineVersion_2;
	// Parser/Tr2Colour[] Parser/Tr2Level::Palette8
	Tr2ColourU5BU5D_t119EFD2B7198EF25368DC9930D22F459AF0E1CAC* ___Palette8_3;
	// System.UInt32[] Parser/Tr2Level::Palette16
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Palette16_4;
	// System.UInt32 Parser/Tr2Level::NumTextiles
	uint32_t ___NumTextiles_5;
	// Parser/Tr2Textile8[] Parser/Tr2Level::Textile8
	Tr2Textile8U5BU5D_tF9258075F9E9DA0534B93B74AAD13179C8B3E69B* ___Textile8_6;
	// Parser/Tr2Textile16[] Parser/Tr2Level::Textile16
	Tr2Textile16U5BU5D_t9BC6E5F22234194ACD7B831A501FD13C69B1344F* ___Textile16_7;
	// System.UInt32 Parser/Tr2Level::UnknownT
	uint32_t ___UnknownT_8;
	// System.UInt16 Parser/Tr2Level::NumRooms
	uint16_t ___NumRooms_9;
	// Parser/Tr2Room[] Parser/Tr2Level::Rooms
	Tr2RoomU5BU5D_tA6D2EF5DE33ADCCA496B0AB5C3EC0AAAE42991A5* ___Rooms_10;
	// System.UInt32 Parser/Tr2Level::NumFloorData
	uint32_t ___NumFloorData_11;
	// System.UInt16[] Parser/Tr2Level::FloorData
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___FloorData_12;
	// System.Int32 Parser/Tr2Level::NumMeshes
	int32_t ___NumMeshes_13;
	// Parser/Tr2Mesh[] Parser/Tr2Level::Meshes
	Tr2MeshU5BU5D_tAF13FD5AD9FA22942C2435CD076CBBBB493B8075* ___Meshes_14;
	// System.UInt32 Parser/Tr2Level::NumAnimations
	uint32_t ___NumAnimations_15;
	// Parser/Tr2Animation[] Parser/Tr2Level::Animations
	Tr2AnimationU5BU5D_t2FE3A62C42513B651E061CF22844E2299A43065A* ___Animations_16;
	// System.UInt32 Parser/Tr2Level::NumStateChanges
	uint32_t ___NumStateChanges_17;
	// Parser/Tr2StateChange[] Parser/Tr2Level::StateChanges
	Tr2StateChangeU5BU5D_t62B21A81DD4B5D99C4CE893BDDB9C43E1F290AFA* ___StateChanges_18;
	// System.UInt32 Parser/Tr2Level::NumAnimDispatches
	uint32_t ___NumAnimDispatches_19;
	// Parser/Tr2AnimDispatch[] Parser/Tr2Level::AnimDispatches
	Tr2AnimDispatchU5BU5D_tB39F740A60F7EB81551970F27E562595036053CA* ___AnimDispatches_20;
	// System.UInt32 Parser/Tr2Level::NumAnimCommands
	uint32_t ___NumAnimCommands_21;
	// Parser/Tr2AnimCommand[] Parser/Tr2Level::AnimCommands
	Tr2AnimCommandU5BU5D_tA6858890875F9544482390FB501860EB47D05C7D* ___AnimCommands_22;
	// System.UInt32 Parser/Tr2Level::NumMeshTrees
	uint32_t ___NumMeshTrees_23;
	// System.Int32[] Parser/Tr2Level::MeshTrees
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MeshTrees_24;
	// System.UInt32 Parser/Tr2Level::NumFrames
	uint32_t ___NumFrames_25;
	// System.UInt16[] Parser/Tr2Level::Frames
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___Frames_26;
	// System.UInt32 Parser/Tr2Level::NumMoveables
	uint32_t ___NumMoveables_27;
	// Tr2Moveable[] Parser/Tr2Level::Moveables
	Tr2MoveableU5BU5D_tA0F03A7632A6712C9835BE64FF895B7B31072B83* ___Moveables_28;
	// System.UInt32 Parser/Tr2Level::NumStaticMeshes
	uint32_t ___NumStaticMeshes_29;
	// Parser/Tr2StaticMesh[] Parser/Tr2Level::StaticMeshes
	Tr2StaticMeshU5BU5D_t2EAAA3B65429CCF4E2BB73741686D844BF42D086* ___StaticMeshes_30;
	// System.UInt32 Parser/Tr2Level::NumObjectTextures
	uint32_t ___NumObjectTextures_31;
	// Parser/Tr2ObjectTexture[] Parser/Tr2Level::ObjectTextures
	Tr2ObjectTextureU5BU5D_tBD9A38FA40706121765DDA793D01F80FE3F75F21* ___ObjectTextures_32;
	// Parser/TrExObjectTexture[] Parser/Tr2Level::ObjectTexturesTR4
	TrExObjectTextureU5BU5D_tF4C1AB197D8E5A07A6082C05839E64B8AB5F86EE* ___ObjectTexturesTR4_33;
	// System.UInt32 Parser/Tr2Level::NumspriteTextures
	uint32_t ___NumspriteTextures_34;
	// Parser/Tr2SpriteTexture[] Parser/Tr2Level::SpriteTextures
	Tr2SpriteTextureU5BU5D_t7D20D1329D98A2328EFA15506134BBC98A82A5FD* ___SpriteTextures_35;
	// System.UInt32 Parser/Tr2Level::NumSpriteSequences
	uint32_t ___NumSpriteSequences_36;
	// Parser/Tr2SpriteSequence[] Parser/Tr2Level::SpriteSequences
	Tr2SpriteSequenceU5BU5D_tC669034B9DCAA35F94716C03AFA4CCDE476710D6* ___SpriteSequences_37;
	// System.Int32 Parser/Tr2Level::NumCameras
	int32_t ___NumCameras_38;
	// Parser/Tr2Camera[] Parser/Tr2Level::Cameras
	Tr2CameraU5BU5D_tE8399011281A977F13EF62011E44199E2301D5C3* ___Cameras_39;
	// System.Int32 Parser/Tr2Level::NumsoundSources
	int32_t ___NumsoundSources_40;
	// Parser/Tr2SoundSource[] Parser/Tr2Level::SoundSources
	Tr2SoundSourceU5BU5D_tFCEF7FEBACF212ADD18B383829FEC015E9E0873B* ___SoundSources_41;
	// System.Int32 Parser/Tr2Level::NumBoxes
	int32_t ___NumBoxes_42;
	// Parser/Tr2BBox[] Parser/Tr2Level::Boxes
	Tr2BBoxU5BU5D_t64F981C057763511E0FA8B853DD474112583BC39* ___Boxes_43;
	// System.Int32 Parser/Tr2Level::NumOverlaps
	int32_t ___NumOverlaps_44;
	// System.Int16[] Parser/Tr2Level::Overlaps
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Overlaps_45;
	// System.Int16[] Parser/Tr2Level::Zones
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Zones_46;
	// System.Int32 Parser/Tr2Level::NumAnimatedTextures
	int32_t ___NumAnimatedTextures_47;
	// System.Int16[] Parser/Tr2Level::AnimatedTextures
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___AnimatedTextures_48;
	// System.Int32 Parser/Tr2Level::NumItems
	int32_t ___NumItems_49;
	// Parser/Tr2Item[] Parser/Tr2Level::Items
	Tr2ItemU5BU5D_t3B27E17E840F0488791BFD0E2D27FA870ADCA708* ___Items_50;
	// System.Byte[] Parser/Tr2Level::LightMap
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___LightMap_51;
	// System.UInt16 Parser/Tr2Level::NumCinematicFrames
	uint16_t ___NumCinematicFrames_52;
	// Parser/Tr2CinematicFrame[] Parser/Tr2Level::CinematicFrames
	Tr2CinematicFrameU5BU5D_tD6E3A9E23776499E1B657BFF1DFBFF3F017A0D27* ___CinematicFrames_53;
	// System.Int16 Parser/Tr2Level::NumDemoData
	int16_t ___NumDemoData_54;
	// System.Byte[] Parser/Tr2Level::DemoData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DemoData_55;
	// System.Int16[] Parser/Tr2Level::SoundMap
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___SoundMap_56;
	// System.Int32 Parser/Tr2Level::NumsoundDetails
	int32_t ___NumsoundDetails_57;
	// Parser/Tr2SoundDetails[] Parser/Tr2Level::SoundDetails
	Tr2SoundDetailsU5BU5D_t0A9AB54B79A4E309EF5D986E6E9CE680EDE975DD* ___SoundDetails_58;
	// System.Int32 Parser/Tr2Level::NumsampleIndices
	int32_t ___NumsampleIndices_59;
	// System.Int32[] Parser/Tr2Level::SampleIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___SampleIndices_60;
	// System.UInt32 Parser/Tr2Level::NumMeshPointers
	uint32_t ___NumMeshPointers_61;
	// System.UInt32[] Parser/Tr2Level::MeshPointerList
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___MeshPointerList_62;
	// System.Int32 Parser/Tr2Level::m_TexWidth
	int32_t ___m_TexWidth_63;
	// System.Int32 Parser/Tr2Level::m_TexHeight
	int32_t ___m_TexHeight_64;
	// System.Int32 Parser/Tr2Level::m_MaxHeight
	int32_t ___m_MaxHeight_65;
	// System.Int32 Parser/Tr2Level::m_MaxWidth
	int32_t ___m_MaxWidth_66;
	// System.Int32 Parser/Tr2Level::m_MaxTiles
	int32_t ___m_MaxTiles_67;
	// ThirdPersonCam Parser/Tr2Level::Camera
	ThirdPersonCam_t1596FEF7D95677995D2D8FB2950A63BC8749BA27* ___Camera_68;
	// UnityEngine.TextMesh Parser/Tr2Level::Text3DPrefav
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___Text3DPrefav_69;
};

// Parser/Tr2ObjectTexture
struct Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE  : public RuntimeObject
{
	// System.UInt16 Parser/Tr2ObjectTexture::TransparencyFlags
	uint16_t ___TransparencyFlags_0;
	// System.UInt16 Parser/Tr2ObjectTexture::Tile
	uint16_t ___Tile_1;
	// Parser/Tr2ObjectTextureVertex[] Parser/Tr2ObjectTexture::Vertices
	Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* ___Vertices_2;
};

// Parser/Tr2ObjectTextureVertex
struct Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D  : public RuntimeObject
{
	// System.Byte Parser/Tr2ObjectTextureVertex::Xcoordinate
	uint8_t ___Xcoordinate_0;
	// System.Byte Parser/Tr2ObjectTextureVertex::Xpixel
	uint8_t ___Xpixel_1;
	// System.Byte Parser/Tr2ObjectTextureVertex::Ycoordinate
	uint8_t ___Ycoordinate_2;
	// System.Byte Parser/Tr2ObjectTextureVertex::Ypixel
	uint8_t ___Ypixel_3;
};

// Parser/Tr2Textile16
struct Tr2Textile16_t4DB14A650BD9C53DF6B0FB9AF1BD287858CC1ECB  : public RuntimeObject
{
	// System.UInt16[] Parser/Tr2Textile16::Tile
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___Tile_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3__padding[40];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::1AD91C8504E7A1B22715C230487A276639D32332B1BF4A398496B0F4230EF48E
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___1AD91C8504E7A1B22715C230487A276639D32332B1BF4A398496B0F4230EF48E_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GoToDelegate
struct GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60  : public MulticastDelegate_t
{
};

// KeyDownDelegate
struct KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63  : public MulticastDelegate_t
{
};

// KeyIdleDelegate
struct KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D  : public MulticastDelegate_t
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// MouseMoveDelegate
struct MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8  : public MulticastDelegate_t
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AnimationTester
struct AnimationTester_t6BB7961DB199510B2316E60E19F8224EA0D72228  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animation AnimationTester::anim
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___anim_4;
	// System.Int32 AnimationTester::id
	int32_t ___id_5;
};

// EditView
struct EditView_t08A45B6D5A42A13A3F94A9D26D6FED8A59E227CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// KeyMapper
struct KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 KeyMapper::keypadmovement
	int32_t ___keypadmovement_40;
	// System.Int32 KeyMapper::keypadaction
	int32_t ___keypadaction_41;
	// System.Int32 KeyMapper::dpad
	int32_t ___dpad_42;
	// System.Int32 KeyMapper::statecode
	int32_t ___statecode_43;
	// System.Int32 KeyMapper::keyshift
	int32_t ___keyshift_44;
	// System.Int32 KeyMapper::keycount
	int32_t ___keycount_45;
	// System.Int32 KeyMapper::clickcount
	int32_t ___clickcount_47;
};

struct KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields
{
	// UnityEngine.KeyCode[] KeyMapper::defaultkeycodes
	KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* ___defaultkeycodes_4;
	// KeyMap[] KeyMapper::Keys
	KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F* ___Keys_5;
	// KeyDownDelegate KeyMapper::OnKeyDown
	KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* ___OnKeyDown_6;
	// KeyIdleDelegate KeyMapper::OnKeyIdle
	KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* ___OnKeyIdle_7;
	// GoToDelegate KeyMapper::OnGoTo
	GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* ___OnGoTo_8;
	// System.Boolean KeyMapper::usedefaultmap
	bool ___usedefaultmap_9;
	// System.Boolean KeyMapper::reset
	bool ___reset_10;
	// System.Int32 KeyMapper::PrimaryAction
	int32_t ___PrimaryAction_11;
	// System.Int32 KeyMapper::Search
	int32_t ___Search_12;
	// System.Int32 KeyMapper::Menu
	int32_t ___Menu_13;
	// System.Int32 KeyMapper::DrawWeapon
	int32_t ___DrawWeapon_14;
	// System.Int32 KeyMapper::PickupFlare
	int32_t ___PickupFlare_15;
	// System.Int32 KeyMapper::Roll
	int32_t ___Roll_16;
	// System.Int32 KeyMapper::StepToLeft
	int32_t ___StepToLeft_17;
	// System.Int32 KeyMapper::StepToRight
	int32_t ___StepToRight_18;
	// System.Int32 KeyMapper::Walk
	int32_t ___Walk_19;
	// System.Int32 KeyMapper::Jump
	int32_t ___Jump_20;
	// System.Int32 KeyMapper::Idle
	int32_t ___Idle_21;
	// System.Int32 KeyMapper::Run
	int32_t ___Run_22;
	// System.Int32 KeyMapper::Down
	int32_t ___Down_23;
	// System.Int32 KeyMapper::Left
	int32_t ___Left_24;
	// System.Int32 KeyMapper::Right
	int32_t ___Right_25;
	// System.Int32 KeyMapper::JumpAir
	int32_t ___JumpAir_26;
	// System.Int32 KeyMapper::JumpAirStanding
	int32_t ___JumpAirStanding_27;
	// System.Int32 KeyMapper::jumpBack
	int32_t ___jumpBack_28;
	// System.Int32 KeyMapper::FlipBack
	int32_t ___FlipBack_29;
	// System.Int32 KeyMapper::JumpRight
	int32_t ___JumpRight_30;
	// System.Int32 KeyMapper::JumpLeft
	int32_t ___JumpLeft_31;
	// System.Int32 KeyMapper::Grab
	int32_t ___Grab_32;
	// System.Int32 KeyMapper::PullUpLow
	int32_t ___PullUpLow_33;
	// System.Int32 KeyMapper::PullUpHigh
	int32_t ___PullUpHigh_34;
	// System.Int32 KeyMapper::PullUpAcrobatic
	int32_t ___PullUpAcrobatic_35;
	// System.Int32 KeyMapper::WalkUp
	int32_t ___WalkUp_36;
	// System.Int32 KeyMapper::FreeFall
	int32_t ___FreeFall_37;
	// System.Int32 KeyMapper::DiveIntoWater
	int32_t ___DiveIntoWater_38;
	// System.Int32 KeyMapper::DiveInAir
	int32_t ___DiveInAir_39;
	// System.Boolean KeyMapper::active
	bool ___active_46;
};

// Mouse
struct Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields
{
	// UnityEngine.Vector2 Mouse::mousepos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mousepos_4;
	// UnityEngine.Vector2 Mouse::prevmousepos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___prevmousepos_5;
	// System.Boolean Mouse::initmouse
	bool ___initmouse_6;
	// MouseMoveDelegate Mouse::m_OnMouseMove
	MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* ___m_OnMouseMove_7;
};

// RaycastTest
struct RaycastTest_t2E5618DB487E1BE01E335CA36F67F9C8B47E9D44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshFilter RaycastTest::mf
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___mf_4;
	// UnityEngine.Mesh RaycastTest::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_5;
	// UnityEngine.Vector3 RaycastTest::hp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hp_6;
};

// ViewPort
struct ViewPort_tBBE91202A232248D83079DE77DEA8C69BD4EF27D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// KeyMap[]
struct KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* m_Items[1];

	inline KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993  : public RuntimeArray
{
	ALIGN_FIELD (8) Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D m_Items[1];

	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[][]
struct ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F  : public RuntimeArray
{
	ALIGN_FIELD (8) ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* m_Items[1];

	inline ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// Parser/Tr2ObjectTextureVertex[]
struct Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8  : public RuntimeArray
{
	ALIGN_FIELD (8) Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* m_Items[1];

	inline Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Parser/Tr2Textile16[]
struct Tr2Textile16U5BU5D_t9BC6E5F22234194ACD7B831A501FD13C69B1344F  : public RuntimeArray
{
	ALIGN_FIELD (8) Tr2Textile16_t4DB14A650BD9C53DF6B0FB9AF1BD287858CC1ECB* m_Items[1];

	inline Tr2Textile16_t4DB14A650BD9C53DF6B0FB9AF1BD287858CC1ECB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tr2Textile16_t4DB14A650BD9C53DF6B0FB9AF1BD287858CC1ECB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tr2Textile16_t4DB14A650BD9C53DF6B0FB9AF1BD287858CC1ECB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tr2Textile16_t4DB14A650BD9C53DF6B0FB9AF1BD287858CC1ECB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tr2Textile16_t4DB14A650BD9C53DF6B0FB9AF1BD287858CC1ECB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tr2Textile16_t4DB14A650BD9C53DF6B0FB9AF1BD287858CC1ECB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Parser/Tr2ObjectTexture[]
struct Tr2ObjectTextureU5BU5D_tBD9A38FA40706121765DDA793D01F80FE3F75F21  : public RuntimeArray
{
	ALIGN_FIELD (8) Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE* m_Items[1];

	inline Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void KeyMapper::InitKeyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_InitKeyCode_mF1E40C6241A1695B5CAB4EC3BFABDFC587B2EB07 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void KeyIdleDelegate::Invoke(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_inline (KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, int32_t ___statecode0, float ___time1, const RuntimeMethod* method) ;
// System.Void KeyDownDelegate::Invoke(System.Int32,System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_inline (KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, int32_t ___statecode0, int32_t ___otherkey1, float ___time2, const RuntimeMethod* method) ;
// System.Void KeyMap::.ctor(function,UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMap__ctor_mE679A006279E96F03D059AB5FBC6CFC73F52FF57 (KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* __this, int32_t ___f0, int32_t ___k1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean KeyMapper::GetKeyUpCode(function)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyMapper_GetKeyUpCode_mEC88B11140351AEC1306DFC1C44034D7B4EC8E0A (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, int32_t ___f0, const RuntimeMethod* method) ;
// System.Void KeyMapper::HandleIdleKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_HandleIdleKey_m4F9FC5D0BE9D7A8DADD3AC89FC52255C61D5B99C (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, int32_t ___code0, const RuntimeMethod* method) ;
// System.Boolean KeyMapper::GetKeyCode(function)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyMapper_GetKeyCode_m9D64395856667987855DE114B54032E545FD775D (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, int32_t ___f0, const RuntimeMethod* method) ;
// System.Void KeyMapper::HandleKey(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_HandleKey_m13082C8B4B007536D16EE5D5E141E25A2C5BBF77 (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, int32_t ___code0, int32_t ___otherkey1, const RuntimeMethod* method) ;
// System.Void KeyMapper::IsDoubleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_IsDoubleClick_mF7C47C0C4A1122C74A5D857AE35214D05ECB0876 (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void KeyMapper::HandleKeyOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_HandleKeyOrder_m7C3D0EE01B6AEE5EF025C53D41B49FDD6943E283 (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, const RuntimeMethod* method) ;
// System.Void KeyMapper::ClearKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_ClearKey_m7FAD38AF6D949C9A2FBD9640E8445281ECD32C6F (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Mouse::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mouse_Reset_m2421824C3C748843EA6B0594F3FE0B10DE72A13B (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void MouseMoveDelegate::Invoke(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_inline (MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, float ___dx0, float ___dy1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_wrapMode_m8910BC560328BD5541332A0737CE1F784B1B1600 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animation::GetClipCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetClipCount_mD0A710E117CDB762F2FC1D355B16C7E2BE13FEA3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 Physic3D::RayCast(UnityEngine.Transform,UnityEngine.Vector3[],System.Int32[],UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physic3D_RayCast_m6EBE8D50D6CB28BFCF27FAE910C0E1110DF2126B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tris2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___raystart3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___raydir4, float ___raylength5, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___hitpoint6, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m69F3CC2D0A1C47B07850133E4D12AC488903D9AD (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean TextureUV::IsUVInSide(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureUV_IsUVInSide_m9CC989FF7849979669171BFAF134ECA9C45B3048 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p22, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___test_point3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m7085A95BA8F173C79C2F198DB456FC2A2B460466 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors4, int32_t ___miplevel5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m0800ED94C5A4931622ECD9449F2F66EBD0875036 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___miplevel0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m290BA7F5157DE3322801AAC7FA1700219EE6E664_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_m39AF1619A5E6C1F698EEF20FA5FE6F3288902AAB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Division(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Division_m1C9D39C3D4B9AC3343E08D0ED4DD64E33D40A5FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m141F5123C4052CC703B41E5892A4AC26C59D36EE_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mDB995CC94B081D08FC97B93CED45A80F45EB2237 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_Multicast(KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, int32_t ___statecode0, int32_t ___otherkey1, float ___time2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* currentDelegate = reinterpret_cast<KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___statecode0, ___otherkey1, ___time2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_OpenInst(KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, int32_t ___statecode0, int32_t ___otherkey1, float ___time2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___statecode0, ___otherkey1, ___time2, method);
}
void KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_OpenStatic(KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, int32_t ___statecode0, int32_t ___otherkey1, float ___time2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___statecode0, ___otherkey1, ___time2, method);
}
void KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_OpenStaticInvoker(KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, int32_t ___statecode0, int32_t ___otherkey1, float ___time2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, int32_t, float >::Invoke(__this->___method_ptr_0, method, NULL, ___statecode0, ___otherkey1, ___time2);
}
void KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_ClosedStaticInvoker(KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, int32_t ___statecode0, int32_t ___otherkey1, float ___time2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, int32_t, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___statecode0, ___otherkey1, ___time2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63 (KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, int32_t ___statecode0, int32_t ___otherkey1, float ___time2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___statecode0, ___otherkey1, ___time2);

}
// System.Void KeyDownDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyDownDelegate__ctor_m22DC07FF77FA9CC1EB8417ABB543A0AE9AA09B98 (KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_Multicast;
}
// System.Void KeyDownDelegate::Invoke(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8 (KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, int32_t ___statecode0, int32_t ___otherkey1, float ___time2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___statecode0, ___otherkey1, ___time2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult KeyDownDelegate::BeginInvoke(System.Int32,System.Int32,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyDownDelegate_BeginInvoke_m744372B7B2C90D2FF1779F3E9C7A03004887C469 (KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, int32_t ___statecode0, int32_t ___otherkey1, float ___time2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___statecode0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___otherkey1);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___time2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void KeyDownDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyDownDelegate_EndInvoke_m6F8C279446396756324D0DB170AF82FC0D19EF3D (KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_Multicast(KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, int32_t ___statecode0, float ___time1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* currentDelegate = reinterpret_cast<KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___statecode0, ___time1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_OpenInst(KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, int32_t ___statecode0, float ___time1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___statecode0, ___time1, method);
}
void KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_OpenStatic(KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, int32_t ___statecode0, float ___time1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___statecode0, ___time1, method);
}
void KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_OpenStaticInvoker(KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, int32_t ___statecode0, float ___time1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, float >::Invoke(__this->___method_ptr_0, method, NULL, ___statecode0, ___time1);
}
void KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_ClosedStaticInvoker(KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, int32_t ___statecode0, float ___time1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___statecode0, ___time1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D (KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, int32_t ___statecode0, float ___time1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___statecode0, ___time1);

}
// System.Void KeyIdleDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyIdleDelegate__ctor_m408250BB7004EAC779F536051BF8EE72AF2AEE4E (KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_Multicast;
}
// System.Void KeyIdleDelegate::Invoke(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4 (KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, int32_t ___statecode0, float ___time1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___statecode0, ___time1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult KeyIdleDelegate::BeginInvoke(System.Int32,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyIdleDelegate_BeginInvoke_m5395880B5158426E90F7FFDCAE98915667963651 (KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, int32_t ___statecode0, float ___time1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___statecode0);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___time1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void KeyIdleDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyIdleDelegate_EndInvoke_mDCC12D78C379D00763A4EC5DE662ADF24337A1B7 (KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool GoToDelegate_Invoke_m9E04A5969853FC36B91B93C2AC98E9DA455323FA_Multicast(GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* currentDelegate = reinterpret_cast<GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pos0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool GoToDelegate_Invoke_m9E04A5969853FC36B91B93C2AC98E9DA455323FA_OpenInst(GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pos0, method);
}
bool GoToDelegate_Invoke_m9E04A5969853FC36B91B93C2AC98E9DA455323FA_OpenStatic(GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pos0, method);
}
bool GoToDelegate_Invoke_m9E04A5969853FC36B91B93C2AC98E9DA455323FA_OpenStaticInvoker(GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___pos0);
}
bool GoToDelegate_Invoke_m9E04A5969853FC36B91B93C2AC98E9DA455323FA_ClosedStaticInvoker(GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pos0);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60 (GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pos0);

	return static_cast<bool>(returnValue);
}
// System.Void GoToDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoToDelegate__ctor_mFBD134B67E0DA9C15E0B27DA9807ADEC41442656 (GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GoToDelegate_Invoke_m9E04A5969853FC36B91B93C2AC98E9DA455323FA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GoToDelegate_Invoke_m9E04A5969853FC36B91B93C2AC98E9DA455323FA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GoToDelegate_Invoke_m9E04A5969853FC36B91B93C2AC98E9DA455323FA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GoToDelegate_Invoke_m9E04A5969853FC36B91B93C2AC98E9DA455323FA_Multicast;
}
// System.Boolean GoToDelegate::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoToDelegate_Invoke_m9E04A5969853FC36B91B93C2AC98E9DA455323FA (GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pos0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoToDelegate::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoToDelegate_BeginInvoke_mFC00F544B97C854DD1F47899CA9A3D31FE048F82 (GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___pos0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean GoToDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoToDelegate_EndInvoke_mB7B256A96E4530C448507A637E6B90A5C041E12C (GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KeyMap::.ctor(function,UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMap__ctor_mE679A006279E96F03D059AB5FBC6CFC73F52FF57 (KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* __this, int32_t ___f0, int32_t ___k1, const RuntimeMethod* method) 
{
	{
		// public function func = function.Action;
		__this->___func_0 = 7;
		// public KeyCode key = KeyCode.A;
		__this->___key_1 = ((int32_t)97);
		// public KeyMap(function f, KeyCode k)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// func = f;
		int32_t L_0 = ___f0;
		__this->___func_0 = L_0;
		// key = k;
		int32_t L_1 = ___k1;
		__this->___key_1 = L_1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KeyMapper::add_OnKeyDown(KeyDownDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_add_OnKeyDown_m4767BB037F3401FCEB42CDB865948B7D9A26868E (KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* V_0 = NULL;
	KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* V_1 = NULL;
	KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyDown_6;
		V_0 = L_0;
	}

IL_0006:
	{
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_1 = V_0;
		V_1 = L_1;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_2 = V_1;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63*)CastclassSealed((RuntimeObject*)L_4, KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_5 = V_2;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_6 = V_1;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_7;
		L_7 = InterlockedCompareExchangeImpl<KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63*>((&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyDown_6), L_5, L_6);
		V_0 = L_7;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_8 = V_0;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_9 = V_1;
		if ((!(((RuntimeObject*)(KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63*)L_8) == ((RuntimeObject*)(KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KeyMapper::remove_OnKeyDown(KeyDownDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_remove_OnKeyDown_m43489324F4826436B0944E3399EE2379ACDD234A (KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* V_0 = NULL;
	KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* V_1 = NULL;
	KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyDown_6;
		V_0 = L_0;
	}

IL_0006:
	{
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_1 = V_0;
		V_1 = L_1;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_2 = V_1;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63*)CastclassSealed((RuntimeObject*)L_4, KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_5 = V_2;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_6 = V_1;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_7;
		L_7 = InterlockedCompareExchangeImpl<KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63*>((&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyDown_6), L_5, L_6);
		V_0 = L_7;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_8 = V_0;
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_9 = V_1;
		if ((!(((RuntimeObject*)(KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63*)L_8) == ((RuntimeObject*)(KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KeyMapper::add_OnKeyIdle(KeyIdleDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_add_OnKeyIdle_mFEB493921E0C49E4534893D43E634D39B994DA31 (KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* V_0 = NULL;
	KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* V_1 = NULL;
	KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyIdle_7;
		V_0 = L_0;
	}

IL_0006:
	{
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_1 = V_0;
		V_1 = L_1;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_2 = V_1;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D*)CastclassSealed((RuntimeObject*)L_4, KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_5 = V_2;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_6 = V_1;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_7;
		L_7 = InterlockedCompareExchangeImpl<KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D*>((&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyIdle_7), L_5, L_6);
		V_0 = L_7;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_8 = V_0;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_9 = V_1;
		if ((!(((RuntimeObject*)(KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D*)L_8) == ((RuntimeObject*)(KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KeyMapper::remove_OnKeyIdle(KeyIdleDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_remove_OnKeyIdle_mBC4F31A9FFAC0360538C5EA5281725225DB26F74 (KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* V_0 = NULL;
	KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* V_1 = NULL;
	KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyIdle_7;
		V_0 = L_0;
	}

IL_0006:
	{
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_1 = V_0;
		V_1 = L_1;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_2 = V_1;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D*)CastclassSealed((RuntimeObject*)L_4, KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_5 = V_2;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_6 = V_1;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_7;
		L_7 = InterlockedCompareExchangeImpl<KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D*>((&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyIdle_7), L_5, L_6);
		V_0 = L_7;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_8 = V_0;
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_9 = V_1;
		if ((!(((RuntimeObject*)(KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D*)L_8) == ((RuntimeObject*)(KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KeyMapper::add_OnGoTo(GoToDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_add_OnGoTo_m8F8EF9AD255655C248F503F86646E5BBE0DBE25D (GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* V_0 = NULL;
	GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* V_1 = NULL;
	GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnGoTo_8;
		V_0 = L_0;
	}

IL_0006:
	{
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_1 = V_0;
		V_1 = L_1;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_2 = V_1;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60*)CastclassSealed((RuntimeObject*)L_4, GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_5 = V_2;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_6 = V_1;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_7;
		L_7 = InterlockedCompareExchangeImpl<GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60*>((&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnGoTo_8), L_5, L_6);
		V_0 = L_7;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_8 = V_0;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_9 = V_1;
		if ((!(((RuntimeObject*)(GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60*)L_8) == ((RuntimeObject*)(GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KeyMapper::remove_OnGoTo(GoToDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_remove_OnGoTo_mCAAA3CC6270E9176411CFF23C75A0268E487ACC0 (GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* V_0 = NULL;
	GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* V_1 = NULL;
	GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnGoTo_8;
		V_0 = L_0;
	}

IL_0006:
	{
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_1 = V_0;
		V_1 = L_1;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_2 = V_1;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60*)CastclassSealed((RuntimeObject*)L_4, GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_5 = V_2;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_6 = V_1;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_7;
		L_7 = InterlockedCompareExchangeImpl<GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60*>((&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnGoTo_8), L_5, L_6);
		V_0 = L_7;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_8 = V_0;
		GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60* L_9 = V_1;
		if ((!(((RuntimeObject*)(GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60*)L_8) == ((RuntimeObject*)(GoToDelegate_t25D4F6F0945CD857ADE2235B29C640CFD211BF60*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KeyMapper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_Start_mC55036AC1F5CC4950724D5E1F89C5293AF2A6939 (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keycount = defaultkeycodes.Length;
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___defaultkeycodes_4;
		NullCheck(L_0);
		__this->___keycount_45 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// InitKeyCode();
		KeyMapper_InitKeyCode_mF1E40C6241A1695B5CAB4EC3BFABDFC587B2EB07(NULL);
		// }
		return;
	}
}
// System.Boolean KeyMapper::GetKeyCode(function)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyMapper_GetKeyCode_m9D64395856667987855DE114B54032E545FD775D (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, int32_t ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ikey = (int)f;
		int32_t L_0 = ___f0;
		V_0 = L_0;
		// if(ikey >= Keys.Length) //fixed indexing bug
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F* L_2 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// ikey = 0;
		V_0 = 0;
	}

IL_000e:
	{
		// return Input.GetKey(Keys[ikey].key);
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F* L_3 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		int32_t L_7 = L_6->___key_1;
		bool L_8;
		L_8 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_7, NULL);
		return L_8;
	}
}
// System.Boolean KeyMapper::GetKeyUpCode(function)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyMapper_GetKeyUpCode_mEC88B11140351AEC1306DFC1C44034D7B4EC8E0A (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, int32_t ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Input.GetKeyUp(Keys[(int)f].key);
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5;
		int32_t L_1 = ___f0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4 = L_3->___key_1;
		bool L_5;
		L_5 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(L_4, NULL);
		return L_5;
	}
}
// System.Void KeyMapper::HandleIdleKey(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_HandleIdleKey_m4F9FC5D0BE9D7A8DADD3AC89FC52255C61D5B99C (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, int32_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(code == 0)
		int32_t L_0 = ___code0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// if(OnKeyIdle !=null) OnKeyIdle(code, Time.time );
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_1 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyIdle_7;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if(OnKeyIdle !=null) OnKeyIdle(code, Time.time );
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* L_2 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyIdle_7;
		int32_t L_3 = ___code0;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NullCheck(L_2);
		KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_inline(L_2, L_3, L_4, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void KeyMapper::HandleKey(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_HandleKey_m13082C8B4B007536D16EE5D5E141E25A2C5BBF77 (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, int32_t ___code0, int32_t ___otherkey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(OnKeyDown !=null) OnKeyDown(code , otherkey, Time.time);
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyDown_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// if(OnKeyDown !=null) OnKeyDown(code , otherkey, Time.time);
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* L_1 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___OnKeyDown_6;
		int32_t L_2 = ___code0;
		int32_t L_3 = ___otherkey1;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NullCheck(L_1);
		KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_inline(L_1, L_2, L_3, L_4, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void KeyMapper::InitKeyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_InitKeyCode_mF1E40C6241A1695B5CAB4EC3BFABDFC587B2EB07 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4868CA805F7BEDCBB5BAF567B2A80BF339CBBB3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CADE76EA82F94CCA916F608C467D6DC482AFC44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3D7A586C2F8992E47FE5D0417BAF0FFBA4BAF9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAD78EC6222045FCEBFA1DA487D439D864686BD6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int nkey = defaultkeycodes.Length;
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___defaultkeycodes_4;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// Keys = new KeyMap[nkey];
		int32_t L_1 = V_0;
		KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F* L_2 = (KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F*)(KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F*)SZArrayNew(KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F_il2cpp_TypeInfo_var, (uint32_t)L_1);
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5), (void*)L_2);
		// for(int i = 0; i < nkey; i++)
		V_1 = 0;
		goto IL_002f;
	}

IL_0017:
	{
		// Keys[i] = new KeyMap((function) i, defaultkeycodes[i]);
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F* L_3 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5;
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_6 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___defaultkeycodes_4;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (int32_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* L_10 = (KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300*)il2cpp_codegen_object_new(KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		KeyMap__ctor_mE679A006279E96F03D059AB5FBC6CFC73F52FF57(L_10, L_5, L_9, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_10);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300*)L_10);
		// for(int i = 0; i < nkey; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002f:
	{
		// for(int i = 0; i < nkey; i++)
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0017;
		}
	}
	{
		// for(int i = 0 ; i < nkey; i++)
		V_2 = 0;
		goto IL_0048;
	}

IL_0037:
	{
		// Keys[i].InterfaceCode = i;
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F* L_14 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = V_2;
		NullCheck(L_17);
		L_17->___InterfaceCode_2 = L_18;
		// for(int i = 0 ; i < nkey; i++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0048:
	{
		// for(int i = 0 ; i < nkey; i++)
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0037;
		}
	}
	{
		// Idle = (int) function.Idle;
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Idle_21 = 0;
		// Run =  (int)function.Run;   //code 1
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Run_22 = 1;
		// Down = (int)function.Back;  //code 2
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Down_23 = 2;
		// Left = (int)function.Left;  //code 3
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Left_24 = 3;
		// Right = (int)function.Right;//code 4
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Right_25 = 4;
		// Jump = (int)function.Jump;  //code 5
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20 = 5;
		// PrimaryAction =(int)function.Action;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___PrimaryAction_11 = 7;
		// DrawWeapon = (int)function.DrawWeapon;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___DrawWeapon_14 = 8;
		// Roll = (int)function.Roll;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Roll_16 = ((int32_t)9);
		// Walk = (int)function.Walk + (int)function.Walk * Run; //code 12
		int32_t L_22 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Run_22;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Walk_19 = ((int32_t)il2cpp_codegen_add(6, ((int32_t)il2cpp_codegen_multiply(6, L_22))));
		// JumpAir = Jump + Jump * Run; //code 10
		int32_t L_23 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20;
		int32_t L_24 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20;
		int32_t L_25 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Run_22;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___JumpAir_26 = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_multiply(L_24, L_25))));
		// jumpBack = Jump + Jump * Down; //code 15
		int32_t L_26 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20;
		int32_t L_27 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20;
		int32_t L_28 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Down_23;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___jumpBack_28 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)il2cpp_codegen_multiply(L_27, L_28))));
		// JumpLeft =  Jump + Jump * Left; //code 20
		int32_t L_29 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20;
		int32_t L_30 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20;
		int32_t L_31 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Left_24;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___JumpLeft_31 = ((int32_t)il2cpp_codegen_add(L_29, ((int32_t)il2cpp_codegen_multiply(L_30, L_31))));
		// JumpRight = Jump + Jump * Right; //code 25
		int32_t L_32 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20;
		int32_t L_33 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20;
		int32_t L_34 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Right_25;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___JumpRight_30 = ((int32_t)il2cpp_codegen_add(L_32, ((int32_t)il2cpp_codegen_multiply(L_33, L_34))));
		// FreeFall = 11;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___FreeFall_37 = ((int32_t)11);
		// DiveIntoWater = 13;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___DiveIntoWater_38 = ((int32_t)13);
		// DiveInAir = 14;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___DiveInAir_39 = ((int32_t)14);
		// JumpAirStanding = 16;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___JumpAirStanding_27 = ((int32_t)16);
		// WalkUp = 17;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___WalkUp_36 = ((int32_t)17);
		// Grab = 26;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Grab_32 = ((int32_t)26);
		// PullUpLow = 27;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___PullUpLow_33 = ((int32_t)27);
		// PullUpHigh = 28;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___PullUpHigh_34 = ((int32_t)28);
		// PullUpAcrobatic = 29;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___PullUpAcrobatic_35 = ((int32_t)29);
		// Debug.Log("Key Mapper StateCode: Run " + Run);
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Run_22), NULL);
		String_t* L_36;
		L_36 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5CADE76EA82F94CCA916F608C467D6DC482AFC44, L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_36, NULL);
		// Debug.Log("Key Mapper StateCode: Jump " + Jump);
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20), NULL);
		String_t* L_38;
		L_38 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB3D7A586C2F8992E47FE5D0417BAF0FFBA4BAF9A, L_37, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_38, NULL);
		// Debug.Log("Key Mapper StateCode: Idle " + Idle);
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Idle_21), NULL);
		String_t* L_40;
		L_40 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4868CA805F7BEDCBB5BAF567B2A80BF339CBBB3F, L_39, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_40, NULL);
		// Debug.Log("Key Mapper StateCode: PrimaryAction " + JumpLeft);
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___JumpLeft_31), NULL);
		String_t* L_42;
		L_42 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDAD78EC6222045FCEBFA1DA487D439D864686BD6, L_41, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_42, NULL);
		// active = true;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___active_46 = (bool)1;
		// }
		return;
	}
}
// System.Void KeyMapper::ClearKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_ClearKey_m7FAD38AF6D949C9A2FBD9640E8445281ECD32C6F (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if(dpad != 0)
		int32_t L_0 = __this->___dpad_42;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// for(int i = 1; i <= 4; ++i)
		V_0 = 1;
		goto IL_0037;
	}

IL_000c:
	{
		// function func = (function) i;
		int32_t L_1 = V_0;
		V_1 = L_1;
		// if(GetKeyUpCode(func) )
		int32_t L_2 = V_1;
		bool L_3;
		L_3 = KeyMapper_GetKeyUpCode_mEC88B11140351AEC1306DFC1C44034D7B4EC8E0A(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// dpad = 0;
		__this->___dpad_42 = 0;
		// statecode = 0;
		__this->___statecode_43 = 0;
		// HandleIdleKey(statecode);
		int32_t L_4 = __this->___statecode_43;
		KeyMapper_HandleIdleKey_m4F9FC5D0BE9D7A8DADD3AC89FC52255C61D5B99C(__this, L_4, NULL);
		// break;
		goto IL_003b;
	}

IL_0033:
	{
		// for(int i = 1; i <= 4; ++i)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0037:
	{
		// for(int i = 1; i <= 4; ++i)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)4)))
		{
			goto IL_000c;
		}
	}

IL_003b:
	{
		// if(keypadmovement != 0)
		int32_t L_7 = __this->___keypadmovement_40;
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		// for(int i = 5; i <=6; ++i)
		V_2 = 5;
		goto IL_0072;
	}

IL_0047:
	{
		// function func = (function) i;
		int32_t L_8 = V_2;
		V_3 = L_8;
		// if(GetKeyUpCode(func) )
		int32_t L_9 = V_3;
		bool L_10;
		L_10 = KeyMapper_GetKeyUpCode_mEC88B11140351AEC1306DFC1C44034D7B4EC8E0A(__this, L_9, NULL);
		if (!L_10)
		{
			goto IL_006e;
		}
	}
	{
		// keypadmovement = 0;
		__this->___keypadmovement_40 = 0;
		// statecode = 0;
		__this->___statecode_43 = 0;
		// HandleIdleKey(statecode);
		int32_t L_11 = __this->___statecode_43;
		KeyMapper_HandleIdleKey_m4F9FC5D0BE9D7A8DADD3AC89FC52255C61D5B99C(__this, L_11, NULL);
		// break;
		goto IL_0076;
	}

IL_006e:
	{
		// for(int i = 5; i <=6; ++i)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0072:
	{
		// for(int i = 5; i <=6; ++i)
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)6)))
		{
			goto IL_0047;
		}
	}

IL_0076:
	{
		// if(keypadaction != 0)
		int32_t L_14 = __this->___keypadaction_41;
		if (!L_14)
		{
			goto IL_00b8;
		}
	}
	{
		// for(int i = 7 ; i <= 9; ++i)
		V_4 = 7;
		goto IL_00b2;
	}

IL_0083:
	{
		// function func = (function) i;
		int32_t L_15 = V_4;
		V_5 = L_15;
		// if(GetKeyCode(func) )
		int32_t L_16 = V_5;
		bool L_17;
		L_17 = KeyMapper_GetKeyCode_m9D64395856667987855DE114B54032E545FD775D(__this, L_16, NULL);
		if (!L_17)
		{
			goto IL_00ac;
		}
	}
	{
		// keypadaction = 0;
		__this->___keypadaction_41 = 0;
		// statecode = 0;
		__this->___statecode_43 = 0;
		// HandleIdleKey(statecode);
		int32_t L_18 = __this->___statecode_43;
		KeyMapper_HandleIdleKey_m4F9FC5D0BE9D7A8DADD3AC89FC52255C61D5B99C(__this, L_18, NULL);
		// break;
		return;
	}

IL_00ac:
	{
		// for(int i = 7 ; i <= 9; ++i)
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00b2:
	{
		// for(int i = 7 ; i <= 9; ++i)
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)9))))
		{
			goto IL_0083;
		}
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void KeyMapper::HandleKeyOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_HandleKeyOrder_m7C3D0EE01B6AEE5EF025C53D41B49FDD6943E283 (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if(reset)
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		bool L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___reset_10;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// keypadmovement = 0;
		__this->___keypadmovement_40 = 0;
		// keypadaction = 0;
		__this->___keypadaction_41 = 0;
		// dpad = 0;
		__this->___dpad_42 = 0;
		// statecode = 0;
		__this->___statecode_43 = 0;
		// reset = false;
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___reset_10 = (bool)0;
	}

IL_0029:
	{
		// if(dpad == 0) //if not pressed
		int32_t L_1 = __this->___dpad_42;
		if (L_1)
		{
			goto IL_006a;
		}
	}
	{
		// for(int i = 1; i <= 4; ++i)
		V_0 = 1;
		goto IL_0066;
	}

IL_0035:
	{
		// function func = (function) i;
		int32_t L_2 = V_0;
		V_1 = L_2;
		// if(GetKeyCode(func) )
		int32_t L_3 = V_1;
		bool L_4;
		L_4 = KeyMapper_GetKeyCode_m9D64395856667987855DE114B54032E545FD775D(__this, L_3, NULL);
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		// dpad = i;
		int32_t L_5 = V_0;
		__this->___dpad_42 = L_5;
		// statecode = dpad;
		int32_t L_6 = __this->___dpad_42;
		__this->___statecode_43 = L_6;
		// HandleKey(statecode,0x0);
		int32_t L_7 = __this->___statecode_43;
		KeyMapper_HandleKey_m13082C8B4B007536D16EE5D5E141E25A2C5BBF77(__this, L_7, 0, NULL);
		// break;
		goto IL_006a;
	}

IL_0062:
	{
		// for(int i = 1; i <= 4; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0066:
	{
		// for(int i = 1; i <= 4; ++i)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)4)))
		{
			goto IL_0035;
		}
	}

IL_006a:
	{
		// if(keypadmovement == 0)
		int32_t L_10 = __this->___keypadmovement_40;
		if (L_10)
		{
			goto IL_00b9;
		}
	}
	{
		// for(int i = 5; i <= 6; ++i)
		V_2 = 5;
		goto IL_00b5;
	}

IL_0076:
	{
		// function func = (function) i;
		int32_t L_11 = V_2;
		V_3 = L_11;
		// if(GetKeyCode(func) )
		int32_t L_12 = V_3;
		bool L_13;
		L_13 = KeyMapper_GetKeyCode_m9D64395856667987855DE114B54032E545FD775D(__this, L_12, NULL);
		if (!L_13)
		{
			goto IL_00b1;
		}
	}
	{
		// keypadmovement = i;
		int32_t L_14 = V_2;
		__this->___keypadmovement_40 = L_14;
		// statecode = keypadmovement + (dpad * keypadmovement);
		int32_t L_15 = __this->___keypadmovement_40;
		int32_t L_16 = __this->___dpad_42;
		int32_t L_17 = __this->___keypadmovement_40;
		__this->___statecode_43 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17))));
		// HandleKey(statecode,0x0);
		int32_t L_18 = __this->___statecode_43;
		KeyMapper_HandleKey_m13082C8B4B007536D16EE5D5E141E25A2C5BBF77(__this, L_18, 0, NULL);
		// break;
		goto IL_00b9;
	}

IL_00b1:
	{
		// for(int i = 5; i <= 6; ++i)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00b5:
	{
		// for(int i = 5; i <= 6; ++i)
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) <= ((int32_t)6)))
		{
			goto IL_0076;
		}
	}

IL_00b9:
	{
		// if(keypadaction == 0)
		int32_t L_21 = __this->___keypadaction_41;
		if (L_21)
		{
			goto IL_0103;
		}
	}
	{
		// for(int i = 7 ; i <= 9; ++i)
		V_4 = 7;
		goto IL_00fd;
	}

IL_00c6:
	{
		// function func = (function) i;
		int32_t L_22 = V_4;
		V_5 = L_22;
		// if(GetKeyCode(func) )
		int32_t L_23 = V_5;
		bool L_24;
		L_24 = KeyMapper_GetKeyCode_m9D64395856667987855DE114B54032E545FD775D(__this, L_23, NULL);
		if (!L_24)
		{
			goto IL_00f7;
		}
	}
	{
		// keypadaction = i;
		int32_t L_25 = V_4;
		__this->___keypadaction_41 = L_25;
		// statecode = keypadaction;
		int32_t L_26 = __this->___keypadaction_41;
		__this->___statecode_43 = L_26;
		// HandleKey(statecode,0x0);
		int32_t L_27 = __this->___statecode_43;
		KeyMapper_HandleKey_m13082C8B4B007536D16EE5D5E141E25A2C5BBF77(__this, L_27, 0, NULL);
		// break;
		goto IL_0103;
	}

IL_00f7:
	{
		// for(int i = 7 ; i <= 9; ++i)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00fd:
	{
		// for(int i = 7 ; i <= 9; ++i)
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) <= ((int32_t)((int32_t)9))))
		{
			goto IL_00c6;
		}
	}

IL_0103:
	{
		// IsDoubleClick();
		KeyMapper_IsDoubleClick_mF7C47C0C4A1122C74A5D857AE35214D05ECB0876(__this, NULL);
		// }
		return;
	}
}
// System.Void KeyMapper::IsDoubleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_IsDoubleClick_mF7C47C0C4A1122C74A5D857AE35214D05ECB0876 (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919B2CB3DE1A27948FE44FF039B56B34D67EC4AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// if(clickcount == 0)
		int32_t L_1 = __this->___clickcount_47;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Invoke("WaitForClick", 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral919B2CB3DE1A27948FE44FF039B56B34D67EC4AE, (0.5f), NULL);
	}

IL_0020:
	{
		// clickcount++;
		int32_t L_2 = __this->___clickcount_47;
		__this->___clickcount_47 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void KeyMapper::WaitForClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_WaitForClick_mEB2BF9D7A04D7FF752EAFBA115CFC2B405F9D48B (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(clickcount >= 2)
		int32_t L_0 = __this->___clickcount_47;
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_002f;
		}
	}
	{
		// int statecode = Keys [defaultkeycodes.Length - 4].InterfaceCode;
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F* L_1 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_2 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___defaultkeycodes_4;
		NullCheck(L_2);
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 4));
		KeyMap_tE792CC841719F6F42A7F21B8AFB36B201D5CD300* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		int32_t L_5 = L_4->___InterfaceCode_2;
		// HandleKey(Run,keypadmovement);
		int32_t L_6 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Run_22;
		int32_t L_7 = __this->___keypadmovement_40;
		KeyMapper_HandleKey_m13082C8B4B007536D16EE5D5E141E25A2C5BBF77(__this, L_6, L_7, NULL);
	}

IL_002f:
	{
		// clickcount = 0;
		__this->___clickcount_47 = 0;
		// }
		return;
	}
}
// System.Void KeyMapper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper_Update_mE684F636BF5340848A2D286A519AE2745BB4C93C (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Keys == null) return; //bug fix
		il2cpp_codegen_runtime_class_init_inline(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F* L_0 = ((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (Keys == null) return; //bug fix
		return;
	}

IL_0008:
	{
		// HandleKeyOrder();
		KeyMapper_HandleKeyOrder_m7C3D0EE01B6AEE5EF025C53D41B49FDD6943E283(__this, NULL);
		// ClearKey();
		KeyMapper_ClearKey_m7FAD38AF6D949C9A2FBD9640E8445281ECD32C6F(__this, NULL);
		// }
		return;
	}
}
// System.Void KeyMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper__ctor_mBF6A3C115A717508FAAD4B057C6F9E285C228962 (KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void KeyMapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyMapper__cctor_m47386BC98B23C4D4B3358864217D4BC2049FD87C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____1AD91C8504E7A1B22715C230487A276639D32332B1BF4A398496B0F4230EF48E_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static KeyCode[] defaultkeycodes ={
		// 
		//     KeyCode.Escape,
		//     //Direction key
		//     KeyCode.UpArrow,
		//     KeyCode.DownArrow,
		//     KeyCode.LeftArrow,
		//     KeyCode.RightArrow,
		// 
		//     //movement key
		//     KeyCode.Mouse1,
		//     KeyCode.Keypad5,
		//     //Action key
		//     KeyCode.Mouse0,
		//     KeyCode.KeypadEnter,
		//     KeyCode.RightShift
		// };
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_0 = (KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)(KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85*)SZArrayNew(KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____1AD91C8504E7A1B22715C230487A276639D32332B1BF4A398496B0F4230EF48E_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___defaultkeycodes_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___defaultkeycodes_4), (void*)L_1);
		// public static KeyMap[] Keys = null;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5 = (KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Keys_5), (void*)(KeyMapU5BU5D_tC478EBE9F0AB6175C203BEA38D6D5FFDA4810D6F*)NULL);
		// public static bool usedefaultmap = true;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___usedefaultmap_9 = (bool)1;
		// public static bool reset = false;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___reset_10 = (bool)0;
		// public static int PrimaryAction = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___PrimaryAction_11 = 0;
		// public static int Search = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Search_12 = 0;
		// public static int Menu = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Menu_13 = 0;
		// public static int DrawWeapon = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___DrawWeapon_14 = 0;
		// public static int PickupFlare = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___PickupFlare_15 = 0;
		// public static int Roll = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Roll_16 = 0;
		// public static int StepToLeft = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___StepToLeft_17 = 0;
		// public static int StepToRight = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___StepToRight_18 = 0;
		// public static int Walk = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Walk_19 = 0;
		// public static int Jump = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Jump_20 = 0;
		// public static int Idle = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Idle_21 = 0;
		// public static int Run = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Run_22 = 0;
		// public static int Down = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Down_23 = 0;
		// public static int Left = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Left_24 = 0;
		// public static int Right = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Right_25 = 0;
		// public static int JumpAir = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___JumpAir_26 = 0;
		// public static int JumpAirStanding = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___JumpAirStanding_27 = 0;
		// public static int jumpBack = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___jumpBack_28 = 0;
		// public static int FlipBack = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___FlipBack_29 = 0;
		// public static int JumpRight = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___JumpRight_30 = 0;
		// public static int JumpLeft = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___JumpLeft_31 = 0;
		// public static int Grab = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___Grab_32 = 0;
		// public static int PullUpLow = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___PullUpLow_33 = 0;
		// public static int PullUpHigh = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___PullUpHigh_34 = 0;
		// public static int PullUpAcrobatic = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___PullUpAcrobatic_35 = 0;
		// public static int WalkUp = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___WalkUp_36 = 0;
		// public static int FreeFall = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___FreeFall_37 = 0;
		// public static int DiveIntoWater = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___DiveIntoWater_38 = 0;
		// public static int DiveInAir = 0;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___DiveInAir_39 = 0;
		// public static bool active = false;
		((KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_StaticFields*)il2cpp_codegen_static_fields_for(KeyMapper_t1D1CEAA0EC895BCDC995ED9FEABA40E4C46FE994_il2cpp_TypeInfo_var))->___active_46 = (bool)0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_Multicast(MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, float ___dx0, float ___dy1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* currentDelegate = reinterpret_cast<MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___dx0, ___dy1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_OpenInst(MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, float ___dx0, float ___dy1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___dx0, ___dy1, method);
}
void MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_OpenStatic(MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, float ___dx0, float ___dy1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___dx0, ___dy1, method);
}
void MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_OpenStaticInvoker(MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, float ___dx0, float ___dy1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___dx0, ___dy1);
}
void MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_ClosedStaticInvoker(MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, float ___dx0, float ___dy1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___dx0, ___dy1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8 (MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, float ___dx0, float ___dy1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___dx0, ___dy1);

}
// System.Void MouseMoveDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseMoveDelegate__ctor_m27F5B870281FD0294FD6D28B113182A89E5A2B86 (MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_Multicast;
}
// System.Void MouseMoveDelegate::Invoke(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C (MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, float ___dx0, float ___dy1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___dx0, ___dy1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MouseMoveDelegate::BeginInvoke(System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseMoveDelegate_BeginInvoke_mC24F573881EF9A3CA8D54A1A7453BB0841C8D7A5 (MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, float ___dx0, float ___dy1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___dx0);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___dy1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void MouseMoveDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseMoveDelegate_EndInvoke_m5D99430B7ED10419157A74094450B8A6CA61E38C (MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mouse::add_m_OnMouseMove(MouseMoveDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mouse_add_m_OnMouseMove_m3C23C6075C51C9FD0634E96E244826069EB677C3 (MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* V_0 = NULL;
	MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* V_1 = NULL;
	MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_0 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___m_OnMouseMove_7;
		V_0 = L_0;
	}

IL_0006:
	{
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_1 = V_0;
		V_1 = L_1;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_2 = V_1;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8*)CastclassSealed((RuntimeObject*)L_4, MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_5 = V_2;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_6 = V_1;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_7;
		L_7 = InterlockedCompareExchangeImpl<MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8*>((&((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___m_OnMouseMove_7), L_5, L_6);
		V_0 = L_7;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_8 = V_0;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_9 = V_1;
		if ((!(((RuntimeObject*)(MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8*)L_8) == ((RuntimeObject*)(MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Mouse::remove_m_OnMouseMove(MouseMoveDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mouse_remove_m_OnMouseMove_m46772FDB4BE9B697ADAB0B62260AF6B56BB66114 (MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* V_0 = NULL;
	MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* V_1 = NULL;
	MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_0 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___m_OnMouseMove_7;
		V_0 = L_0;
	}

IL_0006:
	{
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_1 = V_0;
		V_1 = L_1;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_2 = V_1;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8*)CastclassSealed((RuntimeObject*)L_4, MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_5 = V_2;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_6 = V_1;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_7;
		L_7 = InterlockedCompareExchangeImpl<MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8*>((&((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___m_OnMouseMove_7), L_5, L_6);
		V_0 = L_7;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_8 = V_0;
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_9 = V_1;
		if ((!(((RuntimeObject*)(MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8*)L_8) == ((RuntimeObject*)(MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Mouse::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mouse_Start_m99BC41ECE883D497B4DC00CB84A3E7EDACA44737 (Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Mouse::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mouse_LateUpdate_m777C2D27560D98252E35CCBC0B02A9F7D8B35073 (Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Reset();
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		Mouse_Reset_m2421824C3C748843EA6B0594F3FE0B10DE72A13B(NULL);
		// }
		return;
	}
}
// System.Void Mouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mouse_Update_mD9EA8FCDD415CF7BA3EB47B6278F9E3616433FB4 (Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if ((Application.platform == RuntimePlatform.Android) || (Application.platform == RuntimePlatform.IPhonePlayer))
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_00c6;
		}
	}

IL_0014:
	{
		// if (Input.GetMouseButtonDown(0) || initmouse)
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		bool L_3 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___initmouse_6;
		if (!L_3)
		{
			goto IL_0053;
		}
	}

IL_0023:
	{
		// mousepos = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_7 = L_6.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_5, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___mousepos_4 = L_8;
		// prevmousepos = mousepos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___mousepos_4;
		((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___prevmousepos_5 = L_9;
		// initmouse = false;
		((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___initmouse_6 = (bool)0;
		goto IL_0079;
	}

IL_0053:
	{
		// else if (Input.GetMouseButton(0))
		bool L_10;
		L_10 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// mousepos = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_14 = L_13.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_12, L_14, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___mousepos_4 = L_15;
	}

IL_0079:
	{
		// if (prevmousepos != mousepos)
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___prevmousepos_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___mousepos_4;
		bool L_18;
		L_18 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_00f5;
		}
	}
	{
		// if (m_OnMouseMove != null) m_OnMouseMove(mousepos.x - prevmousepos.x, mousepos.y - prevmousepos.y);
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_19 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___m_OnMouseMove_7;
		if (!L_19)
		{
			goto IL_00f5;
		}
	}
	{
		// if (m_OnMouseMove != null) m_OnMouseMove(mousepos.x - prevmousepos.x, mousepos.y - prevmousepos.y);
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_20 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___m_OnMouseMove_7;
		float L_21 = (&((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___mousepos_4)->___x_0;
		float L_22 = (&((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___prevmousepos_5)->___x_0;
		float L_23 = (&((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___mousepos_4)->___y_1;
		float L_24 = (&((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___prevmousepos_5)->___y_1;
		NullCheck(L_20);
		MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_inline(L_20, ((float)il2cpp_codegen_subtract(L_21, L_22)), ((float)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		return;
	}

IL_00c6:
	{
		// float x = Input.GetAxis("Mouse X") * 8;
		float L_25;
		L_25 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_25, (8.0f)));
		// float y = Input.GetAxis("Mouse Y");
		float L_26;
		L_26 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		V_1 = L_26;
		// if (m_OnMouseMove != null) m_OnMouseMove(x, y);
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_27 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___m_OnMouseMove_7;
		if (!L_27)
		{
			goto IL_00f5;
		}
	}
	{
		// if (m_OnMouseMove != null) m_OnMouseMove(x, y);
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* L_28 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___m_OnMouseMove_7;
		float L_29 = V_0;
		float L_30 = V_1;
		NullCheck(L_28);
		MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_inline(L_28, L_29, L_30, NULL);
	}

IL_00f5:
	{
		// }
		return;
	}
}
// System.Single Mouse::GetAxisX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mouse_GetAxisX_m9F688EAB325F923239667A9E2CA9CF6C690FEB0D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (mousepos.x - prevmousepos.x);
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		float L_0 = (&((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___mousepos_4)->___x_0;
		float L_1 = (&((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___prevmousepos_5)->___x_0;
		return ((float)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Single Mouse::GetAxisY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mouse_GetAxisY_mB3EC3FF4618990A5A10ED412BF85C4D9BBD2779F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (mousepos.y - prevmousepos.y);
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		float L_0 = (&((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___mousepos_4)->___y_1;
		float L_1 = (&((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___prevmousepos_5)->___y_1;
		return ((float)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Void Mouse::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mouse_Reset_m2421824C3C748843EA6B0594F3FE0B10DE72A13B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// prevmousepos = mousepos;
		il2cpp_codegen_runtime_class_init_inline(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___mousepos_4;
		((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___prevmousepos_5 = L_0;
		// }
		return;
	}
}
// System.Void Mouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mouse__ctor_mDFF52C6E49E43B628EF3D86DDBEEB0A595BF0983 (Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Mouse::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mouse__cctor_m35E575555E4626DB5B9BA6F580F7F9D740A200C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Vector2 mousepos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___mousepos_4 = L_0;
		// static Vector2 prevmousepos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___prevmousepos_5 = L_1;
		// static bool initmouse = true;
		((Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9DDEC6697FBA3328CBAADCC15CF9BEC0FFAEB342_il2cpp_TypeInfo_var))->___initmouse_6 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EditView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditView_Start_mBC330EDBCBD79D26B15B8EF4B4BCA1E77E6851E7 (EditView_t08A45B6D5A42A13A3F94A9D26D6FED8A59E227CE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EditView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditView_Update_mD8D32F738B57A6CDDA9900EDCAD6C34361BB6B3B (EditView_t08A45B6D5A42A13A3F94A9D26D6FED8A59E227CE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EditView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditView__ctor_m02682A6164A777DD9DADF9CCE57877A2413888ED (EditView_t08A45B6D5A42A13A3F94A9D26D6FED8A59E227CE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ViewPort::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewPort_Start_mB4FCB5A61C88EACDD5F16EF52E3B8931FFF89B5C (ViewPort_tBBE91202A232248D83079DE77DEA8C69BD4EF27D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ViewPort::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewPort_Update_m9D1F7A8A772BE9E9316ECB6EB902B7472432FBAE (ViewPort_tBBE91202A232248D83079DE77DEA8C69BD4EF27D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ViewPort::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewPort__ctor_mE575E7F63870318D679D6A91152363DFBD68F73D (ViewPort_tBBE91202A232248D83079DE77DEA8C69BD4EF27D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimationTester::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTester_Start_mD949CBACB3F448260D357093727ECC44010B9158 (AnimationTester_t6BB7961DB199510B2316E60E19F8224EA0D72228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animation>();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0;
		L_0 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		__this->___anim_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_4), (void*)L_0);
		// anim.wrapMode = WrapMode.Clamp;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_1 = __this->___anim_4;
		NullCheck(L_1);
		Animation_set_wrapMode_m8910BC560328BD5541332A0737CE1F784B1B1600(L_1, 1, NULL);
		// }
		return;
	}
}
// System.Void AnimationTester::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTester_Update_m94AED6C70A7B71457E85C2F773834C45ADA4EF35 (AnimationTester_t6BB7961DB199510B2316E60E19F8224EA0D72228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8238C136585C21BEEC7D80EC3D92177C0C04F99F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B12_0 = NULL;
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* G_B11_1 = NULL;
	{
		// if(anim != null && anim.GetClipCount() > 0)
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___anim_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00c6;
		}
	}
	{
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_2 = __this->___anim_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Animation_GetClipCount_mD0A710E117CDB762F2FC1D355B16C7E2BE13FEA3(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_00c6;
		}
	}
	{
		// if(Input.GetKeyUp(KeyCode.UpArrow))
		bool L_4;
		L_4 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)273), NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// id++;
		int32_t L_5 = __this->___id_5;
		__this->___id_5 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_003c:
	{
		// if(Input.GetKeyUp(KeyCode.DownArrow))
		bool L_6;
		L_6 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)274), NULL);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// id--;
		int32_t L_7 = __this->___id_5;
		__this->___id_5 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0056:
	{
		// if(id >= anim.GetClipCount() )
		int32_t L_8 = __this->___id_5;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_9 = __this->___anim_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Animation_GetClipCount_mD0A710E117CDB762F2FC1D355B16C7E2BE13FEA3(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_007c;
		}
	}
	{
		// id = anim.GetClipCount() - 1;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_11 = __this->___anim_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Animation_GetClipCount_mD0A710E117CDB762F2FC1D355B16C7E2BE13FEA3(L_11, NULL);
		__this->___id_5 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_007c:
	{
		// if(id < 0 )
		int32_t L_13 = __this->___id_5;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		// id = 0;
		__this->___id_5 = 0;
	}

IL_008c:
	{
		// Debug.Log("Clip: "+ id);
		int32_t* L_14 = (&__this->___id_5);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8238C136585C21BEEC7D80EC3D92177C0C04F99F, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_16, NULL);
		// anim.Play("" + id);
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_17 = __this->___anim_4;
		int32_t* L_18 = (&__this->___id_5);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		String_t* L_20 = L_19;
		G_B11_0 = L_20;
		G_B11_1 = L_17;
		if (L_20)
		{
			G_B12_0 = L_20;
			G_B12_1 = L_17;
			goto IL_00c0;
		}
	}
	{
		G_B12_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B12_1 = G_B11_1;
	}

IL_00c0:
	{
		NullCheck(G_B12_1);
		bool L_21;
		L_21 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(G_B12_1, G_B12_0, NULL);
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void AnimationTester::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTester_OnGUI_m79C07B32929A1467308E1C763F145C98446571BA (AnimationTester_t6BB7961DB199510B2316E60E19F8224EA0D72228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral076E7F8F357BA42B4963F3123591140A909A8ABA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.Label(new Rect(10,100, Screen.width, Screen.height), "This is test scene to play Lara's animation clips manually\n" +
		//     "Press Up/ Down arrow key to change animation\n" +
		//     "Playing animation clip:" + id);
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_2), (10.0f), (100.0f), ((float)L_0), ((float)L_1), /*hidden argument*/NULL);
		int32_t* L_3 = (&__this->___id_5);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral076E7F8F357BA42B4963F3123591140A909A8ABA, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_mF161ED74A26AEC05C8A56F0B95F78482CE7ED5C7(L_2, L_5, NULL);
		// }
		return;
	}
}
// System.Void AnimationTester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTester__ctor_mF12497AA18A8A584FED44606754B7CC7463F41CC (AnimationTester_t6BB7961DB199510B2316E60E19F8224EA0D72228* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RaycastTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastTest_Start_mE450BB648B0196BB25F36ABA5EE09087894917F1 (RaycastTest_t2E5618DB487E1BE01E335CA36F67F9C8B47E9D44* __this, const RuntimeMethod* method) 
{
	{
		// mesh = mf.mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___mf_4;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_0, NULL);
		__this->___mesh_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_5), (void*)L_1);
		// hp = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___hp_6 = L_3;
		// }
		return;
	}
}
// System.Void RaycastTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastTest_Update_m88B41551F4E40F39EF1884C84EBA3023F8FC4881 (RaycastTest_t2E5618DB487E1BE01E335CA36F67F9C8B47E9D44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Physic3D.RayCast(mf.transform, mesh.vertices, mesh.triangles, transform.position, transform.forward, 10000, ref hp);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___mf_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___mesh_5;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3;
		L_3 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_2, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = __this->___mesh_5;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___hp_6);
		int32_t L_11;
		L_11 = Physic3D_RayCast_m6EBE8D50D6CB28BFCF27FAE910C0E1110DF2126B(L_1, L_3, L_5, L_7, L_9, (10000.0f), L_10, NULL);
		// Debug.DrawLine(transform.position,hp );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___hp_6;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m69F3CC2D0A1C47B07850133E4D12AC488903D9AD(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void RaycastTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastTest__ctor_m3CE6A75F9E75A075F8CB150A65EB1883E0E4E80F (RaycastTest_t2E5618DB487E1BE01E335CA36F67F9C8B47E9D44* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ComputionModel::Push(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputionModel_Push_m506CED1557D4D3AEE59F2DAE73966E44736CC530 (int32_t ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(SP < 255)
		il2cpp_codegen_runtime_class_init_inline(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)255))))
		{
			goto IL_0018;
		}
	}
	{
		// SP = SP + 1;
		il2cpp_codegen_runtime_class_init_inline(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1;
		((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0018:
	{
		// STACK[SP] = data;
		il2cpp_codegen_runtime_class_init_inline(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___STACK_0;
		int32_t L_3 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1;
		int32_t L_4 = ___data0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		// return STACK[SP] ;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___STACK_0;
		int32_t L_6 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}
}
// System.Int32 ComputionModel::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputionModel_Pop_m6D3ACE542F10E8EB44D037841B5774426FDF8565 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// int retval = STACK[SP];
		il2cpp_codegen_runtime_class_init_inline(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___STACK_0;
		int32_t L_1 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// STACK[SP]  = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___STACK_0;
		int32_t L_5 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)0);
		// if(SP > 0)
		int32_t L_6 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1;
		G_B1_0 = L_3;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			G_B2_0 = L_3;
			goto IL_002b;
		}
	}
	{
		// SP = SP - 1;
		il2cpp_codegen_runtime_class_init_inline(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		int32_t L_7 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1;
		((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		G_B2_0 = G_B1_0;
	}

IL_002b:
	{
		// return retval;
		return G_B2_0;
	}
}
// System.Void ComputionModel::StackInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputionModel_StackInit_m3D181F8D74942AE0030A49F4A155A48AC3407D43 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// SP = 0;
		il2cpp_codegen_runtime_class_init_inline(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1 = 0;
		// for(int i = 0; i < 256; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_000a:
	{
		// STACK[i] = 0;
		il2cpp_codegen_runtime_class_init_inline(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___STACK_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		// for(int i = 0; i < 256; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		// for(int i = 0; i < 256; i++)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)256))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ComputionModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputionModel__ctor_m45C1FBA4206454C3AF31D92EB25C142E5A91FCED (ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ComputionModel::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputionModel__cctor_m84ECC40F3D2A76BA2E8F8A2EC6B0D7645ED3E8DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int[]  STACK = new int[256];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___STACK_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___STACK_0), (void*)L_0);
		// static int SP = 0;
		((ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_StaticFields*)il2cpp_codegen_static_fields_for(ComputionModel_t4A8583591003BBF029734C9B20F15D0BFECAE1BC_il2cpp_TypeInfo_var))->___SP_1 = 0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single TextureUV::AdjustTextureCoordinateX(System.Byte,System.SByte,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextureUV_AdjustTextureCoordinateX_mAF614596FEB0473C25243ECFA1DC90C4FC8630B6 (uint8_t ___pixel0, int8_t ___offset1, uint16_t ___texTileIdx2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if(uvRects == null) return 0;
		il2cpp_codegen_runtime_class_init_inline(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_0 = ((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___uvRects_0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if(uvRects == null) return 0;
		return (0.0f);
	}

IL_000d:
	{
		// Rect uvRect = uvRects[texTileIdx];
		il2cpp_codegen_runtime_class_init_inline(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_1 = ((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___uvRects_0;
		uint16_t L_2 = ___texTileIdx2;
		NullCheck(L_1);
		uint16_t L_3 = L_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// float uvspanx = Mathf.Abs(uvRect.xMax - uvRect.xMin);
		float L_5;
		L_5 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_0), NULL);
		float L_6;
		L_6 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_0), NULL);
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract(L_5, L_6)));
		V_1 = L_7;
		// if (offset >= 0)
		int8_t L_8 = ___offset1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// ++pixel;
		uint8_t L_9 = ___pixel0;
		___pixel0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, 1)));
		goto IL_0040;
	}

IL_003a:
	{
		// --pixel;
		uint8_t L_10 = ___pixel0;
		___pixel0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1)));
	}

IL_0040:
	{
		// if(pixel >= 255)
		uint8_t L_11 = ___pixel0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)255))))
		{
			goto IL_004f;
		}
	}
	{
		// pixel = 255;
		___pixel0 = (uint8_t)((int32_t)255);
	}

IL_004f:
	{
		// if(pixel <= 0)
		uint8_t L_12 = ___pixel0;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// pixel = 0;
		___pixel0 = (uint8_t)0;
	}

IL_0056:
	{
		// float u = (float)((float)pixel / 255.0f);
		uint8_t L_13 = ___pixel0;
		// float adju = u * uvspanx;
		float L_14 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(((float)((float)(((float)L_13)/(255.0f)))), L_14));
		// return (float)(uvRect.xMin + adju);
		float L_15;
		L_15 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_0), NULL);
		float L_16 = V_2;
		return ((float)((float)il2cpp_codegen_add(L_15, L_16)));
	}
}
// System.Single TextureUV::AdjustTextureCoordinateY(System.Byte,System.SByte,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextureUV_AdjustTextureCoordinateY_m81CC268E55FC1825051A6502B8571F9635B4F5C2 (uint8_t ___pixel0, int8_t ___offset1, uint16_t ___texTileIdx2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if(uvRects == null) return 0;
		il2cpp_codegen_runtime_class_init_inline(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_0 = ((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___uvRects_0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if(uvRects == null) return 0;
		return (0.0f);
	}

IL_000d:
	{
		// Rect uvRect = uvRects[texTileIdx];
		il2cpp_codegen_runtime_class_init_inline(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_1 = ((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___uvRects_0;
		uint16_t L_2 = ___texTileIdx2;
		NullCheck(L_1);
		uint16_t L_3 = L_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// float uvspany = Mathf.Abs(uvRect.yMin - uvRect.yMax);
		float L_5;
		L_5 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_0), NULL);
		float L_6;
		L_6 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_0), NULL);
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract(L_5, L_6)));
		V_1 = L_7;
		// if (offset >= 0)
		int8_t L_8 = ___offset1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// ++pixel;
		uint8_t L_9 = ___pixel0;
		___pixel0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, 1)));
		goto IL_0040;
	}

IL_003a:
	{
		// --pixel;
		uint8_t L_10 = ___pixel0;
		___pixel0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1)));
	}

IL_0040:
	{
		// if(pixel >= 255)
		uint8_t L_11 = ___pixel0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)255))))
		{
			goto IL_004f;
		}
	}
	{
		// pixel = 255;
		___pixel0 = (uint8_t)((int32_t)255);
	}

IL_004f:
	{
		// if(pixel <= 0)
		uint8_t L_12 = ___pixel0;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// pixel = 0;
		___pixel0 = (uint8_t)0;
	}

IL_0056:
	{
		// float v = (float)((float)pixel / 255.0f);
		uint8_t L_13 = ___pixel0;
		// float adjv = v * uvspany;
		float L_14 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(((float)((float)(((float)L_13)/(255.0f)))), L_14));
		// return (float)(uvRect.yMin + adjv);
		float L_15;
		L_15 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_0), NULL);
		float L_16 = V_2;
		return ((float)((float)il2cpp_codegen_add(L_15, L_16)));
	}
}
// UnityEngine.Texture2D TextureUV::GenerateTextureTile(Parser/Tr2Level)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureUV_GenerateTextureTile_mAE797E7EE2E711618F408414C169526763EF695F (Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E* ___leveldata0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6C8D70287ED4A45381206005181E0923043AA20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F* V_2 = NULL;
	float V_3 = 0.0f;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	int32_t V_5 = 0;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_6 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint16_t V_10 = 0;
	int32_t V_11 = 0;
	Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE* V_12 = NULL;
	Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_21;
	memset((&V_21), 0, sizeof(V_21));
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_29 = NULL;
	{
		// int c16_index = 0;
		V_0 = 0;
		// int c16_pixel_count = 256 * 256; // pixel count optimization
		V_1 = ((int32_t)65536);
		// Color[][] ColorTable = new Color[leveldata.m_MaxTiles][];
		Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E* L_0 = ___leveldata0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___m_MaxTiles_67;
		ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F* L_2 = (ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F*)(ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F*)SZArrayNew(ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_2 = L_2;
		// for(int tileCount = 0; tileCount < leveldata.m_MaxTiles; tileCount++)
		V_5 = 0;
		goto IL_0308;
	}

IL_001c:
	{
		// ColorTable[tileCount] = new Color[c16_pixel_count];
		ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F* L_3 = V_2;
		int32_t L_4 = V_5;
		int32_t L_5 = V_1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)L_6);
		// for(int c = 0 ; c < c16_pixel_count; c++)
		V_9 = 0;
		goto IL_0041;
	}

IL_002b:
	{
		// ColorTable[tileCount][c] = Color.white;
		ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F* L_7 = V_2;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = V_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_12);
		// for(int c = 0 ; c < c16_pixel_count; c++)
		int32_t L_13 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0041:
	{
		// for(int c = 0 ; c < c16_pixel_count; c++)
		int32_t L_14 = V_9;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002b;
		}
	}
	{
		// ushort[] tmparr = leveldata.Textile16[tileCount].Tile;
		Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E* L_16 = ___leveldata0;
		NullCheck(L_16);
		Tr2Textile16U5BU5D_t9BC6E5F22234194ACD7B831A501FD13C69B1344F* L_17 = L_16->___Textile16_7;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Tr2Textile16_t4DB14A650BD9C53DF6B0FB9AF1BD287858CC1ECB* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = L_20->___Tile_0;
		V_6 = L_21;
		// Color[] cols = ColorTable[tileCount];
		ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F* L_22 = V_2;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_7 = L_25;
		// for(c16_index = 0 ; c16_index < c16_pixel_count; c16_index++)
		V_0 = 0;
		goto IL_00f2;
	}

IL_0063:
	{
		// ushort ucolor = tmparr[c16_index];
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_26 = V_6;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		uint16_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_10 = L_29;
		// if((ucolor & 0x8000) == 0x8000) ////optimized bit shift and & operation ((ucolor >> 15) & 0x1) == 1 with direct & (ucolor & 0x8000) == 1 operation
		uint16_t L_30 = V_10;
		if ((!(((uint32_t)((int32_t)((int32_t)L_30&((int32_t)32768)))) == ((uint32_t)((int32_t)32768)))))
		{
			goto IL_008c;
		}
	}
	{
		// cols[c16_index].a = 1.0f;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_31 = V_7;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___a_3 = (1.0f);
		goto IL_009e;
	}

IL_008c:
	{
		// cols[c16_index].a = 0.0f;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_33 = V_7;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___a_3 = (0.0f);
	}

IL_009e:
	{
		// cols[c16_index].b = (ucolor & 0x1f)  * cmult;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_35 = V_7;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		uint16_t L_37 = V_10;
		il2cpp_codegen_runtime_class_init_inline(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		float L_38 = ((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___cmult_1;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___b_2 = ((float)il2cpp_codegen_multiply(((float)((int32_t)((int32_t)L_37&((int32_t)31)))), L_38));
		// cols[c16_index].g = ((ucolor >> 5) & 0x1f) * cmult;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_39 = V_7;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		uint16_t L_41 = V_10;
		float L_42 = ((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___cmult_1;
		((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___g_1 = ((float)il2cpp_codegen_multiply(((float)((int32_t)(((int32_t)((int32_t)L_41>>5))&((int32_t)31)))), L_42));
		// cols[c16_index].r = ((ucolor >> 10) & 0x1f) * cmult;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_43 = V_7;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		uint16_t L_45 = V_10;
		float L_46 = ((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___cmult_1;
		((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___r_0 = ((float)il2cpp_codegen_multiply(((float)((int32_t)(((int32_t)((int32_t)L_45>>((int32_t)10)))&((int32_t)31)))), L_46));
		// for(c16_index = 0 ; c16_index < c16_pixel_count; c16_index++)
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00f2:
	{
		// for(c16_index = 0 ; c16_index < c16_pixel_count; c16_index++)
		int32_t L_48 = V_0;
		int32_t L_49 = V_1;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0063;
		}
	}
	{
		// int ntexObj = leveldata.ObjectTextures.Length;
		Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E* L_50 = ___leveldata0;
		NullCheck(L_50);
		Tr2ObjectTextureU5BU5D_tBD9A38FA40706121765DDA793D01F80FE3F75F21* L_51 = L_50->___ObjectTextures_32;
		NullCheck(L_51);
		V_8 = ((int32_t)(((RuntimeArray*)L_51)->max_length));
		// for(int i = 0; i < ntexObj; i++)
		V_11 = 0;
		goto IL_02f9;
	}

IL_010b:
	{
		// Parser.Tr2ObjectTexture texobj = leveldata.ObjectTextures[i];
		Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E* L_52 = ___leveldata0;
		NullCheck(L_52);
		Tr2ObjectTextureU5BU5D_tBD9A38FA40706121765DDA793D01F80FE3F75F21* L_53 = L_52->___ObjectTextures_32;
		int32_t L_54 = V_11;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_12 = L_56;
		// if(texobj.Tile == tileCount && texobj.TransparencyFlags == 0)
		Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE* L_57 = V_12;
		NullCheck(L_57);
		uint16_t L_58 = L_57->___Tile_1;
		int32_t L_59 = V_5;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_02f3;
		}
	}
	{
		Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE* L_60 = V_12;
		NullCheck(L_60);
		uint16_t L_61 = L_60->___TransparencyFlags_0;
		if (L_61)
		{
			goto IL_02f3;
		}
	}
	{
		// Parser.Tr2ObjectTextureVertex[] vertices =  texobj.Vertices;
		Tr2ObjectTexture_tA8509A6FDD4C545CB2DB18578FB034DDB749EDCE* L_62 = V_12;
		NullCheck(L_62);
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_63 = L_62->___Vertices_2;
		V_13 = L_63;
		// int minxi = vertices[0].Xpixel;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_64 = V_13;
		NullCheck(L_64);
		int32_t L_65 = 0;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		uint8_t L_67 = L_66->___Xpixel_1;
		V_14 = L_67;
		// int maxxi = vertices[0].Xpixel;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_68 = V_13;
		NullCheck(L_68);
		int32_t L_69 = 0;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		uint8_t L_71 = L_70->___Xpixel_1;
		V_15 = L_71;
		// int minyi = vertices[0].Ypixel;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_72 = V_13;
		NullCheck(L_72);
		int32_t L_73 = 0;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		uint8_t L_75 = L_74->___Ypixel_3;
		V_16 = L_75;
		// int maxyi = vertices[0].Ypixel;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_76 = V_13;
		NullCheck(L_76);
		int32_t L_77 = 0;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		uint8_t L_79 = L_78->___Ypixel_3;
		V_17 = L_79;
		// for(int v = 0; v < vertices.Length - 1; v++)
		V_18 = 0;
		goto IL_01d8;
	}

IL_016a:
	{
		// if(vertices[v].Xcoordinate < minxi)
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_80 = V_13;
		int32_t L_81 = V_18;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		uint8_t L_84 = L_83->___Xcoordinate_0;
		int32_t L_85 = V_14;
		if ((((int32_t)L_84) >= ((int32_t)L_85)))
		{
			goto IL_0184;
		}
	}
	{
		// minxi = vertices[v].Xpixel;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_86 = V_13;
		int32_t L_87 = V_18;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_89);
		uint8_t L_90 = L_89->___Xpixel_1;
		V_14 = L_90;
	}

IL_0184:
	{
		// if(vertices[v].Xcoordinate > maxxi)
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_91 = V_13;
		int32_t L_92 = V_18;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		uint8_t L_95 = L_94->___Xcoordinate_0;
		int32_t L_96 = V_15;
		if ((((int32_t)L_95) <= ((int32_t)L_96)))
		{
			goto IL_019e;
		}
	}
	{
		// maxxi = vertices[v].Xpixel;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_97 = V_13;
		int32_t L_98 = V_18;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_100);
		uint8_t L_101 = L_100->___Xpixel_1;
		V_15 = L_101;
	}

IL_019e:
	{
		// if(vertices[v].Ycoordinate < minyi)
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_102 = V_13;
		int32_t L_103 = V_18;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_105);
		uint8_t L_106 = L_105->___Ycoordinate_2;
		int32_t L_107 = V_16;
		if ((((int32_t)L_106) >= ((int32_t)L_107)))
		{
			goto IL_01b8;
		}
	}
	{
		// minyi = vertices[v].Ypixel;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_108 = V_13;
		int32_t L_109 = V_18;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		uint8_t L_112 = L_111->___Ypixel_3;
		V_16 = L_112;
	}

IL_01b8:
	{
		// if(vertices[v].Ycoordinate > maxyi)
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_113 = V_13;
		int32_t L_114 = V_18;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_116);
		uint8_t L_117 = L_116->___Ycoordinate_2;
		int32_t L_118 = V_17;
		if ((((int32_t)L_117) <= ((int32_t)L_118)))
		{
			goto IL_01d2;
		}
	}
	{
		// maxyi = vertices[v].Ypixel;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_119 = V_13;
		int32_t L_120 = V_18;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		uint8_t L_123 = L_122->___Ypixel_3;
		V_17 = L_123;
	}

IL_01d2:
	{
		// for(int v = 0; v < vertices.Length - 1; v++)
		int32_t L_124 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_01d8:
	{
		// for(int v = 0; v < vertices.Length - 1; v++)
		int32_t L_125 = V_18;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_126 = V_13;
		NullCheck(L_126);
		if ((((int32_t)L_125) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_126)->max_length)), 1)))))
		{
			goto IL_016a;
		}
	}
	{
		// if(vertices.Length < 4)
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_127 = V_13;
		NullCheck(L_127);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_127)->max_length))) >= ((int32_t)4)))
		{
			goto IL_02af;
		}
	}
	{
		// Vector3 p0 = new Vector3(vertices[0].Xpixel,  0, vertices[0].Ypixel );
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_128 = V_13;
		NullCheck(L_128);
		int32_t L_129 = 0;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_130);
		uint8_t L_131 = L_130->___Xpixel_1;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_132 = V_13;
		NullCheck(L_132);
		int32_t L_133 = 0;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		NullCheck(L_134);
		uint8_t L_135 = L_134->___Ypixel_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_19), ((float)L_131), (0.0f), ((float)L_135), NULL);
		// Vector3 p1 = new Vector3(vertices[1].Xpixel,  0, vertices[1].Ypixel );
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_136 = V_13;
		NullCheck(L_136);
		int32_t L_137 = 1;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_138);
		uint8_t L_139 = L_138->___Xpixel_1;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_140 = V_13;
		NullCheck(L_140);
		int32_t L_141 = 1;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_142);
		uint8_t L_143 = L_142->___Ypixel_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_20), ((float)L_139), (0.0f), ((float)L_143), NULL);
		// Vector3 p2 = new Vector3(vertices[2].Xpixel,  0, vertices[2].Ypixel );
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_144 = V_13;
		NullCheck(L_144);
		int32_t L_145 = 2;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		NullCheck(L_146);
		uint8_t L_147 = L_146->___Xpixel_1;
		Tr2ObjectTextureVertexU5BU5D_tA33A13CB9FA6220214EA37BAA4E7A83B1598F6E8* L_148 = V_13;
		NullCheck(L_148);
		int32_t L_149 = 2;
		Tr2ObjectTextureVertex_t4518313851EC7E44A2BB1C82E7A447110E00991D* L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		NullCheck(L_150);
		uint8_t L_151 = L_150->___Ypixel_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_21), ((float)L_147), (0.0f), ((float)L_151), NULL);
		// for(int y = minyi; y < maxyi; y++)
		int32_t L_152 = V_16;
		V_22 = L_152;
		goto IL_02a7;
	}

IL_0252:
	{
		// for(int x = minxi; x < maxxi; x++)
		int32_t L_153 = V_14;
		V_23 = L_153;
		goto IL_029b;
	}

IL_0258:
	{
		// if(IsUVInSide( p2, p1,p0, new Vector3(x,0, y) ))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = V_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155 = V_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = V_19;
		int32_t L_157 = V_23;
		int32_t L_158 = V_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		memset((&L_159), 0, sizeof(L_159));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_159), ((float)L_157), (0.0f), ((float)L_158), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		bool L_160;
		L_160 = TextureUV_IsUVInSide_m9CC989FF7849979669171BFAF134ECA9C45B3048(L_154, L_155, L_156, L_159, NULL);
		if (!L_160)
		{
			goto IL_0295;
		}
	}
	{
		// int idx = y * 256 + x;
		int32_t L_161 = V_22;
		int32_t L_162 = V_23;
		V_24 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_161, ((int32_t)256))), L_162));
		// cols[idx].a = 1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_163 = V_7;
		int32_t L_164 = V_24;
		NullCheck(L_163);
		((L_163)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_164)))->___a_3 = (1.0f);
	}

IL_0295:
	{
		// for(int x = minxi; x < maxxi; x++)
		int32_t L_165 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_029b:
	{
		// for(int x = minxi; x < maxxi; x++)
		int32_t L_166 = V_23;
		int32_t L_167 = V_15;
		if ((((int32_t)L_166) < ((int32_t)L_167)))
		{
			goto IL_0258;
		}
	}
	{
		// for(int y = minyi; y < maxyi; y++)
		int32_t L_168 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_02a7:
	{
		// for(int y = minyi; y < maxyi; y++)
		int32_t L_169 = V_22;
		int32_t L_170 = V_17;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0252;
		}
	}
	{
		goto IL_02f3;
	}

IL_02af:
	{
		// for(int y = minyi; y < maxyi; y++)
		int32_t L_171 = V_16;
		V_25 = L_171;
		goto IL_02ed;
	}

IL_02b5:
	{
		// for(int x = minxi; x < maxxi; x++)
		int32_t L_172 = V_14;
		V_26 = L_172;
		goto IL_02e1;
	}

IL_02bb:
	{
		// int idx = y * 256 + x;
		int32_t L_173 = V_25;
		int32_t L_174 = V_26;
		V_27 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_173, ((int32_t)256))), L_174));
		// cols[idx].a = 1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_175 = V_7;
		int32_t L_176 = V_27;
		NullCheck(L_175);
		((L_175)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_176)))->___a_3 = (1.0f);
		// for(int x = minxi; x < maxxi; x++)
		int32_t L_177 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_177, 1));
	}

IL_02e1:
	{
		// for(int x = minxi; x < maxxi; x++)
		int32_t L_178 = V_26;
		int32_t L_179 = V_15;
		if ((((int32_t)L_178) < ((int32_t)L_179)))
		{
			goto IL_02bb;
		}
	}
	{
		// for(int y = minyi; y < maxyi; y++)
		int32_t L_180 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_180, 1));
	}

IL_02ed:
	{
		// for(int y = minyi; y < maxyi; y++)
		int32_t L_181 = V_25;
		int32_t L_182 = V_17;
		if ((((int32_t)L_181) < ((int32_t)L_182)))
		{
			goto IL_02b5;
		}
	}

IL_02f3:
	{
		// for(int i = 0; i < ntexObj; i++)
		int32_t L_183 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_183, 1));
	}

IL_02f9:
	{
		// for(int i = 0; i < ntexObj; i++)
		int32_t L_184 = V_11;
		int32_t L_185 = V_8;
		if ((((int32_t)L_184) < ((int32_t)L_185)))
		{
			goto IL_010b;
		}
	}
	{
		// for(int tileCount = 0; tileCount < leveldata.m_MaxTiles; tileCount++)
		int32_t L_186 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_186, 1));
	}

IL_0308:
	{
		// for(int tileCount = 0; tileCount < leveldata.m_MaxTiles; tileCount++)
		int32_t L_187 = V_5;
		Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E* L_188 = ___leveldata0;
		NullCheck(L_188);
		int32_t L_189 = L_188->___m_MaxTiles_67;
		if ((((int32_t)L_187) < ((int32_t)L_189)))
		{
			goto IL_001c;
		}
	}
	{
		// float uvlength = 1.0f/ (float)(leveldata.m_MaxTiles); //bug fixed: used leveldata.m_MaxTiles instead of hardcoded value 16
		Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E* L_190 = ___leveldata0;
		NullCheck(L_190);
		int32_t L_191 = L_190->___m_MaxTiles_67;
		V_3 = ((float)((1.0f)/((float)L_191)));
		// uvRects = new Rect[leveldata.m_MaxTiles];
		Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E* L_192 = ___leveldata0;
		NullCheck(L_192);
		int32_t L_193 = L_192->___m_MaxTiles_67;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_194 = (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*)(RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*)SZArrayNew(RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993_il2cpp_TypeInfo_var, (uint32_t)L_193);
		il2cpp_codegen_runtime_class_init_inline(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___uvRects_0 = L_194;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___uvRects_0), (void*)L_194);
		// Texture2D tex = new Texture2D (256, 256 * leveldata.m_MaxTiles, TextureFormat.ARGB32,false,true);
		Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E* L_195 = ___leveldata0;
		NullCheck(L_195);
		int32_t L_196 = L_195->___m_MaxTiles_67;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_197 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_197);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_197, ((int32_t)256), ((int32_t)il2cpp_codegen_multiply(((int32_t)256), L_196)), 5, (bool)0, (bool)1, NULL);
		V_4 = L_197;
		// tex.filterMode  = FilterMode.Bilinear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_198 = V_4;
		NullCheck(L_198);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_198, 1, NULL);
		// tex.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_199 = V_4;
		NullCheck(L_199);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_199, 1, NULL);
		// tex.anisoLevel = 9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_200 = V_4;
		NullCheck(L_200);
		Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F(L_200, ((int32_t)9), NULL);
		// for (int t = 0; t < leveldata.m_MaxTiles; t++)
		V_28 = 0;
		goto IL_03b6;
	}

IL_036c:
	{
		// Color[] cols = ColorTable[t];
		ColorU5BU5DU5BU5D_tB01C021D6A49B4720087D84E09D3CE1CA679702F* L_201 = V_2;
		int32_t L_202 = V_28;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		V_29 = L_204;
		// uvRects[t] = new Rect(0, uvlength * t, 1, uvlength);  //distorted uv error : reason careless uv stting
		il2cpp_codegen_runtime_class_init_inline(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_205 = ((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___uvRects_0;
		int32_t L_206 = V_28;
		float L_207 = V_3;
		int32_t L_208 = V_28;
		float L_209 = V_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_210;
		memset((&L_210), 0, sizeof(L_210));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_210), (0.0f), ((float)il2cpp_codegen_multiply(L_207, ((float)L_208))), (1.0f), L_209, /*hidden argument*/NULL);
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(L_206), (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D)L_210);
		// tex.SetPixels(0, 256 * t, 256, 256, cols, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_211 = V_4;
		int32_t L_212 = V_28;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_213 = V_29;
		NullCheck(L_211);
		Texture2D_SetPixels_m7085A95BA8F173C79C2F198DB456FC2A2B460466(L_211, 0, ((int32_t)il2cpp_codegen_multiply(((int32_t)256), L_212)), ((int32_t)256), ((int32_t)256), L_213, 0, NULL);
		// for (int t = 0; t < leveldata.m_MaxTiles; t++)
		int32_t L_214 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_214, 1));
	}

IL_03b6:
	{
		// for (int t = 0; t < leveldata.m_MaxTiles; t++)
		int32_t L_215 = V_28;
		Tr2Level_t66672E2B08B71CDA524FEED0ACF534AC58F0458E* L_216 = ___leveldata0;
		NullCheck(L_216);
		int32_t L_217 = L_216->___m_MaxTiles_67;
		if ((((int32_t)L_215) < ((int32_t)L_217)))
		{
			goto IL_036c;
		}
	}
	{
		// tex.Apply(true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_218 = V_4;
		NullCheck(L_218);
		Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3(L_218, (bool)1, NULL);
		// tex.name = "texAtlas";
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_219 = V_4;
		NullCheck(L_219);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_219, _stringLiteralD6C8D70287ED4A45381206005181E0923043AA20, NULL);
		// tex.hideFlags = 0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_220 = V_4;
		NullCheck(L_220);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_220, 0, NULL);
		// return tex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_221 = V_4;
		return L_221;
	}
}
// System.Boolean TextureUV::IsUVInSide(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureUV_IsUVInSide_m9CC989FF7849979669171BFAF134ECA9C45B3048 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p22, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___test_point3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Vector3 vec1 = (p1 - p0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___p11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___p00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector3 vec2 = (p2 - p1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___p22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___p11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// Vector3 vec3 = (p0 - p2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___p00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___p22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_7, NULL);
		V_2 = L_8;
		// Vector3 in1 = Vector3.Cross(Vector3.up, vec1.normalized).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_9, L_10, NULL);
		V_5 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		// Vector3 in2 = Vector3.Cross(Vector3.up, vec2.normalized).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_13, L_14, NULL);
		V_5 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		V_3 = L_16;
		// Vector3 in3 = Vector3.Cross(Vector3.up, vec3.normalized).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_17, L_18, NULL);
		V_5 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		V_4 = L_20;
		// if(Vector3.Dot(in1,(test_point - p0).normalized ) < 0) return false;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___test_point3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___p00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_21, L_22, NULL);
		V_5 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_25;
		L_25 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_12, L_24, NULL);
		if ((!(((float)L_25) < ((float)(0.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		// if(Vector3.Dot(in1,(test_point - p0).normalized ) < 0) return false;
		return (bool)0;
	}

IL_0087:
	{
		// if(Vector3.Dot(in2,(test_point - p1).normalized ) < 0) return false;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___test_point3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___p11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_27, L_28, NULL);
		V_5 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_31;
		L_31 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_26, L_30, NULL);
		if ((!(((float)L_31) < ((float)(0.0f)))))
		{
			goto IL_00a6;
		}
	}
	{
		// if(Vector3.Dot(in2,(test_point - p1).normalized ) < 0) return false;
		return (bool)0;
	}

IL_00a6:
	{
		// if(Vector3.Dot(in3,(test_point - p2).normalized ) < 0) return false;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___test_point3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___p22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_33, L_34, NULL);
		V_5 = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_37;
		L_37 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_32, L_36, NULL);
		if ((!(((float)L_37) < ((float)(0.0f)))))
		{
			goto IL_00c6;
		}
	}
	{
		// if(Vector3.Dot(in3,(test_point - p2).normalized ) < 0) return false;
		return (bool)0;
	}

IL_00c6:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void TextureUV::generateBumpMap(UnityEngine.Texture2D,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUV_generateBumpMap_m482511C24F024994A611F6F5F3FB655C26699502 (TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___baseMap0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___bumpMap1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	{
		// Color[] colors = baseMap.GetPixels(0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___baseMap0;
		NullCheck(L_0);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1;
		L_1 = Texture2D_GetPixels_m0800ED94C5A4931622ECD9449F2F66EBD0875036(L_0, 0, NULL);
		V_0 = L_1;
		// Color[] bumpColor = bumpMap.GetPixels(0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___bumpMap1;
		NullCheck(L_2);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3;
		L_3 = Texture2D_GetPixels_m0800ED94C5A4931622ECD9449F2F66EBD0875036(L_2, 0, NULL);
		V_1 = L_3;
		// Color csum = Vector4.zero;;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline(L_4, NULL);
		V_2 = L_5;
		// int colorAdr = 0;
		V_3 = 0;
		// int w = baseMap.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___baseMap0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		V_4 = L_7;
		// int h = baseMap.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___baseMap0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		V_5 = L_9;
		// int emboss_w = 3 ;
		V_6 = 3;
		// int emboss_h = 3;
		V_7 = 3;
		// int emboss_sum=1;
		V_8 = 1;
		// int[] emboss_filter = new int [emboss_w * emboss_h] ;
		int32_t L_10 = V_6;
		int32_t L_11 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_10, L_11)));
		V_9 = L_12;
		// emboss_filter[0] = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_9;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		// emboss_filter[1] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_9;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)0);
		// emboss_filter[3] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_9;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)0);
		// emboss_filter[4] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_9;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		// emboss_filter[5] = -1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_9;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)(-1));
		// emboss_filter[6] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_9;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)0);
		// emboss_filter[4] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_9;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)0);
		// emboss_filter[5] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_9;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)0);
		// emboss_filter[6] = -1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_9;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)(-1));
		// for(int i=1;i< w-1;i++)  //convert ImagesToGray scale
		V_10 = 1;
		goto IL_0108;
	}

IL_0077:
	{
		// for(int j=1;j< h-1;j++)
		V_11 = 1;
		goto IL_00f7;
	}

IL_007c:
	{
		// colorAdr = w * j + i;
		int32_t L_22 = V_4;
		int32_t L_23 = V_11;
		int32_t L_24 = V_10;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_22, L_23)), L_24));
		// Color color = colors[colorAdr];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_25 = V_0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_12 = L_28;
		// float gray = (color.r + color.g + color.b) / 3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_12;
		float L_30 = L_29.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_12;
		float L_32 = L_31.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = V_12;
		float L_34 = L_33.___b_2;
		V_13 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_30, L_32)), L_34))/(3.0f)));
		// if(gray < 0)
		float L_35 = V_13;
		if ((!(((float)L_35) < ((float)(0.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		// gray = 0;
		V_13 = (0.0f);
	}

IL_00bd:
	{
		// if(gray > 1)
		float L_36 = V_13;
		if ((!(((float)L_36) > ((float)(1.0f)))))
		{
			goto IL_00cd;
		}
	}
	{
		// gray = 1;
		V_13 = (1.0f);
	}

IL_00cd:
	{
		// color.r = gray;
		float L_37 = V_13;
		(&V_12)->___r_0 = L_37;
		// color.g = gray;
		float L_38 = V_13;
		(&V_12)->___g_1 = L_38;
		// color.b = gray;
		float L_39 = V_13;
		(&V_12)->___b_2 = L_39;
		// colors[colorAdr] = color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_40 = V_0;
		int32_t L_41 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = V_12;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_42);
		// for(int j=1;j< h-1;j++)
		int32_t L_43 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00f7:
	{
		// for(int j=1;j< h-1;j++)
		int32_t L_44 = V_11;
		int32_t L_45 = V_5;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_45, 1)))))
		{
			goto IL_007c;
		}
	}
	{
		// for(int i=1;i< w-1;i++)  //convert ImagesToGray scale
		int32_t L_46 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0108:
	{
		// for(int i=1;i< w-1;i++)  //convert ImagesToGray scale
		int32_t L_47 = V_10;
		int32_t L_48 = V_4;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_48, 1)))))
		{
			goto IL_0077;
		}
	}
	{
		// colorAdr = 0;
		V_3 = 0;
		// for(int i=1;i< w-1;i++)  //embos
		V_14 = 1;
		goto IL_023a;
	}

IL_011d:
	{
		// for(int j=1;j< h-1;j++)
		V_15 = 1;
		goto IL_0229;
	}

IL_0125:
	{
		// csum = Vector4.zero;;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_49;
		L_49 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50;
		L_50 = Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline(L_49, NULL);
		V_2 = L_50;
		// colorAdr = w * j + i;
		int32_t L_51 = V_4;
		int32_t L_52 = V_15;
		int32_t L_53 = V_14;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_51, L_52)), L_53));
		// for(int k=0;k<emboss_w;k++)
		V_16 = 0;
		goto IL_019f;
	}

IL_013e:
	{
		// for(int l=0;l<emboss_h;l++)
		V_17 = 0;
		goto IL_0193;
	}

IL_0143:
	{
		// int m = i-((emboss_w-1)>>1) + k;
		int32_t L_54 = V_14;
		int32_t L_55 = V_6;
		int32_t L_56 = V_16;
		V_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_54, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_55, 1))>>1)))), L_56));
		// int n = j-((emboss_h-1)>>1) + l;
		int32_t L_57 = V_15;
		int32_t L_58 = V_7;
		int32_t L_59 = V_17;
		V_19 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_57, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_58, 1))>>1)))), L_59));
		// int picColorAdr = w * n + m;
		int32_t L_60 = V_4;
		int32_t L_61 = V_19;
		int32_t L_62 = V_18;
		V_20 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_60, L_61)), L_62));
		// int filter_idx =  emboss_w * l +  k;
		int32_t L_63 = V_6;
		int32_t L_64 = V_17;
		int32_t L_65 = V_16;
		V_21 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_63, L_64)), L_65));
		// csum+= colors[picColorAdr] * emboss_filter[filter_idx];
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66 = V_2;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_67 = V_0;
		int32_t L_68 = V_20;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = V_9;
		int32_t L_72 = V_21;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		int32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_75;
		L_75 = Color_op_Multiply_m290BA7F5157DE3322801AAC7FA1700219EE6E664_inline(L_70, ((float)L_74), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_76;
		L_76 = Color_op_Addition_m39AF1619A5E6C1F698EEF20FA5FE6F3288902AAB_inline(L_66, L_75, NULL);
		V_2 = L_76;
		// for(int l=0;l<emboss_h;l++)
		int32_t L_77 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0193:
	{
		// for(int l=0;l<emboss_h;l++)
		int32_t L_78 = V_17;
		int32_t L_79 = V_7;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_0143;
		}
	}
	{
		// for(int k=0;k<emboss_w;k++)
		int32_t L_80 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_019f:
	{
		// for(int k=0;k<emboss_w;k++)
		int32_t L_81 = V_16;
		int32_t L_82 = V_6;
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_013e;
		}
	}
	{
		// csum /= emboss_sum;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_83 = V_2;
		int32_t L_84 = V_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85;
		L_85 = Color_op_Division_m1C9D39C3D4B9AC3343E08D0ED4DD64E33D40A5FF_inline(L_83, ((float)L_84), NULL);
		V_2 = L_85;
		// if(csum.r < 0)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_86 = V_2;
		float L_87 = L_86.___r_0;
		if ((!(((float)L_87) < ((float)(0.0f)))))
		{
			goto IL_01c7;
		}
	}
	{
		// csum = Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_88;
		L_88 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89;
		L_89 = Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline(L_88, NULL);
		V_2 = L_89;
	}

IL_01c7:
	{
		// if(csum.r >1)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_90 = V_2;
		float L_91 = L_90.___r_0;
		if ((!(((float)L_91) > ((float)(1.0f)))))
		{
			goto IL_01df;
		}
	}
	{
		// csum = Vector4.one;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_92;
		L_92 = Vector4_get_one_m141F5123C4052CC703B41E5892A4AC26C59D36EE_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_93;
		L_93 = Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline(L_92, NULL);
		V_2 = L_93;
	}

IL_01df:
	{
		// bumpColor[colorAdr] = csum;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_94 = V_1;
		int32_t L_95 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_96 = V_2;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_96);
		// bumpColor[colorAdr].r = bumpColor[colorAdr].r * 0.5f;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_97 = V_1;
		int32_t L_98 = V_3;
		NullCheck(L_97);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_99 = V_1;
		int32_t L_100 = V_3;
		NullCheck(L_99);
		float L_101 = ((L_99)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_100)))->___r_0;
		((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_98)))->___r_0 = ((float)il2cpp_codegen_multiply(L_101, (0.5f)));
		// bumpColor[colorAdr].g = bumpColor[colorAdr].g  * 0.5f;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_102 = V_1;
		int32_t L_103 = V_3;
		NullCheck(L_102);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_104 = V_1;
		int32_t L_105 = V_3;
		NullCheck(L_104);
		float L_106 = ((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105)))->___g_1;
		((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_103)))->___g_1 = ((float)il2cpp_codegen_multiply(L_106, (0.5f)));
		// for(int j=1;j< h-1;j++)
		int32_t L_107 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_0229:
	{
		// for(int j=1;j< h-1;j++)
		int32_t L_108 = V_15;
		int32_t L_109 = V_5;
		if ((((int32_t)L_108) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_109, 1)))))
		{
			goto IL_0125;
		}
	}
	{
		// for(int i=1;i< w-1;i++)  //embos
		int32_t L_110 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_023a:
	{
		// for(int i=1;i< w-1;i++)  //embos
		int32_t L_111 = V_14;
		int32_t L_112 = V_4;
		if ((((int32_t)L_111) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_112, 1)))))
		{
			goto IL_011d;
		}
	}
	{
		// bumpMap.SetPixels(0,0,w,h,bumpColor);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_113 = ___bumpMap1;
		int32_t L_114 = V_4;
		int32_t L_115 = V_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_116 = V_1;
		NullCheck(L_113);
		Texture2D_SetPixels_mDB995CC94B081D08FC97B93CED45A80F45EB2237(L_113, 0, 0, L_114, L_115, L_116, NULL);
		// bumpMap.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_117 = ___bumpMap1;
		NullCheck(L_117);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_117, NULL);
		// }
		return;
	}
}
// System.Void TextureUV::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUV__ctor_m17119CC6DB6B464885F734C90A1DA7A43647E9A7 (TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TextureUV::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUV__cctor_m70A6913118CE7769C0CAB8362986BF1EB7E9D17F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Rect[] uvRects = null;
		((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___uvRects_0 = (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___uvRects_0), (void*)(RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*)NULL);
		// static float cmult = 0.032258064516129f;
		((TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_StaticFields*)il2cpp_codegen_static_fields_for(TextureUV_t0FBD818E4D60CF26E939088F5416CD0A2E8DF8F3_il2cpp_TypeInfo_var))->___cmult_1 = (0.0322580636f);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] Zip::UnzipData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Zip_UnzipData_m65C56ACE614D1B66D46DE883CDDE3F9AD4574E0C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressedData0, const RuntimeMethod* method) 
{
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Void Zip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_mD0E27F478986596BF061140A0834B6533142AD8C (Zip_t52BFB71E575125BEA84BBC235406418E20171865* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings__ctor_m9C18F49609E02B355BA4A50F27DC0987754E453C (Settings_t238E6F7D65D376985A1E92357A35537B90034B36* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Settings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings__cctor_m200F221005E160167EEBCB82235640DF5E0036BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A2D1D4CC384A8AE89CB2C5B2DF27053E1F8B626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral272A36C20C0554EF8120339F2A57BD3AC8B959A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C110D5081E326AF8BD47C108DCBD481AA3C97C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool ShowObjectID = false;         // Marks all movable tr2 object with ID in scene
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___ShowObjectID_0 = (bool)0;
		// public static bool ForceOpenAllDoors = true;    //Force open all doors in level
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___ForceOpenAllDoors_1 = (bool)1;
		// public static bool ForceDisableAllBoulder = false;  //Force disable all boulder in level
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___ForceDisableAllBoulder_2 = (bool)0;
		// public static bool EnableIndoorShadow = false;     //If enabled indoor objects will cast shadow
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___EnableIndoorShadow_3 = (bool)0;
		// public static bool PlatformUnityPro = true;       //If enabled Unity Pro features will be used,
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___PlatformUnityPro_4 = (bool)1;
		// public static float DayNightTimeSpeed = 0.1f;   //Must be >=0
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___DayNightTimeSpeed_5 = (0.100000001f);
		// public static float DayLightIntensity = 0.65f;      //Controls amount of day light
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___DayLightIntensity_6 = (0.649999976f);
		// public static bool LoadLevelFileFromUrl = false; //If enabled system will load level from url
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___LoadLevelFileFromUrl_7 = (bool)0;
		// public static string LevelFileUrl = "https://raw.githubusercontent.com/andrewsyc/Tomb-Raider-1-2-3-4-5-Map-viewer-and-levels/master/Tomb-Raider-2/10-The-Deck.TR2";
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___LevelFileUrl_8 = _stringLiteral1A2D1D4CC384A8AE89CB2C5B2DF27053E1F8B626;
		Il2CppCodeGenWriteBarrier((void**)(&((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___LevelFileUrl_8), (void*)_stringLiteral1A2D1D4CC384A8AE89CB2C5B2DF27053E1F8B626);
		// public static string LevelFileLocalPath = "Custom Demo Files/HILTOP.TR2";
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___LevelFileLocalPath_9 = _stringLiteral272A36C20C0554EF8120339F2A57BD3AC8B959A2;
		Il2CppCodeGenWriteBarrier((void**)(&((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___LevelFileLocalPath_9), (void*)_stringLiteral272A36C20C0554EF8120339F2A57BD3AC8B959A2);
		// public static string DefaultTR2FileExtension = "TR2";
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___DefaultTR2FileExtension_10 = _stringLiteral40C110D5081E326AF8BD47C108DCBD481AA3C97C;
		Il2CppCodeGenWriteBarrier((void**)(&((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___DefaultTR2FileExtension_10), (void*)_stringLiteral40C110D5081E326AF8BD47C108DCBD481AA3C97C);
		// public static bool LoadDemoLevel = false;
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___LoadDemoLevel_11 = (bool)0;
		// public static float SceneScaling = 0.0009765625f; //Scaling support for GI and Physics in Unity 5 and higher
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___SceneScaling_12 = (0.0009765625f);
		// public static bool bUseFirstPersonCamera = true; // Set it true for first person VR view, otherwise set it false for third person view.
		((Settings_t238E6F7D65D376985A1E92357A35537B90034B36_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t238E6F7D65D376985A1E92357A35537B90034B36_il2cpp_TypeInfo_var))->___bUseFirstPersonCamera_13 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyIdleDelegate_Invoke_m142A99FC68C4317BBC49737586B08E9D341BAAB4_inline (KeyIdleDelegate_t2115F2178789471FBD062F883E9C4AD82506D51D* __this, int32_t ___statecode0, float ___time1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___statecode0, ___time1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyDownDelegate_Invoke_mC994B89E34C9B2BF3932606A2627DB97A77B70B8_inline (KeyDownDelegate_tB41BB4A73449E8F3CFF9DABBF09AA7E827369A63* __this, int32_t ___statecode0, int32_t ___otherkey1, float ___time2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___statecode0, ___otherkey1, ___time2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseMoveDelegate_Invoke_mD1436E0A7FBF055B9D923DE7BA78255E9A6B293C_inline (MouseMoveDelegate_tB8AF231CED98E2E81C204DE3BECB5C982267B8C8* __this, float ___dx0, float ___dy1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___dx0, ___dy1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___v0;
		float L_7 = L_6.___w_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m290BA7F5157DE3322801AAC7FA1700219EE6E664_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_m39AF1619A5E6C1F698EEF20FA5FE6F3288902AAB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___b1;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___a0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___b1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___a0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___b1;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Division_m1C9D39C3D4B9AC3343E08D0ED4DD64E33D40A5FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m141F5123C4052CC703B41E5892A4AC26C59D36EE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
