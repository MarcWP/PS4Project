#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// TankManager[]
struct TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Readme/Section[]
struct SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraControl
struct CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Controllers
struct Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GamePad
struct GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// Readme
struct Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// ShellExplosion
struct ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// TankHealth
struct TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D;
// TankManager
struct TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4;
// TankMovement
struct TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599;
// TankShooting
struct TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UIDirectionControl
struct UIDirectionControl_tECC3378DDA8680C906E2AB48F91B0633ACEED72A;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// GameManager/<GameLoop>d__15
struct U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8;
// GameManager/<RoundEnding>d__18
struct U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499;
// GameManager/<RoundPlaying>d__17
struct U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF;
// GameManager/<RoundStarting>d__16
struct U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC;
// GamePad/PS4GamePad
struct PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* ConnectionType_t163DFA9541299AB9014B41C174697914273BE984_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A07339A5ED96FD1C8AE180C0A822F1BA9814DC1;
IL2CPP_EXTERN_C String_t* _stringLiteral10539AFF080575158FF59DAAF82A21DB17238F7E;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral13E7FA31BA64BDECCAC519BDC6BF3C97B97F34A6;
IL2CPP_EXTERN_C String_t* _stringLiteral15ABA1A04898BEFC8B3C8918C10803CACA669ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral183A346CDAE081A0E74A8954A4B888A022B7C7E9;
IL2CPP_EXTERN_C String_t* _stringLiteral19C88932F064A58F5F57489BB8FF0D9D3017A1D4;
IL2CPP_EXTERN_C String_t* _stringLiteral1B6658CA3B80D45827FCC748D54619DB418D629C;
IL2CPP_EXTERN_C String_t* _stringLiteral2606A978F4F4A2EB62267E2BDD53D6BF22980FDE;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral26763404460309E36106FECF953C482CAF722112;
IL2CPP_EXTERN_C String_t* _stringLiteral29E2966D0E1AB1F3DEC4F9E13E57F2A4BF5FCDFB;
IL2CPP_EXTERN_C String_t* _stringLiteral3121F4EA919BD7976BB5856491462E90D66428C2;
IL2CPP_EXTERN_C String_t* _stringLiteral3CCC5CB927385C64B3B9E28D708EB03B2DA33B88;
IL2CPP_EXTERN_C String_t* _stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650;
IL2CPP_EXTERN_C String_t* _stringLiteral3EAABB10DFAAA5FA152F11D2AE659D0E21E46E96;
IL2CPP_EXTERN_C String_t* _stringLiteral402134D870C3F0047AB99361E2DDC423B6F82576;
IL2CPP_EXTERN_C String_t* _stringLiteral498E487803BB211FC9A6BBBB3ADD9D99E15C4883;
IL2CPP_EXTERN_C String_t* _stringLiteral4DF02CC179648FFE0838FF3E005ED3DEF8E3A63F;
IL2CPP_EXTERN_C String_t* _stringLiteral524AC3D656313F4716695AFC1E85AE886B442FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5573710B8953082DA17162DADFB1773BD0EF062C;
IL2CPP_EXTERN_C String_t* _stringLiteral572C6131D9D9D8E98ED5F025FFBD0AE23D0AE4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral5849406CB0359EBB2BF0C9EC773644263F12D833;
IL2CPP_EXTERN_C String_t* _stringLiteral5BD549AE22A4C61843C940FF9E3E147B2F8D30E9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BFF9D192ADABEB1F4DD3A9E279E9D3BC4E13F84;
IL2CPP_EXTERN_C String_t* _stringLiteral6756C5175BD121CFC86BC9E08021E9AB244D609F;
IL2CPP_EXTERN_C String_t* _stringLiteral6BA9601CDD4A40F35F1F5E500F83CC1A34057835;
IL2CPP_EXTERN_C String_t* _stringLiteral6E9EC18B5FFDB2A772026FEF0DDB12C8C98FD2BC;
IL2CPP_EXTERN_C String_t* _stringLiteral76A1C7AD33F9768CA4C6CFFE8ADCEEBE2A4BFEA3;
IL2CPP_EXTERN_C String_t* _stringLiteral7F26800153F630E25522FBD5ECC060447A3B843F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8494E7DD24349CF16B459E1B64D5C30E7B8AB7CB;
IL2CPP_EXTERN_C String_t* _stringLiteral8639BF0C35BFDED6F42E2F7D2D031CBC01D47CED;
IL2CPP_EXTERN_C String_t* _stringLiteral8A89AD8B087506F088189004B84329EF6DBA261D;
IL2CPP_EXTERN_C String_t* _stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F;
IL2CPP_EXTERN_C String_t* _stringLiteral8DCCF28863FB75CA952413194726B046FC870BFE;
IL2CPP_EXTERN_C String_t* _stringLiteral8F42E093D2571F88017BD94256B6068ABA67F449;
IL2CPP_EXTERN_C String_t* _stringLiteral8FDD20A9411072477A2D3B6967AA1240E17FCECC;
IL2CPP_EXTERN_C String_t* _stringLiteral93579F2A086E7AA1D741596C3DBFFDCC18D07165;
IL2CPP_EXTERN_C String_t* _stringLiteral992D49221BC846BE48260C7957DAE6B52729D74B;
IL2CPP_EXTERN_C String_t* _stringLiteral99324149E8EB3E8830C77A4A6E053C50CFAE8818;
IL2CPP_EXTERN_C String_t* _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE;
IL2CPP_EXTERN_C String_t* _stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B;
IL2CPP_EXTERN_C String_t* _stringLiteral9E3CBD8B2158507744DAD13D0506FFD46790096D;
IL2CPP_EXTERN_C String_t* _stringLiteralA11232FC2419BD7BE0957389C089E101C29690AD;
IL2CPP_EXTERN_C String_t* _stringLiteralA2085729353EAEB87B3AB05409A69B023603596C;
IL2CPP_EXTERN_C String_t* _stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615;
IL2CPP_EXTERN_C String_t* _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26;
IL2CPP_EXTERN_C String_t* _stringLiteralA931A104C7AF739BD2055FAB572E898E5AA7C285;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C20B66F9813851492DEF3CB110453FE7945EB8;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB502A186982A83A6C402B5753C1120061504E6EB;
IL2CPP_EXTERN_C String_t* _stringLiteralBC88469E30C109AAFC7DFB7E31E888D4C7D2694D;
IL2CPP_EXTERN_C String_t* _stringLiteralBE5CADE7F03CCA72C2B5D832150C16347A715414;
IL2CPP_EXTERN_C String_t* _stringLiteralC8AE229D8EAEF3FEF4EB3A5C18AEFE69D6BD814C;
IL2CPP_EXTERN_C String_t* _stringLiteralCB16CF578A6A12E62BDDAD02D5BD8A17875ADEFF;
IL2CPP_EXTERN_C String_t* _stringLiteralCBD83646D0436CCA851EAA996BA3BB4C61FEF661;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralCC03AFCC04F597D440D4CAA85BBBC4BED32615E2;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC5EE8464FCC788E958678A646AC764603CF523;
IL2CPP_EXTERN_C String_t* _stringLiteralCD9A2FEFFA086C692C1B2F412B10BF86FEFC1670;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralD92D9B768E3E3338FB4D21C2C00D404E10AA8F07;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB76DECE8512D57CB727FDB8622766F2BF0422B9;
IL2CPP_EXTERN_C String_t* _stringLiteralDBB9A1698C46426EE577A5E7E5643C626D347AAA;
IL2CPP_EXTERN_C String_t* _stringLiteralE31DB28384D4853CFBEFCFCAE89511C5B197EC42;
IL2CPP_EXTERN_C String_t* _stringLiteralE4C2E5A8771C766F8101945858E660AD06031BFF;
IL2CPP_EXTERN_C String_t* _stringLiteralE5307EE7691F4BBD9F168F2596FDD977A1F31D71;
IL2CPP_EXTERN_C String_t* _stringLiteralE8915A289290AE14222DF772103F122F964DB398;
IL2CPP_EXTERN_C String_t* _stringLiteralE8CD13DF0D8EB319F218C826B22309CDE929DD46;
IL2CPP_EXTERN_C String_t* _stringLiteralEADF45F71013474B1FB752205DD20C0BDE4BDBD1;
IL2CPP_EXTERN_C String_t* _stringLiteralEED5289FDD07FBB3080C38E212A9D00C278D3133;
IL2CPP_EXTERN_C String_t* _stringLiteralEF0A502425FA0D348F2C6584564DD87DDFCCA168;
IL2CPP_EXTERN_C String_t* _stringLiteralF462408793CBF80CA4037B91BB9708BBDC87C0E9;
IL2CPP_EXTERN_C String_t* _stringLiteralF93C2A5FE7E5BA1377DA212FA24D43D4E8646B17;
IL2CPP_EXTERN_C String_t* _stringLiteralF9778556E8B8660B62FD786EC613E4ACDDF026B5;
IL2CPP_EXTERN_C String_t* _stringLiteralFE466BCF72607B1CCBE609ABD5153ED89BCB93FE;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTankHealth_t7D14A640811B1F82EA71579E99BB69821601874D_m970D10B7B87229667C5C6A45CAE35EF35271D422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE8E3AB003154C947DBEF250ABB188375407EAD07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m538EA9E269978336C890E5FA90908BF7249AB395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599_mF417BB6B76C4384B4C3619B24B3B63D6FBCC0836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C_mD4C46F2AF1F5665818175DCD1D0EBC6D3B643B98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m37C5016444DB54041F938EA344271762E17600C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mF87D5A03374483FF8ECD2C74C732C5259BC11706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameLoopU3Ed__15_System_Collections_IEnumerator_Reset_m9C7A935CB8047FBCAC9343A98E0341660711683B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoundEndingU3Ed__18_System_Collections_IEnumerator_Reset_mB06521A743109714D2B7E99F3088D3EECE9B9F99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoundPlayingU3Ed__17_System_Collections_IEnumerator_Reset_m3BB71EC5F741D53A9FC9079A33A8D709AF4F5CB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoundStartingU3Ed__16_System_Collections_IEnumerator_Reset_m372F572C1C91EED5FE1E8E160B327AD6A6239EE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.GUIContent
struct  GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Image_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tooltip_2), (void*)value);
	}
};

struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Text_3)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Text_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Image_4)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Image_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TextImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___none_6)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_none_6() const { return ___none_6; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GameManager/<GameLoop>d__15
struct  U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<GameLoop>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<GameLoop>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<GameLoop>d__15::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameManager/<RoundEnding>d__18
struct  U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<RoundEnding>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<RoundEnding>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<RoundEnding>d__18::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameManager/<RoundPlaying>d__17
struct  U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<RoundPlaying>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<RoundPlaying>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<RoundPlaying>d__17::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameManager/<RoundStarting>d__16
struct  U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<RoundStarting>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<RoundStarting>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<RoundStarting>d__16::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GamePad/PS4GamePad
struct  PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327  : public RuntimeObject
{
public:
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::thumbstickLeft
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___thumbstickLeft_0;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::thumbstickRight
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___thumbstickRight_1;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::cross
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___cross_2;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::circle
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___circle_3;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::triangle
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___triangle_4;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::square
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___square_5;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::dpadDown
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___dpadDown_6;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::dpadRight
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___dpadRight_7;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::dpadUp
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___dpadUp_8;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::dpadLeft
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___dpadLeft_9;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::L1
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___L1_10;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::L2
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___L2_11;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::R1
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___R1_12;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::R2
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___R2_13;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::lightbar
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___lightbar_14;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::options
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___options_15;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::speaker
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___speaker_16;
	// UnityEngine.SpriteRenderer GamePad/PS4GamePad::touchpad
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___touchpad_17;
	// UnityEngine.Transform GamePad/PS4GamePad::gyro
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gyro_18;
	// UnityEngine.TextMesh GamePad/PS4GamePad::text
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___text_19;
	// UnityEngine.Light GamePad/PS4GamePad::light
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___light_20;

public:
	inline static int32_t get_offset_of_thumbstickLeft_0() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___thumbstickLeft_0)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_thumbstickLeft_0() const { return ___thumbstickLeft_0; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_thumbstickLeft_0() { return &___thumbstickLeft_0; }
	inline void set_thumbstickLeft_0(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___thumbstickLeft_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbstickLeft_0), (void*)value);
	}

	inline static int32_t get_offset_of_thumbstickRight_1() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___thumbstickRight_1)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_thumbstickRight_1() const { return ___thumbstickRight_1; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_thumbstickRight_1() { return &___thumbstickRight_1; }
	inline void set_thumbstickRight_1(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___thumbstickRight_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbstickRight_1), (void*)value);
	}

	inline static int32_t get_offset_of_cross_2() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___cross_2)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_cross_2() const { return ___cross_2; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_cross_2() { return &___cross_2; }
	inline void set_cross_2(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___cross_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cross_2), (void*)value);
	}

	inline static int32_t get_offset_of_circle_3() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___circle_3)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_circle_3() const { return ___circle_3; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_circle_3() { return &___circle_3; }
	inline void set_circle_3(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___circle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___circle_3), (void*)value);
	}

	inline static int32_t get_offset_of_triangle_4() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___triangle_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_triangle_4() const { return ___triangle_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_triangle_4() { return &___triangle_4; }
	inline void set_triangle_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___triangle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangle_4), (void*)value);
	}

	inline static int32_t get_offset_of_square_5() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___square_5)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_square_5() const { return ___square_5; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_square_5() { return &___square_5; }
	inline void set_square_5(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___square_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___square_5), (void*)value);
	}

	inline static int32_t get_offset_of_dpadDown_6() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___dpadDown_6)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_dpadDown_6() const { return ___dpadDown_6; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_dpadDown_6() { return &___dpadDown_6; }
	inline void set_dpadDown_6(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___dpadDown_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dpadDown_6), (void*)value);
	}

	inline static int32_t get_offset_of_dpadRight_7() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___dpadRight_7)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_dpadRight_7() const { return ___dpadRight_7; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_dpadRight_7() { return &___dpadRight_7; }
	inline void set_dpadRight_7(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___dpadRight_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dpadRight_7), (void*)value);
	}

	inline static int32_t get_offset_of_dpadUp_8() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___dpadUp_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_dpadUp_8() const { return ___dpadUp_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_dpadUp_8() { return &___dpadUp_8; }
	inline void set_dpadUp_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___dpadUp_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dpadUp_8), (void*)value);
	}

	inline static int32_t get_offset_of_dpadLeft_9() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___dpadLeft_9)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_dpadLeft_9() const { return ___dpadLeft_9; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_dpadLeft_9() { return &___dpadLeft_9; }
	inline void set_dpadLeft_9(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___dpadLeft_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dpadLeft_9), (void*)value);
	}

	inline static int32_t get_offset_of_L1_10() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___L1_10)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_L1_10() const { return ___L1_10; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_L1_10() { return &___L1_10; }
	inline void set_L1_10(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___L1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___L1_10), (void*)value);
	}

	inline static int32_t get_offset_of_L2_11() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___L2_11)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_L2_11() const { return ___L2_11; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_L2_11() { return &___L2_11; }
	inline void set_L2_11(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___L2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___L2_11), (void*)value);
	}

	inline static int32_t get_offset_of_R1_12() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___R1_12)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_R1_12() const { return ___R1_12; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_R1_12() { return &___R1_12; }
	inline void set_R1_12(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___R1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___R1_12), (void*)value);
	}

	inline static int32_t get_offset_of_R2_13() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___R2_13)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_R2_13() const { return ___R2_13; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_R2_13() { return &___R2_13; }
	inline void set_R2_13(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___R2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___R2_13), (void*)value);
	}

	inline static int32_t get_offset_of_lightbar_14() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___lightbar_14)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_lightbar_14() const { return ___lightbar_14; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_lightbar_14() { return &___lightbar_14; }
	inline void set_lightbar_14(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___lightbar_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightbar_14), (void*)value);
	}

	inline static int32_t get_offset_of_options_15() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___options_15)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_options_15() const { return ___options_15; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_options_15() { return &___options_15; }
	inline void set_options_15(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___options_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_15), (void*)value);
	}

	inline static int32_t get_offset_of_speaker_16() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___speaker_16)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_speaker_16() const { return ___speaker_16; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_speaker_16() { return &___speaker_16; }
	inline void set_speaker_16(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___speaker_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speaker_16), (void*)value);
	}

	inline static int32_t get_offset_of_touchpad_17() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___touchpad_17)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_touchpad_17() const { return ___touchpad_17; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_touchpad_17() { return &___touchpad_17; }
	inline void set_touchpad_17(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___touchpad_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchpad_17), (void*)value);
	}

	inline static int32_t get_offset_of_gyro_18() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___gyro_18)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gyro_18() const { return ___gyro_18; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gyro_18() { return &___gyro_18; }
	inline void set_gyro_18(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gyro_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gyro_18), (void*)value);
	}

	inline static int32_t get_offset_of_text_19() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___text_19)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_text_19() const { return ___text_19; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_text_19() { return &___text_19; }
	inline void set_text_19(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___text_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_19), (void*)value);
	}

	inline static int32_t get_offset_of_light_20() { return static_cast<int32_t>(offsetof(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327, ___light_20)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_light_20() const { return ___light_20; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_light_20() { return &___light_20; }
	inline void set_light_20(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___light_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___light_20), (void*)value);
	}
};


// Readme/Section
struct  Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/MainModule
struct  MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.GUIStyleState
struct  GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct  RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// TankManager
struct  TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4  : public RuntimeObject
{
public:
	// UnityEngine.Color TankManager::m_PlayerColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PlayerColor_0;
	// UnityEngine.Transform TankManager::m_SpawnPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_SpawnPoint_1;
	// System.Int32 TankManager::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.String TankManager::m_ColoredPlayerText
	String_t* ___m_ColoredPlayerText_3;
	// UnityEngine.GameObject TankManager::m_Instance
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Instance_4;
	// System.Int32 TankManager::m_Wins
	int32_t ___m_Wins_5;
	// TankMovement TankManager::m_Movement
	TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * ___m_Movement_6;
	// TankShooting TankManager::m_Shooting
	TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * ___m_Shooting_7;
	// UnityEngine.GameObject TankManager::m_CanvasGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CanvasGameObject_8;

public:
	inline static int32_t get_offset_of_m_PlayerColor_0() { return static_cast<int32_t>(offsetof(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4, ___m_PlayerColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PlayerColor_0() const { return ___m_PlayerColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PlayerColor_0() { return &___m_PlayerColor_0; }
	inline void set_m_PlayerColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PlayerColor_0 = value;
	}

	inline static int32_t get_offset_of_m_SpawnPoint_1() { return static_cast<int32_t>(offsetof(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4, ___m_SpawnPoint_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_SpawnPoint_1() const { return ___m_SpawnPoint_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_SpawnPoint_1() { return &___m_SpawnPoint_1; }
	inline void set_m_SpawnPoint_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_SpawnPoint_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SpawnPoint_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerNumber_2() { return static_cast<int32_t>(offsetof(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4, ___m_PlayerNumber_2)); }
	inline int32_t get_m_PlayerNumber_2() const { return ___m_PlayerNumber_2; }
	inline int32_t* get_address_of_m_PlayerNumber_2() { return &___m_PlayerNumber_2; }
	inline void set_m_PlayerNumber_2(int32_t value)
	{
		___m_PlayerNumber_2 = value;
	}

	inline static int32_t get_offset_of_m_ColoredPlayerText_3() { return static_cast<int32_t>(offsetof(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4, ___m_ColoredPlayerText_3)); }
	inline String_t* get_m_ColoredPlayerText_3() const { return ___m_ColoredPlayerText_3; }
	inline String_t** get_address_of_m_ColoredPlayerText_3() { return &___m_ColoredPlayerText_3; }
	inline void set_m_ColoredPlayerText_3(String_t* value)
	{
		___m_ColoredPlayerText_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColoredPlayerText_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4, ___m_Instance_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Wins_5() { return static_cast<int32_t>(offsetof(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4, ___m_Wins_5)); }
	inline int32_t get_m_Wins_5() const { return ___m_Wins_5; }
	inline int32_t* get_address_of_m_Wins_5() { return &___m_Wins_5; }
	inline void set_m_Wins_5(int32_t value)
	{
		___m_Wins_5 = value;
	}

	inline static int32_t get_offset_of_m_Movement_6() { return static_cast<int32_t>(offsetof(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4, ___m_Movement_6)); }
	inline TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * get_m_Movement_6() const { return ___m_Movement_6; }
	inline TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 ** get_address_of_m_Movement_6() { return &___m_Movement_6; }
	inline void set_m_Movement_6(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * value)
	{
		___m_Movement_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Movement_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Shooting_7() { return static_cast<int32_t>(offsetof(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4, ___m_Shooting_7)); }
	inline TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * get_m_Shooting_7() const { return ___m_Shooting_7; }
	inline TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C ** get_address_of_m_Shooting_7() { return &___m_Shooting_7; }
	inline void set_m_Shooting_7(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * value)
	{
		___m_Shooting_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Shooting_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasGameObject_8() { return static_cast<int32_t>(offsetof(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4, ___m_CanvasGameObject_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CanvasGameObject_8() const { return ___m_CanvasGameObject_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CanvasGameObject_8() { return &___m_CanvasGameObject_8; }
	inline void set_m_CanvasGameObject_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CanvasGameObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGameObject_8), (void*)value);
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PS4.PS4Input/ConnectionType
struct  ConnectionType_t163DFA9541299AB9014B41C174697914273BE984 
{
public:
	// System.Int32 UnityEngine.PS4.PS4Input/ConnectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionType_t163DFA9541299AB9014B41C174697914273BE984, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PS4.PS4Input/OnlineStatus
struct  OnlineStatus_tE8C9CF8A1508B589FCBD0776B38639B3A7016D07 
{
public:
	// System.Int32 UnityEngine.PS4.PS4Input/OnlineStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OnlineStatus_tE8C9CF8A1508B589FCBD0776B38639B3A7016D07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUIStyle
struct  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.PS4.PS4Input/LoggedInUser
struct  LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE 
{
public:
	// System.Int32 UnityEngine.PS4.PS4Input/LoggedInUser::status
	int32_t ___status_0;
	// System.Boolean UnityEngine.PS4.PS4Input/LoggedInUser::primaryUser
	bool ___primaryUser_1;
	// System.Int32 UnityEngine.PS4.PS4Input/LoggedInUser::userId
	int32_t ___userId_2;
	// System.Int32 UnityEngine.PS4.PS4Input/LoggedInUser::color
	int32_t ___color_3;
	// System.String UnityEngine.PS4.PS4Input/LoggedInUser::userName
	String_t* ___userName_4;
	// System.Int32 UnityEngine.PS4.PS4Input/LoggedInUser::padHandle
	int32_t ___padHandle_5;
	// System.Int32 UnityEngine.PS4.PS4Input/LoggedInUser::aimHandle
	int32_t ___aimHandle_6;
	// System.Int32 UnityEngine.PS4.PS4Input/LoggedInUser::move0Handle
	int32_t ___move0Handle_7;
	// System.Int32 UnityEngine.PS4.PS4Input/LoggedInUser::move1Handle
	int32_t ___move1Handle_8;
	// System.UInt64 UnityEngine.PS4.PS4Input/LoggedInUser::accountId
	uint64_t ___accountId_9;
	// UnityEngine.PS4.PS4Input/OnlineStatus UnityEngine.PS4.PS4Input/LoggedInUser::onlineStatus
	int32_t ___onlineStatus_10;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_primaryUser_1() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___primaryUser_1)); }
	inline bool get_primaryUser_1() const { return ___primaryUser_1; }
	inline bool* get_address_of_primaryUser_1() { return &___primaryUser_1; }
	inline void set_primaryUser_1(bool value)
	{
		___primaryUser_1 = value;
	}

	inline static int32_t get_offset_of_userId_2() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___userId_2)); }
	inline int32_t get_userId_2() const { return ___userId_2; }
	inline int32_t* get_address_of_userId_2() { return &___userId_2; }
	inline void set_userId_2(int32_t value)
	{
		___userId_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___color_3)); }
	inline int32_t get_color_3() const { return ___color_3; }
	inline int32_t* get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(int32_t value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_userName_4() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___userName_4)); }
	inline String_t* get_userName_4() const { return ___userName_4; }
	inline String_t** get_address_of_userName_4() { return &___userName_4; }
	inline void set_userName_4(String_t* value)
	{
		___userName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userName_4), (void*)value);
	}

	inline static int32_t get_offset_of_padHandle_5() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___padHandle_5)); }
	inline int32_t get_padHandle_5() const { return ___padHandle_5; }
	inline int32_t* get_address_of_padHandle_5() { return &___padHandle_5; }
	inline void set_padHandle_5(int32_t value)
	{
		___padHandle_5 = value;
	}

	inline static int32_t get_offset_of_aimHandle_6() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___aimHandle_6)); }
	inline int32_t get_aimHandle_6() const { return ___aimHandle_6; }
	inline int32_t* get_address_of_aimHandle_6() { return &___aimHandle_6; }
	inline void set_aimHandle_6(int32_t value)
	{
		___aimHandle_6 = value;
	}

	inline static int32_t get_offset_of_move0Handle_7() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___move0Handle_7)); }
	inline int32_t get_move0Handle_7() const { return ___move0Handle_7; }
	inline int32_t* get_address_of_move0Handle_7() { return &___move0Handle_7; }
	inline void set_move0Handle_7(int32_t value)
	{
		___move0Handle_7 = value;
	}

	inline static int32_t get_offset_of_move1Handle_8() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___move1Handle_8)); }
	inline int32_t get_move1Handle_8() const { return ___move1Handle_8; }
	inline int32_t* get_address_of_move1Handle_8() { return &___move1Handle_8; }
	inline void set_move1Handle_8(int32_t value)
	{
		___move1Handle_8 = value;
	}

	inline static int32_t get_offset_of_accountId_9() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___accountId_9)); }
	inline uint64_t get_accountId_9() const { return ___accountId_9; }
	inline uint64_t* get_address_of_accountId_9() { return &___accountId_9; }
	inline void set_accountId_9(uint64_t value)
	{
		___accountId_9 = value;
	}

	inline static int32_t get_offset_of_onlineStatus_10() { return static_cast<int32_t>(offsetof(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE, ___onlineStatus_10)); }
	inline int32_t get_onlineStatus_10() const { return ___onlineStatus_10; }
	inline int32_t* get_address_of_onlineStatus_10() { return &___onlineStatus_10; }
	inline void set_onlineStatus_10(int32_t value)
	{
		___onlineStatus_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PS4.PS4Input/LoggedInUser
struct LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE_marshaled_pinvoke
{
	int32_t ___status_0;
	int32_t ___primaryUser_1;
	int32_t ___userId_2;
	int32_t ___color_3;
	char* ___userName_4;
	int32_t ___padHandle_5;
	int32_t ___aimHandle_6;
	int32_t ___move0Handle_7;
	int32_t ___move1Handle_8;
	uint64_t ___accountId_9;
	int32_t ___onlineStatus_10;
};
// Native definition for COM marshalling of UnityEngine.PS4.PS4Input/LoggedInUser
struct LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE_marshaled_com
{
	int32_t ___status_0;
	int32_t ___primaryUser_1;
	int32_t ___userId_2;
	int32_t ___color_3;
	Il2CppChar* ___userName_4;
	int32_t ___padHandle_5;
	int32_t ___aimHandle_6;
	int32_t ___move0Handle_7;
	int32_t ___move1Handle_8;
	uint64_t ___accountId_9;
	int32_t ___onlineStatus_10;
};

// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.GUISkin
struct  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_31;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderMixed_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_SliderMixed_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SliderMixed_18() const { return ___m_SliderMixed_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SliderMixed_18() { return &___m_SliderMixed_18; }
	inline void set_m_SliderMixed_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SliderMixed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderMixed_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_19() const { return ___m_horizontalScrollbar_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_19() { return &___m_horizontalScrollbar_19; }
	inline void set_m_horizontalScrollbar_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_20() const { return ___m_horizontalScrollbarThumb_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_20() { return &___m_horizontalScrollbarThumb_20; }
	inline void set_m_horizontalScrollbarThumb_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_21() const { return ___m_horizontalScrollbarLeftButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_21() { return &___m_horizontalScrollbarLeftButton_21; }
	inline void set_m_horizontalScrollbarLeftButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_22() const { return ___m_horizontalScrollbarRightButton_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_22() { return &___m_horizontalScrollbarRightButton_22; }
	inline void set_m_horizontalScrollbarRightButton_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_23() const { return ___m_verticalScrollbar_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_23() { return &___m_verticalScrollbar_23; }
	inline void set_m_verticalScrollbar_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_24() const { return ___m_verticalScrollbarThumb_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_24() { return &___m_verticalScrollbarThumb_24; }
	inline void set_m_verticalScrollbarThumb_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_25() const { return ___m_verticalScrollbarUpButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_25() { return &___m_verticalScrollbarUpButton_25; }
	inline void set_m_verticalScrollbarUpButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_26() const { return ___m_verticalScrollbarDownButton_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_26() { return &___m_verticalScrollbarDownButton_26; }
	inline void set_m_verticalScrollbarDownButton_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_27)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_27() const { return ___m_ScrollView_27; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_27() { return &___m_ScrollView_27; }
	inline void set_m_ScrollView_27(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_28)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_28() const { return ___m_CustomStyles_28; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_28() { return &___m_CustomStyles_28; }
	inline void set_m_CustomStyles_28(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_29)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_29() const { return ___m_Settings_29; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_29() { return &___m_Settings_29; }
	inline void set_m_Settings_29(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_31)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_31() const { return ___m_Styles_31; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_31() { return &___m_Styles_31; }
	inline void set_m_Styles_31(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_31), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_33;

public:
	inline static int32_t get_offset_of_ms_Error_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_30)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_30() const { return ___ms_Error_30; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_30() { return &___ms_Error_30; }
	inline void set_ms_Error_30(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_32)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_32() const { return ___m_SkinChanged_32; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_32() { return &___m_SkinChanged_32; }
	inline void set_m_SkinChanged_32(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_current_33() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_33)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_33() const { return ___current_33; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_33() { return &___current_33; }
	inline void set_current_33(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_33), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Readme
struct  Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___icon_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_icon_4() const { return ___icon_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___sections_6)); }
	inline SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.Light
struct  Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// CameraControl
struct  CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CameraControl::m_DampTime
	float ___m_DampTime_4;
	// System.Single CameraControl::m_ScreenEdgeBuffer
	float ___m_ScreenEdgeBuffer_5;
	// System.Single CameraControl::m_MinSize
	float ___m_MinSize_6;
	// UnityEngine.Transform[] CameraControl::m_Targets
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___m_Targets_7;
	// UnityEngine.Camera CameraControl::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_8;
	// System.Single CameraControl::m_ZoomSpeed
	float ___m_ZoomSpeed_9;
	// UnityEngine.Vector3 CameraControl::m_MoveVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_MoveVelocity_10;
	// UnityEngine.Vector3 CameraControl::m_DesiredPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_DesiredPosition_11;

public:
	inline static int32_t get_offset_of_m_DampTime_4() { return static_cast<int32_t>(offsetof(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5, ___m_DampTime_4)); }
	inline float get_m_DampTime_4() const { return ___m_DampTime_4; }
	inline float* get_address_of_m_DampTime_4() { return &___m_DampTime_4; }
	inline void set_m_DampTime_4(float value)
	{
		___m_DampTime_4 = value;
	}

	inline static int32_t get_offset_of_m_ScreenEdgeBuffer_5() { return static_cast<int32_t>(offsetof(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5, ___m_ScreenEdgeBuffer_5)); }
	inline float get_m_ScreenEdgeBuffer_5() const { return ___m_ScreenEdgeBuffer_5; }
	inline float* get_address_of_m_ScreenEdgeBuffer_5() { return &___m_ScreenEdgeBuffer_5; }
	inline void set_m_ScreenEdgeBuffer_5(float value)
	{
		___m_ScreenEdgeBuffer_5 = value;
	}

	inline static int32_t get_offset_of_m_MinSize_6() { return static_cast<int32_t>(offsetof(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5, ___m_MinSize_6)); }
	inline float get_m_MinSize_6() const { return ___m_MinSize_6; }
	inline float* get_address_of_m_MinSize_6() { return &___m_MinSize_6; }
	inline void set_m_MinSize_6(float value)
	{
		___m_MinSize_6 = value;
	}

	inline static int32_t get_offset_of_m_Targets_7() { return static_cast<int32_t>(offsetof(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5, ___m_Targets_7)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_m_Targets_7() const { return ___m_Targets_7; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_m_Targets_7() { return &___m_Targets_7; }
	inline void set_m_Targets_7(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___m_Targets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Targets_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_8() { return static_cast<int32_t>(offsetof(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5, ___m_Camera_8)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_8() const { return ___m_Camera_8; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_8() { return &___m_Camera_8; }
	inline void set_m_Camera_8(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ZoomSpeed_9() { return static_cast<int32_t>(offsetof(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5, ___m_ZoomSpeed_9)); }
	inline float get_m_ZoomSpeed_9() const { return ___m_ZoomSpeed_9; }
	inline float* get_address_of_m_ZoomSpeed_9() { return &___m_ZoomSpeed_9; }
	inline void set_m_ZoomSpeed_9(float value)
	{
		___m_ZoomSpeed_9 = value;
	}

	inline static int32_t get_offset_of_m_MoveVelocity_10() { return static_cast<int32_t>(offsetof(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5, ___m_MoveVelocity_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_MoveVelocity_10() const { return ___m_MoveVelocity_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_MoveVelocity_10() { return &___m_MoveVelocity_10; }
	inline void set_m_MoveVelocity_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_MoveVelocity_10 = value;
	}

	inline static int32_t get_offset_of_m_DesiredPosition_11() { return static_cast<int32_t>(offsetof(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5, ___m_DesiredPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_DesiredPosition_11() const { return ___m_DesiredPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_DesiredPosition_11() { return &___m_DesiredPosition_11; }
	inline void set_m_DesiredPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_DesiredPosition_11 = value;
	}
};


// Controllers
struct  Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32[] Controllers::handles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___handles_4;
	// System.Int32 Controllers::numHandles
	int32_t ___numHandles_5;
	// System.Int32 Controllers::maxControllers
	int32_t ___maxControllers_6;
	// System.Int32 Controllers::sectionPadding
	int32_t ___sectionPadding_7;
	// System.Int32 Controllers::internalPadding
	int32_t ___internalPadding_8;
	// UnityEngine.Texture2D Controllers::boxTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___boxTexture_9;
	// UnityEngine.Texture2D Controllers::fingerTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___fingerTexture_10;
	// UnityEngine.Vector2 Controllers::fingerTextureOrigin
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___fingerTextureOrigin_11;

public:
	inline static int32_t get_offset_of_handles_4() { return static_cast<int32_t>(offsetof(Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128, ___handles_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_handles_4() const { return ___handles_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_handles_4() { return &___handles_4; }
	inline void set_handles_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___handles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handles_4), (void*)value);
	}

	inline static int32_t get_offset_of_numHandles_5() { return static_cast<int32_t>(offsetof(Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128, ___numHandles_5)); }
	inline int32_t get_numHandles_5() const { return ___numHandles_5; }
	inline int32_t* get_address_of_numHandles_5() { return &___numHandles_5; }
	inline void set_numHandles_5(int32_t value)
	{
		___numHandles_5 = value;
	}

	inline static int32_t get_offset_of_maxControllers_6() { return static_cast<int32_t>(offsetof(Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128, ___maxControllers_6)); }
	inline int32_t get_maxControllers_6() const { return ___maxControllers_6; }
	inline int32_t* get_address_of_maxControllers_6() { return &___maxControllers_6; }
	inline void set_maxControllers_6(int32_t value)
	{
		___maxControllers_6 = value;
	}

	inline static int32_t get_offset_of_sectionPadding_7() { return static_cast<int32_t>(offsetof(Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128, ___sectionPadding_7)); }
	inline int32_t get_sectionPadding_7() const { return ___sectionPadding_7; }
	inline int32_t* get_address_of_sectionPadding_7() { return &___sectionPadding_7; }
	inline void set_sectionPadding_7(int32_t value)
	{
		___sectionPadding_7 = value;
	}

	inline static int32_t get_offset_of_internalPadding_8() { return static_cast<int32_t>(offsetof(Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128, ___internalPadding_8)); }
	inline int32_t get_internalPadding_8() const { return ___internalPadding_8; }
	inline int32_t* get_address_of_internalPadding_8() { return &___internalPadding_8; }
	inline void set_internalPadding_8(int32_t value)
	{
		___internalPadding_8 = value;
	}

	inline static int32_t get_offset_of_boxTexture_9() { return static_cast<int32_t>(offsetof(Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128, ___boxTexture_9)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_boxTexture_9() const { return ___boxTexture_9; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_boxTexture_9() { return &___boxTexture_9; }
	inline void set_boxTexture_9(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___boxTexture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxTexture_9), (void*)value);
	}

	inline static int32_t get_offset_of_fingerTexture_10() { return static_cast<int32_t>(offsetof(Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128, ___fingerTexture_10)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_fingerTexture_10() const { return ___fingerTexture_10; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_fingerTexture_10() { return &___fingerTexture_10; }
	inline void set_fingerTexture_10(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___fingerTexture_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTexture_10), (void*)value);
	}

	inline static int32_t get_offset_of_fingerTextureOrigin_11() { return static_cast<int32_t>(offsetof(Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128, ___fingerTextureOrigin_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_fingerTextureOrigin_11() const { return ___fingerTextureOrigin_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_fingerTextureOrigin_11() { return &___fingerTextureOrigin_11; }
	inline void set_fingerTextureOrigin_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___fingerTextureOrigin_11 = value;
	}
};


// GameManager
struct  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GameManager::m_NumRoundsToWin
	int32_t ___m_NumRoundsToWin_4;
	// System.Single GameManager::m_StartDelay
	float ___m_StartDelay_5;
	// System.Single GameManager::m_EndDelay
	float ___m_EndDelay_6;
	// CameraControl GameManager::m_CameraControl
	CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * ___m_CameraControl_7;
	// UnityEngine.UI.Text GameManager::m_MessageText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_MessageText_8;
	// UnityEngine.GameObject GameManager::m_TankPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_TankPrefab_9;
	// TankManager[] GameManager::m_Tanks
	TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* ___m_Tanks_10;
	// System.Int32 GameManager::m_RoundNumber
	int32_t ___m_RoundNumber_11;
	// UnityEngine.WaitForSeconds GameManager::m_StartWait
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___m_StartWait_12;
	// UnityEngine.WaitForSeconds GameManager::m_EndWait
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___m_EndWait_13;
	// TankManager GameManager::m_RoundWinner
	TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * ___m_RoundWinner_14;
	// TankManager GameManager::m_GameWinner
	TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * ___m_GameWinner_15;

public:
	inline static int32_t get_offset_of_m_NumRoundsToWin_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_NumRoundsToWin_4)); }
	inline int32_t get_m_NumRoundsToWin_4() const { return ___m_NumRoundsToWin_4; }
	inline int32_t* get_address_of_m_NumRoundsToWin_4() { return &___m_NumRoundsToWin_4; }
	inline void set_m_NumRoundsToWin_4(int32_t value)
	{
		___m_NumRoundsToWin_4 = value;
	}

	inline static int32_t get_offset_of_m_StartDelay_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_StartDelay_5)); }
	inline float get_m_StartDelay_5() const { return ___m_StartDelay_5; }
	inline float* get_address_of_m_StartDelay_5() { return &___m_StartDelay_5; }
	inline void set_m_StartDelay_5(float value)
	{
		___m_StartDelay_5 = value;
	}

	inline static int32_t get_offset_of_m_EndDelay_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_EndDelay_6)); }
	inline float get_m_EndDelay_6() const { return ___m_EndDelay_6; }
	inline float* get_address_of_m_EndDelay_6() { return &___m_EndDelay_6; }
	inline void set_m_EndDelay_6(float value)
	{
		___m_EndDelay_6 = value;
	}

	inline static int32_t get_offset_of_m_CameraControl_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_CameraControl_7)); }
	inline CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * get_m_CameraControl_7() const { return ___m_CameraControl_7; }
	inline CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 ** get_address_of_m_CameraControl_7() { return &___m_CameraControl_7; }
	inline void set_m_CameraControl_7(CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * value)
	{
		___m_CameraControl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraControl_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageText_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_MessageText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_MessageText_8() const { return ___m_MessageText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_MessageText_8() { return &___m_MessageText_8; }
	inline void set_m_MessageText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_MessageText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageText_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TankPrefab_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_TankPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_TankPrefab_9() const { return ___m_TankPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_TankPrefab_9() { return &___m_TankPrefab_9; }
	inline void set_m_TankPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_TankPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TankPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tanks_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_Tanks_10)); }
	inline TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* get_m_Tanks_10() const { return ___m_Tanks_10; }
	inline TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F** get_address_of_m_Tanks_10() { return &___m_Tanks_10; }
	inline void set_m_Tanks_10(TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* value)
	{
		___m_Tanks_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tanks_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_RoundNumber_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_RoundNumber_11)); }
	inline int32_t get_m_RoundNumber_11() const { return ___m_RoundNumber_11; }
	inline int32_t* get_address_of_m_RoundNumber_11() { return &___m_RoundNumber_11; }
	inline void set_m_RoundNumber_11(int32_t value)
	{
		___m_RoundNumber_11 = value;
	}

	inline static int32_t get_offset_of_m_StartWait_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_StartWait_12)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_m_StartWait_12() const { return ___m_StartWait_12; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_m_StartWait_12() { return &___m_StartWait_12; }
	inline void set_m_StartWait_12(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___m_StartWait_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartWait_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_EndWait_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_EndWait_13)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_m_EndWait_13() const { return ___m_EndWait_13; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_m_EndWait_13() { return &___m_EndWait_13; }
	inline void set_m_EndWait_13(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___m_EndWait_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndWait_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_RoundWinner_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_RoundWinner_14)); }
	inline TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * get_m_RoundWinner_14() const { return ___m_RoundWinner_14; }
	inline TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 ** get_address_of_m_RoundWinner_14() { return &___m_RoundWinner_14; }
	inline void set_m_RoundWinner_14(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * value)
	{
		___m_RoundWinner_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RoundWinner_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_GameWinner_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_GameWinner_15)); }
	inline TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * get_m_GameWinner_15() const { return ___m_GameWinner_15; }
	inline TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 ** get_address_of_m_GameWinner_15() { return &___m_GameWinner_15; }
	inline void set_m_GameWinner_15(TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * value)
	{
		___m_GameWinner_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameWinner_15), (void*)value);
	}
};


// GamePad
struct  GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GamePad/PS4GamePad GamePad::gamePad
	PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * ___gamePad_4;
	// System.Int32 GamePad::playerId
	int32_t ___playerId_5;
	// UnityEngine.Transform[] GamePad::touches
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___touches_6;
	// UnityEngine.Color GamePad::inputOn
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___inputOn_7;
	// UnityEngine.Color GamePad::inputOff
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___inputOff_8;
	// System.Int32 GamePad::m_StickId
	int32_t ___m_StickId_9;
	// UnityEngine.Color GamePad::m_LightbarColour
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_LightbarColour_10;
	// System.Boolean GamePad::m_HasSetupGamepad
	bool ___m_HasSetupGamepad_11;
	// UnityEngine.PS4.PS4Input/LoggedInUser GamePad::m_LoggedInUser
	LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  ___m_LoggedInUser_12;
	// UnityEngine.PS4.PS4Input/ConnectionType GamePad::m_ConnectionType
	int32_t ___m_ConnectionType_13;
	// System.Int32 GamePad::m_TouchNum
	int32_t ___m_TouchNum_14;
	// System.Int32 GamePad::m_Touch0X
	int32_t ___m_Touch0X_15;
	// System.Int32 GamePad::m_Touch0Y
	int32_t ___m_Touch0Y_16;
	// System.Int32 GamePad::m_Touch0Id
	int32_t ___m_Touch0Id_17;
	// System.Int32 GamePad::m_Touch1X
	int32_t ___m_Touch1X_18;
	// System.Int32 GamePad::m_Touch1Y
	int32_t ___m_Touch1Y_19;
	// System.Int32 GamePad::m_Touch1Id
	int32_t ___m_Touch1Id_20;
	// System.Int32 GamePad::m_TouchResolutionX
	int32_t ___m_TouchResolutionX_21;
	// System.Int32 GamePad::m_TouchResolutionY
	int32_t ___m_TouchResolutionY_22;
	// System.Int32 GamePad::m_AnalogDeadZoneLeft
	int32_t ___m_AnalogDeadZoneLeft_23;
	// System.Int32 GamePad::m_AnalogDeadZoneRight
	int32_t ___m_AnalogDeadZoneRight_24;
	// System.Single GamePad::m_TouchPixelDensity
	float ___m_TouchPixelDensity_25;
	// System.Single GamePad::m_RmsValue
	float ___m_RmsValue_27;
	// System.Single[] GamePad::m_Samples
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Samples_28;

public:
	inline static int32_t get_offset_of_gamePad_4() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___gamePad_4)); }
	inline PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * get_gamePad_4() const { return ___gamePad_4; }
	inline PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 ** get_address_of_gamePad_4() { return &___gamePad_4; }
	inline void set_gamePad_4(PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * value)
	{
		___gamePad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gamePad_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerId_5() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___playerId_5)); }
	inline int32_t get_playerId_5() const { return ___playerId_5; }
	inline int32_t* get_address_of_playerId_5() { return &___playerId_5; }
	inline void set_playerId_5(int32_t value)
	{
		___playerId_5 = value;
	}

	inline static int32_t get_offset_of_touches_6() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___touches_6)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_touches_6() const { return ___touches_6; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_touches_6() { return &___touches_6; }
	inline void set_touches_6(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___touches_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touches_6), (void*)value);
	}

	inline static int32_t get_offset_of_inputOn_7() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___inputOn_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_inputOn_7() const { return ___inputOn_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_inputOn_7() { return &___inputOn_7; }
	inline void set_inputOn_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___inputOn_7 = value;
	}

	inline static int32_t get_offset_of_inputOff_8() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___inputOff_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_inputOff_8() const { return ___inputOff_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_inputOff_8() { return &___inputOff_8; }
	inline void set_inputOff_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___inputOff_8 = value;
	}

	inline static int32_t get_offset_of_m_StickId_9() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_StickId_9)); }
	inline int32_t get_m_StickId_9() const { return ___m_StickId_9; }
	inline int32_t* get_address_of_m_StickId_9() { return &___m_StickId_9; }
	inline void set_m_StickId_9(int32_t value)
	{
		___m_StickId_9 = value;
	}

	inline static int32_t get_offset_of_m_LightbarColour_10() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_LightbarColour_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_LightbarColour_10() const { return ___m_LightbarColour_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_LightbarColour_10() { return &___m_LightbarColour_10; }
	inline void set_m_LightbarColour_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_LightbarColour_10 = value;
	}

	inline static int32_t get_offset_of_m_HasSetupGamepad_11() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_HasSetupGamepad_11)); }
	inline bool get_m_HasSetupGamepad_11() const { return ___m_HasSetupGamepad_11; }
	inline bool* get_address_of_m_HasSetupGamepad_11() { return &___m_HasSetupGamepad_11; }
	inline void set_m_HasSetupGamepad_11(bool value)
	{
		___m_HasSetupGamepad_11 = value;
	}

	inline static int32_t get_offset_of_m_LoggedInUser_12() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_LoggedInUser_12)); }
	inline LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  get_m_LoggedInUser_12() const { return ___m_LoggedInUser_12; }
	inline LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE * get_address_of_m_LoggedInUser_12() { return &___m_LoggedInUser_12; }
	inline void set_m_LoggedInUser_12(LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  value)
	{
		___m_LoggedInUser_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LoggedInUser_12))->___userName_4), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ConnectionType_13() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_ConnectionType_13)); }
	inline int32_t get_m_ConnectionType_13() const { return ___m_ConnectionType_13; }
	inline int32_t* get_address_of_m_ConnectionType_13() { return &___m_ConnectionType_13; }
	inline void set_m_ConnectionType_13(int32_t value)
	{
		___m_ConnectionType_13 = value;
	}

	inline static int32_t get_offset_of_m_TouchNum_14() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_TouchNum_14)); }
	inline int32_t get_m_TouchNum_14() const { return ___m_TouchNum_14; }
	inline int32_t* get_address_of_m_TouchNum_14() { return &___m_TouchNum_14; }
	inline void set_m_TouchNum_14(int32_t value)
	{
		___m_TouchNum_14 = value;
	}

	inline static int32_t get_offset_of_m_Touch0X_15() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_Touch0X_15)); }
	inline int32_t get_m_Touch0X_15() const { return ___m_Touch0X_15; }
	inline int32_t* get_address_of_m_Touch0X_15() { return &___m_Touch0X_15; }
	inline void set_m_Touch0X_15(int32_t value)
	{
		___m_Touch0X_15 = value;
	}

	inline static int32_t get_offset_of_m_Touch0Y_16() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_Touch0Y_16)); }
	inline int32_t get_m_Touch0Y_16() const { return ___m_Touch0Y_16; }
	inline int32_t* get_address_of_m_Touch0Y_16() { return &___m_Touch0Y_16; }
	inline void set_m_Touch0Y_16(int32_t value)
	{
		___m_Touch0Y_16 = value;
	}

	inline static int32_t get_offset_of_m_Touch0Id_17() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_Touch0Id_17)); }
	inline int32_t get_m_Touch0Id_17() const { return ___m_Touch0Id_17; }
	inline int32_t* get_address_of_m_Touch0Id_17() { return &___m_Touch0Id_17; }
	inline void set_m_Touch0Id_17(int32_t value)
	{
		___m_Touch0Id_17 = value;
	}

	inline static int32_t get_offset_of_m_Touch1X_18() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_Touch1X_18)); }
	inline int32_t get_m_Touch1X_18() const { return ___m_Touch1X_18; }
	inline int32_t* get_address_of_m_Touch1X_18() { return &___m_Touch1X_18; }
	inline void set_m_Touch1X_18(int32_t value)
	{
		___m_Touch1X_18 = value;
	}

	inline static int32_t get_offset_of_m_Touch1Y_19() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_Touch1Y_19)); }
	inline int32_t get_m_Touch1Y_19() const { return ___m_Touch1Y_19; }
	inline int32_t* get_address_of_m_Touch1Y_19() { return &___m_Touch1Y_19; }
	inline void set_m_Touch1Y_19(int32_t value)
	{
		___m_Touch1Y_19 = value;
	}

	inline static int32_t get_offset_of_m_Touch1Id_20() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_Touch1Id_20)); }
	inline int32_t get_m_Touch1Id_20() const { return ___m_Touch1Id_20; }
	inline int32_t* get_address_of_m_Touch1Id_20() { return &___m_Touch1Id_20; }
	inline void set_m_Touch1Id_20(int32_t value)
	{
		___m_Touch1Id_20 = value;
	}

	inline static int32_t get_offset_of_m_TouchResolutionX_21() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_TouchResolutionX_21)); }
	inline int32_t get_m_TouchResolutionX_21() const { return ___m_TouchResolutionX_21; }
	inline int32_t* get_address_of_m_TouchResolutionX_21() { return &___m_TouchResolutionX_21; }
	inline void set_m_TouchResolutionX_21(int32_t value)
	{
		___m_TouchResolutionX_21 = value;
	}

	inline static int32_t get_offset_of_m_TouchResolutionY_22() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_TouchResolutionY_22)); }
	inline int32_t get_m_TouchResolutionY_22() const { return ___m_TouchResolutionY_22; }
	inline int32_t* get_address_of_m_TouchResolutionY_22() { return &___m_TouchResolutionY_22; }
	inline void set_m_TouchResolutionY_22(int32_t value)
	{
		___m_TouchResolutionY_22 = value;
	}

	inline static int32_t get_offset_of_m_AnalogDeadZoneLeft_23() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_AnalogDeadZoneLeft_23)); }
	inline int32_t get_m_AnalogDeadZoneLeft_23() const { return ___m_AnalogDeadZoneLeft_23; }
	inline int32_t* get_address_of_m_AnalogDeadZoneLeft_23() { return &___m_AnalogDeadZoneLeft_23; }
	inline void set_m_AnalogDeadZoneLeft_23(int32_t value)
	{
		___m_AnalogDeadZoneLeft_23 = value;
	}

	inline static int32_t get_offset_of_m_AnalogDeadZoneRight_24() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_AnalogDeadZoneRight_24)); }
	inline int32_t get_m_AnalogDeadZoneRight_24() const { return ___m_AnalogDeadZoneRight_24; }
	inline int32_t* get_address_of_m_AnalogDeadZoneRight_24() { return &___m_AnalogDeadZoneRight_24; }
	inline void set_m_AnalogDeadZoneRight_24(int32_t value)
	{
		___m_AnalogDeadZoneRight_24 = value;
	}

	inline static int32_t get_offset_of_m_TouchPixelDensity_25() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_TouchPixelDensity_25)); }
	inline float get_m_TouchPixelDensity_25() const { return ___m_TouchPixelDensity_25; }
	inline float* get_address_of_m_TouchPixelDensity_25() { return &___m_TouchPixelDensity_25; }
	inline void set_m_TouchPixelDensity_25(float value)
	{
		___m_TouchPixelDensity_25 = value;
	}

	inline static int32_t get_offset_of_m_RmsValue_27() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_RmsValue_27)); }
	inline float get_m_RmsValue_27() const { return ___m_RmsValue_27; }
	inline float* get_address_of_m_RmsValue_27() { return &___m_RmsValue_27; }
	inline void set_m_RmsValue_27(float value)
	{
		___m_RmsValue_27 = value;
	}

	inline static int32_t get_offset_of_m_Samples_28() { return static_cast<int32_t>(offsetof(GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7, ___m_Samples_28)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Samples_28() const { return ___m_Samples_28; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Samples_28() { return &___m_Samples_28; }
	inline void set_m_Samples_28(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Samples_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Samples_28), (void*)value);
	}
};


// ShellExplosion
struct  ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LayerMask ShellExplosion::m_TankMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_TankMask_4;
	// UnityEngine.ParticleSystem ShellExplosion::m_ExplosionParticles
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ExplosionParticles_5;
	// UnityEngine.AudioSource ShellExplosion::m_ExplosionAudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_ExplosionAudio_6;
	// System.Single ShellExplosion::m_MaxDamage
	float ___m_MaxDamage_7;
	// System.Single ShellExplosion::m_ExplosionForce
	float ___m_ExplosionForce_8;
	// System.Single ShellExplosion::m_MaxLifeTime
	float ___m_MaxLifeTime_9;
	// System.Single ShellExplosion::m_ExplosionRadius
	float ___m_ExplosionRadius_10;

public:
	inline static int32_t get_offset_of_m_TankMask_4() { return static_cast<int32_t>(offsetof(ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3, ___m_TankMask_4)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_TankMask_4() const { return ___m_TankMask_4; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_TankMask_4() { return &___m_TankMask_4; }
	inline void set_m_TankMask_4(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_TankMask_4 = value;
	}

	inline static int32_t get_offset_of_m_ExplosionParticles_5() { return static_cast<int32_t>(offsetof(ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3, ___m_ExplosionParticles_5)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ExplosionParticles_5() const { return ___m_ExplosionParticles_5; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ExplosionParticles_5() { return &___m_ExplosionParticles_5; }
	inline void set_m_ExplosionParticles_5(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ExplosionParticles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExplosionParticles_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExplosionAudio_6() { return static_cast<int32_t>(offsetof(ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3, ___m_ExplosionAudio_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_ExplosionAudio_6() const { return ___m_ExplosionAudio_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_ExplosionAudio_6() { return &___m_ExplosionAudio_6; }
	inline void set_m_ExplosionAudio_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_ExplosionAudio_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExplosionAudio_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxDamage_7() { return static_cast<int32_t>(offsetof(ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3, ___m_MaxDamage_7)); }
	inline float get_m_MaxDamage_7() const { return ___m_MaxDamage_7; }
	inline float* get_address_of_m_MaxDamage_7() { return &___m_MaxDamage_7; }
	inline void set_m_MaxDamage_7(float value)
	{
		___m_MaxDamage_7 = value;
	}

	inline static int32_t get_offset_of_m_ExplosionForce_8() { return static_cast<int32_t>(offsetof(ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3, ___m_ExplosionForce_8)); }
	inline float get_m_ExplosionForce_8() const { return ___m_ExplosionForce_8; }
	inline float* get_address_of_m_ExplosionForce_8() { return &___m_ExplosionForce_8; }
	inline void set_m_ExplosionForce_8(float value)
	{
		___m_ExplosionForce_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxLifeTime_9() { return static_cast<int32_t>(offsetof(ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3, ___m_MaxLifeTime_9)); }
	inline float get_m_MaxLifeTime_9() const { return ___m_MaxLifeTime_9; }
	inline float* get_address_of_m_MaxLifeTime_9() { return &___m_MaxLifeTime_9; }
	inline void set_m_MaxLifeTime_9(float value)
	{
		___m_MaxLifeTime_9 = value;
	}

	inline static int32_t get_offset_of_m_ExplosionRadius_10() { return static_cast<int32_t>(offsetof(ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3, ___m_ExplosionRadius_10)); }
	inline float get_m_ExplosionRadius_10() const { return ___m_ExplosionRadius_10; }
	inline float* get_address_of_m_ExplosionRadius_10() { return &___m_ExplosionRadius_10; }
	inline void set_m_ExplosionRadius_10(float value)
	{
		___m_ExplosionRadius_10 = value;
	}
};


// TankHealth
struct  TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TankHealth::m_StartingHealth
	float ___m_StartingHealth_4;
	// UnityEngine.UI.Slider TankHealth::m_Slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___m_Slider_5;
	// UnityEngine.UI.Image TankHealth::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_6;
	// UnityEngine.Color TankHealth::m_FullHealthColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_FullHealthColor_7;
	// UnityEngine.Color TankHealth::m_ZeroHealthColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ZeroHealthColor_8;
	// UnityEngine.GameObject TankHealth::m_ExplosionPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_ExplosionPrefab_9;
	// UnityEngine.AudioSource TankHealth::m_ExplosionAudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_ExplosionAudio_10;
	// UnityEngine.ParticleSystem TankHealth::m_ExplosionParticles
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ExplosionParticles_11;
	// System.Single TankHealth::m_CurrentHealth
	float ___m_CurrentHealth_12;
	// System.Boolean TankHealth::m_Dead
	bool ___m_Dead_13;

public:
	inline static int32_t get_offset_of_m_StartingHealth_4() { return static_cast<int32_t>(offsetof(TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D, ___m_StartingHealth_4)); }
	inline float get_m_StartingHealth_4() const { return ___m_StartingHealth_4; }
	inline float* get_address_of_m_StartingHealth_4() { return &___m_StartingHealth_4; }
	inline void set_m_StartingHealth_4(float value)
	{
		___m_StartingHealth_4 = value;
	}

	inline static int32_t get_offset_of_m_Slider_5() { return static_cast<int32_t>(offsetof(TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D, ___m_Slider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_m_Slider_5() const { return ___m_Slider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_m_Slider_5() { return &___m_Slider_5; }
	inline void set_m_Slider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___m_Slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Slider_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_6() { return static_cast<int32_t>(offsetof(TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D, ___m_FillImage_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_6() const { return ___m_FillImage_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_6() { return &___m_FillImage_6; }
	inline void set_m_FillImage_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_FullHealthColor_7() { return static_cast<int32_t>(offsetof(TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D, ___m_FullHealthColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_FullHealthColor_7() const { return ___m_FullHealthColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_FullHealthColor_7() { return &___m_FullHealthColor_7; }
	inline void set_m_FullHealthColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_FullHealthColor_7 = value;
	}

	inline static int32_t get_offset_of_m_ZeroHealthColor_8() { return static_cast<int32_t>(offsetof(TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D, ___m_ZeroHealthColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ZeroHealthColor_8() const { return ___m_ZeroHealthColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ZeroHealthColor_8() { return &___m_ZeroHealthColor_8; }
	inline void set_m_ZeroHealthColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ZeroHealthColor_8 = value;
	}

	inline static int32_t get_offset_of_m_ExplosionPrefab_9() { return static_cast<int32_t>(offsetof(TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D, ___m_ExplosionPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_ExplosionPrefab_9() const { return ___m_ExplosionPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_ExplosionPrefab_9() { return &___m_ExplosionPrefab_9; }
	inline void set_m_ExplosionPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_ExplosionPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExplosionPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExplosionAudio_10() { return static_cast<int32_t>(offsetof(TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D, ___m_ExplosionAudio_10)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_ExplosionAudio_10() const { return ___m_ExplosionAudio_10; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_ExplosionAudio_10() { return &___m_ExplosionAudio_10; }
	inline void set_m_ExplosionAudio_10(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_ExplosionAudio_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExplosionAudio_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExplosionParticles_11() { return static_cast<int32_t>(offsetof(TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D, ___m_ExplosionParticles_11)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ExplosionParticles_11() const { return ___m_ExplosionParticles_11; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ExplosionParticles_11() { return &___m_ExplosionParticles_11; }
	inline void set_m_ExplosionParticles_11(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ExplosionParticles_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExplosionParticles_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentHealth_12() { return static_cast<int32_t>(offsetof(TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D, ___m_CurrentHealth_12)); }
	inline float get_m_CurrentHealth_12() const { return ___m_CurrentHealth_12; }
	inline float* get_address_of_m_CurrentHealth_12() { return &___m_CurrentHealth_12; }
	inline void set_m_CurrentHealth_12(float value)
	{
		___m_CurrentHealth_12 = value;
	}

	inline static int32_t get_offset_of_m_Dead_13() { return static_cast<int32_t>(offsetof(TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D, ___m_Dead_13)); }
	inline bool get_m_Dead_13() const { return ___m_Dead_13; }
	inline bool* get_address_of_m_Dead_13() { return &___m_Dead_13; }
	inline void set_m_Dead_13(bool value)
	{
		___m_Dead_13 = value;
	}
};


// TankMovement
struct  TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 TankMovement::m_PlayerNumber
	int32_t ___m_PlayerNumber_4;
	// System.Single TankMovement::m_Speed
	float ___m_Speed_5;
	// System.Single TankMovement::m_TurnSpeed
	float ___m_TurnSpeed_6;
	// UnityEngine.AudioSource TankMovement::m_MovementAudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_MovementAudio_7;
	// UnityEngine.AudioClip TankMovement::m_EngineIdling
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_EngineIdling_8;
	// UnityEngine.AudioClip TankMovement::m_EngineDriving
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_EngineDriving_9;
	// System.Single TankMovement::m_PitchRange
	float ___m_PitchRange_10;
	// System.String TankMovement::m_MovementAxisName
	String_t* ___m_MovementAxisName_11;
	// System.String TankMovement::m_TurnAxisName
	String_t* ___m_TurnAxisName_12;
	// UnityEngine.Rigidbody TankMovement::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_13;
	// System.Single TankMovement::m_MovementInputValue
	float ___m_MovementInputValue_14;
	// System.Single TankMovement::m_TurnInputValue
	float ___m_TurnInputValue_15;
	// System.Single TankMovement::m_OriginalPitch
	float ___m_OriginalPitch_16;

public:
	inline static int32_t get_offset_of_m_PlayerNumber_4() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_PlayerNumber_4)); }
	inline int32_t get_m_PlayerNumber_4() const { return ___m_PlayerNumber_4; }
	inline int32_t* get_address_of_m_PlayerNumber_4() { return &___m_PlayerNumber_4; }
	inline void set_m_PlayerNumber_4(int32_t value)
	{
		___m_PlayerNumber_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_TurnSpeed_6() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_TurnSpeed_6)); }
	inline float get_m_TurnSpeed_6() const { return ___m_TurnSpeed_6; }
	inline float* get_address_of_m_TurnSpeed_6() { return &___m_TurnSpeed_6; }
	inline void set_m_TurnSpeed_6(float value)
	{
		___m_TurnSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_MovementAudio_7() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_MovementAudio_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_MovementAudio_7() const { return ___m_MovementAudio_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_MovementAudio_7() { return &___m_MovementAudio_7; }
	inline void set_m_MovementAudio_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_MovementAudio_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MovementAudio_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_EngineIdling_8() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_EngineIdling_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_EngineIdling_8() const { return ___m_EngineIdling_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_EngineIdling_8() { return &___m_EngineIdling_8; }
	inline void set_m_EngineIdling_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_EngineIdling_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EngineIdling_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_EngineDriving_9() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_EngineDriving_9)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_EngineDriving_9() const { return ___m_EngineDriving_9; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_EngineDriving_9() { return &___m_EngineDriving_9; }
	inline void set_m_EngineDriving_9(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_EngineDriving_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EngineDriving_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PitchRange_10() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_PitchRange_10)); }
	inline float get_m_PitchRange_10() const { return ___m_PitchRange_10; }
	inline float* get_address_of_m_PitchRange_10() { return &___m_PitchRange_10; }
	inline void set_m_PitchRange_10(float value)
	{
		___m_PitchRange_10 = value;
	}

	inline static int32_t get_offset_of_m_MovementAxisName_11() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_MovementAxisName_11)); }
	inline String_t* get_m_MovementAxisName_11() const { return ___m_MovementAxisName_11; }
	inline String_t** get_address_of_m_MovementAxisName_11() { return &___m_MovementAxisName_11; }
	inline void set_m_MovementAxisName_11(String_t* value)
	{
		___m_MovementAxisName_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MovementAxisName_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_TurnAxisName_12() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_TurnAxisName_12)); }
	inline String_t* get_m_TurnAxisName_12() const { return ___m_TurnAxisName_12; }
	inline String_t** get_address_of_m_TurnAxisName_12() { return &___m_TurnAxisName_12; }
	inline void set_m_TurnAxisName_12(String_t* value)
	{
		___m_TurnAxisName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TurnAxisName_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Rigidbody_13() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_Rigidbody_13)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_13() const { return ___m_Rigidbody_13; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_13() { return &___m_Rigidbody_13; }
	inline void set_m_Rigidbody_13(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_MovementInputValue_14() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_MovementInputValue_14)); }
	inline float get_m_MovementInputValue_14() const { return ___m_MovementInputValue_14; }
	inline float* get_address_of_m_MovementInputValue_14() { return &___m_MovementInputValue_14; }
	inline void set_m_MovementInputValue_14(float value)
	{
		___m_MovementInputValue_14 = value;
	}

	inline static int32_t get_offset_of_m_TurnInputValue_15() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_TurnInputValue_15)); }
	inline float get_m_TurnInputValue_15() const { return ___m_TurnInputValue_15; }
	inline float* get_address_of_m_TurnInputValue_15() { return &___m_TurnInputValue_15; }
	inline void set_m_TurnInputValue_15(float value)
	{
		___m_TurnInputValue_15 = value;
	}

	inline static int32_t get_offset_of_m_OriginalPitch_16() { return static_cast<int32_t>(offsetof(TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599, ___m_OriginalPitch_16)); }
	inline float get_m_OriginalPitch_16() const { return ___m_OriginalPitch_16; }
	inline float* get_address_of_m_OriginalPitch_16() { return &___m_OriginalPitch_16; }
	inline void set_m_OriginalPitch_16(float value)
	{
		___m_OriginalPitch_16 = value;
	}
};


// TankShooting
struct  TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 TankShooting::m_PlayerNumber
	int32_t ___m_PlayerNumber_4;
	// UnityEngine.Rigidbody TankShooting::m_Shell
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Shell_5;
	// UnityEngine.Transform TankShooting::m_FireTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FireTransform_6;
	// UnityEngine.UI.Slider TankShooting::m_AimSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___m_AimSlider_7;
	// UnityEngine.AudioSource TankShooting::m_ShootingAudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_ShootingAudio_8;
	// UnityEngine.AudioClip TankShooting::m_ChargingClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_ChargingClip_9;
	// UnityEngine.AudioClip TankShooting::m_FireClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_FireClip_10;
	// System.Single TankShooting::m_MinLaunchForce
	float ___m_MinLaunchForce_11;
	// System.Single TankShooting::m_MaxLaunchForce
	float ___m_MaxLaunchForce_12;
	// System.Single TankShooting::m_MaxChargeTime
	float ___m_MaxChargeTime_13;
	// System.String TankShooting::m_FireButton
	String_t* ___m_FireButton_14;
	// System.Single TankShooting::m_CurrentLaunchForce
	float ___m_CurrentLaunchForce_15;
	// System.Single TankShooting::m_ChargeSpeed
	float ___m_ChargeSpeed_16;
	// System.Boolean TankShooting::m_Fired
	bool ___m_Fired_17;

public:
	inline static int32_t get_offset_of_m_PlayerNumber_4() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_PlayerNumber_4)); }
	inline int32_t get_m_PlayerNumber_4() const { return ___m_PlayerNumber_4; }
	inline int32_t* get_address_of_m_PlayerNumber_4() { return &___m_PlayerNumber_4; }
	inline void set_m_PlayerNumber_4(int32_t value)
	{
		___m_PlayerNumber_4 = value;
	}

	inline static int32_t get_offset_of_m_Shell_5() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_Shell_5)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Shell_5() const { return ___m_Shell_5; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Shell_5() { return &___m_Shell_5; }
	inline void set_m_Shell_5(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Shell_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Shell_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FireTransform_6() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_FireTransform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FireTransform_6() const { return ___m_FireTransform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FireTransform_6() { return &___m_FireTransform_6; }
	inline void set_m_FireTransform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FireTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FireTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_AimSlider_7() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_AimSlider_7)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_m_AimSlider_7() const { return ___m_AimSlider_7; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_m_AimSlider_7() { return &___m_AimSlider_7; }
	inline void set_m_AimSlider_7(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___m_AimSlider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AimSlider_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShootingAudio_8() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_ShootingAudio_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_ShootingAudio_8() const { return ___m_ShootingAudio_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_ShootingAudio_8() { return &___m_ShootingAudio_8; }
	inline void set_m_ShootingAudio_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_ShootingAudio_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShootingAudio_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChargingClip_9() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_ChargingClip_9)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_ChargingClip_9() const { return ___m_ChargingClip_9; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_ChargingClip_9() { return &___m_ChargingClip_9; }
	inline void set_m_ChargingClip_9(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_ChargingClip_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChargingClip_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_FireClip_10() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_FireClip_10)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_FireClip_10() const { return ___m_FireClip_10; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_FireClip_10() { return &___m_FireClip_10; }
	inline void set_m_FireClip_10(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_FireClip_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FireClip_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_MinLaunchForce_11() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_MinLaunchForce_11)); }
	inline float get_m_MinLaunchForce_11() const { return ___m_MinLaunchForce_11; }
	inline float* get_address_of_m_MinLaunchForce_11() { return &___m_MinLaunchForce_11; }
	inline void set_m_MinLaunchForce_11(float value)
	{
		___m_MinLaunchForce_11 = value;
	}

	inline static int32_t get_offset_of_m_MaxLaunchForce_12() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_MaxLaunchForce_12)); }
	inline float get_m_MaxLaunchForce_12() const { return ___m_MaxLaunchForce_12; }
	inline float* get_address_of_m_MaxLaunchForce_12() { return &___m_MaxLaunchForce_12; }
	inline void set_m_MaxLaunchForce_12(float value)
	{
		___m_MaxLaunchForce_12 = value;
	}

	inline static int32_t get_offset_of_m_MaxChargeTime_13() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_MaxChargeTime_13)); }
	inline float get_m_MaxChargeTime_13() const { return ___m_MaxChargeTime_13; }
	inline float* get_address_of_m_MaxChargeTime_13() { return &___m_MaxChargeTime_13; }
	inline void set_m_MaxChargeTime_13(float value)
	{
		___m_MaxChargeTime_13 = value;
	}

	inline static int32_t get_offset_of_m_FireButton_14() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_FireButton_14)); }
	inline String_t* get_m_FireButton_14() const { return ___m_FireButton_14; }
	inline String_t** get_address_of_m_FireButton_14() { return &___m_FireButton_14; }
	inline void set_m_FireButton_14(String_t* value)
	{
		___m_FireButton_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FireButton_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentLaunchForce_15() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_CurrentLaunchForce_15)); }
	inline float get_m_CurrentLaunchForce_15() const { return ___m_CurrentLaunchForce_15; }
	inline float* get_address_of_m_CurrentLaunchForce_15() { return &___m_CurrentLaunchForce_15; }
	inline void set_m_CurrentLaunchForce_15(float value)
	{
		___m_CurrentLaunchForce_15 = value;
	}

	inline static int32_t get_offset_of_m_ChargeSpeed_16() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_ChargeSpeed_16)); }
	inline float get_m_ChargeSpeed_16() const { return ___m_ChargeSpeed_16; }
	inline float* get_address_of_m_ChargeSpeed_16() { return &___m_ChargeSpeed_16; }
	inline void set_m_ChargeSpeed_16(float value)
	{
		___m_ChargeSpeed_16 = value;
	}

	inline static int32_t get_offset_of_m_Fired_17() { return static_cast<int32_t>(offsetof(TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C, ___m_Fired_17)); }
	inline bool get_m_Fired_17() const { return ___m_Fired_17; }
	inline bool* get_address_of_m_Fired_17() { return &___m_Fired_17; }
	inline void set_m_Fired_17(bool value)
	{
		___m_Fired_17 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIDirectionControl
struct  UIDirectionControl_tECC3378DDA8680C906E2AB48F91B0633ACEED72A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UIDirectionControl::m_UseRelativeRotation
	bool ___m_UseRelativeRotation_4;
	// UnityEngine.Quaternion UIDirectionControl::m_RelativeRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_RelativeRotation_5;

public:
	inline static int32_t get_offset_of_m_UseRelativeRotation_4() { return static_cast<int32_t>(offsetof(UIDirectionControl_tECC3378DDA8680C906E2AB48F91B0633ACEED72A, ___m_UseRelativeRotation_4)); }
	inline bool get_m_UseRelativeRotation_4() const { return ___m_UseRelativeRotation_4; }
	inline bool* get_address_of_m_UseRelativeRotation_4() { return &___m_UseRelativeRotation_4; }
	inline void set_m_UseRelativeRotation_4(bool value)
	{
		___m_UseRelativeRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_RelativeRotation_5() { return static_cast<int32_t>(offsetof(UIDirectionControl_tECC3378DDA8680C906E2AB48F91B0633ACEED72A, ___m_RelativeRotation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_RelativeRotation_5() const { return ___m_RelativeRotation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_RelativeRotation_5() { return &___m_RelativeRotation_5; }
	inline void set_m_RelativeRotation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_RelativeRotation_5 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TankManager[]
struct TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * m_Items[1];

public:
	inline TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * m_Items[1];

public:
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void CameraControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Move_m3B3FD3C10E9FFC2342673747BB8E091D79413E54 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method);
// System.Void CameraControl::Zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Zoom_mFED51CC82E1B12C6E831F862C46D887E51BC90EB (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method);
// System.Void CameraControl::FindAveragePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FindAveragePosition_m95C024C7BB344FC3FC21364F474BC51011740938 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single CameraControl::FindRequiredSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraControl_FindRequiredSize_m781E5EAB4F331E290EC91FEFB5446AA3A521E702 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m0B29D964FCB8460976BBE6BF56CBFDDC98EB5652 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PS4.PS4Input::PadResetOrientation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PS4Input_PadResetOrientation_m5781324370FF12270350C3F36DFF7E24466EEBA0 (int32_t ___id0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PS4.PS4Input::PadGetUsersHandles2(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PS4Input_PadGetUsersHandles2_m1821700A552E93C44D1CDA4F656A50BB2FF46E51 (int32_t ___maxNumberControllers0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___handles1, const RuntimeMethod* method);
// System.Void Controllers::UpdateJoystickRepresentations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_UpdateJoystickRepresentations_mBFECED5AF23143B48F25BD43A04C4EED37067447 (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Controllers::GetScreenPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Controllers_GetScreenPosition_mFDCCD99EA5714E34215BBBD92704869E3D74F73C (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, int32_t ___connectedControllerId0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.PS4.PS4Input::PadIsConnected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PS4Input_PadIsConnected_mC05855F4E0112746E2A30584FDD73952CF4612E5 (int32_t ___id0, const RuntimeMethod* method);
// System.Void Controllers::DrawPlayerSection(System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_DrawPlayerSection_m37995B04DCCC99A68334F78BD0A77AF6B53514BA (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, int32_t ___playerId0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___displayArea1, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// UnityEngine.PS4.PS4Input/LoggedInUser UnityEngine.PS4.PS4Input::GetUsersDetails(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  PS4Input_GetUsersDetails_m96D43DC9839BA34B4A79A468541E45860767ABD7 (int32_t ___slot0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Color Controllers::GetPlayerColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Controllers_GetPlayerColor_m7EC2A001201995D072ECD1AC18A6FCC09A5C3E8D (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, int32_t ___colorId0, const RuntimeMethod* method);
// System.Void Controllers::DrawQuad(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_DrawQuad_m268A0B939138E103515CD067B2F1C1F9F740FC73 (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.PS4.PS4Input::PadGetLastOrientation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  PS4Input_PadGetLastOrientation_mCE728934EAE971E94902D013B2359EF0A695035E (int32_t ___id0, const RuntimeMethod* method);
// System.String UnityEngine.Vector4::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.PS4.PS4Input::PadGetLastGyro(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PS4Input_PadGetLastGyro_m7BF19E88AA7AF39E898D6669424B425E2E43F23A (int32_t ___id0, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.PS4.PS4Input::PadGetLastAcceleration(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PS4Input_PadGetLastAcceleration_m09545B1557518D3518A1985C13E5A0C6AA123A59 (int32_t ___id0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039 (Type_t * ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void Controllers::DrawPadTouches(UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_DrawPadTouches_m0C30135C285B6DA87834EDA386CD60D06907597E (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___displayArea0, int32_t ___playerId1, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21 (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.PS4.PS4Input::GetPadControllerInformation(System.Int32,System.Single&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,UnityEngine.PS4.PS4Input/ConnectionType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PS4Input_GetPadControllerInformation_mF6C578D4029E0816F48402EC3E7C02BDA4C22A69 (int32_t ___id0, float* ___touchpixelDensity1, int32_t* ___touchResolutionX2, int32_t* ___touchResolutionY3, int32_t* ___analogDeadZoneLeft4, int32_t* ___analogDeadZoneright5, int32_t* ___connectionType6, const RuntimeMethod* method);
// System.Void UnityEngine.PS4.PS4Input::GetLastTouchData(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PS4Input_GetLastTouchData_m42A92F2C2B8264BE789401564E322D9120A11D71 (int32_t ___id0, int32_t* ___touchNum1, int32_t* ___touch0x2, int32_t* ___touch0y3, int32_t* ___touch0id4, int32_t* ___touch1x5, int32_t* ___touch1y6, int32_t* ___touch1id7, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_m8DDF84B2E086602E5D2589B5B1198821ABA6E7A4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void GameManager::SpawnAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnAllTanks_mD740AB54DCDCDD93DB06684CA23ABDA4DE50EA12 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::SetCameraTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetCameraTargets_mFB4769A55C31DEFD386AF705BA62996DCF12AB13 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::GameLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameLoop_mCB39229E37879521BAE7941CA1A8629628334E44 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void TankManager::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Setup_mC2D5AF0F4E997C05D2D5F5B2C5B36A97C49EEB3D (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * __this, const RuntimeMethod* method);
// System.Void GameManager/<GameLoop>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__15__ctor_m5C16BF4335BAA71797F99F5A075A120261217641 (U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameManager/<RoundStarting>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__16__ctor_m253FE6A88BEB9D8754F7471E9359D97FF81F8175 (U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameManager/<RoundPlaying>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__17__ctor_m21EEC7D1F84A2088FF29CDCABFFB5160C0912C51 (U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameManager/<RoundEnding>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__18__ctor_mE1F961DEC05E778A7ADC21DFCDD52BAB3B8B4179 (U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void TankManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Reset_mEFC6CFF1CFC6ABD2C920939924D95FC252CA61A6 (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * __this, const RuntimeMethod* method);
// System.Void TankManager::EnableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_EnableControl_mAF211A27BF318BAF80E5A3B12AE0A80335B73FE3 (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * __this, const RuntimeMethod* method);
// System.Void TankManager::DisableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_DisableControl_mAF6BF47CCDF34CC3318E7E873315B078FB07AE2C (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * __this, const RuntimeMethod* method);
// System.Void GamePad::ToggleGamePad(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_ToggleGamePad_mFF47A85F29B03EB4C0B66E87D086A6AE19600352 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, bool ___active0, const RuntimeMethod* method);
// System.Void GamePad::Touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_Touchpad_mB623F17EAC9FF91BE5726CA8663FFA60347AC163 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method);
// System.Void GamePad::Thumbsticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_Thumbsticks_mF8447EB3D4C98A1DC4F4F4466AF7FF761F098A31 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method);
// System.Void GamePad::InputButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_InputButtons_mA5EC73B7CE09E98D5AB7C024086195557CF4D608 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method);
// System.Void GamePad::DPadButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_DPadButtons_mD9C30E661DB58F6DF02303E9A35A9988436496AE (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method);
// System.Void GamePad::TriggerShoulderButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_TriggerShoulderButtons_mDFAD2CFFD05EAAFAE5089CF6E1AC54743B35E43A (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method);
// System.Void GamePad::Lightbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_Lightbar_mAEE1CB0AADDF8753E1656514920469FEAFA95956 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method);
// System.Void GamePad::Speaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_Speaker_m12DAA3633E99B6291D0110BCE2B4A082ECE6E8F7 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PS4.PS4Input::PadResetLightBar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PS4Input_PadResetLightBar_m4A078CAE01147E748A97EA8B95CAE98FDF3934CC (int32_t ___id0, const RuntimeMethod* method);
// UnityEngine.Color GamePad::GetPlayerColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GamePad_GetPlayerColor_m5C2B91F53B9CBACA70464435C2272C20A6D9863B (int32_t ___colorId0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.PS4.PS4Input/LoggedInUser UnityEngine.PS4.PS4Input::RefreshUsersDetails(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  PS4Input_RefreshUsersDetails_m7ECAC3655E412AF48324127D56F195751D7F6A98 (int32_t ___slot0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E (const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void GamePad::TouchpadAudio(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_TouchpadAudio_m14B22374DD5F427B3035B7FE255058274C6D9D7E (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, int32_t ___maxX0, int32_t ___maxY1, int32_t ___posX2, int32_t ___posY3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::PlayOnDualShock4(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_PlayOnDualShock4_m238715B79A00D31253AAE267AB189F3FAF866CB6 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, int32_t ___userId0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.PS4.PS4Input::PadSetLightBar(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PS4Input_PadSetLightBar_m8E6E8074B858443E601081724CFB5BE80E71ED0B (int32_t ___id0, int32_t ___red1, int32_t ___green2, int32_t ___blue3, const RuntimeMethod* method);
// System.Void GamePad::GetVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_GetVolume_m7E7E1C86CADBB9E2AE4E715769218833022EF253 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_time_m2185448A5B8A50225410220AF67BC34F5596D210 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::GetOutputData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputData_mB236FC4E99BC03BFB9402FCC4140946DDFB0C849 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples0, int32_t ___channel1, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA (const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* Physics_OverlapSphere_mE1FC40C646B1468905057516601DB49DD41E0223 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_m8B6FFD506CCCDD31C8C018A4B635E82B5499648F (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___explosionForce0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___explosionPosition1, float ___explosionRadius2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TankHealth>()
inline TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * Component_GetComponent_TisTankHealth_t7D14A640811B1F82EA71579E99BB69821601874D_m970D10B7B87229667C5C6A45CAE35EF35271D422 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Single ShellExplosion::CalculateDamage(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShellExplosion_CalculateDamage_mAEA89955997B83FB274BBA6DBF39505D04A7CF18 (ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, const RuntimeMethod* method);
// System.Void TankHealth::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_TakeDamage_m67C0D02C1C6023E03A9E1BB650CBDAA939F30749 (TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * __this, float ___amount0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mD516595EFDD66C83A727BDD7EF495069B4EB6132 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GameObject_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m538EA9E269978336C890E5FA90908BF7249AB395 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void TankHealth::SetHealthUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_SetHealthUI_mED473A2C801C3633111BDD706F1E0219F96C7E8B (TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * __this, const RuntimeMethod* method);
// System.Void TankHealth::OnDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_OnDeath_m20D7125DC23FA0313B83D40D17DE84CBD6FA9163 (TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TankMovement>()
inline TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * GameObject_GetComponent_TisTankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599_mF417BB6B76C4384B4C3619B24B3B63D6FBCC0836 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<TankShooting>()
inline TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * GameObject_GetComponent_TisTankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C_mD4C46F2AF1F5665818175DCD1D0EBC6D3B643B98 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GameObject_GetComponentInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE8E3AB003154C947DBEF250ABB188375407EAD07 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.String UnityEngine.ColorUtility::ToHtmlStringRGB(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorUtility_ToHtmlStringRGB_m53B0E0A6CB3BED0C0BC55F91C0DDAB35385DA676 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshRenderer>()
inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* GameObject_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m37C5016444DB54041F938EA344271762E17600C3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB0A139A0693803E201D08B797BFD122B94453C7D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void TankMovement::EngineAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_EngineAudio_m6D396335ED7FFB2B95AA92E8EAF3D8E84BB9284A (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void TankMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Move_mCAD3C02C99042563ED8CDB2C8C896F53F5DC52E8 (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method);
// System.Void TankMovement::Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Turn_mEEBD001E4B3BAC18EA742495F340ED914059E296 (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Rigidbody_get_rotation_mEB90F9D223B0BA32A1962971E3A93DEE1670D18A (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m08A1449DC0D514A70065CD80D067597765BDA5B2 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot0, const RuntimeMethod* method);
// System.Void TankShooting::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Fire_mED4EBA5B73910C0CA081F5F905AF94EF2BCDF4DA (TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD (String_t* ___buttonName0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Rigidbody>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Object_Instantiate_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mF87D5A03374483FF8ECD2C74C732C5259BC11706 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::RoundStarting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundStarting_m4E47A56417E88F7C58E7430DB2FDD70D9EDF0041 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::RoundPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundPlaying_mF4EE9A6BA7B5335D3A6A2CC58DD6D421CC257664 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::RoundEnding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundEnding_m4AE44E0941A2CD260541F68749FCC2565601D423 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void GameManager::DisableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableTankControl_m34F0BEA8B4C61C0700F2C772A291B36BBDE508EE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// TankManager GameManager::GetRoundWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * GameManager_GetRoundWinner_mAAADD3B4F2BDA6C6BAFACF7FC775BDFA1AFCBC23 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// TankManager GameManager::GetGameWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * GameManager_GetGameWinner_mE130E96922EB5FAA8ABD853B8BB6310051D451B9 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String GameManager::EndMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameManager_EndMessage_m677DBBEECAAA3DB6643FC9A9B5498088D906ABF2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::EnableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableTankControl_m9EB3B8F089DA57D626ADA8BE6E04951944C66F52 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Boolean GameManager::OneTankLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_OneTankLeft_m869360BDF4CB7E2D471F303C002C41D508C4B24E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::ResetAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetAllTanks_m1D749DFEE2E6011F26CB4027F8196DE2F7FD96B8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void CameraControl::SetStartPositionAndSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_SetStartPositionAndSize_mA16396F1A3D56B5CA9E170FDE57F9DC01E3F8184 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method);
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
// System.Void CameraControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Awake_mB372A07C65C388D2E443D7D559C6B2788CCBE2FF (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Camera = GetComponentInChildren<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546(__this, /*hidden argument*/Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546_RuntimeMethod_var);
		__this->set_m_Camera_8(L_0);
		// }
		return;
	}
}
// System.Void CameraControl::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FixedUpdate_m52DB7D0BE5D85B5EE7BFD0596533ABAB27A72231 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method)
{
	{
		// Move();
		CameraControl_Move_m3B3FD3C10E9FFC2342673747BB8E091D79413E54(__this, /*hidden argument*/NULL);
		// Zoom();
		CameraControl_Zoom_mFED51CC82E1B12C6E831F862C46D887E51BC90EB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Move_m3B3FD3C10E9FFC2342673747BB8E091D79413E54 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method)
{
	{
		// FindAveragePosition();
		CameraControl_FindAveragePosition_m95C024C7BB344FC3FC21364F474BC51011740938(__this, /*hidden argument*/NULL);
		// transform.position = Vector3.SmoothDamp(transform.position, m_DesiredPosition, ref m_MoveVelocity, m_DampTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_m_DesiredPosition_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_m_MoveVelocity_10();
		float L_5 = __this->get_m_DampTime_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_2, L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4, L_5, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraControl::FindAveragePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FindAveragePosition_m95C024C7BB344FC3FC21364F474BC51011740938 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Vector3 averagePos = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// int numTargets = 0;
		V_1 = 0;
		// for (int i = 0; i < m_Targets.Length; i++)
		V_2 = 0;
		goto IL_003e;
	}

IL_000e:
	{
		// if (!m_Targets[i].gameObject.activeSelf)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_m_Targets_7();
		int32_t L_1 = V_2;
		int32_t L_2 = L_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// averagePos += m_Targets[i].position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_7 = __this->get_m_Targets_7();
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// numTargets++;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003a:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003e:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_15 = V_2;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_16 = __this->get_m_Targets_7();
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// if (numTargets > 0)
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// averagePos /= numTargets;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		int32_t L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_18, ((float)((float)L_19)), /*hidden argument*/NULL);
		V_0 = L_20;
	}

IL_0056:
	{
		// averagePos.y = transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		(&V_0)->set_y_3(L_23);
		// m_DesiredPosition = averagePos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		__this->set_m_DesiredPosition_11(L_24);
		// }
		return;
	}
}
// System.Void CameraControl::Zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Zoom_mFED51CC82E1B12C6E831F862C46D887E51BC90EB (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float requiredSize = FindRequiredSize();
		float L_0;
		L_0 = CameraControl_FindRequiredSize_m781E5EAB4F331E290EC91FEFB5446AA3A521E702(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// m_Camera.orthographicSize = Mathf.SmoothDamp(m_Camera.orthographicSize, requiredSize, ref m_ZoomSpeed, m_DampTime);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_m_Camera_8();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_m_Camera_8();
		float L_3;
		L_3 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_2, /*hidden argument*/NULL);
		float L_4 = V_0;
		float* L_5 = __this->get_address_of_m_ZoomSpeed_9();
		float L_6 = __this->get_m_DampTime_4();
		float L_7;
		L_7 = Mathf_SmoothDamp_m0B29D964FCB8460976BBE6BF56CBFDDC98EB5652(L_3, L_4, (float*)L_5, L_6, /*hidden argument*/NULL);
		Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F(L_1, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single CameraControl::FindRequiredSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraControl_FindRequiredSize_m781E5EAB4F331E290EC91FEFB5446AA3A521E702 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 desiredLocalPos = transform.InverseTransformPoint(m_DesiredPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_m_DesiredPosition_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float size = 0f;
		V_1 = (0.0f);
		// for (int i = 0; i < m_Targets.Length; i++)
		V_2 = 0;
		goto IL_0083;
	}

IL_001c:
	{
		// if (!m_Targets[i].gameObject.activeSelf)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_m_Targets_7();
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		// Vector3 targetLocalPos = transform.InverseTransformPoint(m_Targets[i].position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10 = __this->get_m_Targets_7();
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_9, L_14, /*hidden argument*/NULL);
		// Vector3 desiredPosToTarget = targetLocalPos - desiredLocalPos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// size = Mathf.Max (size, Mathf.Abs (desiredPosToTarget.y));
		float L_18 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_3;
		float L_20 = L_19.get_y_3();
		float L_21;
		L_21 = fabsf(L_20);
		float L_22;
		L_22 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_18, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		// size = Mathf.Max (size, Mathf.Abs (desiredPosToTarget.x) / m_Camera.aspect);
		float L_23 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_3;
		float L_25 = L_24.get_x_2();
		float L_26;
		L_26 = fabsf(L_25);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27 = __this->get_m_Camera_8();
		float L_28;
		L_28 = Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987(L_27, /*hidden argument*/NULL);
		float L_29;
		L_29 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_23, ((float)((float)L_26/(float)L_28)), /*hidden argument*/NULL);
		V_1 = L_29;
	}

IL_007f:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0083:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_31 = V_2;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_32 = __this->get_m_Targets_7();
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		// size += m_ScreenEdgeBuffer;
		float L_33 = V_1;
		float L_34 = __this->get_m_ScreenEdgeBuffer_5();
		V_1 = ((float)il2cpp_codegen_add((float)L_33, (float)L_34));
		// size = Mathf.Max(size, m_MinSize);
		float L_35 = V_1;
		float L_36 = __this->get_m_MinSize_6();
		float L_37;
		L_37 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_35, L_36, /*hidden argument*/NULL);
		V_1 = L_37;
		// return size;
		float L_38 = V_1;
		return L_38;
	}
}
// System.Void CameraControl::SetStartPositionAndSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_SetStartPositionAndSize_mA16396F1A3D56B5CA9E170FDE57F9DC01E3F8184 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method)
{
	{
		// FindAveragePosition();
		CameraControl_FindAveragePosition_m95C024C7BB344FC3FC21364F474BC51011740938(__this, /*hidden argument*/NULL);
		// transform.position = m_DesiredPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_m_DesiredPosition_11();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// m_Camera.orthographicSize = FindRequiredSize();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_m_Camera_8();
		float L_3;
		L_3 = CameraControl_FindRequiredSize_m781E5EAB4F331E290EC91FEFB5446AA3A521E702(__this, /*hidden argument*/NULL);
		Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl__ctor_m67DAD57065E2F985D5F050A4DDD3DB9B95548100 (CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * __this, const RuntimeMethod* method)
{
	{
		// public float m_DampTime = 0.2f;
		__this->set_m_DampTime_4((0.200000003f));
		// public float m_ScreenEdgeBuffer = 4f;
		__this->set_m_ScreenEdgeBuffer_5((4.0f));
		// public float m_MinSize = 6.5f;
		__this->set_m_MinSize_6((6.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Controllers::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_Start_mE181B9C4FDB96266CDEA05F7CD55DC56CDFDCA14 (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// handles = new int[maxControllers];
		int32_t L_0 = __this->get_maxControllers_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_handles_4(L_1);
		// for (int i = 0; i < maxControllers; i++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0015:
	{
		// PS4Input.PadResetOrientation(i);
		int32_t L_2 = V_0;
		PS4Input_PadResetOrientation_m5781324370FF12270350C3F36DFF7E24466EEBA0(L_2, /*hidden argument*/NULL);
		// for (int i = 0; i < maxControllers; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001f:
	{
		// for (int i = 0; i < maxControllers; i++)
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_maxControllers_6();
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0015;
		}
	}
	{
		// if (fingerTexture)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = __this->get_fingerTexture_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		// fingerTextureOrigin = new Vector2(fingerTexture.width * 0.5f, fingerTexture.height * 0.5f);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = __this->get_fingerTexture_10();
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = __this->get_fingerTexture_10();
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), ((float)il2cpp_codegen_multiply((float)((float)((float)L_9)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)((float)((float)L_11)), (float)(0.5f))), /*hidden argument*/NULL);
		__this->set_fingerTextureOrigin_11(L_12);
	}

IL_0064:
	{
		// for (int i = 0; i < 4; i++)
		V_1 = 0;
		goto IL_008d;
	}

IL_0068:
	{
		// GameObject.Find("joystick" + i).GetComponent<MeshRenderer>().enabled = false;
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F, L_13, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_14, /*hidden argument*/NULL);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_16;
		L_16 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_15, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_16, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < 4; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_008d:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)4)))
		{
			goto IL_0068;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Controllers::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_Update_m707444DF38F02F71E180101FFA691F01688B1A27 (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, const RuntimeMethod* method)
{
	{
		// numHandles = PS4Input.PadGetUsersHandles2(maxControllers, handles); // get details of connected controllers
		int32_t L_0 = __this->get_maxControllers_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_handles_4();
		int32_t L_2;
		L_2 = PS4Input_PadGetUsersHandles2_m1821700A552E93C44D1CDA4F656A50BB2FF46E51(L_0, L_1, /*hidden argument*/NULL);
		__this->set_numHandles_5(L_2);
		// UpdateJoystickRepresentations();
		Controllers_UpdateJoystickRepresentations_mBFECED5AF23143B48F25BD43A04C4EED37067447(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Controllers::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_OnGUI_mFFE39104971A3593ACEFA4A76B8EA1EBC62DD6E5 (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5849406CB0359EBB2BF0C9EC773644263F12D833);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < handles.Length; i++)
		V_0 = 0;
		goto IL_0076;
	}

IL_0004:
	{
		// Vector2 screenPosition = GetScreenPosition(i);
		int32_t L_0 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Controllers_GetScreenPosition_mFDCCD99EA5714E34215BBBD92704869E3D74F73C(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// Rect displayArea = new Rect(screenPosition.x, screenPosition.y, Screen.width / 2, Screen.height / 2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = V_1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_1;
		float L_5 = L_4.get_y_1();
		int32_t L_6;
		L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), L_3, L_5, ((float)((float)((int32_t)((int32_t)L_6/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_7/(int32_t)2)))), /*hidden argument*/NULL);
		// if (PS4Input.PadIsConnected(i) == true)
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = PS4Input_PadIsConnected_mC05855F4E0112746E2A30584FDD73952CF4612E5(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		// DrawPlayerSection(i, displayArea);
		int32_t L_10 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11 = V_2;
		Controllers_DrawPlayerSection_m37995B04DCCC99A68334F78BD0A77AF6B53514BA(__this, L_10, L_11, /*hidden argument*/NULL);
		// }
		goto IL_0072;
	}

IL_0041:
	{
		// GUI.Label(new Rect(screenPosition.x + 200, screenPosition.y + 200, 200, 200), "Connect Controller");
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_1;
		float L_13 = L_12.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_1;
		float L_15 = L_14.get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_16), ((float)il2cpp_codegen_add((float)L_13, (float)(200.0f))), ((float)il2cpp_codegen_add((float)L_15, (float)(200.0f))), (200.0f), (200.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_16, _stringLiteral5849406CB0359EBB2BF0C9EC773644263F12D833, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// for (int i = 0; i < handles.Length; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0076:
	{
		// for (int i = 0; i < handles.Length; i++)
		int32_t L_18 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = __this->get_handles_4();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Controllers::DrawPlayerSection(System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_DrawPlayerSection_m37995B04DCCC99A68334F78BD0A77AF6B53514BA (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, int32_t ___playerId0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___displayArea1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A07339A5ED96FD1C8AE180C0A822F1BA9814DC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13E7FA31BA64BDECCAC519BDC6BF3C97B97F34A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19C88932F064A58F5F57489BB8FF0D9D3017A1D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B6658CA3B80D45827FCC748D54619DB418D629C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26763404460309E36106FECF953C482CAF722112);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E2966D0E1AB1F3DEC4F9E13E57F2A4BF5FCDFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3121F4EA919BD7976BB5856491462E90D66428C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CCC5CB927385C64B3B9E28D708EB03B2DA33B88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402134D870C3F0047AB99361E2DDC423B6F82576);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral498E487803BB211FC9A6BBBB3ADD9D99E15C4883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF02CC179648FFE0838FF3E005ED3DEF8E3A63F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral524AC3D656313F4716695AFC1E85AE886B442FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5573710B8953082DA17162DADFB1773BD0EF062C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral572C6131D9D9D8E98ED5F025FFBD0AE23D0AE4E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BD549AE22A4C61843C940FF9E3E147B2F8D30E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BFF9D192ADABEB1F4DD3A9E279E9D3BC4E13F84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6756C5175BD121CFC86BC9E08021E9AB244D609F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BA9601CDD4A40F35F1F5E500F83CC1A34057835);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E9EC18B5FFDB2A772026FEF0DDB12C8C98FD2BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76A1C7AD33F9768CA4C6CFFE8ADCEEBE2A4BFEA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F26800153F630E25522FBD5ECC060447A3B843F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8494E7DD24349CF16B459E1B64D5C30E7B8AB7CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DCCF28863FB75CA952413194726B046FC870BFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F42E093D2571F88017BD94256B6068ABA67F449);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93579F2A086E7AA1D741596C3DBFFDCC18D07165);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99324149E8EB3E8830C77A4A6E053C50CFAE8818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E3CBD8B2158507744DAD13D0506FFD46790096D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA931A104C7AF739BD2055FAB572E898E5AA7C285);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C20B66F9813851492DEF3CB110453FE7945EB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC88469E30C109AAFC7DFB7E31E888D4C7D2694D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE5CADE7F03CCA72C2B5D832150C16347A715414);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8AE229D8EAEF3FEF4EB3A5C18AEFE69D6BD814C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB16CF578A6A12E62BDDAD02D5BD8A17875ADEFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD83646D0436CCA851EAA996BA3BB4C61FEF661);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC03AFCC04F597D440D4CAA85BBBC4BED32615E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCC5EE8464FCC788E958678A646AC764603CF523);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9A2FEFFA086C692C1B2F412B10BF86FEFC1670);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD92D9B768E3E3338FB4D21C2C00D404E10AA8F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBB9A1698C46426EE577A5E7E5643C626D347AAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE31DB28384D4853CFBEFCFCAE89511C5B197EC42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4C2E5A8771C766F8101945858E660AD06031BFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5307EE7691F4BBD9F168F2596FDD977A1F31D71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8915A289290AE14222DF772103F122F964DB398);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADF45F71013474B1FB752205DD20C0BDE4BDBD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEED5289FDD07FBB3080C38E212A9D00C278D3133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF0A502425FA0D348F2C6584564DD87DDFCCA168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF462408793CBF80CA4037B91BB9708BBDC87C0E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9778556E8B8660B62FD786EC613E4ACDDF026B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE466BCF72607B1CCBE609ABD5153ED89BCB93FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	float V_6 = 0.0f;
	{
		// int playerColor = PS4Input.GetUsersDetails(playerId).color;
		int32_t L_0 = ___playerId0;
		LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  L_1;
		L_1 = PS4Input_GetUsersDetails_m96D43DC9839BA34B4A79A468541E45860767ABD7(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1.get_color_3();
		V_0 = L_2;
		// int stickMappedPlayerId = playerId + 1;
		int32_t L_3 = ___playerId0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		// displayArea = new Rect(displayArea.x + sectionPadding + 10, displayArea.y + sectionPadding + 10, displayArea.width - (sectionPadding * 2), displayArea.height - (sectionPadding * 2));
		float L_4;
		L_4 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		int32_t L_5 = __this->get_sectionPadding_7();
		float L_6;
		L_6 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		int32_t L_7 = __this->get_sectionPadding_7();
		float L_8;
		L_8 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		int32_t L_9 = __this->get_sectionPadding_7();
		float L_10;
		L_10 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		int32_t L_11 = __this->get_sectionPadding_7();
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_4, (float)((float)((float)L_5)))), (float)(10.0f))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_6, (float)((float)((float)L_7)))), (float)(10.0f))), ((float)il2cpp_codegen_subtract((float)L_8, (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2)))))), ((float)il2cpp_codegen_subtract((float)L_10, (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2)))))), /*hidden argument*/NULL);
		// DrawQuad(new Rect(displayArea.x + 2, displayArea.y + 2, displayArea.width - 4, 20), GetPlayerColor(playerColor));
		float L_12;
		L_12 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		float L_13;
		L_13 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		float L_14;
		L_14 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_15), ((float)il2cpp_codegen_add((float)L_12, (float)(2.0f))), ((float)il2cpp_codegen_add((float)L_13, (float)(2.0f))), ((float)il2cpp_codegen_subtract((float)L_14, (float)(4.0f))), (20.0f), /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = Controllers_GetPlayerColor_m7EC2A001201995D072ECD1AC18A6FCC09A5C3E8D(__this, L_16, /*hidden argument*/NULL);
		Controllers_DrawQuad_m268A0B939138E103515CD067B2F1C1F9F740FC73(__this, L_15, L_17, /*hidden argument*/NULL);
		// Rect internalDisplayArea = new Rect(displayArea.x + internalPadding, displayArea.y + internalPadding, displayArea.width - (internalPadding * 2), displayArea.height - (internalPadding * 2));
		float L_18;
		L_18 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		int32_t L_19 = __this->get_internalPadding_8();
		float L_20;
		L_20 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		int32_t L_21 = __this->get_internalPadding_8();
		float L_22;
		L_22 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		int32_t L_23 = __this->get_internalPadding_8();
		float L_24;
		L_24 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea1), /*hidden argument*/NULL);
		int32_t L_25 = __this->get_internalPadding_8();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_26), ((float)il2cpp_codegen_add((float)L_18, (float)((float)((float)L_19)))), ((float)il2cpp_codegen_add((float)L_20, (float)((float)((float)L_21)))), ((float)il2cpp_codegen_subtract((float)L_22, (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)2)))))), ((float)il2cpp_codegen_subtract((float)L_24, (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)2)))))), /*hidden argument*/NULL);
		// GUI.Label(internalDisplayArea,
		//     // player details
		//     "\nPlayer ID: " + playerId +
		//     "\nColor: " + playerColor +
		//     "\nUser ID: " + PS4Input.GetUsersDetails(playerId).userId +
		//     "\nUser Name: " + PS4Input.GetUsersDetails(playerId).userName +
		//     "\nStatus: " + PS4Input.GetUsersDetails(playerId).status +
		//     "\nLast Orientation: " + PS4Input.PadGetLastOrientation(playerId) +
		//     "\nLast Gyro: " + PS4Input.PadGetLastGyro(playerId) +
		//     "\nLast Acceleration: " + PS4Input.PadGetLastAcceleration(playerId) +
		//     "\n" +
		//     // buttons
		//     "\nJoystick" + stickMappedPlayerId + "Button0 (cross): " + Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + stickMappedPlayerId + "Button0", true)).ToString() +
		//     "\nJoystick" + stickMappedPlayerId + "Button1 (circle): " + Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + stickMappedPlayerId + "Button1", true)).ToString() +
		//     "\nJoystick" + stickMappedPlayerId + "Button2 (square): " + Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + stickMappedPlayerId + "Button2", true)).ToString() +
		//     "\nJoystick" + stickMappedPlayerId + "Button3 (triangle): " + Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + stickMappedPlayerId + "Button3", true)).ToString() +
		//     "\nJoystick" + stickMappedPlayerId + "Button4 (left shoulder): " + Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + stickMappedPlayerId + "Button4", true)).ToString() +
		//     "\nJoystick" + stickMappedPlayerId + "Button5 (right shoulder): " + Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + stickMappedPlayerId + "Button5", true)).ToString() +
		//     "\nJoystick" + stickMappedPlayerId + "Button6 (touch pad button): " + Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + stickMappedPlayerId + "Button6", true)).ToString() +
		//     "\nJoystick" + stickMappedPlayerId + "Button7 (options): " + Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + stickMappedPlayerId + "Button7", true)).ToString() +
		//     "\nJoystick" + stickMappedPlayerId + "Button8 (L3): " + Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + stickMappedPlayerId + "Button8", true)).ToString() +
		//     "\nJoystick" + stickMappedPlayerId + "Button9 (R3): " + Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + stickMappedPlayerId + "Button9", true)).ToString() +
		//     "\n" +
		//     // sticks & D-pad - mapped in editor
		//     "\ndpad" + stickMappedPlayerId + "_horizontal: " + Input.GetAxis("dpad" + stickMappedPlayerId + "_horizontal").ToString() +
		//     "\ndpad" + stickMappedPlayerId + "_vertical: " + Input.GetAxis("dpad" + stickMappedPlayerId + "_vertical").ToString() +
		//     "\nleftstick" + stickMappedPlayerId + "horizontal (left stick): " + Input.GetAxis("leftstick" + stickMappedPlayerId + "horizontal").ToString() +
		//     "\nleftstick" + stickMappedPlayerId + "vertical (left stick): " + Input.GetAxis("leftstick" + stickMappedPlayerId + "vertical").ToString() +
		//     "\nrightstick" + stickMappedPlayerId + "horizontal (right stick): " + Input.GetAxis("rightstick" + stickMappedPlayerId + "horizontal").ToString() +
		//     "\nrightstick" + stickMappedPlayerId + "vertical (right stick): " + Input.GetAxis("rightstick" + stickMappedPlayerId + "vertical").ToString() +
		//     "\njoystick" + stickMappedPlayerId + "_left_trigger (left trigger): " + Input.GetAxis("joystick" + stickMappedPlayerId + "_left_trigger").ToString() +
		//     "\njoystick" + stickMappedPlayerId + "_right_trigger (right trigger): " + Input.GetAxis("joystick" + stickMappedPlayerId + "_right_trigger").ToString()
		//     );
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)88));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		ArrayElementTypeCheck (L_28, _stringLiteralCB16CF578A6A12E62BDDAD02D5BD8A17875ADEFF);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCB16CF578A6A12E62BDDAD02D5BD8A17875ADEFF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		String_t* L_30;
		L_30 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___playerId0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_29;
		ArrayElementTypeCheck (L_31, _stringLiteralBE5CADE7F03CCA72C2B5D832150C16347A715414);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBE5CADE7F03CCA72C2B5D832150C16347A715414);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		String_t* L_33;
		L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_32;
		ArrayElementTypeCheck (L_34, _stringLiteralA931A104C7AF739BD2055FAB572E898E5AA7C285);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA931A104C7AF739BD2055FAB572E898E5AA7C285);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		int32_t L_36 = ___playerId0;
		LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  L_37;
		L_37 = PS4Input_GetUsersDetails_m96D43DC9839BA34B4A79A468541E45860767ABD7(L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		int32_t* L_38 = (&V_2)->get_address_of_userId_2();
		String_t* L_39;
		L_39 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_38, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_39);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_35;
		ArrayElementTypeCheck (L_40, _stringLiteral99324149E8EB3E8830C77A4A6E053C50CFAE8818);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral99324149E8EB3E8830C77A4A6E053C50CFAE8818);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		int32_t L_42 = ___playerId0;
		LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  L_43;
		L_43 = PS4Input_GetUsersDetails_m96D43DC9839BA34B4A79A468541E45860767ABD7(L_42, /*hidden argument*/NULL);
		String_t* L_44 = L_43.get_userName_4();
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_44);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_41;
		ArrayElementTypeCheck (L_45, _stringLiteralD92D9B768E3E3338FB4D21C2C00D404E10AA8F07);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralD92D9B768E3E3338FB4D21C2C00D404E10AA8F07);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_45;
		int32_t L_47 = ___playerId0;
		LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  L_48;
		L_48 = PS4Input_GetUsersDetails_m96D43DC9839BA34B4A79A468541E45860767ABD7(L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		int32_t* L_49 = (&V_2)->get_address_of_status_0();
		String_t* L_50;
		L_50 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_49, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_46, L_50);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_50);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = L_46;
		ArrayElementTypeCheck (L_51, _stringLiteralEADF45F71013474B1FB752205DD20C0BDE4BDBD1);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralEADF45F71013474B1FB752205DD20C0BDE4BDBD1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = L_51;
		int32_t L_53 = ___playerId0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_54;
		L_54 = PS4Input_PadGetLastOrientation_mCE728934EAE971E94902D013B2359EF0A695035E(L_53, /*hidden argument*/NULL);
		V_3 = L_54;
		String_t* L_55;
		L_55 = Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_3), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_55);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_52;
		ArrayElementTypeCheck (L_56, _stringLiteral0A07339A5ED96FD1C8AE180C0A822F1BA9814DC1);
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral0A07339A5ED96FD1C8AE180C0A822F1BA9814DC1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_56;
		int32_t L_58 = ___playerId0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = PS4Input_PadGetLastGyro_m7BF19E88AA7AF39E898D6669424B425E2E43F23A(L_58, /*hidden argument*/NULL);
		V_4 = L_59;
		String_t* L_60;
		L_60 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_60);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = L_57;
		ArrayElementTypeCheck (L_61, _stringLiteral13E7FA31BA64BDECCAC519BDC6BF3C97B97F34A6);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral13E7FA31BA64BDECCAC519BDC6BF3C97B97F34A6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = L_61;
		int32_t L_63 = ___playerId0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = PS4Input_PadGetLastAcceleration_m09545B1557518D3518A1985C13E5A0C6AA123A59(L_63, /*hidden argument*/NULL);
		V_4 = L_64;
		String_t* L_65;
		L_65 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_65);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_66 = L_62;
		ArrayElementTypeCheck (L_66, _stringLiteralCBD83646D0436CCA851EAA996BA3BB4C61FEF661);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralCBD83646D0436CCA851EAA996BA3BB4C61FEF661);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_66;
		String_t* L_68;
		L_68 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_68);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_69 = L_67;
		ArrayElementTypeCheck (L_69, _stringLiteral5573710B8953082DA17162DADFB1773BD0EF062C);
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral5573710B8953082DA17162DADFB1773BD0EF062C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_70 = L_69;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_71 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_72;
		L_72 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_71, /*hidden argument*/NULL);
		String_t* L_73;
		L_73 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_74;
		L_74 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_73, _stringLiteral524AC3D656313F4716695AFC1E85AE886B442FB9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_75;
		L_75 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_72, L_74, (bool)1, /*hidden argument*/NULL);
		bool L_76;
		L_76 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_75, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_5 = L_76;
		String_t* L_77;
		L_77 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_70, L_77);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)L_77);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78 = L_70;
		ArrayElementTypeCheck (L_78, _stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = L_78;
		String_t* L_80;
		L_80 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)L_80);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = L_79;
		ArrayElementTypeCheck (L_81, _stringLiteral8DCCF28863FB75CA952413194726B046FC870BFE);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral8DCCF28863FB75CA952413194726B046FC870BFE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_82 = L_81;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_83 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		Type_t * L_84;
		L_84 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_83, /*hidden argument*/NULL);
		String_t* L_85;
		L_85 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_86;
		L_86 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_85, _stringLiteral6BA9601CDD4A40F35F1F5E500F83CC1A34057835, /*hidden argument*/NULL);
		RuntimeObject * L_87;
		L_87 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_84, L_86, (bool)1, /*hidden argument*/NULL);
		bool L_88;
		L_88 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_87, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_5 = L_88;
		String_t* L_89;
		L_89 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_82, L_89);
		(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)L_89);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_90 = L_82;
		ArrayElementTypeCheck (L_90, _stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		(L_90)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_91 = L_90;
		String_t* L_92;
		L_92 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_91, L_92);
		(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)L_92);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_93 = L_91;
		ArrayElementTypeCheck (L_93, _stringLiteralBC88469E30C109AAFC7DFB7E31E888D4C7D2694D);
		(L_93)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralBC88469E30C109AAFC7DFB7E31E888D4C7D2694D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_94 = L_93;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_95 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		Type_t * L_96;
		L_96 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_95, /*hidden argument*/NULL);
		String_t* L_97;
		L_97 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_98;
		L_98 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_97, _stringLiteralDBB9A1698C46426EE577A5E7E5643C626D347AAA, /*hidden argument*/NULL);
		RuntimeObject * L_99;
		L_99 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_96, L_98, (bool)1, /*hidden argument*/NULL);
		bool L_100;
		L_100 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_99, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_5 = L_100;
		String_t* L_101;
		L_101 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_94, L_101);
		(L_94)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)L_101);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_102 = L_94;
		ArrayElementTypeCheck (L_102, _stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		(L_102)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_103 = L_102;
		String_t* L_104;
		L_104 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_103, L_104);
		(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)L_104);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_105 = L_103;
		ArrayElementTypeCheck (L_105, _stringLiteral9E3CBD8B2158507744DAD13D0506FFD46790096D);
		(L_105)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteral9E3CBD8B2158507744DAD13D0506FFD46790096D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_106 = L_105;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_107 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		Type_t * L_108;
		L_108 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_107, /*hidden argument*/NULL);
		String_t* L_109;
		L_109 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_110;
		L_110 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_109, _stringLiteral3121F4EA919BD7976BB5856491462E90D66428C2, /*hidden argument*/NULL);
		RuntimeObject * L_111;
		L_111 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_108, L_110, (bool)1, /*hidden argument*/NULL);
		bool L_112;
		L_112 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_111, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_5 = L_112;
		String_t* L_113;
		L_113 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_106, L_113);
		(L_106)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)L_113);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_114 = L_106;
		ArrayElementTypeCheck (L_114, _stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		(L_114)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_115 = L_114;
		String_t* L_116;
		L_116 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_115, L_116);
		(L_115)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)L_116);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_117 = L_115;
		ArrayElementTypeCheck (L_117, _stringLiteralFE466BCF72607B1CCBE609ABD5153ED89BCB93FE);
		(L_117)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteralFE466BCF72607B1CCBE609ABD5153ED89BCB93FE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_118 = L_117;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_119 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		Type_t * L_120;
		L_120 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_119, /*hidden argument*/NULL);
		String_t* L_121;
		L_121 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_122;
		L_122 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_121, _stringLiteralCC03AFCC04F597D440D4CAA85BBBC4BED32615E2, /*hidden argument*/NULL);
		RuntimeObject * L_123;
		L_123 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_120, L_122, (bool)1, /*hidden argument*/NULL);
		bool L_124;
		L_124 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_123, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_5 = L_124;
		String_t* L_125;
		L_125 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_118, L_125);
		(L_118)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)L_125);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_126 = L_118;
		ArrayElementTypeCheck (L_126, _stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		(L_126)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_127 = L_126;
		String_t* L_128;
		L_128 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_127, L_128);
		(L_127)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)L_128);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_129 = L_127;
		ArrayElementTypeCheck (L_129, _stringLiteral3CCC5CB927385C64B3B9E28D708EB03B2DA33B88);
		(L_129)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteral3CCC5CB927385C64B3B9E28D708EB03B2DA33B88);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_130 = L_129;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_131 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		Type_t * L_132;
		L_132 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_131, /*hidden argument*/NULL);
		String_t* L_133;
		L_133 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_134;
		L_134 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_133, _stringLiteral572C6131D9D9D8E98ED5F025FFBD0AE23D0AE4E5, /*hidden argument*/NULL);
		RuntimeObject * L_135;
		L_135 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_132, L_134, (bool)1, /*hidden argument*/NULL);
		bool L_136;
		L_136 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_135, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_5 = L_136;
		String_t* L_137;
		L_137 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_130, L_137);
		(L_130)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)L_137);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_138 = L_130;
		ArrayElementTypeCheck (L_138, _stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		(L_138)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_139 = L_138;
		String_t* L_140;
		L_140 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_139, L_140);
		(L_139)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)41)), (String_t*)L_140);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_141 = L_139;
		ArrayElementTypeCheck (L_141, _stringLiteralE31DB28384D4853CFBEFCFCAE89511C5B197EC42);
		(L_141)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)42)), (String_t*)_stringLiteralE31DB28384D4853CFBEFCFCAE89511C5B197EC42);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_142 = L_141;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_143 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		Type_t * L_144;
		L_144 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_143, /*hidden argument*/NULL);
		String_t* L_145;
		L_145 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_146;
		L_146 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_145, _stringLiteral29E2966D0E1AB1F3DEC4F9E13E57F2A4BF5FCDFB, /*hidden argument*/NULL);
		RuntimeObject * L_147;
		L_147 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_144, L_146, (bool)1, /*hidden argument*/NULL);
		bool L_148;
		L_148 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_147, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_5 = L_148;
		String_t* L_149;
		L_149 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_142, L_149);
		(L_142)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)43)), (String_t*)L_149);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_150 = L_142;
		ArrayElementTypeCheck (L_150, _stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		(L_150)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)44)), (String_t*)_stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_151 = L_150;
		String_t* L_152;
		L_152 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_151, L_152);
		(L_151)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)45)), (String_t*)L_152);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_153 = L_151;
		ArrayElementTypeCheck (L_153, _stringLiteralE5307EE7691F4BBD9F168F2596FDD977A1F31D71);
		(L_153)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)46)), (String_t*)_stringLiteralE5307EE7691F4BBD9F168F2596FDD977A1F31D71);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_154 = L_153;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_155 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		Type_t * L_156;
		L_156 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_155, /*hidden argument*/NULL);
		String_t* L_157;
		L_157 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_158;
		L_158 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_157, _stringLiteral402134D870C3F0047AB99361E2DDC423B6F82576, /*hidden argument*/NULL);
		RuntimeObject * L_159;
		L_159 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_156, L_158, (bool)1, /*hidden argument*/NULL);
		bool L_160;
		L_160 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_159, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_5 = L_160;
		String_t* L_161;
		L_161 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_154, L_161);
		(L_154)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)47)), (String_t*)L_161);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_162 = L_154;
		ArrayElementTypeCheck (L_162, _stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		(L_162)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)48)), (String_t*)_stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_163 = L_162;
		String_t* L_164;
		L_164 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_163, L_164);
		(L_163)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)49)), (String_t*)L_164);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_165 = L_163;
		ArrayElementTypeCheck (L_165, _stringLiteralF9778556E8B8660B62FD786EC613E4ACDDF026B5);
		(L_165)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)50)), (String_t*)_stringLiteralF9778556E8B8660B62FD786EC613E4ACDDF026B5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_166 = L_165;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_167 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		Type_t * L_168;
		L_168 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_167, /*hidden argument*/NULL);
		String_t* L_169;
		L_169 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_170;
		L_170 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_169, _stringLiteralF462408793CBF80CA4037B91BB9708BBDC87C0E9, /*hidden argument*/NULL);
		RuntimeObject * L_171;
		L_171 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_168, L_170, (bool)1, /*hidden argument*/NULL);
		bool L_172;
		L_172 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_171, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_5 = L_172;
		String_t* L_173;
		L_173 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_166, L_173);
		(L_166)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)51)), (String_t*)L_173);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_174 = L_166;
		ArrayElementTypeCheck (L_174, _stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		(L_174)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)52)), (String_t*)_stringLiteral3E3768E65369146CBBD9536F924ECDB754F88650);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_175 = L_174;
		String_t* L_176;
		L_176 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_175, L_176);
		(L_175)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)53)), (String_t*)L_176);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_177 = L_175;
		ArrayElementTypeCheck (L_177, _stringLiteralE8915A289290AE14222DF772103F122F964DB398);
		(L_177)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)54)), (String_t*)_stringLiteralE8915A289290AE14222DF772103F122F964DB398);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_178 = L_177;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_179 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		Type_t * L_180;
		L_180 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_179, /*hidden argument*/NULL);
		String_t* L_181;
		L_181 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_182;
		L_182 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_181, _stringLiteral5BFF9D192ADABEB1F4DD3A9E279E9D3BC4E13F84, /*hidden argument*/NULL);
		RuntimeObject * L_183;
		L_183 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_180, L_182, (bool)1, /*hidden argument*/NULL);
		bool L_184;
		L_184 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_183, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_5 = L_184;
		String_t* L_185;
		L_185 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_178, L_185);
		(L_178)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)55)), (String_t*)L_185);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_186 = L_178;
		ArrayElementTypeCheck (L_186, _stringLiteralEF0A502425FA0D348F2C6584564DD87DDFCCA168);
		(L_186)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)56)), (String_t*)_stringLiteralEF0A502425FA0D348F2C6584564DD87DDFCCA168);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_187 = L_186;
		String_t* L_188;
		L_188 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_187, L_188);
		(L_187)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)57)), (String_t*)L_188);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_189 = L_187;
		ArrayElementTypeCheck (L_189, _stringLiteral19C88932F064A58F5F57489BB8FF0D9D3017A1D4);
		(L_189)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)58)), (String_t*)_stringLiteral19C88932F064A58F5F57489BB8FF0D9D3017A1D4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_190 = L_189;
		String_t* L_191;
		L_191 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_192;
		L_192 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral26763404460309E36106FECF953C482CAF722112, L_191, _stringLiteralEED5289FDD07FBB3080C38E212A9D00C278D3133, /*hidden argument*/NULL);
		float L_193;
		L_193 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_192, /*hidden argument*/NULL);
		V_6 = L_193;
		String_t* L_194;
		L_194 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_6), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_190, L_194);
		(L_190)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)59)), (String_t*)L_194);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_195 = L_190;
		ArrayElementTypeCheck (L_195, _stringLiteral498E487803BB211FC9A6BBBB3ADD9D99E15C4883);
		(L_195)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)60)), (String_t*)_stringLiteral498E487803BB211FC9A6BBBB3ADD9D99E15C4883);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_196 = L_195;
		String_t* L_197;
		L_197 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_196, L_197);
		(L_196)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)61)), (String_t*)L_197);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_198 = L_196;
		ArrayElementTypeCheck (L_198, _stringLiteralB2C20B66F9813851492DEF3CB110453FE7945EB8);
		(L_198)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)62)), (String_t*)_stringLiteralB2C20B66F9813851492DEF3CB110453FE7945EB8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_199 = L_198;
		String_t* L_200;
		L_200 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_201;
		L_201 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral26763404460309E36106FECF953C482CAF722112, L_200, _stringLiteralCCC5EE8464FCC788E958678A646AC764603CF523, /*hidden argument*/NULL);
		float L_202;
		L_202 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_201, /*hidden argument*/NULL);
		V_6 = L_202;
		String_t* L_203;
		L_203 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_6), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_199, L_203);
		(L_199)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)63)), (String_t*)L_203);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_204 = L_199;
		ArrayElementTypeCheck (L_204, _stringLiteral8494E7DD24349CF16B459E1B64D5C30E7B8AB7CB);
		(L_204)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)64)), (String_t*)_stringLiteral8494E7DD24349CF16B459E1B64D5C30E7B8AB7CB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_205 = L_204;
		String_t* L_206;
		L_206 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_205, L_206);
		(L_205)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)65)), (String_t*)L_206);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_207 = L_205;
		ArrayElementTypeCheck (L_207, _stringLiteral93579F2A086E7AA1D741596C3DBFFDCC18D07165);
		(L_207)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)66)), (String_t*)_stringLiteral93579F2A086E7AA1D741596C3DBFFDCC18D07165);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_208 = L_207;
		String_t* L_209;
		L_209 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_210;
		L_210 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral6E9EC18B5FFDB2A772026FEF0DDB12C8C98FD2BC, L_209, _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26, /*hidden argument*/NULL);
		float L_211;
		L_211 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_210, /*hidden argument*/NULL);
		V_6 = L_211;
		String_t* L_212;
		L_212 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_6), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_208, L_212);
		(L_208)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)67)), (String_t*)L_212);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_213 = L_208;
		ArrayElementTypeCheck (L_213, _stringLiteral8494E7DD24349CF16B459E1B64D5C30E7B8AB7CB);
		(L_213)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)68)), (String_t*)_stringLiteral8494E7DD24349CF16B459E1B64D5C30E7B8AB7CB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_214 = L_213;
		String_t* L_215;
		L_215 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_214, L_215);
		(L_214)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)69)), (String_t*)L_215);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_216 = L_214;
		ArrayElementTypeCheck (L_216, _stringLiteral7F26800153F630E25522FBD5ECC060447A3B843F);
		(L_216)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)70)), (String_t*)_stringLiteral7F26800153F630E25522FBD5ECC060447A3B843F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_217 = L_216;
		String_t* L_218;
		L_218 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_219;
		L_219 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral6E9EC18B5FFDB2A772026FEF0DDB12C8C98FD2BC, L_218, _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE, /*hidden argument*/NULL);
		float L_220;
		L_220 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_219, /*hidden argument*/NULL);
		V_6 = L_220;
		String_t* L_221;
		L_221 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_6), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_217, L_221);
		(L_217)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)71)), (String_t*)L_221);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_222 = L_217;
		ArrayElementTypeCheck (L_222, _stringLiteral76A1C7AD33F9768CA4C6CFFE8ADCEEBE2A4BFEA3);
		(L_222)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)72)), (String_t*)_stringLiteral76A1C7AD33F9768CA4C6CFFE8ADCEEBE2A4BFEA3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_223 = L_222;
		String_t* L_224;
		L_224 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_223, L_224);
		(L_223)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)73)), (String_t*)L_224);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_225 = L_223;
		ArrayElementTypeCheck (L_225, _stringLiteralCD9A2FEFFA086C692C1B2F412B10BF86FEFC1670);
		(L_225)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)74)), (String_t*)_stringLiteralCD9A2FEFFA086C692C1B2F412B10BF86FEFC1670);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_226 = L_225;
		String_t* L_227;
		L_227 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_228;
		L_228 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE4C2E5A8771C766F8101945858E660AD06031BFF, L_227, _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26, /*hidden argument*/NULL);
		float L_229;
		L_229 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_228, /*hidden argument*/NULL);
		V_6 = L_229;
		String_t* L_230;
		L_230 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_6), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_226, L_230);
		(L_226)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)75)), (String_t*)L_230);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_231 = L_226;
		ArrayElementTypeCheck (L_231, _stringLiteral76A1C7AD33F9768CA4C6CFFE8ADCEEBE2A4BFEA3);
		(L_231)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)76)), (String_t*)_stringLiteral76A1C7AD33F9768CA4C6CFFE8ADCEEBE2A4BFEA3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_232 = L_231;
		String_t* L_233;
		L_233 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_232, L_233);
		(L_232)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)77)), (String_t*)L_233);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_234 = L_232;
		ArrayElementTypeCheck (L_234, _stringLiteral1B6658CA3B80D45827FCC748D54619DB418D629C);
		(L_234)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)78)), (String_t*)_stringLiteral1B6658CA3B80D45827FCC748D54619DB418D629C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_235 = L_234;
		String_t* L_236;
		L_236 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_237;
		L_237 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE4C2E5A8771C766F8101945858E660AD06031BFF, L_236, _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE, /*hidden argument*/NULL);
		float L_238;
		L_238 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_237, /*hidden argument*/NULL);
		V_6 = L_238;
		String_t* L_239;
		L_239 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_6), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_235, L_239);
		(L_235)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)79)), (String_t*)L_239);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_240 = L_235;
		ArrayElementTypeCheck (L_240, _stringLiteral5BD549AE22A4C61843C940FF9E3E147B2F8D30E9);
		(L_240)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)80)), (String_t*)_stringLiteral5BD549AE22A4C61843C940FF9E3E147B2F8D30E9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_241 = L_240;
		String_t* L_242;
		L_242 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_241, L_242);
		(L_241)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)81)), (String_t*)L_242);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_243 = L_241;
		ArrayElementTypeCheck (L_243, _stringLiteral8F42E093D2571F88017BD94256B6068ABA67F449);
		(L_243)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)82)), (String_t*)_stringLiteral8F42E093D2571F88017BD94256B6068ABA67F449);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_244 = L_243;
		String_t* L_245;
		L_245 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_246;
		L_246 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F, L_245, _stringLiteral6756C5175BD121CFC86BC9E08021E9AB244D609F, /*hidden argument*/NULL);
		float L_247;
		L_247 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_246, /*hidden argument*/NULL);
		V_6 = L_247;
		String_t* L_248;
		L_248 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_6), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_244, L_248);
		(L_244)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)83)), (String_t*)L_248);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_249 = L_244;
		ArrayElementTypeCheck (L_249, _stringLiteral5BD549AE22A4C61843C940FF9E3E147B2F8D30E9);
		(L_249)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)84)), (String_t*)_stringLiteral5BD549AE22A4C61843C940FF9E3E147B2F8D30E9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_250 = L_249;
		String_t* L_251;
		L_251 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_250, L_251);
		(L_250)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)85)), (String_t*)L_251);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_252 = L_250;
		ArrayElementTypeCheck (L_252, _stringLiteral4DF02CC179648FFE0838FF3E005ED3DEF8E3A63F);
		(L_252)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)86)), (String_t*)_stringLiteral4DF02CC179648FFE0838FF3E005ED3DEF8E3A63F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_253 = L_252;
		String_t* L_254;
		L_254 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_255;
		L_255 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F, L_254, _stringLiteralC8AE229D8EAEF3FEF4EB3A5C18AEFE69D6BD814C, /*hidden argument*/NULL);
		float L_256;
		L_256 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_255, /*hidden argument*/NULL);
		V_6 = L_256;
		String_t* L_257;
		L_257 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_6), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_253, L_257);
		(L_253)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)87)), (String_t*)L_257);
		String_t* L_258;
		L_258 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_253, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_26, L_258, /*hidden argument*/NULL);
		// DrawPadTouches(displayArea, playerId);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_259 = ___displayArea1;
		int32_t L_260 = ___playerId0;
		Controllers_DrawPadTouches_m0C30135C285B6DA87834EDA386CD60D06907597E(__this, L_259, L_260, /*hidden argument*/NULL);
		// GUI.skin.box.normal.background = boxTexture;
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_261;
		L_261 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_262;
		L_262 = GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0(L_261, /*hidden argument*/NULL);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_263;
		L_263 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_262, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_264 = __this->get_boxTexture_9();
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_263, L_264, /*hidden argument*/NULL);
		// GUI.Box(displayArea, "");
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_265 = ___displayArea1;
		GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9(L_265, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Controllers::DrawPadTouches(UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_DrawPadTouches_m0C30135C285B6DA87834EDA386CD60D06907597E (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___displayArea0, int32_t ___playerId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionType_t163DFA9541299AB9014B41C174697914273BE984_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral183A346CDAE081A0E74A8954A4B888A022B7C7E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2606A978F4F4A2EB62267E2BDD53D6BF22980FDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EAABB10DFAAA5FA152F11D2AE659D0E21E46E96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral992D49221BC846BE48260C7957DAE6B52729D74B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11232FC2419BD7BE0957389C089E101C29690AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF93C2A5FE7E5BA1377DA212FA24D43D4E8646B17);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		// PS4Input.GetPadControllerInformation(playerId, out touchPixelDensity, out touchResolutionX, out touchResolutionY, out analogDeadZoneLeft, out analogDeadZoneRight, out connectionType);
		int32_t L_0 = ___playerId1;
		PS4Input_GetPadControllerInformation_mF6C578D4029E0816F48402EC3E7C02BDA4C22A69(L_0, (float*)(&V_11), (int32_t*)(&V_7), (int32_t*)(&V_8), (int32_t*)(&V_9), (int32_t*)(&V_10), (int32_t*)(&V_12), /*hidden argument*/NULL);
		// PS4Input.GetLastTouchData(playerId, out touchNum, out touch0x, out touch0y, out touch0id, out touch1x, out touch1y, out touch1id);
		int32_t L_1 = ___playerId1;
		PS4Input_GetLastTouchData_m42A92F2C2B8264BE789401564E322D9120A11D71(L_1, (int32_t*)(&V_0), (int32_t*)(&V_1), (int32_t*)(&V_2), (int32_t*)(&V_3), (int32_t*)(&V_4), (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		// GUI.Label(new Rect(displayArea.x + 400, displayArea.y, 300, 60), "Connection type: " + connectionType.ToString());
		float L_2;
		L_2 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		float L_3;
		L_3 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_4), ((float)il2cpp_codegen_add((float)L_2, (float)(400.0f))), L_3, (300.0f), (60.0f), /*hidden argument*/NULL);
		RuntimeObject * L_5 = Box(ConnectionType_t163DFA9541299AB9014B41C174697914273BE984_il2cpp_TypeInfo_var, (&V_12));
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_12 = *(int32_t*)UnBox(L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF93C2A5FE7E5BA1377DA212FA24D43D4E8646B17, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_4, L_7, /*hidden argument*/NULL);
		// GUI.Label(new Rect(displayArea.x + 400, displayArea.y + 40, 300, 60), "Number of Active Touches: " + touchNum);
		float L_8;
		L_8 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		float L_9;
		L_9 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_10), ((float)il2cpp_codegen_add((float)L_8, (float)(400.0f))), ((float)il2cpp_codegen_add((float)L_9, (float)(40.0f))), (300.0f), (60.0f), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral183A346CDAE081A0E74A8954A4B888A022B7C7E9, L_11, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_10, L_12, /*hidden argument*/NULL);
		// GUI.Label(new Rect(displayArea.x + 400, displayArea.y + 60, 300, 60), "Pad Touch 0: " + " touchId: " + touch0id + ", x:" + touch0x + ", y:" + touch0y);
		float L_13;
		L_13 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		float L_14;
		L_14 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_15), ((float)il2cpp_codegen_add((float)L_13, (float)(400.0f))), ((float)il2cpp_codegen_add((float)L_14, (float)(60.0f))), (300.0f), (60.0f), /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		ArrayElementTypeCheck (L_17, _stringLiteral2606A978F4F4A2EB62267E2BDD53D6BF22980FDE);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2606A978F4F4A2EB62267E2BDD53D6BF22980FDE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_18;
		ArrayElementTypeCheck (L_20, _stringLiteralA11232FC2419BD7BE0957389C089E101C29690AD);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA11232FC2419BD7BE0957389C089E101C29690AD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_21;
		ArrayElementTypeCheck (L_23, _stringLiteral992D49221BC846BE48260C7957DAE6B52729D74B);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral992D49221BC846BE48260C7957DAE6B52729D74B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_24, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_15, L_26, /*hidden argument*/NULL);
		// GUI.Label(new Rect(displayArea.x + 400, displayArea.y + 80, 300, 60), "Pad Touch 1: " + " touchId: " + touch1id + ", x:" + touch1x + ", y:" + touch1y);
		float L_27;
		L_27 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		float L_28;
		L_28 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_29), ((float)il2cpp_codegen_add((float)L_27, (float)(400.0f))), ((float)il2cpp_codegen_add((float)L_28, (float)(80.0f))), (300.0f), (60.0f), /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		ArrayElementTypeCheck (L_31, _stringLiteral3EAABB10DFAAA5FA152F11D2AE659D0E21E46E96);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3EAABB10DFAAA5FA152F11D2AE659D0E21E46E96);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		String_t* L_33;
		L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_6), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_32;
		ArrayElementTypeCheck (L_34, _stringLiteralA11232FC2419BD7BE0957389C089E101C29690AD);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA11232FC2419BD7BE0957389C089E101C29690AD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		String_t* L_36;
		L_36 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_36);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_35;
		ArrayElementTypeCheck (L_37, _stringLiteral992D49221BC846BE48260C7957DAE6B52729D74B);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral992D49221BC846BE48260C7957DAE6B52729D74B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
		String_t* L_39;
		L_39 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_39);
		String_t* L_40;
		L_40 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_38, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_29, L_40, /*hidden argument*/NULL);
		// if (touchNum > 0)
		int32_t L_41 = V_0;
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_0270;
		}
	}
	{
		// int yDraw = 0;
		V_13 = 0;
		// if (touch0x > 0 || touch0y > 0)
		int32_t L_42 = V_1;
		if ((((int32_t)L_42) > ((int32_t)0)))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_43 = V_2;
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_01fa;
		}
	}

IL_0194:
	{
		// xDraw = (int)(displayArea.x + (displayArea.width / touchResolutionX) * touch0x - fingerTextureOrigin.x);
		float L_44;
		L_44 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		float L_45;
		L_45 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		int32_t L_46 = V_7;
		int32_t L_47 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_48 = __this->get_address_of_fingerTextureOrigin_11();
		float L_49 = L_48->get_x_0();
		// yDraw = (int)(displayArea.y + (displayArea.height / touchResolutionY) * touch0y - fingerTextureOrigin.y);
		float L_50;
		L_50 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		float L_51;
		L_51 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		int32_t L_52 = V_8;
		int32_t L_53 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_54 = __this->get_address_of_fingerTextureOrigin_11();
		float L_55 = L_54->get_y_1();
		V_13 = ((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_50, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_51/(float)((float)((float)L_52)))), (float)((float)((float)L_53)))))), (float)L_55))));
		// GUI.DrawTexture(new Rect(xDraw, yDraw, 128, 128), fingerTexture);
		int32_t L_56 = V_13;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_57), ((float)((float)((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_44, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_45/(float)((float)((float)L_46)))), (float)((float)((float)L_47)))))), (float)L_49)))))), ((float)((float)L_56)), (128.0f), (128.0f), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_58 = __this->get_fingerTexture_10();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8(L_57, L_58, /*hidden argument*/NULL);
	}

IL_01fa:
	{
		// if (touchNum > 1 && (touch1x > 0 || touch1y > 0))
		int32_t L_59 = V_0;
		if ((((int32_t)L_59) <= ((int32_t)1)))
		{
			goto IL_0270;
		}
	}
	{
		int32_t L_60 = V_4;
		if ((((int32_t)L_60) > ((int32_t)0)))
		{
			goto IL_0208;
		}
	}
	{
		int32_t L_61 = V_5;
		if ((((int32_t)L_61) <= ((int32_t)0)))
		{
			goto IL_0270;
		}
	}

IL_0208:
	{
		// xDraw = (int)(displayArea.x + (displayArea.width / touchResolutionX) * touch1x - fingerTextureOrigin.x);
		float L_62;
		L_62 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		float L_63;
		L_63 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		int32_t L_64 = V_7;
		int32_t L_65 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_66 = __this->get_address_of_fingerTextureOrigin_11();
		float L_67 = L_66->get_x_0();
		// yDraw = (int)(displayArea.y + (displayArea.height / touchResolutionY) * touch1y - fingerTextureOrigin.y);
		float L_68;
		L_68 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		float L_69;
		L_69 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___displayArea0), /*hidden argument*/NULL);
		int32_t L_70 = V_8;
		int32_t L_71 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_72 = __this->get_address_of_fingerTextureOrigin_11();
		float L_73 = L_72->get_y_1();
		V_13 = ((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_68, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_69/(float)((float)((float)L_70)))), (float)((float)((float)L_71)))))), (float)L_73))));
		// GUI.DrawTexture(new Rect(xDraw, yDraw, 128, 128), fingerTexture);
		int32_t L_74 = V_13;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_75;
		memset((&L_75), 0, sizeof(L_75));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_75), ((float)((float)((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_62, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_63/(float)((float)((float)L_64)))), (float)((float)((float)L_65)))))), (float)L_67)))))), ((float)((float)L_74)), (128.0f), (128.0f), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_76 = __this->get_fingerTexture_10();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8(L_75, L_76, /*hidden argument*/NULL);
	}

IL_0270:
	{
		// }
		return;
	}
}
// System.Void Controllers::UpdateJoystickRepresentations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_UpdateJoystickRepresentations_mBFECED5AF23143B48F25BD43A04C4EED37067447 (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * V_2 = NULL;
	{
		// for (int i = 0; i < numHandles; i++)
		V_0 = 0;
		goto IL_008d;
	}

IL_0007:
	{
		// GameObject currentJoystick = GameObject.Find("joystick" + i);
		String_t* L_0;
		L_0 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F, L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// MeshRenderer meshrenderer = currentJoystick.GetComponent<MeshRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_1;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_4;
		L_4 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_3, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		V_2 = L_4;
		// if (PS4Input.PadIsConnected(i) == true)
		int32_t L_5 = V_0;
		bool L_6;
		L_6 = PS4Input_PadIsConnected_mC05855F4E0112746E2A30584FDD73952CF4612E5(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007a;
		}
	}
	{
		// if (meshrenderer.enabled == false)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_7 = V_2;
		bool L_8;
		L_8 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		// meshrenderer.enabled = true;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_9 = V_2;
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// currentJoystick.transform.eulerAngles = new Vector3(-PS4Input.PadGetLastOrientation(i).x, PS4Input.PadGetLastOrientation(i).y, PS4Input.PadGetLastOrientation(i).z) * 100;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13;
		L_13 = PS4Input_PadGetLastOrientation_mCE728934EAE971E94902D013B2359EF0A695035E(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_1();
		int32_t L_15 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_16;
		L_16 = PS4Input_PadGetLastOrientation_mCE728934EAE971E94902D013B2359EF0A695035E(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_2();
		int32_t L_18 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_19;
		L_19 = PS4Input_PadGetLastOrientation_mCE728934EAE971E94902D013B2359EF0A695035E(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((-L_14)), L_17, L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, (100.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_11, L_22, /*hidden argument*/NULL);
		// }
		goto IL_0089;
	}

IL_007a:
	{
		// else if (meshrenderer.enabled == true)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_23 = V_2;
		bool L_24;
		L_24 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0089;
		}
	}
	{
		// meshrenderer.enabled = false;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_25 = V_2;
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_25, (bool)0, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// for (int i = 0; i < numHandles; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_008d:
	{
		// for (int i = 0; i < numHandles; i++)
		int32_t L_27 = V_0;
		int32_t L_28 = __this->get_numHandles_5();
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Controllers::DrawQuad(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers_DrawQuad_m268A0B939138E103515CD067B2F1C1F9F740FC73 (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	{
		// Texture2D texture = new Texture2D(1, 1);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		// texture.SetPixel(0, 0, color);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color1;
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		// texture.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = V_0;
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_3, /*hidden argument*/NULL);
		// GUI.skin.box.normal.background = texture;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_4;
		L_4 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5;
		L_5 = GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0(L_4, /*hidden argument*/NULL);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_6;
		L_6 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_5, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = V_0;
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_6, L_7, /*hidden argument*/NULL);
		// GUI.Box(position, GUIContent.none);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_9 = ((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var))->get_none_6();
		GUI_Box_m8DDF84B2E086602E5D2589B5B1198821ABA6E7A4(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Controllers::GetScreenPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Controllers_GetScreenPosition_mFDCCD99EA5714E34215BBBD92704869E3D74F73C (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, int32_t ___connectedControllerId0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (connectedControllerId < 2) // top row of screen
		int32_t L_0 = ___connectedControllerId0;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		// position.x = (Screen.width / 2) * connectedControllerId;
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_2 = ___connectedControllerId0;
		(&V_0)->set_x_0(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_1/(int32_t)2)), (int32_t)L_2)))));
		// position.y = 0;
		(&V_0)->set_y_1((0.0f));
		// }
		goto IL_0045;
	}

IL_0023:
	{
		// position.x = (Screen.width / 2) * (connectedControllerId - 2);
		int32_t L_3;
		L_3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_4 = ___connectedControllerId0;
		(&V_0)->set_x_0(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3/(int32_t)2)), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)2)))))));
		// position.y = Screen.height / 2;
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		(&V_0)->set_y_1(((float)((float)((int32_t)((int32_t)L_5/(int32_t)2)))));
	}

IL_0045:
	{
		// return position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Color Controllers::GetPlayerColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Controllers_GetPlayerColor_m7EC2A001201995D072ECD1AC18A6FCC09A5C3E8D (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, int32_t ___colorId0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___colorId0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0024;
			}
			case 3:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_0018:
	{
		// return Color.blue;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		return L_1;
	}

IL_001e:
	{
		// return Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		return L_2;
	}

IL_0024:
	{
		// return Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		// return Color.magenta;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0(/*hidden argument*/NULL);
		return L_4;
	}

IL_0030:
	{
		// return Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Controllers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controllers__ctor_m1FFF220BA49FB384AA8790DBB8CF2DF8CB08859F (Controllers_t7871D23E04D75F93C51E6EC3D1CCE54E89B78128 * __this, const RuntimeMethod* method)
{
	{
		// int maxControllers = 4;
		__this->set_maxControllers_6(4);
		// int sectionPadding = 30; // Separates player sections from one another
		__this->set_sectionPadding_7(((int32_t)30));
		// int internalPadding = 10; // Adds a bit of padding around the contents of the player section
		__this->set_internalPadding_8(((int32_t)10));
		// Vector2 fingerTextureOrigin = new Vector2(0.0f, 0.0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_fingerTextureOrigin_11(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_StartWait = new WaitForSeconds(m_StartDelay);
		float L_0 = __this->get_m_StartDelay_5();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_1 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_1, L_0, /*hidden argument*/NULL);
		__this->set_m_StartWait_12(L_1);
		// m_EndWait = new WaitForSeconds(m_EndDelay);
		float L_2 = __this->get_m_EndDelay_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_EndWait_13(L_3);
		// SpawnAllTanks();
		GameManager_SpawnAllTanks_mD740AB54DCDCDD93DB06684CA23ABDA4DE50EA12(__this, /*hidden argument*/NULL);
		// SetCameraTargets();
		GameManager_SetCameraTargets_mFB4769A55C31DEFD386AF705BA62996DCF12AB13(__this, /*hidden argument*/NULL);
		// StartCoroutine(GameLoop());
		RuntimeObject* L_4;
		L_4 = GameManager_GameLoop_mCB39229E37879521BAE7941CA1A8629628334E44(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::SpawnAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnAllTanks_mD740AB54DCDCDD93DB06684CA23ABDA4DE50EA12 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0061;
	}

IL_0004:
	{
		// m_Tanks[i].m_Instance =
		//     Instantiate(m_TankPrefab, m_Tanks[i].m_SpawnPoint.position, m_Tanks[i].m_SpawnPoint.rotation) as GameObject;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_0 = __this->get_m_Tanks_10();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_m_TankPrefab_9();
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_5 = __this->get_m_Tanks_10();
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = L_8->get_m_SpawnPoint_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_11 = __this->get_m_Tanks_10();
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = L_14->get_m_SpawnPoint_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_10, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		L_3->set_m_Instance_4(L_17);
		// m_Tanks[i].m_PlayerNumber = i + 1;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_18 = __this->get_m_Tanks_10();
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = V_0;
		L_21->set_m_PlayerNumber_2(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		// m_Tanks[i].Setup();
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_23 = __this->get_m_Tanks_10();
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		TankManager_Setup_mC2D5AF0F4E997C05D2D5F5B2C5B36A97C49EEB3D(L_26, /*hidden argument*/NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0061:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_28 = V_0;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_29 = __this->get_m_Tanks_10();
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::SetCameraTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetCameraTargets_mFB4769A55C31DEFD386AF705BA62996DCF12AB13 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Transform[] targets = new Transform[m_Tanks.Length];
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_0 = __this->get_m_Tanks_10();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < targets.Length; i++)
		V_1 = 0;
		goto IL_002b;
	}

IL_0012:
	{
		// targets[i] = m_Tanks[i].m_Instance.transform;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = V_0;
		int32_t L_3 = V_1;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_4 = __this->get_m_Tanks_10();
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_m_Instance_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_9);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_9);
		// for (int i = 0; i < targets.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002b:
	{
		// for (int i = 0; i < targets.Length; i++)
		int32_t L_11 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		// m_CameraControl.m_Targets = targets;
		CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * L_13 = __this->get_m_CameraControl_7();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_14 = V_0;
		L_13->set_m_Targets_7(L_14);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::GameLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameLoop_mCB39229E37879521BAE7941CA1A8629628334E44 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8 * L_0 = (U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8 *)il2cpp_codegen_object_new(U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8_il2cpp_TypeInfo_var);
		U3CGameLoopU3Ed__15__ctor_m5C16BF4335BAA71797F99F5A075A120261217641(L_0, 0, /*hidden argument*/NULL);
		U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::RoundStarting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundStarting_m4E47A56417E88F7C58E7430DB2FDD70D9EDF0041 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC * L_0 = (U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC *)il2cpp_codegen_object_new(U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC_il2cpp_TypeInfo_var);
		U3CRoundStartingU3Ed__16__ctor_m253FE6A88BEB9D8754F7471E9359D97FF81F8175(L_0, 0, /*hidden argument*/NULL);
		U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::RoundPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundPlaying_mF4EE9A6BA7B5335D3A6A2CC58DD6D421CC257664 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF * L_0 = (U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF *)il2cpp_codegen_object_new(U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF_il2cpp_TypeInfo_var);
		U3CRoundPlayingU3Ed__17__ctor_m21EEC7D1F84A2088FF29CDCABFFB5160C0912C51(L_0, 0, /*hidden argument*/NULL);
		U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::RoundEnding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_RoundEnding_m4AE44E0941A2CD260541F68749FCC2565601D423 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499 * L_0 = (U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499 *)il2cpp_codegen_object_new(U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499_il2cpp_TypeInfo_var);
		U3CRoundEndingU3Ed__18__ctor_mE1F961DEC05E778A7ADC21DFCDD52BAB3B8B4179(L_0, 0, /*hidden argument*/NULL);
		U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean GameManager::OneTankLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_OneTankLeft_m869360BDF4CB7E2D471F303C002C41D508C4B24E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int numTanksLeft = 0;
		V_0 = 0;
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_1 = 0;
		goto IL_0022;
	}

IL_0006:
	{
		// if (m_Tanks[i].m_Instance.activeSelf)
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_0 = __this->get_m_Tanks_10();
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_m_Instance_4();
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// numTanksLeft++;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_8 = V_1;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_9 = __this->get_m_Tanks_10();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// return numTanksLeft <= 1;
		int32_t L_10 = V_0;
		return (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// TankManager GameManager::GetRoundWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * GameManager_GetRoundWinner_mAAADD3B4F2BDA6C6BAFACF7FC775BDFA1AFCBC23 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// if (m_Tanks[i].m_Instance.activeSelf)
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_0 = __this->get_m_Tanks_10();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_m_Instance_4();
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// return m_Tanks[i];
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_6 = __this->get_m_Tanks_10();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}

IL_0021:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0025:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_11 = V_0;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_12 = __this->get_m_Tanks_10();
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 *)NULL;
	}
}
// TankManager GameManager::GetGameWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * GameManager_GetGameWinner_mE130E96922EB5FAA8ABD853B8BB6310051D451B9 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// if (m_Tanks[i].m_Wins == m_NumRoundsToWin)
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_0 = __this->get_m_Tanks_10();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = L_3->get_m_Wins_5();
		int32_t L_5 = __this->get_m_NumRoundsToWin_4();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0022;
		}
	}
	{
		// return m_Tanks[i];
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_6 = __this->get_m_Tanks_10();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}

IL_0022:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0026:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_11 = V_0;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_12 = __this->get_m_Tanks_10();
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 *)NULL;
	}
}
// System.String GameManager::EndMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameManager_EndMessage_m677DBBEECAAA3DB6643FC9A9B5498088D906ABF2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10539AFF080575158FF59DAAF82A21DB17238F7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8639BF0C35BFDED6F42E2F7D2D031CBC01D47CED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FDD20A9411072477A2D3B6967AA1240E17FCECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2085729353EAEB87B3AB05409A69B023603596C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB76DECE8512D57CB727FDB8622766F2BF0422B9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string message = "DRAW!";
		V_0 = _stringLiteralDB76DECE8512D57CB727FDB8622766F2BF0422B9;
		// if (m_RoundWinner != null)
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_0 = __this->get_m_RoundWinner_14();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// message = m_RoundWinner.m_ColoredPlayerText + " WINS THE ROUND!";
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_1 = __this->get_m_RoundWinner_14();
		String_t* L_2 = L_1->get_m_ColoredPlayerText_3();
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteral8FDD20A9411072477A2D3B6967AA1240E17FCECC, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0024:
	{
		// message += "\n\n\n\n";
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, _stringLiteralA2085729353EAEB87B3AB05409A69B023603596C, /*hidden argument*/NULL);
		V_0 = L_5;
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_1 = 0;
		goto IL_007d;
	}

IL_0034:
	{
		// message += m_Tanks[i].m_ColoredPlayerText + ": " + m_Tanks[i].m_Wins + " WINS\n";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = V_0;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_10 = __this->get_m_Tanks_10();
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		String_t* L_14 = L_13->get_m_ColoredPlayerText_3();
		ArrayElementTypeCheck (L_9, L_14);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_9;
		ArrayElementTypeCheck (L_15, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_17 = __this->get_m_Tanks_10();
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		int32_t* L_21 = L_20->get_address_of_m_Wins_5();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_21, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_16, L_22);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_16;
		ArrayElementTypeCheck (L_23, _stringLiteral8639BF0C35BFDED6F42E2F7D2D031CBC01D47CED);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8639BF0C35BFDED6F42E2F7D2D031CBC01D47CED);
		String_t* L_24;
		L_24 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_007d:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_26 = V_1;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_27 = __this->get_m_Tanks_10();
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		// if (m_GameWinner != null)
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_28 = __this->get_m_GameWinner_15();
		if (!L_28)
		{
			goto IL_00a6;
		}
	}
	{
		// message = m_GameWinner.m_ColoredPlayerText + " WINS THE GAME!";
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_29 = __this->get_m_GameWinner_15();
		String_t* L_30 = L_29->get_m_ColoredPlayerText_3();
		String_t* L_31;
		L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_30, _stringLiteral10539AFF080575158FF59DAAF82A21DB17238F7E, /*hidden argument*/NULL);
		V_0 = L_31;
	}

IL_00a6:
	{
		// return message;
		String_t* L_32 = V_0;
		return L_32;
	}
}
// System.Void GameManager::ResetAllTanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetAllTanks_m1D749DFEE2E6011F26CB4027F8196DE2F7FD96B8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// m_Tanks[i].Reset();
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_0 = __this->get_m_Tanks_10();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		TankManager_Reset_mEFC6CFF1CFC6ABD2C920939924D95FC252CA61A6(L_3, /*hidden argument*/NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0015:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_5 = V_0;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_6 = __this->get_m_Tanks_10();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::EnableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnableTankControl_m9EB3B8F089DA57D626ADA8BE6E04951944C66F52 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// m_Tanks[i].EnableControl();
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_0 = __this->get_m_Tanks_10();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		TankManager_EnableControl_mAF211A27BF318BAF80E5A3B12AE0A80335B73FE3(L_3, /*hidden argument*/NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0015:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_5 = V_0;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_6 = __this->get_m_Tanks_10();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::DisableTankControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableTankControl_m34F0BEA8B4C61C0700F2C772A291B36BBDE508EE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// m_Tanks[i].DisableControl();
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_0 = __this->get_m_Tanks_10();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		TankManager_DisableControl_mAF6BF47CCDF34CC3318E7E873315B078FB07AE2C(L_3, /*hidden argument*/NULL);
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0015:
	{
		// for (int i = 0; i < m_Tanks.Length; i++)
		int32_t L_5 = V_0;
		TankManagerU5BU5D_tAF841D3C8E5B46538DC9E98A988A01E4E826E84F* L_6 = __this->get_m_Tanks_10();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public int m_NumRoundsToWin = 5;
		__this->set_m_NumRoundsToWin_4(5);
		// public float m_StartDelay = 3f;
		__this->set_m_StartDelay_5((3.0f));
		// public float m_EndDelay = 3f;
		__this->set_m_EndDelay_6((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GamePad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_Start_m7B1D62492E5EA4828A4CB0EDB98F8ECCC847E731 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	{
		// m_StickId = playerId + 1;
		int32_t L_0 = __this->get_playerId_5();
		__this->set_m_StickId_9(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// ToggleGamePad(false);
		GamePad_ToggleGamePad_mFF47A85F29B03EB4C0B66E87D086A6AE19600352(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_Update_m70C9E1E06D31ADDCF2D933F4E60496818EBCFE60 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionType_t163DFA9541299AB9014B41C174697914273BE984_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402134D870C3F0047AB99361E2DDC423B6F82576);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A89AD8B087506F088189004B84329EF6DBA261D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PS4Input.PadIsConnected(playerId))
		int32_t L_0 = __this->get_playerId_5();
		bool L_1;
		L_1 = PS4Input_PadIsConnected_mC05855F4E0112746E2A30584FDD73952CF4612E5(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0170;
		}
	}
	{
		// if(!m_HasSetupGamepad)
		bool L_2 = __this->get_m_HasSetupGamepad_11();
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// ToggleGamePad(true);
		GamePad_ToggleGamePad_mFF47A85F29B03EB4C0B66E87D086A6AE19600352(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// Touchpad();
		GamePad_Touchpad_mB623F17EAC9FF91BE5726CA8663FFA60347AC163(__this, /*hidden argument*/NULL);
		// Thumbsticks();
		GamePad_Thumbsticks_mF8447EB3D4C98A1DC4F4F4466AF7FF761F098A31(__this, /*hidden argument*/NULL);
		// InputButtons();
		GamePad_InputButtons_mA5EC73B7CE09E98D5AB7C024086195557CF4D608(__this, /*hidden argument*/NULL);
		// DPadButtons();
		GamePad_DPadButtons_mD9C30E661DB58F6DF02303E9A35A9988436496AE(__this, /*hidden argument*/NULL);
		// TriggerShoulderButtons();
		GamePad_TriggerShoulderButtons_mDFAD2CFFD05EAAFAE5089CF6E1AC54743B35E43A(__this, /*hidden argument*/NULL);
		// Lightbar();
		GamePad_Lightbar_mAEE1CB0AADDF8753E1656514920469FEAFA95956(__this, /*hidden argument*/NULL);
		// Speaker();
		GamePad_Speaker_m12DAA3633E99B6291D0110BCE2B4A082ECE6E8F7(__this, /*hidden argument*/NULL);
		// if(Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button7", true)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		int32_t* L_5 = __this->get_address_of_m_StickId_9();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_6, _stringLiteral402134D870C3F0047AB99361E2DDC423B6F82576, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_8;
		L_8 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_4, L_7, (bool)1, /*hidden argument*/NULL);
		bool L_9;
		L_9 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_8, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00c8;
		}
	}
	{
		// gamePad.options.color = inputOn;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_10 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11 = L_10->get_options_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = __this->get_inputOn_7();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_11, L_12, /*hidden argument*/NULL);
		// PS4Input.PadResetOrientation(playerId);
		int32_t L_13 = __this->get_playerId_5();
		PS4Input_PadResetOrientation_m5781324370FF12270350C3F36DFF7E24466EEBA0(L_13, /*hidden argument*/NULL);
		// PS4Input.PadResetLightBar(playerId);
		int32_t L_14 = __this->get_playerId_5();
		PS4Input_PadResetLightBar_m4A078CAE01147E748A97EA8B95CAE98FDF3934CC(L_14, /*hidden argument*/NULL);
		// m_LightbarColour = GetPlayerColor(PS4Input.GetUsersDetails(playerId).color);
		int32_t L_15 = __this->get_playerId_5();
		LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  L_16;
		L_16 = PS4Input_GetUsersDetails_m96D43DC9839BA34B4A79A468541E45860767ABD7(L_15, /*hidden argument*/NULL);
		int32_t L_17 = L_16.get_color_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = GamePad_GetPlayerColor_m5C2B91F53B9CBACA70464435C2272C20A6D9863B(L_17, /*hidden argument*/NULL);
		__this->set_m_LightbarColour_10(L_18);
		// }
		goto IL_00de;
	}

IL_00c8:
	{
		// gamePad.options.color = inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_19 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_20 = L_19->get_options_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = __this->get_inputOff_8();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// gamePad.gyro.localEulerAngles = new Vector3(-PS4Input.PadGetLastOrientation(playerId).x,
		//                                             -PS4Input.PadGetLastOrientation(playerId).y,
		//                                             PS4Input.PadGetLastOrientation(playerId).z) * 100;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_22 = __this->get_gamePad_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = L_22->get_gyro_18();
		int32_t L_24 = __this->get_playerId_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_25;
		L_25 = PS4Input_PadGetLastOrientation_mCE728934EAE971E94902D013B2359EF0A695035E(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_1();
		int32_t L_27 = __this->get_playerId_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_28;
		L_28 = PS4Input_PadGetLastOrientation_mCE728934EAE971E94902D013B2359EF0A695035E(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_2();
		int32_t L_30 = __this->get_playerId_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_31;
		L_31 = PS4Input_PadGetLastOrientation_mCE728934EAE971E94902D013B2359EF0A695035E(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_z_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), ((-L_26)), ((-L_29)), L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, (100.0f), /*hidden argument*/NULL);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_23, L_34, /*hidden argument*/NULL);
		// gamePad.text.text = PS4Input.RefreshUsersDetails(playerId).userName + "\n(" + m_ConnectionType + ")";
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_35 = __this->get_gamePad_4();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_36 = L_35->get_text_19();
		int32_t L_37 = __this->get_playerId_5();
		LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  L_38;
		L_38 = PS4Input_RefreshUsersDetails_m7ECAC3655E412AF48324127D56F195751D7F6A98(L_37, /*hidden argument*/NULL);
		String_t* L_39 = L_38.get_userName_4();
		int32_t* L_40 = __this->get_address_of_m_ConnectionType_13();
		RuntimeObject * L_41 = Box(ConnectionType_t163DFA9541299AB9014B41C174697914273BE984_il2cpp_TypeInfo_var, L_40);
		String_t* L_42;
		L_42 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
		*L_40 = *(int32_t*)UnBox(L_41);
		String_t* L_43;
		L_43 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_39, _stringLiteral8A89AD8B087506F088189004B84329EF6DBA261D, L_42, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_36, L_43, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0170:
	{
		// else if(m_HasSetupGamepad)
		bool L_44 = __this->get_m_HasSetupGamepad_11();
		if (!L_44)
		{
			goto IL_017f;
		}
	}
	{
		// ToggleGamePad(false);
		GamePad_ToggleGamePad_mFF47A85F29B03EB4C0B66E87D086A6AE19600352(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_017f:
	{
		// }
		return;
	}
}
// System.Void GamePad::ToggleGamePad(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_ToggleGamePad_mFF47A85F29B03EB4C0B66E87D086A6AE19600352 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionType_t163DFA9541299AB9014B41C174697914273BE984_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15ABA1A04898BEFC8B3C8918C10803CACA669ECD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A89AD8B087506F088189004B84329EF6DBA261D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(active)
		bool L_0 = ___active0;
		if (!L_0)
		{
			goto IL_00a0;
		}
	}
	{
		// m_LightbarColour = GetPlayerColor(PS4Input.GetUsersDetails(playerId).color);
		int32_t L_1 = __this->get_playerId_5();
		LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  L_2;
		L_2 = PS4Input_GetUsersDetails_m96D43DC9839BA34B4A79A468541E45860767ABD7(L_1, /*hidden argument*/NULL);
		int32_t L_3 = L_2.get_color_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = GamePad_GetPlayerColor_m5C2B91F53B9CBACA70464435C2272C20A6D9863B(L_3, /*hidden argument*/NULL);
		__this->set_m_LightbarColour_10(L_4);
		// m_LoggedInUser = PS4Input.RefreshUsersDetails(playerId);
		int32_t L_5 = __this->get_playerId_5();
		LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE  L_6;
		L_6 = PS4Input_RefreshUsersDetails_m7ECAC3655E412AF48324127D56F195751D7F6A98(L_5, /*hidden argument*/NULL);
		__this->set_m_LoggedInUser_12(L_6);
		// gamePad.text.text = m_LoggedInUser.userName + "\n(" + m_ConnectionType + ")";
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_7 = __this->get_gamePad_4();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_8 = L_7->get_text_19();
		LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE * L_9 = __this->get_address_of_m_LoggedInUser_12();
		String_t* L_10 = L_9->get_userName_4();
		int32_t* L_11 = __this->get_address_of_m_ConnectionType_13();
		RuntimeObject * L_12 = Box(ConnectionType_t163DFA9541299AB9014B41C174697914273BE984_il2cpp_TypeInfo_var, L_11);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		*L_11 = *(int32_t*)UnBox(L_12);
		String_t* L_14;
		L_14 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_10, _stringLiteral8A89AD8B087506F088189004B84329EF6DBA261D, L_13, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_8, L_14, /*hidden argument*/NULL);
		// gamePad.gyro.localRotation = Quaternion.identity;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_15 = __this->get_gamePad_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = L_15->get_gyro_18();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_16, L_17, /*hidden argument*/NULL);
		// gamePad.gyro.gameObject.SetActive(true);
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_18 = __this->get_gamePad_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = L_18->get_gyro_18();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)1, /*hidden argument*/NULL);
		// m_HasSetupGamepad = true;
		__this->set_m_HasSetupGamepad_11((bool)1);
		// }
		return;
	}

IL_00a0:
	{
		// touches[0].gameObject.SetActive(false);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_21 = __this->get_touches_6();
		int32_t L_22 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		// touches[1].gameObject.SetActive(false);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_25 = __this->get_touches_6();
		int32_t L_26 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_27, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_28, (bool)0, /*hidden argument*/NULL);
		// m_LightbarColour = Color.gray;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29;
		L_29 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		__this->set_m_LightbarColour_10(L_29);
		// gamePad.lightbar.color = m_LightbarColour;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_30 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_31 = L_30->get_lightbar_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32 = __this->get_m_LightbarColour_10();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_31, L_32, /*hidden argument*/NULL);
		// gamePad.light.color = Color.black;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_33 = __this->get_gamePad_4();
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_34 = L_33->get_light_20();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
		L_35 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_34, L_35, /*hidden argument*/NULL);
		// gamePad.text.text = "Disconnected";
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_36 = __this->get_gamePad_4();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_37 = L_36->get_text_19();
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_37, _stringLiteral15ABA1A04898BEFC8B3C8918C10803CACA669ECD, /*hidden argument*/NULL);
		// gamePad.gyro.gameObject.SetActive(false);
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_38 = __this->get_gamePad_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = L_38->get_gyro_18();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)0, /*hidden argument*/NULL);
		// m_HasSetupGamepad = false;
		__this->set_m_HasSetupGamepad_11((bool)0);
		// }
		return;
	}
}
// System.Void GamePad::Touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_Touchpad_mB623F17EAC9FF91BE5726CA8663FFA60347AC163 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E2966D0E1AB1F3DEC4F9E13E57F2A4BF5FCDFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// PS4Input.GetPadControllerInformation(playerId, out m_TouchPixelDensity, out m_TouchResolutionX, out m_TouchResolutionY, out m_AnalogDeadZoneLeft, out m_AnalogDeadZoneRight, out m_ConnectionType);
		int32_t L_0 = __this->get_playerId_5();
		float* L_1 = __this->get_address_of_m_TouchPixelDensity_25();
		int32_t* L_2 = __this->get_address_of_m_TouchResolutionX_21();
		int32_t* L_3 = __this->get_address_of_m_TouchResolutionY_22();
		int32_t* L_4 = __this->get_address_of_m_AnalogDeadZoneLeft_23();
		int32_t* L_5 = __this->get_address_of_m_AnalogDeadZoneRight_24();
		int32_t* L_6 = __this->get_address_of_m_ConnectionType_13();
		PS4Input_GetPadControllerInformation_mF6C578D4029E0816F48402EC3E7C02BDA4C22A69(L_0, (float*)L_1, (int32_t*)L_2, (int32_t*)L_3, (int32_t*)L_4, (int32_t*)L_5, (int32_t*)L_6, /*hidden argument*/NULL);
		// PS4Input.GetLastTouchData(playerId, out m_TouchNum, out m_Touch0X, out m_Touch0Y, out m_Touch0Id, out m_Touch1X, out m_Touch1Y, out m_Touch1Id);
		int32_t L_7 = __this->get_playerId_5();
		int32_t* L_8 = __this->get_address_of_m_TouchNum_14();
		int32_t* L_9 = __this->get_address_of_m_Touch0X_15();
		int32_t* L_10 = __this->get_address_of_m_Touch0Y_16();
		int32_t* L_11 = __this->get_address_of_m_Touch0Id_17();
		int32_t* L_12 = __this->get_address_of_m_Touch1X_18();
		int32_t* L_13 = __this->get_address_of_m_Touch1Y_19();
		int32_t* L_14 = __this->get_address_of_m_Touch1Id_20();
		PS4Input_GetLastTouchData_m42A92F2C2B8264BE789401564E322D9120A11D71(L_7, (int32_t*)L_8, (int32_t*)L_9, (int32_t*)L_10, (int32_t*)L_11, (int32_t*)L_12, (int32_t*)L_13, (int32_t*)L_14, /*hidden argument*/NULL);
		// if (m_TouchNum > 0)
		int32_t L_15 = __this->get_m_TouchNum_14();
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_01ce;
		}
	}
	{
		// if (m_Touch0X > 0 || m_Touch0Y > 0)
		int32_t L_16 = __this->get_m_Touch0X_15();
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_17 = __this->get_m_Touch0Y_16();
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00f1;
		}
	}

IL_0082:
	{
		// if (!touches[0].gameObject.activeSelf)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_18 = __this->get_touches_6();
		int32_t L_19 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		bool L_22;
		L_22 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00a9;
		}
	}
	{
		// touches[0].gameObject.SetActive(true);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_23 = __this->get_touches_6();
		int32_t L_24 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// xPos = (3.57f / m_TouchResolutionX) * m_Touch0X;
		int32_t L_27 = __this->get_m_TouchResolutionX_21();
		int32_t L_28 = __this->get_m_Touch0X_15();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(3.56999993f)/(float)((float)((float)L_27)))), (float)((float)((float)L_28))));
		// yPos = (1.35f / m_TouchResolutionY) * m_Touch0Y;
		int32_t L_29 = __this->get_m_TouchResolutionY_22();
		int32_t L_30 = __this->get_m_Touch0Y_16();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.35000002f)/(float)((float)((float)L_29)))), (float)((float)((float)L_30))));
		// touches[0].localPosition = new Vector3(xPos, -yPos, 1);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_31 = __this->get_touches_6();
		int32_t L_32 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		float L_34 = V_0;
		float L_35 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), L_34, ((-L_35)), (1.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_33, L_36, /*hidden argument*/NULL);
		// }
		goto IL_0118;
	}

IL_00f1:
	{
		// else if (touches[0].gameObject.activeSelf)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_37 = __this->get_touches_6();
		int32_t L_38 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		bool L_41;
		L_41 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0118;
		}
	}
	{
		// touches[0].gameObject.SetActive(false);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_42 = __this->get_touches_6();
		int32_t L_43 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_44, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_45, (bool)0, /*hidden argument*/NULL);
	}

IL_0118:
	{
		// if (m_TouchNum > 1 && (m_Touch1X > 0 || m_Touch1Y > 0))
		int32_t L_46 = __this->get_m_TouchNum_14();
		if ((((int32_t)L_46) <= ((int32_t)1)))
		{
			goto IL_01a5;
		}
	}
	{
		int32_t L_47 = __this->get_m_Touch1X_18();
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_0136;
		}
	}
	{
		int32_t L_48 = __this->get_m_Touch1Y_19();
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_01a5;
		}
	}

IL_0136:
	{
		// if (!touches[1].gameObject.activeSelf)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_49 = __this->get_touches_6();
		int32_t L_50 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
		L_52 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_51, /*hidden argument*/NULL);
		bool L_53;
		L_53 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_015d;
		}
	}
	{
		// touches[1].gameObject.SetActive(true);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_54 = __this->get_touches_6();
		int32_t L_55 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57;
		L_57 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_56, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_57, (bool)1, /*hidden argument*/NULL);
	}

IL_015d:
	{
		// xPos = (3.57f / m_TouchResolutionX) * m_Touch1X;
		int32_t L_58 = __this->get_m_TouchResolutionX_21();
		int32_t L_59 = __this->get_m_Touch1X_18();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(3.56999993f)/(float)((float)((float)L_58)))), (float)((float)((float)L_59))));
		// yPos = (1.35f / m_TouchResolutionY) * m_Touch1Y;
		int32_t L_60 = __this->get_m_TouchResolutionY_22();
		int32_t L_61 = __this->get_m_Touch1Y_19();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.35000002f)/(float)((float)((float)L_60)))), (float)((float)((float)L_61))));
		// touches[1].localPosition = new Vector3(xPos, -yPos, 1);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_62 = __this->get_touches_6();
		int32_t L_63 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		float L_65 = V_0;
		float L_66 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_67), L_65, ((-L_66)), (1.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_64, L_67, /*hidden argument*/NULL);
		// }
		goto IL_021c;
	}

IL_01a5:
	{
		// else if (touches[1].gameObject.activeSelf)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_68 = __this->get_touches_6();
		int32_t L_69 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71;
		L_71 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_70, /*hidden argument*/NULL);
		bool L_72;
		L_72 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_71, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_021c;
		}
	}
	{
		// touches[1].gameObject.SetActive(false);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_73 = __this->get_touches_6();
		int32_t L_74 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76;
		L_76 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_75, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_76, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_021c;
	}

IL_01ce:
	{
		// else if (touches[0].gameObject.activeSelf || touches[1].gameObject.activeSelf)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_77 = __this->get_touches_6();
		int32_t L_78 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80;
		L_80 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_79, /*hidden argument*/NULL);
		bool L_81;
		L_81 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_80, /*hidden argument*/NULL);
		if (L_81)
		{
			goto IL_01f6;
		}
	}
	{
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_82 = __this->get_touches_6();
		int32_t L_83 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85;
		L_85 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_84, /*hidden argument*/NULL);
		bool L_86;
		L_86 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_021c;
		}
	}

IL_01f6:
	{
		// touches[0].gameObject.SetActive(false);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_87 = __this->get_touches_6();
		int32_t L_88 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_88));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90;
		L_90 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_89, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_90, (bool)0, /*hidden argument*/NULL);
		// touches[1].gameObject.SetActive(false);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_91 = __this->get_touches_6();
		int32_t L_92 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93 = (L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94;
		L_94 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_93, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_94, (bool)0, /*hidden argument*/NULL);
	}

IL_021c:
	{
		// if(Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button6", true)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_95 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_96;
		L_96 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_95, /*hidden argument*/NULL);
		int32_t* L_97 = __this->get_address_of_m_StickId_9();
		String_t* L_98;
		L_98 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_97, /*hidden argument*/NULL);
		String_t* L_99;
		L_99 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_98, _stringLiteral29E2966D0E1AB1F3DEC4F9E13E57F2A4BF5FCDFB, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_100;
		L_100 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_96, L_99, (bool)1, /*hidden argument*/NULL);
		bool L_101;
		L_101 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_100, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_0287;
		}
	}
	{
		// gamePad.touchpad.color = inputOn;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_102 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_103 = L_102->get_touchpad_17();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_104 = __this->get_inputOn_7();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_103, L_104, /*hidden argument*/NULL);
		// TouchpadAudio(m_TouchResolutionX, m_TouchResolutionY, m_Touch0X, m_Touch0Y);
		int32_t L_105 = __this->get_m_TouchResolutionX_21();
		int32_t L_106 = __this->get_m_TouchResolutionY_22();
		int32_t L_107 = __this->get_m_Touch0X_15();
		int32_t L_108 = __this->get_m_Touch0Y_16();
		GamePad_TouchpadAudio_m14B22374DD5F427B3035B7FE255058274C6D9D7E(__this, L_105, L_106, L_107, L_108, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0287:
	{
		// gamePad.touchpad.color = inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_109 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_110 = L_109->get_touchpad_17();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_111 = __this->get_inputOff_8();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_110, L_111, /*hidden argument*/NULL);
		// GetComponent<AudioSource>().Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_112;
		L_112 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_112, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePad::TouchpadAudio(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_TouchpadAudio_m14B22374DD5F427B3035B7FE255058274C6D9D7E (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, int32_t ___maxX0, int32_t ___maxY1, int32_t ___posX2, int32_t ___posY3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var touchInput = new Rect { width = maxX, height = maxY, x = posX, y = posY };
		il2cpp_codegen_initobj((&V_3), sizeof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 ));
		int32_t L_0 = ___maxX0;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), ((float)((float)L_0)), /*hidden argument*/NULL);
		int32_t L_1 = ___maxY1;
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), ((float)((float)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = ___posX2;
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), ((float)((float)L_2)), /*hidden argument*/NULL);
		int32_t L_3 = ___posY3;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), ((float)((float)L_3)), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4 = V_3;
		V_0 = L_4;
		// var xMod = touchInput.x / touchInput.width;
		float L_5;
		L_5 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_6;
		L_6 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_5/(float)L_6));
		// var yMod = touchInput.y / touchInput.height;
		float L_7;
		L_7 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_8;
		L_8 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		V_2 = ((float)((float)L_7/(float)L_8));
		// GetComponent<AudioSource>().pitch = xMod + 0.5f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9;
		L_9 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		float L_10 = V_1;
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_9, ((float)il2cpp_codegen_add((float)L_10, (float)(0.5f))), /*hidden argument*/NULL);
		// GetComponent<AudioSource>().volume = 1f - yMod;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11;
		L_11 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		float L_12 = V_2;
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_11, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_12)), /*hidden argument*/NULL);
		// if(!GetComponent<AudioSource>().isPlaying)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13;
		L_13 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		bool L_14;
		L_14 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0097;
		}
	}
	{
		// GetComponent<AudioSource>().PlayOnDualShock4(m_LoggedInUser.userId);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15;
		L_15 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		LoggedInUser_t9B0438CEBA30A128E1526E043937A2E4135130EE * L_16 = __this->get_address_of_m_LoggedInUser_12();
		int32_t L_17 = L_16->get_userId_2();
		bool L_18;
		L_18 = AudioSource_PlayOnDualShock4_m238715B79A00D31253AAE267AB189F3FAF866CB6(L_15, L_17, /*hidden argument*/NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void GamePad::Thumbsticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_Thumbsticks_mF8447EB3D4C98A1DC4F4F4466AF7FF761F098A31 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BFF9D192ADABEB1F4DD3A9E279E9D3BC4E13F84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E9EC18B5FFDB2A772026FEF0DDB12C8C98FD2BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4C2E5A8771C766F8101945858E660AD06031BFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF462408793CBF80CA4037B91BB9708BBDC87C0E9);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B2_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B3_1 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B5_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B4_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B6_1 = NULL;
	{
		// gamePad.thumbstickLeft.transform.localPosition = new Vector3(0.4f*Input.GetAxis("leftstick" + m_StickId + "horizontal"),
		//                                                               -0.4f*Input.GetAxis("leftstick" + m_StickId + "vertical"),
		//                                                               0);
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_0 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = L_0->get_thumbstickLeft_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		int32_t* L_3 = __this->get_address_of_m_StickId_9();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral6E9EC18B5FFDB2A772026FEF0DDB12C8C98FD2BC, L_4, _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26, /*hidden argument*/NULL);
		float L_6;
		L_6 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_5, /*hidden argument*/NULL);
		int32_t* L_7 = __this->get_address_of_m_StickId_9();
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral6E9EC18B5FFDB2A772026FEF0DDB12C8C98FD2BC, L_8, _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE, /*hidden argument*/NULL);
		float L_10;
		L_10 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), ((float)il2cpp_codegen_multiply((float)(0.400000006f), (float)L_6)), ((float)il2cpp_codegen_multiply((float)(-0.400000006f), (float)L_10)), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_2, L_11, /*hidden argument*/NULL);
		// gamePad.thumbstickRight.transform.localPosition = new Vector3(0.4f*Input.GetAxis("rightstick" + m_StickId + "horizontal"),
		//                                                                -0.4f*Input.GetAxis("rightstick" + m_StickId + "vertical"),
		//                                                                0);
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_12 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_13 = L_12->get_thumbstickRight_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		int32_t* L_15 = __this->get_address_of_m_StickId_9();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE4C2E5A8771C766F8101945858E660AD06031BFF, L_16, _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26, /*hidden argument*/NULL);
		float L_18;
		L_18 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_17, /*hidden argument*/NULL);
		int32_t* L_19 = __this->get_address_of_m_StickId_9();
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE4C2E5A8771C766F8101945858E660AD06031BFF, L_20, _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE, /*hidden argument*/NULL);
		float L_22;
		L_22 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_multiply((float)(0.400000006f), (float)L_18)), ((float)il2cpp_codegen_multiply((float)(-0.400000006f), (float)L_22)), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_14, L_23, /*hidden argument*/NULL);
		// gamePad.thumbstickLeft.color = Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button8", true)) ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_24 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_25 = L_24->get_thumbstickLeft_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_26, /*hidden argument*/NULL);
		int32_t* L_28 = __this->get_address_of_m_StickId_9();
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_29, _stringLiteralF462408793CBF80CA4037B91BB9708BBDC87C0E9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_31;
		L_31 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_27, L_30, (bool)1, /*hidden argument*/NULL);
		bool L_32;
		L_32 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_31, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B1_0 = L_25;
		if (L_32)
		{
			G_B2_0 = L_25;
			goto IL_011b;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33 = __this->get_inputOff_8();
		G_B3_0 = L_33;
		G_B3_1 = G_B1_0;
		goto IL_0121;
	}

IL_011b:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34 = __this->get_inputOn_7();
		G_B3_0 = L_34;
		G_B3_1 = G_B2_0;
	}

IL_0121:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// gamePad.thumbstickRight.color = Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button9", true)) ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_35 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_36 = L_35->get_thumbstickRight_1();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_37, /*hidden argument*/NULL);
		int32_t* L_39 = __this->get_address_of_m_StickId_9();
		String_t* L_40;
		L_40 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_39, /*hidden argument*/NULL);
		String_t* L_41;
		L_41 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_40, _stringLiteral5BFF9D192ADABEB1F4DD3A9E279E9D3BC4E13F84, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_42;
		L_42 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_38, L_41, (bool)1, /*hidden argument*/NULL);
		bool L_43;
		L_43 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_42, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B4_0 = L_36;
		if (L_43)
		{
			G_B5_0 = L_36;
			goto IL_016f;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44 = __this->get_inputOff_8();
		G_B6_0 = L_44;
		G_B6_1 = G_B4_0;
		goto IL_0175;
	}

IL_016f:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45 = __this->get_inputOn_7();
		G_B6_0 = L_45;
		G_B6_1 = G_B5_0;
	}

IL_0175:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePad::InputButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_InputButtons_mA5EC73B7CE09E98D5AB7C024086195557CF4D608 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3121F4EA919BD7976BB5856491462E90D66428C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral524AC3D656313F4716695AFC1E85AE886B442FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BA9601CDD4A40F35F1F5E500F83CC1A34057835);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBB9A1698C46426EE577A5E7E5643C626D347AAA);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B2_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B3_1 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B5_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B4_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B6_1 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B8_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B7_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B9_1 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B11_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B10_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B12_1 = NULL;
	{
		// gamePad.cross.color = Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button0", true)) ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_0 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = L_0->get_cross_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		int32_t* L_4 = __this->get_address_of_m_StickId_9();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_5, _stringLiteral524AC3D656313F4716695AFC1E85AE886B442FB9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_7;
		L_7 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_3, L_6, (bool)1, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_7, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		if (L_8)
		{
			G_B2_0 = L_1;
			goto IL_0049;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = __this->get_inputOff_8();
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_004f;
	}

IL_0049:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = __this->get_inputOn_7();
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_004f:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// gamePad.circle.color = Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button1", true)) ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_11 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_12 = L_11->get_circle_3();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		int32_t* L_15 = __this->get_address_of_m_StickId_9();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_16, _stringLiteral6BA9601CDD4A40F35F1F5E500F83CC1A34057835, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_18;
		L_18 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_14, L_17, (bool)1, /*hidden argument*/NULL);
		bool L_19;
		L_19 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_18, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B4_0 = L_12;
		if (L_19)
		{
			G_B5_0 = L_12;
			goto IL_009d;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20 = __this->get_inputOff_8();
		G_B6_0 = L_20;
		G_B6_1 = G_B4_0;
		goto IL_00a3;
	}

IL_009d:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = __this->get_inputOn_7();
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
	}

IL_00a3:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// gamePad.square.color = Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button2", true)) ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_22 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_23 = L_22->get_square_5();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		int32_t* L_26 = __this->get_address_of_m_StickId_9();
		String_t* L_27;
		L_27 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_26, /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_27, _stringLiteralDBB9A1698C46426EE577A5E7E5643C626D347AAA, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_29;
		L_29 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_25, L_28, (bool)1, /*hidden argument*/NULL);
		bool L_30;
		L_30 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_29, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B7_0 = L_23;
		if (L_30)
		{
			G_B8_0 = L_23;
			goto IL_00f1;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = __this->get_inputOff_8();
		G_B9_0 = L_31;
		G_B9_1 = G_B7_0;
		goto IL_00f7;
	}

IL_00f1:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32 = __this->get_inputOn_7();
		G_B9_0 = L_32;
		G_B9_1 = G_B8_0;
	}

IL_00f7:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		// gamePad.triangle.color = Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button3", true)) ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_33 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_34 = L_33->get_triangle_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36;
		L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
		int32_t* L_37 = __this->get_address_of_m_StickId_9();
		String_t* L_38;
		L_38 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_37, /*hidden argument*/NULL);
		String_t* L_39;
		L_39 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_38, _stringLiteral3121F4EA919BD7976BB5856491462E90D66428C2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_40;
		L_40 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_36, L_39, (bool)1, /*hidden argument*/NULL);
		bool L_41;
		L_41 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_40, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B10_0 = L_34;
		if (L_41)
		{
			G_B11_0 = L_34;
			goto IL_0145;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = __this->get_inputOff_8();
		G_B12_0 = L_42;
		G_B12_1 = G_B10_0;
		goto IL_014b;
	}

IL_0145:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = __this->get_inputOn_7();
		G_B12_0 = L_43;
		G_B12_1 = G_B11_0;
	}

IL_014b:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePad::DPadButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_DPadButtons_mD9C30E661DB58F6DF02303E9A35A9988436496AE (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26763404460309E36106FECF953C482CAF722112);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCC5EE8464FCC788E958678A646AC764603CF523);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEED5289FDD07FBB3080C38E212A9D00C278D3133);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B2_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B3_1 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B5_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B4_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B6_1 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B8_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B7_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B9_1 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B11_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B10_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B12_1 = NULL;
	{
		// gamePad.dpadRight.color = Input.GetAxis("dpad" + m_StickId + "_horizontal") > 0 ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_0 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = L_0->get_dpadRight_7();
		int32_t* L_2 = __this->get_address_of_m_StickId_9();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral26763404460309E36106FECF953C482CAF722112, L_3, _stringLiteralEED5289FDD07FBB3080C38E212A9D00C278D3133, /*hidden argument*/NULL);
		float L_5;
		L_5 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_4, /*hidden argument*/NULL);
		G_B1_0 = L_1;
		if ((((float)L_5) > ((float)(0.0f))))
		{
			G_B2_0 = L_1;
			goto IL_0039;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get_inputOff_8();
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_003f;
	}

IL_0039:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = __this->get_inputOn_7();
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_003f:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// gamePad.dpadLeft.color = Input.GetAxis("dpad" + m_StickId + "_horizontal") < 0 ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_8 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_9 = L_8->get_dpadLeft_9();
		int32_t* L_10 = __this->get_address_of_m_StickId_9();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral26763404460309E36106FECF953C482CAF722112, L_11, _stringLiteralEED5289FDD07FBB3080C38E212A9D00C278D3133, /*hidden argument*/NULL);
		float L_13;
		L_13 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_12, /*hidden argument*/NULL);
		G_B4_0 = L_9;
		if ((((float)L_13) < ((float)(0.0f))))
		{
			G_B5_0 = L_9;
			goto IL_007d;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = __this->get_inputOff_8();
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		goto IL_0083;
	}

IL_007d:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = __this->get_inputOn_7();
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
	}

IL_0083:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// gamePad.dpadUp.color = Input.GetAxis("dpad" + m_StickId + "_vertical") > 0 ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_16 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_17 = L_16->get_dpadUp_8();
		int32_t* L_18 = __this->get_address_of_m_StickId_9();
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral26763404460309E36106FECF953C482CAF722112, L_19, _stringLiteralCCC5EE8464FCC788E958678A646AC764603CF523, /*hidden argument*/NULL);
		float L_21;
		L_21 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_20, /*hidden argument*/NULL);
		G_B7_0 = L_17;
		if ((((float)L_21) > ((float)(0.0f))))
		{
			G_B8_0 = L_17;
			goto IL_00c1;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = __this->get_inputOff_8();
		G_B9_0 = L_22;
		G_B9_1 = G_B7_0;
		goto IL_00c7;
	}

IL_00c1:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = __this->get_inputOn_7();
		G_B9_0 = L_23;
		G_B9_1 = G_B8_0;
	}

IL_00c7:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		// gamePad.dpadDown.color = Input.GetAxis("dpad" + m_StickId + "_vertical") < 0 ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_24 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_25 = L_24->get_dpadDown_6();
		int32_t* L_26 = __this->get_address_of_m_StickId_9();
		String_t* L_27;
		L_27 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_26, /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral26763404460309E36106FECF953C482CAF722112, L_27, _stringLiteralCCC5EE8464FCC788E958678A646AC764603CF523, /*hidden argument*/NULL);
		float L_29;
		L_29 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_28, /*hidden argument*/NULL);
		G_B10_0 = L_25;
		if ((((float)L_29) < ((float)(0.0f))))
		{
			G_B11_0 = L_25;
			goto IL_0105;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = __this->get_inputOff_8();
		G_B12_0 = L_30;
		G_B12_1 = G_B10_0;
		goto IL_010b;
	}

IL_0105:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = __this->get_inputOn_7();
		G_B12_0 = L_31;
		G_B12_1 = G_B11_0;
	}

IL_010b:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePad::TriggerShoulderButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_TriggerShoulderButtons_mDFAD2CFFD05EAAFAE5089CF6E1AC54743B35E43A (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral572C6131D9D9D8E98ED5F025FFBD0AE23D0AE4E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6756C5175BD121CFC86BC9E08021E9AB244D609F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8AE229D8EAEF3FEF4EB3A5C18AEFE69D6BD814C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC03AFCC04F597D440D4CAA85BBBC4BED32615E2);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B8_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B7_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B9_1 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B11_0 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B10_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * G_B12_1 = NULL;
	{
		// if(Math.Abs(Input.GetAxis("joystick" + m_StickId + "_left_trigger")) > 0.001f)
		int32_t* L_0 = __this->get_address_of_m_StickId_9();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F, L_1, _stringLiteral6756C5175BD121CFC86BC9E08021E9AB244D609F, /*hidden argument*/NULL);
		float L_3;
		L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(L_3);
		if ((!(((float)L_4) > ((float)(0.00100000005f)))))
		{
			goto IL_0072;
		}
	}
	{
		// gamePad.L2.color = inputOff+(inputOn*Input.GetAxis("joystick" + m_StickId + "_left_trigger"));
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_5 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = L_5->get_L2_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = __this->get_inputOff_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = __this->get_inputOn_7();
		int32_t* L_9 = __this->get_address_of_m_StickId_9();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F, L_10, _stringLiteral6756C5175BD121CFC86BC9E08021E9AB244D609F, /*hidden argument*/NULL);
		float L_12;
		L_12 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_11, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D(L_8, L_12, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8(L_7, L_13, /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_6, L_14, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0072:
	{
		// gamePad.L2.color = inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_15 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_16 = L_15->get_L2_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = __this->get_inputOff_8();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// if(Math.Abs(Input.GetAxis("joystick" + m_StickId + "_right_trigger")) > 0.001f)
		int32_t* L_18 = __this->get_address_of_m_StickId_9();
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F, L_19, _stringLiteralC8AE229D8EAEF3FEF4EB3A5C18AEFE69D6BD814C, /*hidden argument*/NULL);
		float L_21;
		L_21 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_22;
		L_22 = fabsf(L_21);
		if ((!(((float)L_22) > ((float)(0.00100000005f)))))
		{
			goto IL_00fb;
		}
	}
	{
		// gamePad.R2.color = inputOff+(inputOn*-Input.GetAxis("joystick" + m_StickId + "_right_trigger"));
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_23 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_24 = L_23->get_R2_13();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = __this->get_inputOff_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = __this->get_inputOn_7();
		int32_t* L_27 = __this->get_address_of_m_StickId_9();
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral8AF7B9D6121033ED1DE80EFA3688A7998521AB1F, L_28, _stringLiteralC8AE229D8EAEF3FEF4EB3A5C18AEFE69D6BD814C, /*hidden argument*/NULL);
		float L_30;
		L_30 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_29, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		L_31 = Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D(L_26, ((-L_30)), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8(L_25, L_31, /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_24, L_32, /*hidden argument*/NULL);
		goto IL_0111;
	}

IL_00fb:
	{
		// gamePad.R2.color = inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_33 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_34 = L_33->get_R2_13();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35 = __this->get_inputOff_8();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_34, L_35, /*hidden argument*/NULL);
	}

IL_0111:
	{
		// gamePad.L1.color = Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button4", true)) ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_36 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_37 = L_36->get_L1_10();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39;
		L_39 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_38, /*hidden argument*/NULL);
		int32_t* L_40 = __this->get_address_of_m_StickId_9();
		String_t* L_41;
		L_41 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_40, /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_41, _stringLiteralCC03AFCC04F597D440D4CAA85BBBC4BED32615E2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_43;
		L_43 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_39, L_42, (bool)1, /*hidden argument*/NULL);
		bool L_44;
		L_44 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_43, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B7_0 = L_37;
		if (L_44)
		{
			G_B8_0 = L_37;
			goto IL_015a;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45 = __this->get_inputOff_8();
		G_B9_0 = L_45;
		G_B9_1 = G_B7_0;
		goto IL_0160;
	}

IL_015a:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46 = __this->get_inputOn_7();
		G_B9_0 = L_46;
		G_B9_1 = G_B8_0;
	}

IL_0160:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		// gamePad.R1.color = Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button5", true)) ? inputOn : inputOff;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_47 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_48 = L_47->get_R1_12();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
		int32_t* L_51 = __this->get_address_of_m_StickId_9();
		String_t* L_52;
		L_52 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_51, /*hidden argument*/NULL);
		String_t* L_53;
		L_53 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_52, _stringLiteral572C6131D9D9D8E98ED5F025FFBD0AE23D0AE4E5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_54;
		L_54 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_50, L_53, (bool)1, /*hidden argument*/NULL);
		bool L_55;
		L_55 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_54, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B10_0 = L_48;
		if (L_55)
		{
			G_B11_0 = L_48;
			goto IL_01ae;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_56 = __this->get_inputOff_8();
		G_B12_0 = L_56;
		G_B12_1 = G_B10_0;
		goto IL_01b4;
	}

IL_01ae:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_57 = __this->get_inputOn_7();
		G_B12_0 = L_57;
		G_B12_1 = G_B11_0;
	}

IL_01b4:
	{
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePad::Lightbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_Lightbar_mAEE1CB0AADDF8753E1656514920469FEAFA95956 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3121F4EA919BD7976BB5856491462E90D66428C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral524AC3D656313F4716695AFC1E85AE886B442FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BA9601CDD4A40F35F1F5E500F83CC1A34057835);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBB9A1698C46426EE577A5E7E5643C626D347AAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button0", true)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of_m_StickId_9();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_3, _stringLiteral524AC3D656313F4716695AFC1E85AE886B442FB9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_5;
		L_5 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_1, L_4, (bool)1, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_5, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		// m_LightbarColour = Color.Lerp (m_LightbarColour, Color.blue, Time.deltaTime * 4f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = __this->get_m_LightbarColour_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_7, L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)(4.0f))), /*hidden argument*/NULL);
		__this->set_m_LightbarColour_10(L_10);
	}

IL_0057:
	{
		// if(Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button1", true)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		int32_t* L_13 = __this->get_address_of_m_StickId_9();
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_14, _stringLiteral6BA9601CDD4A40F35F1F5E500F83CC1A34057835, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_16;
		L_16 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_12, L_15, (bool)1, /*hidden argument*/NULL);
		bool L_17;
		L_17 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_16, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ae;
		}
	}
	{
		// m_LightbarColour = Color.Lerp (m_LightbarColour, Color.red, Time.deltaTime * 4f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = __this->get_m_LightbarColour_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		L_21 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_18, L_19, ((float)il2cpp_codegen_multiply((float)L_20, (float)(4.0f))), /*hidden argument*/NULL);
		__this->set_m_LightbarColour_10(L_21);
	}

IL_00ae:
	{
		// if(Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button2", true)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_22, /*hidden argument*/NULL);
		int32_t* L_24 = __this->get_address_of_m_StickId_9();
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_25, _stringLiteralDBB9A1698C46426EE577A5E7E5643C626D347AAA, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_27;
		L_27 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_23, L_26, (bool)1, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_27, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0105;
		}
	}
	{
		// m_LightbarColour = Color.Lerp (m_LightbarColour, Color.magenta, Time.deltaTime * 4f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29 = __this->get_m_LightbarColour_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0(/*hidden argument*/NULL);
		float L_31;
		L_31 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_29, L_30, ((float)il2cpp_codegen_multiply((float)L_31, (float)(4.0f))), /*hidden argument*/NULL);
		__this->set_m_LightbarColour_10(L_32);
	}

IL_0105:
	{
		// if(Input.GetKey((KeyCode)Enum.Parse(typeof(KeyCode), "Joystick" + m_StickId + "Button3", true)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_33 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34;
		L_34 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_33, /*hidden argument*/NULL);
		int32_t* L_35 = __this->get_address_of_m_StickId_9();
		String_t* L_36;
		L_36 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_35, /*hidden argument*/NULL);
		String_t* L_37;
		L_37 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, L_36, _stringLiteral3121F4EA919BD7976BB5856491462E90D66428C2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_38;
		L_38 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_34, L_37, (bool)1, /*hidden argument*/NULL);
		bool L_39;
		L_39 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((*(int32_t*)((int32_t*)UnBox(L_38, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_015c;
		}
	}
	{
		// m_LightbarColour = Color.Lerp (m_LightbarColour, Color.green, Time.deltaTime * 4f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40 = __this->get_m_LightbarColour_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		L_41 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		float L_42;
		L_42 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		L_43 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_40, L_41, ((float)il2cpp_codegen_multiply((float)L_42, (float)(4.0f))), /*hidden argument*/NULL);
		__this->set_m_LightbarColour_10(L_43);
	}

IL_015c:
	{
		// gamePad.lightbar.color = m_LightbarColour;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_44 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_45 = L_44->get_lightbar_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46 = __this->get_m_LightbarColour_10();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_45, L_46, /*hidden argument*/NULL);
		// gamePad.light.color = m_LightbarColour;
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_47 = __this->get_gamePad_4();
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_48 = L_47->get_light_20();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49 = __this->get_m_LightbarColour_10();
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_48, L_49, /*hidden argument*/NULL);
		// PS4Input.PadSetLightBar(playerId,
		//                         Mathf.RoundToInt(m_LightbarColour.r * 255),
		//                         Mathf.RoundToInt(m_LightbarColour.g * 255),
		//                         Mathf.RoundToInt(m_LightbarColour.b * 255));
		int32_t L_50 = __this->get_playerId_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_51 = __this->get_address_of_m_LightbarColour_10();
		float L_52 = L_51->get_r_0();
		int32_t L_53;
		L_53 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)L_52, (float)(255.0f))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_54 = __this->get_address_of_m_LightbarColour_10();
		float L_55 = L_54->get_g_1();
		int32_t L_56;
		L_56 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)L_55, (float)(255.0f))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_57 = __this->get_address_of_m_LightbarColour_10();
		float L_58 = L_57->get_b_2();
		int32_t L_59;
		L_59 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)L_58, (float)(255.0f))), /*hidden argument*/NULL);
		PS4Input_PadSetLightBar_m8E6E8074B858443E601081724CFB5BE80E71ED0B(L_50, L_53, L_56, L_59, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GamePad::Speaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_Speaker_m12DAA3633E99B6291D0110BCE2B4A082ECE6E8F7 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	{
		// GetVolume();
		GamePad_GetVolume_m7E7E1C86CADBB9E2AE4E715769218833022EF253(__this, /*hidden argument*/NULL);
		// gamePad.speaker.color = (Color.white * m_RmsValue) + (Color.white * 0.25f);
		PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * L_0 = __this->get_gamePad_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = L_0->get_speaker_16();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		float L_3 = __this->get_m_RmsValue_27();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D(L_2, L_3, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D(L_5, (0.25f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8(L_4, L_6, /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_1, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Color GamePad::GetPlayerColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GamePad_GetPlayerColor_m5C2B91F53B9CBACA70464435C2272C20A6D9863B (int32_t ___colorId0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___colorId0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0024;
			}
			case 3:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_0018:
	{
		// return Color.blue;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		return L_1;
	}

IL_001e:
	{
		// return Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		return L_2;
	}

IL_0024:
	{
		// return Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		// return Color.magenta;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0(/*hidden argument*/NULL);
		return L_4;
	}

IL_0030:
	{
		// return Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void GamePad::GetVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad_GetVolume_m7E7E1C86CADBB9E2AE4E715769218833022EF253 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// if(GetComponent<AudioSource>().time>0f)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		float L_1;
		L_1 = AudioSource_get_time_m2185448A5B8A50225410220AF67BC34F5596D210(L_0, /*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		// GetComponent<AudioSource>().GetOutputData(m_Samples, 0); // fill array with samples
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = __this->get_m_Samples_28();
		AudioSource_GetOutputData_mB236FC4E99BC03BFB9402FCC4140946DDFB0C849(L_2, L_3, 0, /*hidden argument*/NULL);
		// var sum = 0f;
		V_1 = (0.0f);
		// for(i=0; i < k_QSamples; i++)
		V_0 = 0;
		goto IL_0046;
	}

IL_002e:
	{
		// sum += m_Samples[i] * m_Samples[i]; // sum squared samples
		float L_4 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = __this->get_m_Samples_28();
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = __this->get_m_Samples_28();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = ((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_12))));
		// for(i=0; i < k_QSamples; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0046:
	{
		// for(i=0; i < k_QSamples; i++)
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)1024))))
		{
			goto IL_002e;
		}
	}
	{
		// m_RmsValue = Mathf.Sqrt(sum/k_QSamples); // rms = square root of average
		float L_15 = V_1;
		float L_16;
		L_16 = sqrtf(((float)((float)L_15/(float)(1024.0f))));
		__this->set_m_RmsValue_27(L_16);
		// m_RmsValue *= GetComponent<AudioSource>().volume;
		float L_17 = __this->get_m_RmsValue_27();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_18;
		L_18 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		float L_19;
		L_19 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_18, /*hidden argument*/NULL);
		__this->set_m_RmsValue_27(((float)il2cpp_codegen_multiply((float)L_17, (float)L_19)));
		// }
		return;
	}

IL_0079:
	{
		// m_RmsValue = 0f;
		__this->set_m_RmsValue_27((0.0f));
		// }
		return;
	}
}
// System.Void GamePad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePad__ctor_mE00EC380A7EA2E3703CAA64E5C58D7CBD4FA5A30 (GamePad_t7BDDE79CCAB9350D4FE3A0799AC33DBB81CD9BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int playerId = -1;
		__this->set_playerId_5((-1));
		// public Color inputOn = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_inputOn_7(L_0);
		// public Color inputOff = Color.grey;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		__this->set_inputOff_8(L_1);
		// float[] m_Samples = new float[1024]; // audio samples
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->set_m_Samples_28(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_mF465410C5B2E598F2685E82CFCE1F42186AFF448 (Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void ShellExplosion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShellExplosion_Start_mB69326FE8EE1D3193141ABBEAFAAD58F340C19D1 (ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, m_MaxLifeTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_m_MaxLifeTime_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShellExplosion::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShellExplosion_OnTriggerEnter_m26C877022EC95035DD7DD9E25F06466CE02C64D9 (ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTankHealth_t7D14A640811B1F82EA71579E99BB69821601874D_m970D10B7B87229667C5C6A45CAE35EF35271D422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_0 = NULL;
	int32_t V_1 = 0;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_2 = NULL;
	TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * V_3 = NULL;
	float V_4 = 0.0f;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Collider[] colliders = Physics.OverlapSphere(transform.position, m_ExplosionRadius, m_TankMask);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_m_ExplosionRadius_10();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3 = __this->get_m_TankMask_4();
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_3, /*hidden argument*/NULL);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_5;
		L_5 = Physics_OverlapSphere_mE1FC40C646B1468905057516601DB49DD41E0223(L_1, L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// for(int i = 0; i < colliders.Length; i++){
		V_1 = 0;
		goto IL_007d;
	}

IL_0026:
	{
		// Rigidbody targetRigidbody = colliders[i].GetComponent<Rigidbody>();
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10;
		L_10 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_9, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		V_2 = L_10;
		// if (!targetRigidbody)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		// targetRigidbody.AddExplosionForce(m_ExplosionForce, transform.position, m_ExplosionRadius);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_13 = V_2;
		float L_14 = __this->get_m_ExplosionForce_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_m_ExplosionRadius_10();
		Rigidbody_AddExplosionForce_m8B6FFD506CCCDD31C8C018A4B635E82B5499648F(L_13, L_14, L_16, L_17, /*hidden argument*/NULL);
		// TankHealth targetHealth = targetRigidbody.GetComponent<TankHealth>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_18 = V_2;
		TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * L_19;
		L_19 = Component_GetComponent_TisTankHealth_t7D14A640811B1F82EA71579E99BB69821601874D_m970D10B7B87229667C5C6A45CAE35EF35271D422(L_18, /*hidden argument*/Component_GetComponent_TisTankHealth_t7D14A640811B1F82EA71579E99BB69821601874D_m970D10B7B87229667C5C6A45CAE35EF35271D422_RuntimeMethod_var);
		V_3 = L_19;
		// if (!targetHealth)
		TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0079;
		}
	}
	{
		// float damage = CalculateDamage(targetRigidbody.position);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_22 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_22, /*hidden argument*/NULL);
		float L_24;
		L_24 = ShellExplosion_CalculateDamage_mAEA89955997B83FB274BBA6DBF39505D04A7CF18(__this, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		// targetHealth.TakeDamage(damage);
		TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * L_25 = V_3;
		float L_26 = V_4;
		TankHealth_TakeDamage_m67C0D02C1C6023E03A9E1BB650CBDAA939F30749(L_25, L_26, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// for(int i = 0; i < colliders.Length; i++){
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007d:
	{
		// for(int i = 0; i < colliders.Length; i++){
		int32_t L_28 = V_1;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		// m_ExplosionParticles.transform.parent = null;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_30 = __this->get_m_ExplosionParticles_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_31, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// m_ExplosionParticles.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_32 = __this->get_m_ExplosionParticles_5();
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_32, /*hidden argument*/NULL);
		// m_ExplosionAudio.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_33 = __this->get_m_ExplosionAudio_6();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_33, /*hidden argument*/NULL);
		// Destroy(m_ExplosionParticles.gameObject, m_ExplosionParticles.main.duration);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_34 = __this->get_m_ExplosionParticles_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_34, /*hidden argument*/NULL);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_36 = __this->get_m_ExplosionParticles_5();
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_37;
		L_37 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_36, /*hidden argument*/NULL);
		V_5 = L_37;
		float L_38;
		L_38 = MainModule_get_duration_mD516595EFDD66C83A727BDD7EF495069B4EB6132((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_35, L_38, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single ShellExplosion::CalculateDamage(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShellExplosion_CalculateDamage_mAEA89955997B83FB274BBA6DBF39505D04A7CF18 (ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 explosionToTarget = targetPosition - transform.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___targetPosition0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// float explosionDistance = explosionToTarget.magnitude;
		float L_4;
		L_4 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		// float relativeDistance = (m_ExplosionRadius - explosionDistance) / m_ExplosionRadius;
		float L_5 = __this->get_m_ExplosionRadius_10();
		float L_6 = V_1;
		float L_7 = __this->get_m_ExplosionRadius_10();
		// float damage = relativeDistance * m_MaxDamage;
		float L_8 = __this->get_m_MaxDamage_7();
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6))/(float)L_7)), (float)L_8));
		// damage = Mathf.Max(0f, damage);
		float L_9 = V_2;
		float L_10;
		L_10 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// return damage;
		float L_11 = V_2;
		return L_11;
	}
}
// System.Void ShellExplosion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShellExplosion__ctor_mF39AC0B418A8C7D5C206756E865760EB1CB766B7 (ShellExplosion_t9039863EA103245A7044AE8343985771A4F629F3 * __this, const RuntimeMethod* method)
{
	{
		// public float m_MaxDamage = 100f;
		__this->set_m_MaxDamage_7((100.0f));
		// public float m_ExplosionForce = 1000f;
		__this->set_m_ExplosionForce_8((1000.0f));
		// public float m_MaxLifeTime = 2f;
		__this->set_m_MaxLifeTime_9((2.0f));
		// public float m_ExplosionRadius = 5f;
		__this->set_m_ExplosionRadius_10((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TankHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_Awake_m69CECD771195CD22E9FFA8DFF261652C95AEF5CA (TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m538EA9E269978336C890E5FA90908BF7249AB395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ExplosionParticles = Instantiate(m_ExplosionPrefab).GetComponent<ParticleSystem>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_ExplosionPrefab_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2;
		L_2 = GameObject_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m538EA9E269978336C890E5FA90908BF7249AB395(L_1, /*hidden argument*/GameObject_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m538EA9E269978336C890E5FA90908BF7249AB395_RuntimeMethod_var);
		__this->set_m_ExplosionParticles_11(L_2);
		// m_ExplosionAudio = m_ExplosionParticles.GetComponent<AudioSource>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_3 = __this->get_m_ExplosionParticles_11();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_3, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_m_ExplosionAudio_10(L_4);
		// m_ExplosionParticles.gameObject.SetActive(false);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = __this->get_m_ExplosionParticles_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankHealth::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_OnEnable_m32E9DBDED79D36DAB81F466788CAE5E99DBA04BE (TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * __this, const RuntimeMethod* method)
{
	{
		// m_CurrentHealth = m_StartingHealth;
		float L_0 = __this->get_m_StartingHealth_4();
		__this->set_m_CurrentHealth_12(L_0);
		// m_Dead = false;
		__this->set_m_Dead_13((bool)0);
		// SetHealthUI();
		TankHealth_SetHealthUI_mED473A2C801C3633111BDD706F1E0219F96C7E8B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankHealth::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_TakeDamage_m67C0D02C1C6023E03A9E1BB650CBDAA939F30749 (TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * __this, float ___amount0, const RuntimeMethod* method)
{
	{
		// m_CurrentHealth -= amount;
		float L_0 = __this->get_m_CurrentHealth_12();
		float L_1 = ___amount0;
		__this->set_m_CurrentHealth_12(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// SetHealthUI();
		TankHealth_SetHealthUI_mED473A2C801C3633111BDD706F1E0219F96C7E8B(__this, /*hidden argument*/NULL);
		// if (m_CurrentHealth <= 0f && !m_Dead)
		float L_2 = __this->get_m_CurrentHealth_12();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		bool L_3 = __this->get_m_Dead_13();
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		// OnDeath();
		TankHealth_OnDeath_m20D7125DC23FA0313B83D40D17DE84CBD6FA9163(__this, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void TankHealth::SetHealthUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_SetHealthUI_mED473A2C801C3633111BDD706F1E0219F96C7E8B (TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * __this, const RuntimeMethod* method)
{
	{
		// m_Slider.value = m_CurrentHealth;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_m_Slider_5();
		float L_1 = __this->get_m_CurrentHealth_12();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// m_FillImage.color = Color.Lerp(m_ZeroHealthColor, m_FullHealthColor, m_CurrentHealth / m_StartingHealth);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_m_FillImage_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get_m_ZeroHealthColor_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = __this->get_m_FullHealthColor_7();
		float L_5 = __this->get_m_CurrentHealth_12();
		float L_6 = __this->get_m_StartingHealth_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_3, L_4, ((float)((float)L_5/(float)L_6)), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_7);
		// }
		return;
	}
}
// System.Void TankHealth::OnDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth_OnDeath_m20D7125DC23FA0313B83D40D17DE84CBD6FA9163 (TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * __this, const RuntimeMethod* method)
{
	{
		// m_Dead = true;
		__this->set_m_Dead_13((bool)1);
		// m_ExplosionParticles.transform.position = transform.position;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = __this->get_m_ExplosionParticles_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_3, /*hidden argument*/NULL);
		// m_ExplosionParticles.gameObject.SetActive(true);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_4 = __this->get_m_ExplosionParticles_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// m_ExplosionParticles.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_m_ExplosionParticles_11();
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_6, /*hidden argument*/NULL);
		// m_ExplosionAudio.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_m_ExplosionAudio_10();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_7, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankHealth__ctor_mCD45F49F26AD832A3320914DF218F2EE778CD7BE (TankHealth_t7D14A640811B1F82EA71579E99BB69821601874D * __this, const RuntimeMethod* method)
{
	{
		// public float m_StartingHealth = 100f;
		__this->set_m_StartingHealth_4((100.0f));
		// public Color m_FullHealthColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_m_FullHealthColor_7(L_0);
		// public Color m_ZeroHealthColor = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_m_ZeroHealthColor_8(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TankManager::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Setup_mC2D5AF0F4E997C05D2D5F5B2C5B36A97C49EEB3D (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE8E3AB003154C947DBEF250ABB188375407EAD07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599_mF417BB6B76C4384B4C3619B24B3B63D6FBCC0836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C_mD4C46F2AF1F5665818175DCD1D0EBC6D3B643B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m37C5016444DB54041F938EA344271762E17600C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// m_Movement = m_Instance.GetComponent<TankMovement>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_Instance_4();
		TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * L_1;
		L_1 = GameObject_GetComponent_TisTankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599_mF417BB6B76C4384B4C3619B24B3B63D6FBCC0836(L_0, /*hidden argument*/GameObject_GetComponent_TisTankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599_mF417BB6B76C4384B4C3619B24B3B63D6FBCC0836_RuntimeMethod_var);
		__this->set_m_Movement_6(L_1);
		// m_Shooting = m_Instance.GetComponent<TankShooting>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_Instance_4();
		TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * L_3;
		L_3 = GameObject_GetComponent_TisTankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C_mD4C46F2AF1F5665818175DCD1D0EBC6D3B643B98(L_2, /*hidden argument*/GameObject_GetComponent_TisTankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C_mD4C46F2AF1F5665818175DCD1D0EBC6D3B643B98_RuntimeMethod_var);
		__this->set_m_Shooting_7(L_3);
		// m_CanvasGameObject = m_Instance.GetComponentInChildren<Canvas>().gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_m_Instance_4();
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_5;
		L_5 = GameObject_GetComponentInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE8E3AB003154C947DBEF250ABB188375407EAD07(L_4, /*hidden argument*/GameObject_GetComponentInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE8E3AB003154C947DBEF250ABB188375407EAD07_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		__this->set_m_CanvasGameObject_8(L_6);
		// m_Movement.m_PlayerNumber = m_PlayerNumber;
		TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * L_7 = __this->get_m_Movement_6();
		int32_t L_8 = __this->get_m_PlayerNumber_2();
		L_7->set_m_PlayerNumber_4(L_8);
		// m_Shooting.m_PlayerNumber = m_PlayerNumber;
		TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * L_9 = __this->get_m_Shooting_7();
		int32_t L_10 = __this->get_m_PlayerNumber_2();
		L_9->set_m_PlayerNumber_4(L_10);
		// m_ColoredPlayerText = "<color=#" + ColorUtility.ToHtmlStringRGB(m_PlayerColor) + ">PLAYER " + m_PlayerNumber + "</color>";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = __this->get_m_PlayerColor_0();
		String_t* L_15;
		L_15 = ColorUtility_ToHtmlStringRGB_m53B0E0A6CB3BED0C0BC55F91C0DDAB35385DA676(L_14, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_13;
		ArrayElementTypeCheck (L_16, _stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA45E5B763785123886EDCF1F6D4B7DDD7062D615);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		int32_t* L_18 = __this->get_address_of_m_PlayerNumber_2();
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_18, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_17;
		ArrayElementTypeCheck (L_20, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		String_t* L_21;
		L_21 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_20, /*hidden argument*/NULL);
		__this->set_m_ColoredPlayerText_3(L_21);
		// MeshRenderer[] renderers = m_Instance.GetComponentsInChildren<MeshRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_m_Instance_4();
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_23;
		L_23 = GameObject_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m37C5016444DB54041F938EA344271762E17600C3(L_22, /*hidden argument*/GameObject_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m37C5016444DB54041F938EA344271762E17600C3_RuntimeMethod_var);
		V_0 = L_23;
		// for (int i = 0; i < renderers.Length; i++)
		V_1 = 0;
		goto IL_00c6;
	}

IL_00af:
	{
		// renderers[i].material.color = m_PlayerColor;
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_24 = V_0;
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28;
		L_28 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_27, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29 = __this->get_m_PlayerColor_0();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_28, L_29, /*hidden argument*/NULL);
		// for (int i = 0; i < renderers.Length; i++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00c6:
	{
		// for (int i = 0; i < renderers.Length; i++)
		int32_t L_31 = V_1;
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_00af;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TankManager::DisableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_DisableControl_mAF6BF47CCDF34CC3318E7E873315B078FB07AE2C (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * __this, const RuntimeMethod* method)
{
	{
		// m_Movement.enabled = false;
		TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * L_0 = __this->get_m_Movement_6();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// m_Shooting.enabled = false;
		TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * L_1 = __this->get_m_Shooting_7();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// m_CanvasGameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_CanvasGameObject_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankManager::EnableControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_EnableControl_mAF211A27BF318BAF80E5A3B12AE0A80335B73FE3 (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * __this, const RuntimeMethod* method)
{
	{
		// m_Movement.enabled = true;
		TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * L_0 = __this->get_m_Movement_6();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// m_Shooting.enabled = true;
		TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * L_1 = __this->get_m_Shooting_7();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// m_CanvasGameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_CanvasGameObject_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager_Reset_mEFC6CFF1CFC6ABD2C920939924D95FC252CA61A6 (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * __this, const RuntimeMethod* method)
{
	{
		// m_Instance.transform.position = m_SpawnPoint.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_Instance_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_m_SpawnPoint_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_3, /*hidden argument*/NULL);
		// m_Instance.transform.rotation = m_SpawnPoint.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_m_Instance_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_m_SpawnPoint_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_5, L_7, /*hidden argument*/NULL);
		// m_Instance.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_m_Instance_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// m_Instance.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_m_Instance_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankManager__ctor_mB5D683678DE073B05F266D5F1512E2597D49C32C (TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void TankMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Awake_m64DBEE95C0D86C9980059E37BF8C1C1A867D6D7F (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_m_Rigidbody_13(L_0);
		// }
		return;
	}
}
// System.Void TankMovement::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_OnEnable_m6251707165A30477A280943CC694AD728237E3C9 (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method)
{
	{
		// m_Rigidbody.isKinematic = false;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_m_Rigidbody_13();
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_0, (bool)0, /*hidden argument*/NULL);
		// m_MovementInputValue = 0f;
		__this->set_m_MovementInputValue_14((0.0f));
		// m_TurnInputValue = 0f;
		__this->set_m_TurnInputValue_15((0.0f));
		// }
		return;
	}
}
// System.Void TankMovement::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_OnDisable_m2749EE4D30ACCE13EFE06EBFCE2476CF517E436E (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method)
{
	{
		// m_Rigidbody.isKinematic = true;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_m_Rigidbody_13();
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Start_m75FD50A4E63A266761E5086C2681BDF7BEACCB12 (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MovementAxisName = "Vertical" + m_PlayerNumber;
		int32_t* L_0 = __this->get_address_of_m_PlayerNumber_4();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, L_1, /*hidden argument*/NULL);
		__this->set_m_MovementAxisName_11(L_2);
		// m_TurnAxisName = "Horizontal" + m_PlayerNumber;
		int32_t* L_3 = __this->get_address_of_m_PlayerNumber_4();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, L_4, /*hidden argument*/NULL);
		__this->set_m_TurnAxisName_12(L_5);
		// m_OriginalPitch = m_MovementAudio.pitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = __this->get_m_MovementAudio_7();
		float L_7;
		L_7 = AudioSource_get_pitch_mB0A139A0693803E201D08B797BFD122B94453C7D(L_6, /*hidden argument*/NULL);
		__this->set_m_OriginalPitch_16(L_7);
		// }
		return;
	}
}
// System.Void TankMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Update_m9309F1DC9B9B20D3A453DF2E9E3EBDC6F9CB54D7 (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method)
{
	{
		// m_MovementInputValue = Input.GetAxis(m_MovementAxisName);
		String_t* L_0 = __this->get_m_MovementAxisName_11();
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_0, /*hidden argument*/NULL);
		__this->set_m_MovementInputValue_14(L_1);
		// m_TurnInputValue = Input.GetAxis(m_TurnAxisName);
		String_t* L_2 = __this->get_m_TurnAxisName_12();
		float L_3;
		L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_2, /*hidden argument*/NULL);
		__this->set_m_TurnInputValue_15(L_3);
		// EngineAudio();
		TankMovement_EngineAudio_m6D396335ED7FFB2B95AA92E8EAF3D8E84BB9284A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankMovement::EngineAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_EngineAudio_m6D396335ED7FFB2B95AA92E8EAF3D8E84BB9284A (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Mathf.Abs(m_MovementInputValue) < 0.1f && Mathf.Abs(m_TurnInputValue) < 0.1f)
		float L_0 = __this->get_m_MovementInputValue_14();
		float L_1;
		L_1 = fabsf(L_0);
		if ((!(((float)L_1) < ((float)(0.100000001f)))))
		{
			goto IL_0086;
		}
	}
	{
		float L_2 = __this->get_m_TurnInputValue_15();
		float L_3;
		L_3 = fabsf(L_2);
		if ((!(((float)L_3) < ((float)(0.100000001f)))))
		{
			goto IL_0086;
		}
	}
	{
		// if (m_MovementAudio.clip == m_EngineDriving)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_m_MovementAudio_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5;
		L_5 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_4, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = __this->get_m_EngineDriving_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00e4;
		}
	}
	{
		// m_MovementAudio.clip = m_EngineIdling;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = __this->get_m_MovementAudio_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9 = __this->get_m_EngineIdling_8();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_8, L_9, /*hidden argument*/NULL);
		// m_MovementAudio.pitch = Random.Range(m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = __this->get_m_MovementAudio_7();
		float L_11 = __this->get_m_OriginalPitch_16();
		float L_12 = __this->get_m_PitchRange_10();
		float L_13 = __this->get_m_OriginalPitch_16();
		float L_14 = __this->get_m_PitchRange_10();
		float L_15;
		L_15 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), ((float)il2cpp_codegen_add((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_10, L_15, /*hidden argument*/NULL);
		// m_MovementAudio.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_16 = __this->get_m_MovementAudio_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0086:
	{
		// if (m_MovementAudio.clip == m_EngineIdling)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_17 = __this->get_m_MovementAudio_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_18;
		L_18 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_17, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_19 = __this->get_m_EngineIdling_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_18, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e4;
		}
	}
	{
		// m_MovementAudio.clip = m_EngineDriving;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_21 = __this->get_m_MovementAudio_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_22 = __this->get_m_EngineDriving_9();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_21, L_22, /*hidden argument*/NULL);
		// m_MovementAudio.pitch = Random.Range(m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23 = __this->get_m_MovementAudio_7();
		float L_24 = __this->get_m_OriginalPitch_16();
		float L_25 = __this->get_m_PitchRange_10();
		float L_26 = __this->get_m_OriginalPitch_16();
		float L_27 = __this->get_m_PitchRange_10();
		float L_28;
		L_28 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_subtract((float)L_24, (float)L_25)), ((float)il2cpp_codegen_add((float)L_26, (float)L_27)), /*hidden argument*/NULL);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_23, L_28, /*hidden argument*/NULL);
		// m_MovementAudio.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_29 = __this->get_m_MovementAudio_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_29, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void TankMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_FixedUpdate_m40E95929E9BB9C7973A926E3554551CBB3EDB982 (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method)
{
	{
		// Move();
		TankMovement_Move_mCAD3C02C99042563ED8CDB2C8C896F53F5DC52E8(__this, /*hidden argument*/NULL);
		// Turn();
		TankMovement_Turn_mEEBD001E4B3BAC18EA742495F340ED914059E296(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Move_mCAD3C02C99042563ED8CDB2C8C896F53F5DC52E8 (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 movement = transform.forward * m_MovementInputValue * m_Speed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_m_MovementInputValue_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_m_Speed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// m_Rigidbody.MovePosition(m_Rigidbody.position + movement);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8 = __this->get_m_Rigidbody_13();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9 = __this->get_m_Rigidbody_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_11, /*hidden argument*/NULL);
		Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7(L_8, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankMovement::Turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement_Turn_mEEBD001E4B3BAC18EA742495F340ED914059E296 (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float turn = m_TurnInputValue * m_TurnSpeed * Time.deltaTime;
		float L_0 = __this->get_m_TurnInputValue_15();
		float L_1 = __this->get_m_TurnSpeed_6();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)L_2));
		// Quaternion turnRotation = Quaternion.Euler(0f, turn, 0f);
		float L_3 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), L_3, (0.0f), /*hidden argument*/NULL);
		V_1 = L_4;
		// m_Rigidbody.MoveRotation((m_Rigidbody.rotation * turnRotation));
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5 = __this->get_m_Rigidbody_13();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6 = __this->get_m_Rigidbody_13();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Rigidbody_get_rotation_mEB90F9D223B0BA32A1962971E3A93DEE1670D18A(L_6, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_7, L_8, /*hidden argument*/NULL);
		Rigidbody_MoveRotation_m08A1449DC0D514A70065CD80D067597765BDA5B2(L_5, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TankMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankMovement__ctor_m759DF9898E6189214E51971960E2691F1F08ADC8 (TankMovement_t6A8648C7E3A586DC7AA4385BE2635E7F6AB23599 * __this, const RuntimeMethod* method)
{
	{
		// public int m_PlayerNumber = 1;
		__this->set_m_PlayerNumber_4(1);
		// public float m_Speed = 12f;
		__this->set_m_Speed_5((12.0f));
		// public float m_TurnSpeed = 180f;
		__this->set_m_TurnSpeed_6((180.0f));
		// public float m_PitchRange = 0.2f;
		__this->set_m_PitchRange_10((0.200000003f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TankShooting::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_OnEnable_mCD4996A3610EA4FD1D81CF5D358880FBCFECB2E6 (TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * __this, const RuntimeMethod* method)
{
	{
		// m_CurrentLaunchForce = m_MinLaunchForce;
		float L_0 = __this->get_m_MinLaunchForce_11();
		__this->set_m_CurrentLaunchForce_15(L_0);
		// m_AimSlider.value = m_MinLaunchForce;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_m_AimSlider_7();
		float L_2 = __this->get_m_MinLaunchForce_11();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void TankShooting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Start_m7E0DB66A67E626445AF341D2AB8AEE467935C508 (TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_FireButton = "Fire" + m_PlayerNumber;
		int32_t* L_0 = __this->get_address_of_m_PlayerNumber_4();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, L_1, /*hidden argument*/NULL);
		__this->set_m_FireButton_14(L_2);
		// m_ChargeSpeed = (m_MaxLaunchForce - m_MinLaunchForce) / m_MaxChargeTime;
		float L_3 = __this->get_m_MaxLaunchForce_12();
		float L_4 = __this->get_m_MinLaunchForce_11();
		float L_5 = __this->get_m_MaxChargeTime_13();
		__this->set_m_ChargeSpeed_16(((float)((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))/(float)L_5)));
		// }
		return;
	}
}
// System.Void TankShooting::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Update_mBBA3CD388E08203874804CBFEB7C47A559B91439 (TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * __this, const RuntimeMethod* method)
{
	{
		// m_AimSlider.value = m_MinLaunchForce;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_m_AimSlider_7();
		float L_1 = __this->get_m_MinLaunchForce_11();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// if (m_CurrentLaunchForce >= m_MaxLaunchForce && !m_Fired)
		float L_2 = __this->get_m_CurrentLaunchForce_15();
		float L_3 = __this->get_m_MaxLaunchForce_12();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_003a;
		}
	}
	{
		bool L_4 = __this->get_m_Fired_17();
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		// m_CurrentLaunchForce = m_MaxLaunchForce;
		float L_5 = __this->get_m_MaxLaunchForce_12();
		__this->set_m_CurrentLaunchForce_15(L_5);
		// Fire();
		TankShooting_Fire_mED4EBA5B73910C0CA081F5F905AF94EF2BCDF4DA(__this, /*hidden argument*/NULL);
		// } else if(Input.GetButtonDown(m_FireButton)){
		return;
	}

IL_003a:
	{
		// } else if(Input.GetButtonDown(m_FireButton)){
		String_t* L_6 = __this->get_m_FireButton_14();
		bool L_7;
		L_7 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0077;
		}
	}
	{
		// m_Fired = false;
		__this->set_m_Fired_17((bool)0);
		// m_CurrentLaunchForce = m_MinLaunchForce;
		float L_8 = __this->get_m_MinLaunchForce_11();
		__this->set_m_CurrentLaunchForce_15(L_8);
		// m_ShootingAudio.clip = m_ChargingClip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = __this->get_m_ShootingAudio_8();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_10 = __this->get_m_ChargingClip_9();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_9, L_10, /*hidden argument*/NULL);
		// m_ShootingAudio.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11 = __this->get_m_ShootingAudio_8();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_11, /*hidden argument*/NULL);
		// } else if(Input.GetButton(m_FireButton) && !m_Fired){
		return;
	}

IL_0077:
	{
		// } else if(Input.GetButton(m_FireButton) && !m_Fired){
		String_t* L_12 = __this->get_m_FireButton_14();
		bool L_13;
		L_13 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_14 = __this->get_m_Fired_17();
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		// m_CurrentLaunchForce += m_ChargeSpeed * Time.deltaTime;
		float L_15 = __this->get_m_CurrentLaunchForce_15();
		float L_16 = __this->get_m_ChargeSpeed_16();
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_m_CurrentLaunchForce_15(((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)))));
		// m_AimSlider.value = m_CurrentLaunchForce;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_18 = __this->get_m_AimSlider_7();
		float L_19 = __this->get_m_CurrentLaunchForce_15();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_19);
		// } else if(Input.GetButtonUp(m_FireButton) && !m_Fired){
		return;
	}

IL_00b7:
	{
		// } else if(Input.GetButtonUp(m_FireButton) && !m_Fired){
		String_t* L_20 = __this->get_m_FireButton_14();
		bool L_21;
		L_21 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00d2;
		}
	}
	{
		bool L_22 = __this->get_m_Fired_17();
		if (L_22)
		{
			goto IL_00d2;
		}
	}
	{
		// Fire();
		TankShooting_Fire_mED4EBA5B73910C0CA081F5F905AF94EF2BCDF4DA(__this, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void TankShooting::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting_Fire_mED4EBA5B73910C0CA081F5F905AF94EF2BCDF4DA (TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mF87D5A03374483FF8ECD2C74C732C5259BC11706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Fired = true;
		__this->set_m_Fired_17((bool)1);
		// Rigidbody shellInstance = Instantiate(m_Shell, m_FireTransform.position, m_FireTransform.rotation) as Rigidbody;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_m_Shell_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_m_FireTransform_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_m_FireTransform_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5;
		L_5 = Object_Instantiate_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mF87D5A03374483FF8ECD2C74C732C5259BC11706(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mF87D5A03374483FF8ECD2C74C732C5259BC11706_RuntimeMethod_var);
		// shellInstance.velocity = m_CurrentLaunchForce * m_FireTransform.forward;
		float L_6 = __this->get_m_CurrentLaunchForce_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_m_FireTransform_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_6, L_8, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_5, L_9, /*hidden argument*/NULL);
		// m_ShootingAudio.clip = m_FireClip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = __this->get_m_ShootingAudio_8();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = __this->get_m_FireClip_10();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_10, L_11, /*hidden argument*/NULL);
		// m_ShootingAudio.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = __this->get_m_ShootingAudio_8();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_12, /*hidden argument*/NULL);
		// m_CurrentLaunchForce = m_MinLaunchForce;
		float L_13 = __this->get_m_MinLaunchForce_11();
		__this->set_m_CurrentLaunchForce_15(L_13);
		// }
		return;
	}
}
// System.Void TankShooting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TankShooting__ctor_mCC01E651C315A460C9FB7D42E80AF9A44A97FD61 (TankShooting_tB42EA6F612E8EE242C5CD7B1695AABB3B30E1E7C * __this, const RuntimeMethod* method)
{
	{
		// public int m_PlayerNumber = 1;
		__this->set_m_PlayerNumber_4(1);
		// public float m_MinLaunchForce = 15f;
		__this->set_m_MinLaunchForce_11((15.0f));
		// public float m_MaxLaunchForce = 30f;
		__this->set_m_MaxLaunchForce_12((30.0f));
		// public float m_MaxChargeTime = 0.75f;
		__this->set_m_MaxChargeTime_13((0.75f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIDirectionControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl_Start_m15A5324572A2DD6C9ADC22608B27D86B26C89DED (UIDirectionControl_tECC3378DDA8680C906E2AB48F91B0633ACEED72A * __this, const RuntimeMethod* method)
{
	{
		// m_RelativeRotation = transform.parent.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_1, /*hidden argument*/NULL);
		__this->set_m_RelativeRotation_5(L_2);
		// }
		return;
	}
}
// System.Void UIDirectionControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl_Update_mC27B440AF8F7D8A58CE6DB4436159DEB67A8C585 (UIDirectionControl_tECC3378DDA8680C906E2AB48F91B0633ACEED72A * __this, const RuntimeMethod* method)
{
	{
		// if (m_UseRelativeRotation)
		bool L_0 = __this->get_m_UseRelativeRotation_4();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// transform.rotation = m_RelativeRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = __this->get_m_RelativeRotation_5();
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UIDirectionControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl__ctor_mA4DA5532E120B1C602D5E6B2CF2E466F082D8E0D (UIDirectionControl_tECC3378DDA8680C906E2AB48F91B0633ACEED72A * __this, const RuntimeMethod* method)
{
	{
		// public bool m_UseRelativeRotation = true;
		__this->set_m_UseRelativeRotation_4((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager/<GameLoop>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__15__ctor_m5C16BF4335BAA71797F99F5A075A120261217641 (U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<GameLoop>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__15_System_IDisposable_Dispose_mCC8665A6E312EE277C97EFDC146761B56F04B1F8 (U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<GameLoop>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameLoopU3Ed__15_MoveNext_m2F0B1B4E1DBB04C626FEB4068A60815C604611F7 (U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_006a;
			}
			case 3:
			{
				goto IL_008c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(RoundStarting());
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = V_1;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = V_1;
		RuntimeObject* L_5;
		L_5 = GameManager_RoundStarting_m4E47A56417E88F7C58E7430DB2FDD70D9EDF0041(L_4, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_3, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(RoundPlaying());
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = V_1;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = GameManager_RoundPlaying_mF4EE9A6BA7B5335D3A6A2CC58DD6D421CC257664(L_8, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_10;
		L_10 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_006a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return StartCoroutine(RoundEnding());
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_11 = V_1;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = GameManager_RoundEnding_m4AE44E0941A2CD260541F68749FCC2565601D423(L_12, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_11, L_13, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_008c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (m_GameWinner != null)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_15 = V_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_16 = L_15->get_m_GameWinner_15();
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		goto IL_00b0;
	}

IL_00a3:
	{
		// StartCoroutine(GameLoop());
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_17 = V_1;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_18 = V_1;
		RuntimeObject* L_19;
		L_19 = GameManager_GameLoop_mCB39229E37879521BAE7941CA1A8629628334E44(L_18, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_20;
		L_20 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_17, L_19, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<GameLoop>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGameLoopU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB8504743273A1EE5BAC61BD79F8DB6FDF355FC4C (U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<GameLoop>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameLoopU3Ed__15_System_Collections_IEnumerator_Reset_m9C7A935CB8047FBCAC9343A98E0341660711683B (U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameLoopU3Ed__15_System_Collections_IEnumerator_Reset_m9C7A935CB8047FBCAC9343A98E0341660711683B_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<GameLoop>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGameLoopU3Ed__15_System_Collections_IEnumerator_get_Current_m7230F17623F0517C0F385029E55D1296608E7FBA (U3CGameLoopU3Ed__15_t36AB4504289B979515F44EC4348683A8CDBFFDA8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GameManager/<RoundEnding>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__18__ctor_mE1F961DEC05E778A7ADC21DFCDD52BAB3B8B4179 (U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<RoundEnding>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__18_System_IDisposable_Dispose_mFB4879A22A8D94CE773A1B99B1E103DB8F7509E8 (U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<RoundEnding>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoundEndingU3Ed__18_MoveNext_m927E2E4689068F74A17C58C1EDA7DEF72E812DA4 (U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// DisableTankControl();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = V_1;
		GameManager_DisableTankControl_m34F0BEA8B4C61C0700F2C772A291B36BBDE508EE(L_4, /*hidden argument*/NULL);
		// m_RoundWinner = null;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = V_1;
		L_5->set_m_RoundWinner_14((TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 *)NULL);
		// m_RoundWinner = GetRoundWinner();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = V_1;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = V_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_8;
		L_8 = GameManager_GetRoundWinner_mAAADD3B4F2BDA6C6BAFACF7FC775BDFA1AFCBC23(L_7, /*hidden argument*/NULL);
		L_6->set_m_RoundWinner_14(L_8);
		// if (m_RoundWinner != null)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_9 = V_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_10 = L_9->get_m_RoundWinner_14();
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// m_RoundWinner.m_Wins++;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_11 = V_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_12 = L_11->get_m_RoundWinner_14();
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_13 = L_12;
		int32_t L_14 = L_13->get_m_Wins_5();
		L_13->set_m_Wins_5(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
	}

IL_0052:
	{
		// m_GameWinner = GetGameWinner();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_15 = V_1;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_16 = V_1;
		TankManager_tB780C60380D42C69D66032F8EFB3FC790EDAA3D4 * L_17;
		L_17 = GameManager_GetGameWinner_mE130E96922EB5FAA8ABD853B8BB6310051D451B9(L_16, /*hidden argument*/NULL);
		L_15->set_m_GameWinner_15(L_17);
		// string message = EndMessage();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_18 = V_1;
		String_t* L_19;
		L_19 = GameManager_EndMessage_m677DBBEECAAA3DB6643FC9A9B5498088D906ABF2(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// m_MessageText.text = message;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_20 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_m_MessageText_8();
		String_t* L_22 = V_2;
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_22);
		// yield return m_EndWait;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_23 = V_1;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_24 = L_23->get_m_EndWait_13();
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0086:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<RoundEnding>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRoundEndingU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m44A6BD0DC371D15C720EBDB733F74DF0EF217358 (U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<RoundEnding>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndingU3Ed__18_System_Collections_IEnumerator_Reset_mB06521A743109714D2B7E99F3088D3EECE9B9F99 (U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoundEndingU3Ed__18_System_Collections_IEnumerator_Reset_mB06521A743109714D2B7E99F3088D3EECE9B9F99_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<RoundEnding>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRoundEndingU3Ed__18_System_Collections_IEnumerator_get_Current_m75B904F8A275AC63647A103A2C83861590C75F49 (U3CRoundEndingU3Ed__18_tE3DB51EE0AFA4B19B188951F2F57159255038499 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GameManager/<RoundPlaying>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__17__ctor_m21EEC7D1F84A2088FF29CDCABFFB5160C0912C51 (U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<RoundPlaying>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__17_System_IDisposable_Dispose_m3B2060C8DD5D5971294C1E8F732D655A4C6D9537 (U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<RoundPlaying>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoundPlayingU3Ed__17_MoveNext_m757739D75F1C37711DB533D2FE07EAFD80932DA7 (U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0046;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// EnableTankControl();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = V_1;
		GameManager_EnableTankControl_m9EB3B8F089DA57D626ADA8BE6E04951944C66F52(L_4, /*hidden argument*/NULL);
		// m_MessageText.text = string.Empty;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = L_5->get_m_MessageText_8();
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		goto IL_004d;
	}

IL_0036:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0046:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004d:
	{
		// while (!OneTankLeft())
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = V_1;
		bool L_9;
		L_9 = GameManager_OneTankLeft_m869360BDF4CB7E2D471F303C002C41D508C4B24E(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<RoundPlaying>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRoundPlayingU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m08B7638FEFF84924A779A449F16FC9CB73B50AC0 (U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<RoundPlaying>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundPlayingU3Ed__17_System_Collections_IEnumerator_Reset_m3BB71EC5F741D53A9FC9079A33A8D709AF4F5CB5 (U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoundPlayingU3Ed__17_System_Collections_IEnumerator_Reset_m3BB71EC5F741D53A9FC9079A33A8D709AF4F5CB5_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<RoundPlaying>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRoundPlayingU3Ed__17_System_Collections_IEnumerator_get_Current_mBCC894C388126E6736516939E3AFBA8AA33C9F3D (U3CRoundPlayingU3Ed__17_t1384D449DF8219990308FC5CBDE31AF78E94E5CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GameManager/<RoundStarting>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__16__ctor_m253FE6A88BEB9D8754F7471E9359D97FF81F8175 (U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<RoundStarting>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__16_System_IDisposable_Dispose_m5526ECA3309A407FB6E7F30E2041C39F08697D53 (U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<RoundStarting>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoundStartingU3Ed__16_MoveNext_m22AEB5D7164921557931C4B9464802D258419F4D (U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8CD13DF0D8EB319F218C826B22309CDE929DD46);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0078;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ResetAllTanks();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = V_1;
		GameManager_ResetAllTanks_m1D749DFEE2E6011F26CB4027F8196DE2F7FD96B8(L_4, /*hidden argument*/NULL);
		// DisableTankControl();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = V_1;
		GameManager_DisableTankControl_m34F0BEA8B4C61C0700F2C772A291B36BBDE508EE(L_5, /*hidden argument*/NULL);
		// m_CameraControl.SetStartPositionAndSize();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = V_1;
		CameraControl_t9F3856A996543475466FF149CBBFE90DF3039EC5 * L_7 = L_6->get_m_CameraControl_7();
		CameraControl_SetStartPositionAndSize_mA16396F1A3D56B5CA9E170FDE57F9DC01E3F8184(L_7, /*hidden argument*/NULL);
		// m_RoundNumber++;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = V_1;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_9 = V_1;
		int32_t L_10 = L_9->get_m_RoundNumber_11();
		L_8->set_m_RoundNumber_11(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		// m_MessageText.text = "ROUND " + m_RoundNumber;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_11 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = L_11->get_m_MessageText_8();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_13 = V_1;
		int32_t* L_14 = L_13->get_address_of_m_RoundNumber_11();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE8CD13DF0D8EB319F218C826B22309CDE929DD46, L_15, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_16);
		// yield return m_StartWait;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_17 = V_1;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_18 = L_17->get_m_StartWait_12();
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0078:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<RoundStarting>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRoundStartingU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE12A96A7D94F85548D323390159F1C9294F9B6C5 (U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<RoundStarting>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundStartingU3Ed__16_System_Collections_IEnumerator_Reset_m372F572C1C91EED5FE1E8E160B327AD6A6239EE8 (U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoundStartingU3Ed__16_System_Collections_IEnumerator_Reset_m372F572C1C91EED5FE1E8E160B327AD6A6239EE8_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<RoundStarting>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRoundStartingU3Ed__16_System_Collections_IEnumerator_get_Current_mD3EC79E409DE1EA46F19AD067381FAA4D0D2F8C6 (U3CRoundStartingU3Ed__16_t54D291F4FDDE32500265EFDEF21063629FBCDDEC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GamePad/PS4GamePad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PS4GamePad__ctor_mD33C90EB172B295F9845FA89E230230537426EE0 (PS4GamePad_t9003A9E2FCBFADF220FE8837A7229D63284AF327 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mBAD5262A353BC071C61B8DB462A3D4D5AB5C7C4E (Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
