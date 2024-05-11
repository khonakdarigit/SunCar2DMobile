#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation>
struct Collection_1_tFCFDED5321BE15CA8D30D61CF04DDE693BB0CB5B;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`2<System.Net.IPAddress,System.Boolean>
struct Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<System.Net.IPAddress>
struct IEnumerable_1_tA197E32CF58DD427ECD02C6F8F00AD83B8B1EFC5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Lazy`1<System.Int32>
struct Lazy_1_tC472294B60BE0A80E75923C1223E04025F1DF72C;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Assets._2D_Car.Script.Models.TopScoreViewModel>
struct List_1_t697B91E0A2FB1436BB8BF8312600F55976F2AACD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Assets._2D_Car.Script.Car/Axle[]
struct AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// AdColony.AdColonyJson
struct AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42;
// AdColony.AdOptions
struct AdOptions_tEEB98159A587FEA572F53CF22B70562A7A392D24;
// AdColony.AppOptions
struct AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Assets._2D_Car.Script.CameraFollow
struct CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Assets._2D_Car.Script.Car
struct Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C;
// CarOption
struct CarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24;
// Assets._2D_Car.Script.CarPedal
struct CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E;
// Assets._2D_Car.Script.CarSfxHandler
struct CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// PropertyChanged.DoNotNotifyAttribute
struct DoNotNotifyAttribute_tCA2066BDD8DBA48327C1C32DE65017C57E7DF816;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Assets._2D_Car.Script.Models.GameScoreApi
struct GameScoreApi_t9F7B63F8E6D0045D77F8B590C5084DC42AC7D19D;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490;
// Assets._2D_Car.Script.IPManager
struct IPManager_t5D7590FEB3525E9CA2DB68617BBD27AC0542BFCF;
// Realms.IRealmAccessor
struct IRealmAccessor_tCD7B9D523BB2410D6BD709C97180B4E15D83026C;
// Realms.IRealmObjectBase
struct IRealmObjectBase_tBEC589FB69686BF26D0267270228515586A66554;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Assets._2D_Car.Script.Models.Log
struct Log_t5D5803DA8C38443C718346ABCC45E5766F7E47B1;
// Realms.ManagedAccessor
struct ManagedAccessor_t33EB06E7AD95873A682E1E680FCCEE50FC71B2E0;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Realms.Metadata
struct Metadata_t2ABF6F2F8F0B9781B531167A5D3DF6AD8C903175;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A;
// Realms.NotificationTokenHandle
struct NotificationTokenHandle_t16592F9586631C974992BB8904D958DC955FA02C;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Realms.ObjectHandle
struct ObjectHandle_tB51DDB8EF3C73703B266D95396BFCD2A68A84793;
// AdColony.Options
struct Options_t81CB146584085A0B18696637087657C2535B909B;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Assets._2D_Car.Script.Models.PlayerInfo
struct PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA;
// Assets._2D_Car.Script.Models.PlayerInfoApi
struct PlayerInfoApi_tF06D5D093B0DD188C80586E58C23814B9F23E78A;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// Realms.Realm
struct Realm_t17ED74927F8A136FE7BFDE565BD24FEA8C9F676C;
// Realms.RealmObject
struct RealmObject_tCF123A13EE1C2524B24DB9D0BFADBA35E7C32E61;
// Realms.RealmObjectBase
struct RealmObjectBase_t1310868649387884B3BF9524480262CC0EFE6F91;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Assets._2D_Car.Script.Models.RewardLog
struct RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SnapshotCamera
struct SnapshotCamera_t9476C8DE61ADF62D6A8C4875DD9621F4555A4EE3;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// Assets._2D_Car.Script.Models.StageStatus
struct StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Assets._2D_Car.Script.Models.TopScoreList
struct TopScoreList_t47D048D3C0AF621ED57844EFD68F41D23C289514;
// Assets._2D_Car.Script.Models.TopScoreViewModel
struct TopScoreViewModel_t61910B427857717F74B6B94C530069310A5D6119;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// AdColony.UserMetadata
struct UserMetadata_t84707C000E8C03430077421D71D30816B3293915;
// Assets._2D_Car.Script.Models.VehicleStatus
struct VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WheelJoint2D
struct WheelJoint2D_tDA020679F5ECB6EE30F600E10756B71AF2A10808;
// AdColony.Zone
struct Zone_tCE53E8C7D6CC21D5846DA58398F5A638406715E6;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// Assets._2D_Car.Script.Car/Axle
struct Axle_tE71752E414D64E1652A6028466793217B6D041E5;
// Assets._2D_Car.Script.IPManager/<>c
struct U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Assets._2D_Car.Script.Models.PlayerInfo/RealmHelper
struct RealmHelper_tAD29E68697D12029F4B188332665583E332B4AD4;
// Assets._2D_Car.Script.Models.RewardLog/RealmHelper
struct RealmHelper_t3CDC7F374BB0E588A3FB3CB546A1D7A71AC89605;
// Assets._2D_Car.Script.Models.StageStatus/RealmHelper
struct RealmHelper_tFB6B63BACDEB5C30F6F57758586F5325BE5B9037;
// Assets._2D_Car.Script.Models.VehicleStatus/RealmHelper
struct RealmHelper_t55AA9A97B0F56716809DDAC1B945FF3772F8E447;

IL2CPP_EXTERN_C RuntimeClass* AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdOrientationType_t5AA23240A9C8CEEA25BFE1E3345A884C564E6878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdZoneType_t975B32499E948A0086944160631A01949C72DC91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA218C3658C89562941B7435E73E48E2EDC26D9BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealmSchema_tC4E54035741556C8101BA6B9C2D4A036A3D903F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral036F200E9FDB7D21000859B77B5AF1CEDD78BD18;
IL2CPP_EXTERN_C String_t* _stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral0C1FD9FAE31F383ADD320E5FCA9DCBF7A86C6E6F;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral178F981917FFDDA02A2F99BE1867769B08DCEAD6;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral2E30EDBD648154A5A8BE87BD177441F8B9F2FD76;
IL2CPP_EXTERN_C String_t* _stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1;
IL2CPP_EXTERN_C String_t* _stringLiteral34C2BCA5431F98C3584D7A0DEF32829249C8C420;
IL2CPP_EXTERN_C String_t* _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03;
IL2CPP_EXTERN_C String_t* _stringLiteral4C7DD8EC22843DDD329CB54BBDB2825D0FC007F6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral538A136789A6F91CAA8E26DE1A5187831F9CDAC7;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral62C4F290035999D38AC685022DE08073F5D9F532;
IL2CPP_EXTERN_C String_t* _stringLiteral74E63724C8C7B7E3B096A909844EA27AE9D7E338;
IL2CPP_EXTERN_C String_t* _stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral761896019B38F8CF6AD720BD3BAF4228C3AD2607;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E3192B6351D53F16C57C0410BACAFA171D966AC;
IL2CPP_EXTERN_C String_t* _stringLiteral8FC0BA618B7ED5923F41911E548FC6085302EFFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764;
IL2CPP_EXTERN_C String_t* _stringLiteralADBBFA7D49FF899FC072DAE66A3D434BA8638FC6;
IL2CPP_EXTERN_C String_t* _stringLiteralB21D9EB0CDECCD775DB2D6547A6CE2E24115B918;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBD4AAC819B3CDF6979DEA784A5FE3F94A001675D;
IL2CPP_EXTERN_C String_t* _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD9C200E0322EBE87821F45CC04C4E4D190CE7D41;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA9933AEA637696C28967097859DC522E6B344D;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE6AED819E646816B4C6FBDDED96E8F2672E40152;
IL2CPP_EXTERN_C String_t* _stringLiteralE91D5EEA318225B70BC7A287B49B802D858E164E;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Car_OnBrake_m0E91DDA99E2F04AE2EF1FCF99401887E84E9EC0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Car_OnGas_mB203A1D69E4FD2BA2C3B5B573442057EC36AB545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCar_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_m29D719BD4DEC058EE4CEFA4B1CD9AF52F3D2ED33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D_m1D030C5A136794BFDB631FDE4CBCF4E7941AE0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_mF43AC4DE97842B5192459D10A671758DCB3F1695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24_mB77F5E82A720E909D4FC50AC463CCDD78979B461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_mA6E1D53932CFEDDFAE699F36C54C39BF14FC653A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetLocalIPv4U3Eb__0_0_m99CA3DFDAE5F1AB81FE8FEAA57834F60AD0985F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// AdColony.AdColonyJson
struct AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42  : public RuntimeObject
{
	// System.Int32 AdColony.AdColonyJson::lastErrorIndex
	int32_t ___lastErrorIndex_2;
	// System.String AdColony.AdColonyJson::lastDecode
	String_t* ___lastDecode_3;
};

struct AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields
{
	// AdColony.AdColonyJson AdColony.AdColonyJson::instance
	AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* ___instance_1;
};
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// AdColony.Constants
struct Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125  : public RuntimeObject
{
};

struct Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields
{
	// System.String AdColony.Constants::OptionsMetadataKey
	String_t* ___OptionsMetadataKey_0;
	// System.String AdColony.Constants::AppOptionsDisableLoggingKey
	String_t* ___AppOptionsDisableLoggingKey_1;
	// System.String AdColony.Constants::AppOptionsUserIdKey
	String_t* ___AppOptionsUserIdKey_2;
	// System.String AdColony.Constants::AppOptionsOrientationKey
	String_t* ___AppOptionsOrientationKey_3;
	// System.String AdColony.Constants::AppOptionsTestModeKey
	String_t* ___AppOptionsTestModeKey_4;
	// System.String AdColony.Constants::AppOptionsGdprRequiredKey
	String_t* ___AppOptionsGdprRequiredKey_5;
	// System.String AdColony.Constants::AppOptionsGdprConsentStringKey
	String_t* ___AppOptionsGdprConsentStringKey_6;
	// System.String AdColony.Constants::AppOptionsMultiWindowEnabledKey
	String_t* ___AppOptionsMultiWindowEnabledKey_7;
	// System.String AdColony.Constants::AppOptionsOriginStoreKey
	String_t* ___AppOptionsOriginStoreKey_8;
	// System.String AdColony.Constants::AdOptionsPrePopupKey
	String_t* ___AdOptionsPrePopupKey_9;
	// System.String AdColony.Constants::AdOptionsPostPopupKey
	String_t* ___AdOptionsPostPopupKey_10;
	// System.String AdColony.Constants::UserMetadataAgeKey
	String_t* ___UserMetadataAgeKey_11;
	// System.String AdColony.Constants::UserMetadataInterestsKey
	String_t* ___UserMetadataInterestsKey_12;
	// System.String AdColony.Constants::UserMetadataGenderKey
	String_t* ___UserMetadataGenderKey_13;
	// System.String AdColony.Constants::UserMetadataLatitudeKey
	String_t* ___UserMetadataLatitudeKey_14;
	// System.String AdColony.Constants::UserMetadataLongitudeKey
	String_t* ___UserMetadataLongitudeKey_15;
	// System.String AdColony.Constants::UserMetadataZipCodeKey
	String_t* ___UserMetadataZipCodeKey_16;
	// System.String AdColony.Constants::UserMetadataHouseholdIncomeKey
	String_t* ___UserMetadataHouseholdIncomeKey_17;
	// System.String AdColony.Constants::UserMetadataMaritalStatusKey
	String_t* ___UserMetadataMaritalStatusKey_18;
	// System.String AdColony.Constants::UserMetadataEducationLevelKey
	String_t* ___UserMetadataEducationLevelKey_19;
	// System.String AdColony.Constants::ZoneIdentifierKey
	String_t* ___ZoneIdentifierKey_20;
	// System.String AdColony.Constants::ZoneTypeKey
	String_t* ___ZoneTypeKey_21;
	// System.String AdColony.Constants::ZoneEnabledKey
	String_t* ___ZoneEnabledKey_22;
	// System.String AdColony.Constants::ZoneRewardedKey
	String_t* ___ZoneRewardedKey_23;
	// System.String AdColony.Constants::ZoneViewsPerRewardKey
	String_t* ___ZoneViewsPerRewardKey_24;
	// System.String AdColony.Constants::ZoneViewsUntilRewardKey
	String_t* ___ZoneViewsUntilRewardKey_25;
	// System.String AdColony.Constants::ZoneRewardAmountKey
	String_t* ___ZoneRewardAmountKey_26;
	// System.String AdColony.Constants::ZoneRewardNameKey
	String_t* ___ZoneRewardNameKey_27;
	// System.String AdColony.Constants::OnIAPOpportunityAdKey
	String_t* ___OnIAPOpportunityAdKey_28;
	// System.String AdColony.Constants::OnIAPOpportunityEngagementKey
	String_t* ___OnIAPOpportunityEngagementKey_29;
	// System.String AdColony.Constants::OnIAPOpportunityIapProductIdKey
	String_t* ___OnIAPOpportunityIapProductIdKey_30;
	// System.String AdColony.Constants::OnRewardGrantedZoneIdKey
	String_t* ___OnRewardGrantedZoneIdKey_31;
	// System.String AdColony.Constants::OnRewardGrantedSuccessKey
	String_t* ___OnRewardGrantedSuccessKey_32;
	// System.String AdColony.Constants::OnRewardGrantedNameKey
	String_t* ___OnRewardGrantedNameKey_33;
	// System.String AdColony.Constants::OnRewardGrantedAmountKey
	String_t* ___OnRewardGrantedAmountKey_34;
	// System.String AdColony.Constants::OnCustomMessageReceivedTypeKey
	String_t* ___OnCustomMessageReceivedTypeKey_35;
	// System.String AdColony.Constants::OnCustomMessageReceivedMessageKey
	String_t* ___OnCustomMessageReceivedMessageKey_36;
	// System.String AdColony.Constants::AdsManagerName
	String_t* ___AdsManagerName_37;
	// System.String AdColony.Constants::AdsMessageNotInitialized
	String_t* ___AdsMessageNotInitialized_38;
	// System.String AdColony.Constants::AdsMessageAlreadyInitialized
	String_t* ___AdsMessageAlreadyInitialized_39;
	// System.String AdColony.Constants::AdsMessageSDKUnavailable
	String_t* ___AdsMessageSDKUnavailable_40;
	// System.String AdColony.Constants::AdsMessageErrorNullAd
	String_t* ___AdsMessageErrorNullAd_41;
	// System.String AdColony.Constants::AdsMessageErrorUnableToRebuildAd
	String_t* ___AdsMessageErrorUnableToRebuildAd_42;
	// System.String AdColony.Constants::AdsMessageErrorInvalidImplementation
	String_t* ___AdsMessageErrorInvalidImplementation_43;
	// System.String AdColony.Constants::CONSENT_STRING
	String_t* ___CONSENT_STRING_44;
	// System.String AdColony.Constants::CONSENT_REQUIRED
	String_t* ___CONSENT_REQUIRED_45;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.NetworkInformation.IPAddressInformation
struct IPAddressInformation_t88AEE176C5711B91C890536A43B17C95690A07A7  : public RuntimeObject
{
};

// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490  : public RuntimeObject
{
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;
};

// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F  : public RuntimeObject
{
};

// Assets._2D_Car.Script.IPManager
struct IPManager_t5D7590FEB3525E9CA2DB68617BBD27AC0542BFCF  : public RuntimeObject
{
};

// Realms.ManagedAccessor
struct ManagedAccessor_t33EB06E7AD95873A682E1E680FCCEE50FC71B2E0  : public RuntimeObject
{
	// System.Lazy`1<System.Int32> Realms.ManagedAccessor::_hashCode
	Lazy_1_tC472294B60BE0A80E75923C1223E04025F1DF72C* ____hashCode_0;
	// Realms.NotificationTokenHandle Realms.ManagedAccessor::_notificationToken
	NotificationTokenHandle_t16592F9586631C974992BB8904D958DC955FA02C* ____notificationToken_1;
	// System.Action`1<System.String> Realms.ManagedAccessor::_onNotifyPropertyChanged
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ____onNotifyPropertyChanged_2;
	// Realms.ObjectHandle Realms.ManagedAccessor::<ObjectHandle>k__BackingField
	ObjectHandle_tB51DDB8EF3C73703B266D95396BFCD2A68A84793* ___U3CObjectHandleU3Ek__BackingField_3;
	// Realms.Realm Realms.ManagedAccessor::<Realm>k__BackingField
	Realm_t17ED74927F8A136FE7BFDE565BD24FEA8C9F676C* ___U3CRealmU3Ek__BackingField_4;
	// Realms.Metadata Realms.ManagedAccessor::<Metadata>k__BackingField
	Metadata_t2ABF6F2F8F0B9781B531167A5D3DF6AD8C903175* ___U3CMetadataU3Ek__BackingField_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A  : public RuntimeObject
{
};

// AdColony.Options
struct Options_t81CB146584085A0B18696637087657C2535B909B  : public RuntimeObject
{
	// AdColony.UserMetadata AdColony.Options::Metadata
	UserMetadata_t84707C000E8C03430077421D71D30816B3293915* ___Metadata_0;
	// System.Collections.Hashtable AdColony.Options::_data
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____data_1;
};

// Assets._2D_Car.Script.Models.PlayerInfoApi
struct PlayerInfoApi_tF06D5D093B0DD188C80586E58C23814B9F23E78A  : public RuntimeObject
{
	// System.String Assets._2D_Car.Script.Models.PlayerInfoApi::id
	String_t* ___id_0;
	// System.String Assets._2D_Car.Script.Models.PlayerInfoApi::name
	String_t* ___name_1;
	// System.String Assets._2D_Car.Script.Models.PlayerInfoApi::gameId
	String_t* ___gameId_2;
};

// RealmModuleInitializer
struct RealmModuleInitializer_t9BC17CD5CE3977C979E7BF8443219ECF97CD87A2  : public RuntimeObject
{
};

// Realms.RealmObjectBase
struct RealmObjectBase_t1310868649387884B3BF9524480262CC0EFE6F91  : public RuntimeObject
{
	// Realms.IRealmAccessor Realms.RealmObjectBase::_accessor
	RuntimeObject* ____accessor_0;
	// System.ComponentModel.PropertyChangedEventHandler Realms.RealmObjectBase::_propertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ____propertyChanged_1;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Assets._2D_Car.Script.Models.TopScoreList
struct TopScoreList_t47D048D3C0AF621ED57844EFD68F41D23C289514  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Assets._2D_Car.Script.Models.TopScoreViewModel> Assets._2D_Car.Script.Models.TopScoreList::topScoreList
	List_1_t697B91E0A2FB1436BB8BF8312600F55976F2AACD* ___topScoreList_0;
};

// Assets._2D_Car.Script.Models.TopScoreViewModel
struct TopScoreViewModel_t61910B427857717F74B6B94C530069310A5D6119  : public RuntimeObject
{
	// System.Int32 Assets._2D_Car.Script.Models.TopScoreViewModel::number
	int32_t ___number_0;
	// System.String Assets._2D_Car.Script.Models.TopScoreViewModel::username
	String_t* ___username_1;
	// System.Int32 Assets._2D_Car.Script.Models.TopScoreViewModel::score
	int32_t ___score_2;
};

// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_tB4D61C9127DFB4168CA3855020CCEB59B75C6EDA  : public RuntimeObject
{
	// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::addresses
	Collection_1_tFCFDED5321BE15CA8D30D61CF04DDE693BB0CB5B* ___addresses_0;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// AdColony.UserMetadata
struct UserMetadata_t84707C000E8C03430077421D71D30816B3293915  : public RuntimeObject
{
	// System.Int32 AdColony.UserMetadata::_age
	int32_t ____age_0;
	// System.Collections.Generic.List`1<System.String> AdColony.UserMetadata::_interests
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____interests_1;
	// System.String AdColony.UserMetadata::_gender
	String_t* ____gender_2;
	// System.Double AdColony.UserMetadata::_latitude
	double ____latitude_3;
	// System.Double AdColony.UserMetadata::_longitude
	double ____longitude_4;
	// System.String AdColony.UserMetadata::_zipCode
	String_t* ____zipCode_5;
	// System.Int32 AdColony.UserMetadata::_householdIncome
	int32_t ____householdIncome_6;
	// System.String AdColony.UserMetadata::_maritalStatus
	String_t* ____maritalStatus_7;
	// System.String AdColony.UserMetadata::_educationLevel
	String_t* ____educationLevel_8;
	// System.Collections.Hashtable AdColony.UserMetadata::_data
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____data_9;
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

// AdColony.Zone
struct Zone_tCE53E8C7D6CC21D5846DA58398F5A638406715E6  : public RuntimeObject
{
	// System.String AdColony.Zone::Identifier
	String_t* ___Identifier_0;
	// AdColony.AdZoneType AdColony.Zone::Type
	int32_t ___Type_1;
	// System.Boolean AdColony.Zone::Enabled
	bool ___Enabled_2;
	// System.Boolean AdColony.Zone::Rewarded
	bool ___Rewarded_3;
	// System.Int32 AdColony.Zone::ViewsPerReward
	int32_t ___ViewsPerReward_4;
	// System.Int32 AdColony.Zone::ViewsUntilReward
	int32_t ___ViewsUntilReward_5;
	// System.Int32 AdColony.Zone::RewardAmount
	int32_t ___RewardAmount_6;
	// System.String AdColony.Zone::RewardName
	String_t* ___RewardName_7;
};

// Assets._2D_Car.Script.Car/Axle
struct Axle_tE71752E414D64E1652A6028466793217B6D041E5  : public RuntimeObject
{
	// UnityEngine.Rigidbody2D Assets._2D_Car.Script.Car/Axle::wheel
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___wheel_0;
	// System.Single Assets._2D_Car.Script.Car/Axle::speedMultiplier
	float ___speedMultiplier_1;
	// UnityEngine.WheelJoint2D Assets._2D_Car.Script.Car/Axle::wheelJoint2
	WheelJoint2D_tDA020679F5ECB6EE30F600E10756B71AF2A10808* ___wheelJoint2_2;
};

// Assets._2D_Car.Script.IPManager/<>c
struct U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117  : public RuntimeObject
{
};

struct U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_StaticFields
{
	// Assets._2D_Car.Script.IPManager/<>c Assets._2D_Car.Script.IPManager/<>c::<>9
	U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117* ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,System.Boolean> Assets._2D_Car.Script.IPManager/<>c::<>9__0_0
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* ___U3CU3E9__0_0_1;
};

// Assets._2D_Car.Script.Models.PlayerInfo/RealmHelper
struct RealmHelper_tAD29E68697D12029F4B188332665583E332B4AD4  : public RuntimeObject
{
};

// Assets._2D_Car.Script.Models.RewardLog/RealmHelper
struct RealmHelper_t3CDC7F374BB0E588A3FB3CB546A1D7A71AC89605  : public RuntimeObject
{
};

// Assets._2D_Car.Script.Models.StageStatus/RealmHelper
struct RealmHelper_tFB6B63BACDEB5C30F6F57758586F5325BE5B9037  : public RuntimeObject
{
};

// Assets._2D_Car.Script.Models.VehicleStatus/RealmHelper
struct RealmHelper_t55AA9A97B0F56716809DDAC1B945FF3772F8E447  : public RuntimeObject
{
};

// AdColony.AdOptions
struct AdOptions_tEEB98159A587FEA572F53CF22B70562A7A392D24  : public Options_t81CB146584085A0B18696637087657C2535B909B
{
	// System.Boolean AdColony.AdOptions::_showPrePopup
	bool ____showPrePopup_2;
	// System.Boolean AdColony.AdOptions::_showPostPopup
	bool ____showPostPopup_3;
};

// AdColony.AppOptions
struct AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4  : public Options_t81CB146584085A0B18696637087657C2535B909B
{
	// System.Boolean AdColony.AppOptions::_disableLogging
	bool ____disableLogging_5;
	// System.String AdColony.AppOptions::_userId
	String_t* ____userId_6;
	// AdColony.AdOrientationType AdColony.AppOptions::_adOrientation
	int32_t ____adOrientation_7;
	// System.Boolean AdColony.AppOptions::_multiWindowEnabled
	bool ____multiWindowEnabled_8;
	// System.String AdColony.AppOptions::_originStore
	String_t* ____originStore_9;
	// System.Boolean AdColony.AppOptions::_testModeEnabled
	bool ____testModeEnabled_10;
	// System.Boolean AdColony.AppOptions::_gdprRequired
	bool ____gdprRequired_11;
	// System.String AdColony.AppOptions::_gdprConsentString
	String_t* ____gdprConsentString_12;
};

struct AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_StaticFields
{
	// System.String AdColony.AppOptions::CCPA
	String_t* ___CCPA_2;
	// System.String AdColony.AppOptions::GDPR
	String_t* ___GDPR_3;
	// System.String AdColony.AppOptions::COPPA
	String_t* ___COPPA_4;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// PropertyChanged.DoNotNotifyAttribute
struct DoNotNotifyAttribute_tCA2066BDD8DBA48327C1C32DE65017C57E7DF816  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// MongoDB.Bson.ObjectId
struct ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA 
{
	// System.Int32 MongoDB.Bson.ObjectId::_a
	int32_t ____a_3;
	// System.Int32 MongoDB.Bson.ObjectId::_b
	int32_t ____b_4;
	// System.Int32 MongoDB.Bson.ObjectId::_c
	int32_t ____c_5;
};

struct ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA_StaticFields
{
	// MongoDB.Bson.ObjectId MongoDB.Bson.ObjectId::__emptyInstance
	ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA _____emptyInstance_0;
	// System.Int64 MongoDB.Bson.ObjectId::__random
	int64_t _____random_1;
	// System.Int32 MongoDB.Bson.ObjectId::__staticIncrement
	int32_t _____staticIncrement_2;
};

// Realms.RealmObject
struct RealmObject_tCF123A13EE1C2524B24DB9D0BFADBA35E7C32E61  : public RealmObjectBase_t1310868649387884B3BF9524480262CC0EFE6F91
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Realms.Native.TableKey
struct TableKey_tDE0311CA4D5C298F8BB7E0352BAEE9910E60B713 
{
	// System.UInt32 Realms.Native.TableKey::Value
	uint32_t ___Value_0;
};

// System.Net.NetworkInformation.UnicastIPAddressInformation
struct UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3  : public IPAddressInformation_t88AEE176C5711B91C890536A43B17C95690A07A7
{
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// Realms.Native.PrimitiveValue/<decimal_bits>e__FixedBuffer
struct U3Cdecimal_bitsU3Ee__FixedBuffer_tF7D50EE072C933FF8FA41523147EAE0AF67B528D 
{
	union
	{
		struct
		{
			// System.UInt64 Realms.Native.PrimitiveValue/<decimal_bits>e__FixedBuffer::FixedElementField
			uint64_t ___FixedElementField_0;
		};
		uint8_t U3Cdecimal_bitsU3Ee__FixedBuffer_tF7D50EE072C933FF8FA41523147EAE0AF67B528D__padding[16];
	};
};

// Realms.Native.PrimitiveValue/<guid_bytes>e__FixedBuffer
struct U3Cguid_bytesU3Ee__FixedBuffer_tC99494C5FB5D0B6DDFDBECE6BB8FEFAEE7165DC3 
{
	union
	{
		struct
		{
			// System.Byte Realms.Native.PrimitiveValue/<guid_bytes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cguid_bytesU3Ee__FixedBuffer_tC99494C5FB5D0B6DDFDBECE6BB8FEFAEE7165DC3__padding[16];
	};
};

// Realms.Native.PrimitiveValue/<object_id_bytes>e__FixedBuffer
struct U3Cobject_id_bytesU3Ee__FixedBuffer_t8744739B792C1B30310C858286163338499BA3FB 
{
	union
	{
		struct
		{
			// System.Byte Realms.Native.PrimitiveValue/<object_id_bytes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cobject_id_bytesU3Ee__FixedBuffer_t8744739B792C1B30310C858286163338499BA3FB__padding[12];
	};
};

// Realms.Native.PrimitiveValue/TimestampValue
struct TimestampValue_t6D61E9CC604EF7895FE1872840E8227341DD69DC 
{
	// System.Int64 Realms.Native.PrimitiveValue/TimestampValue::seconds
	int64_t ___seconds_3;
	// System.Int32 Realms.Native.PrimitiveValue/TimestampValue::nanoseconds
	int32_t ___nanoseconds_4;
};

// Realms.RealmInteger`1<System.Int32>
struct RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 
{
	// T Realms.RealmInteger`1::_value
	int32_t ____value_0;
	// Realms.ObjectHandle Realms.RealmInteger`1::_objectHandle
	ObjectHandle_tB51DDB8EF3C73703B266D95396BFCD2A68A84793* ____objectHandle_1;
	// System.IntPtr Realms.RealmInteger`1::_propertyIndex
	intptr_t ____propertyIndex_2;
};

// Realms.Native.BinaryValue
struct BinaryValue_t7B2D7E7F1646EFE4AFF2C22C56F384B11C8F551D 
{
	// System.Byte* Realms.Native.BinaryValue::data
	uint8_t* ___data_0;
	// System.IntPtr Realms.Native.BinaryValue::size
	intptr_t ___size_1;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Assets._2D_Car.Script.Models.GameScoreApi
struct GameScoreApi_t9F7B63F8E6D0045D77F8B590C5084DC42AC7D19D  : public RuntimeObject
{
	// System.String Assets._2D_Car.Script.Models.GameScoreApi::id
	String_t* ___id_0;
	// System.Int32 Assets._2D_Car.Script.Models.GameScoreApi::score
	int32_t ___score_1;
	// System.DateTime Assets._2D_Car.Script.Models.GameScoreApi::date
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___date_2;
	// System.String Assets._2D_Car.Script.Models.GameScoreApi::gameuserid
	String_t* ___gameuserid_3;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Assets._2D_Car.Script.Models.StageStatus
struct StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B  : public RealmObject_tCF123A13EE1C2524B24DB9D0BFADBA35E7C32E61
{
	// MongoDB.Bson.ObjectId Assets._2D_Car.Script.Models.StageStatus::<Id>k__BackingField
	ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ___U3CIdU3Ek__BackingField_2;
	// System.String Assets._2D_Car.Script.Models.StageStatus::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// System.Boolean Assets._2D_Car.Script.Models.StageStatus::<Lock>k__BackingField
	bool ___U3CLockU3Ek__BackingField_4;
};

// Realms.Native.StringValue
struct StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 
{
	// System.Byte* Realms.Native.StringValue::data
	uint8_t* ___data_0;
	// System.IntPtr Realms.Native.StringValue::size
	intptr_t ___size_1;
};

struct StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8_StaticFields
{
	// Realms.Native.StringValue Realms.Native.StringValue::Null
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___Null_2;
};

// Assets._2D_Car.Script.Models.VehicleStatus
struct VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9  : public RealmObject_tCF123A13EE1C2524B24DB9D0BFADBA35E7C32E61
{
	// MongoDB.Bson.ObjectId Assets._2D_Car.Script.Models.VehicleStatus::<Id>k__BackingField
	ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ___U3CIdU3Ek__BackingField_2;
	// System.String Assets._2D_Car.Script.Models.VehicleStatus::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// System.Boolean Assets._2D_Car.Script.Models.VehicleStatus::<Lock>k__BackingField
	bool ___U3CLockU3Ek__BackingField_4;
	// System.Int32 Assets._2D_Car.Script.Models.VehicleStatus::<TuneLevel>k__BackingField
	int32_t ___U3CTuneLevelU3Ek__BackingField_5;
	// System.Int32 Assets._2D_Car.Script.Models.VehicleStatus::<TuneLevelUserSave>k__BackingField
	int32_t ___U3CTuneLevelUserSaveU3Ek__BackingField_6;
	// System.Int32 Assets._2D_Car.Script.Models.VehicleStatus::<BestRecord>k__BackingField
	int32_t ___U3CBestRecordU3Ek__BackingField_7;
};

// Realms.Native.PrimitiveValue/LinkValue
struct LinkValue_t2E971397736EAD9583513BF15C18315B51B81EA3 
{
	// System.IntPtr Realms.Native.PrimitiveValue/LinkValue::object_ptr
	intptr_t ___object_ptr_0;
	// Realms.Native.TableKey Realms.Native.PrimitiveValue/LinkValue::table_key
	TableKey_tDE0311CA4D5C298F8BB7E0352BAEE9910E60B713 ___table_key_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Assets._2D_Car.Script.Models.Log
struct Log_t5D5803DA8C38443C718346ABCC45E5766F7E47B1  : public RuntimeObject
{
	// System.String Assets._2D_Car.Script.Models.Log::id
	String_t* ___id_0;
	// System.String Assets._2D_Car.Script.Models.Log::userId
	String_t* ___userId_1;
	// System.DateTimeOffset Assets._2D_Car.Script.Models.Log::date
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___date_2;
	// System.String Assets._2D_Car.Script.Models.Log::area
	String_t* ___area_3;
	// System.String Assets._2D_Car.Script.Models.Log::controller
	String_t* ___controller_4;
	// System.String Assets._2D_Car.Script.Models.Log::action
	String_t* ___action_5;
	// System.String Assets._2D_Car.Script.Models.Log::actionParameter
	String_t* ___actionParameter_6;
	// System.String Assets._2D_Car.Script.Models.Log::ip
	String_t* ___ip_7;
	// System.String Assets._2D_Car.Script.Models.Log::level
	String_t* ___level_8;
	// System.String Assets._2D_Car.Script.Models.Log::exeption
	String_t* ___exeption_9;
	// System.String Assets._2D_Car.Script.Models.Log::message
	String_t* ___message_10;
	// System.String Assets._2D_Car.Script.Models.Log::appName
	String_t* ___appName_11;
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

// Assets._2D_Car.Script.Models.PlayerInfo
struct PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA  : public RealmObject_tCF123A13EE1C2524B24DB9D0BFADBA35E7C32E61
{
	// System.String Assets._2D_Car.Script.Models.PlayerInfo::<gamerTag>k__BackingField
	String_t* ___U3CgamerTagU3Ek__BackingField_2;
	// System.String Assets._2D_Car.Script.Models.PlayerInfo::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_3;
	// Realms.RealmInteger`1<System.Int32> Assets._2D_Car.Script.Models.PlayerInfo::<Record>k__BackingField
	RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 ___U3CRecordU3Ek__BackingField_4;
	// System.Int32 Assets._2D_Car.Script.Models.PlayerInfo::<Coin>k__BackingField
	int32_t ___U3CCoinU3Ek__BackingField_5;
	// System.Int32 Assets._2D_Car.Script.Models.PlayerInfo::<Dim>k__BackingField
	int32_t ___U3CDimU3Ek__BackingField_6;
	// System.String Assets._2D_Car.Script.Models.PlayerInfo::<API_DB_userID>k__BackingField
	String_t* ___U3CAPI_DB_userIDU3Ek__BackingField_7;
	// System.Boolean Assets._2D_Car.Script.Models.PlayerInfo::<GameMute>k__BackingField
	bool ___U3CGameMuteU3Ek__BackingField_8;
	// System.String Assets._2D_Car.Script.Models.PlayerInfo::<Last_Stage>k__BackingField
	String_t* ___U3CLast_StageU3Ek__BackingField_9;
	// System.String Assets._2D_Car.Script.Models.PlayerInfo::<Last_Vehicle>k__BackingField
	String_t* ___U3CLast_VehicleU3Ek__BackingField_10;
	// System.Boolean Assets._2D_Car.Script.Models.PlayerInfo::<ShowAd>k__BackingField
	bool ___U3CShowAdU3Ek__BackingField_11;
};

// Realms.Native.PrimitiveValue
struct PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Realms.Native.PrimitiveValue::int_value
			int64_t ___int_value_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int_value_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Realms.Native.PrimitiveValue::float_value
			float ___float_value_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___float_value_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Realms.Native.PrimitiveValue::double_value
			double ___double_value_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_value_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.PrimitiveValue/<decimal_bits>e__FixedBuffer Realms.Native.PrimitiveValue::decimal_bits
			U3Cdecimal_bitsU3Ee__FixedBuffer_tF7D50EE072C933FF8FA41523147EAE0AF67B528D ___decimal_bits_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3Cdecimal_bitsU3Ee__FixedBuffer_tF7D50EE072C933FF8FA41523147EAE0AF67B528D ___decimal_bits_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.PrimitiveValue/<object_id_bytes>e__FixedBuffer Realms.Native.PrimitiveValue::object_id_bytes
			U3Cobject_id_bytesU3Ee__FixedBuffer_t8744739B792C1B30310C858286163338499BA3FB ___object_id_bytes_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3Cobject_id_bytesU3Ee__FixedBuffer_t8744739B792C1B30310C858286163338499BA3FB ___object_id_bytes_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.PrimitiveValue/<guid_bytes>e__FixedBuffer Realms.Native.PrimitiveValue::guid_bytes
			U3Cguid_bytesU3Ee__FixedBuffer_tC99494C5FB5D0B6DDFDBECE6BB8FEFAEE7165DC3 ___guid_bytes_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3Cguid_bytesU3Ee__FixedBuffer_tC99494C5FB5D0B6DDFDBECE6BB8FEFAEE7165DC3 ___guid_bytes_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___dontuse_6_OffsetPadding[8];
			// System.Int64 Realms.Native.PrimitiveValue::dontuse
			int64_t ___dontuse_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___dontuse_6_OffsetPadding_forAlignmentOnly[8];
			int64_t ___dontuse_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.StringValue Realms.Native.PrimitiveValue::string_value
			StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___string_value_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___string_value_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.BinaryValue Realms.Native.PrimitiveValue::data_value
			BinaryValue_t7B2D7E7F1646EFE4AFF2C22C56F384B11C8F551D ___data_value_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			BinaryValue_t7B2D7E7F1646EFE4AFF2C22C56F384B11C8F551D ___data_value_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.PrimitiveValue/TimestampValue Realms.Native.PrimitiveValue::timestamp_value
			TimestampValue_t6D61E9CC604EF7895FE1872840E8227341DD69DC ___timestamp_value_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			TimestampValue_t6D61E9CC604EF7895FE1872840E8227341DD69DC ___timestamp_value_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.PrimitiveValue/LinkValue Realms.Native.PrimitiveValue::link_value
			LinkValue_t2E971397736EAD9583513BF15C18315B51B81EA3 ___link_value_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			LinkValue_t2E971397736EAD9583513BF15C18315B51B81EA3 ___link_value_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Type_11_OffsetPadding[16];
			// Realms.RealmValueType Realms.Native.PrimitiveValue::Type
			uint8_t ___Type_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Type_11_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___Type_11_forAlignmentOnly;
		};
	};
};

// Assets._2D_Car.Script.Models.RewardLog
struct RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611  : public RealmObject_tCF123A13EE1C2524B24DB9D0BFADBA35E7C32E61
{
	// MongoDB.Bson.ObjectId Assets._2D_Car.Script.Models.RewardLog::<Id>k__BackingField
	ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ___U3CIdU3Ek__BackingField_2;
	// System.DateTimeOffset Assets._2D_Car.Script.Models.RewardLog::<Date>k__BackingField
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___U3CDateU3Ek__BackingField_3;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`2<System.Net.IPAddress,System.Boolean>
struct Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Realms.RealmValue
struct RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 
{
	// Realms.Native.PrimitiveValue Realms.RealmValue::_primitiveValue
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ____primitiveValue_0;
	// System.String Realms.RealmValue::_stringValue
	String_t* ____stringValue_1;
	// System.Byte[] Realms.RealmValue::_dataValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____dataValue_2;
	// Realms.IRealmObjectBase Realms.RealmValue::_objectValue
	RuntimeObject* ____objectValue_3;
	// Realms.ObjectHandle Realms.RealmValue::_objectHandle
	ObjectHandle_tB51DDB8EF3C73703B266D95396BFCD2A68A84793* ____objectHandle_4;
	// System.IntPtr Realms.RealmValue::_propertyIndex
	intptr_t ____propertyIndex_5;
	// Realms.RealmValueType Realms.RealmValue::<Type>k__BackingField
	uint8_t ___U3CTypeU3Ek__BackingField_6;
};
// Native definition for P/Invoke marshalling of Realms.RealmValue
struct RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3_marshaled_pinvoke
{
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ____primitiveValue_0;
	char* ____stringValue_1;
	Il2CppSafeArray/*NONE*/* ____dataValue_2;
	RuntimeObject* ____objectValue_3;
	void* ____objectHandle_4;
	intptr_t ____propertyIndex_5;
	uint8_t ___U3CTypeU3Ek__BackingField_6;
};
// Native definition for COM marshalling of Realms.RealmValue
struct RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3_marshaled_com
{
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ____primitiveValue_0;
	Il2CppChar* ____stringValue_1;
	Il2CppSafeArray/*NONE*/* ____dataValue_2;
	RuntimeObject* ____objectValue_3;
	void* ____objectHandle_4;
	intptr_t ____propertyIndex_5;
	uint8_t ___U3CTypeU3Ek__BackingField_6;
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Assets._2D_Car.Script.CameraFollow
struct CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Assets._2D_Car.Script.CameraFollow::followTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___followTransform_5;
	// System.Single Assets._2D_Car.Script.CameraFollow::smoothSpeed
	float ___smoothSpeed_6;
	// System.Boolean Assets._2D_Car.Script.CameraFollow::isCameraFollowX
	bool ___isCameraFollowX_8;
	// UnityEngine.Vector3 Assets._2D_Car.Script.CameraFollow::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_9;
	// System.Single Assets._2D_Car.Script.CameraFollow::<Add_Z_Value>k__BackingField
	float ___U3CAdd_Z_ValueU3Ek__BackingField_10;
	// UnityEngine.Vector3 Assets._2D_Car.Script.CameraFollow::_Camera_Targetposition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Camera_Targetposition_11;
};

struct CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields
{
	// UnityEngine.Transform Assets._2D_Car.Script.CameraFollow::value_followTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value_followTransform_4;
	// System.Boolean Assets._2D_Car.Script.CameraFollow::isCameraFollow
	bool ___isCameraFollow_7;
	// Assets._2D_Car.Script.CameraFollow Assets._2D_Car.Script.CameraFollow::instance
	CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* ___instance_12;
};

// Assets._2D_Car.Script.Car
struct Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D Assets._2D_Car.Script.Car::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_5;
	// System.Single Assets._2D_Car.Script.Car::speed
	float ___speed_6;
	// System.Single Assets._2D_Car.Script.Car::fullTuneSpeed
	float ___fullTuneSpeed_7;
	// Assets._2D_Car.Script.Car/Axle[] Assets._2D_Car.Script.Car::axles
	AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* ___axles_8;
	// UnityEngine.GameObject Assets._2D_Car.Script.Car::CarPedal_Gas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CarPedal_Gas_9;
	// UnityEngine.GameObject Assets._2D_Car.Script.Car::CarPedal_Brack
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CarPedal_Brack_10;
	// UnityEngine.GameObject Assets._2D_Car.Script.Car::Canvas_CarOption
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Canvas_CarOption_11;
	// Assets._2D_Car.Script.Models.VehicleStatus Assets._2D_Car.Script.Car::<ItemDb>k__BackingField
	VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* ___U3CItemDbU3Ek__BackingField_13;
};

struct Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields
{
	// Assets._2D_Car.Script.Car Assets._2D_Car.Script.Car::instance
	Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* ___instance_4;
	// UnityEngine.Camera Assets._2D_Car.Script.Car::<static_Canvas_CarOption_WorldCamera>k__BackingField
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3Cstatic_Canvas_CarOption_WorldCameraU3Ek__BackingField_12;
};

// CarOption
struct CarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CarOption::pedal_Gas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pedal_Gas_4;
	// UnityEngine.GameObject CarOption::pedal_Back
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pedal_Back_5;
};

// Assets._2D_Car.Script.CarPedal
struct CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Assets._2D_Car.Script.PedalType Assets._2D_Car.Script.CarPedal::pedalType
	int32_t ___pedalType_4;
	// UnityEngine.Sprite Assets._2D_Car.Script.CarPedal::defaultGraphic
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___defaultGraphic_5;
	// UnityEngine.Sprite Assets._2D_Car.Script.CarPedal::pressedGraphic
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___pressedGraphic_6;
	// UnityEngine.UI.Image Assets._2D_Car.Script.CarPedal::graphicComponent
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___graphicComponent_7;
	// UnityEngine.Events.UnityEvent Assets._2D_Car.Script.CarPedal::onMouse
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onMouse_8;
	// System.Boolean Assets._2D_Car.Script.CarPedal::isMousDown
	bool ___isMousDown_9;
};

struct CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_StaticFields
{
	// System.Boolean Assets._2D_Car.Script.CarPedal::PedalDown
	bool ___PedalDown_10;
};

// Assets._2D_Car.Script.CarSfxHandler
struct CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Assets._2D_Car.Script.CarSfxHandler::engineAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___engineAudioSource_4;
	// System.Single Assets._2D_Car.Script.CarSfxHandler::desiredEnginePitch
	float ___desiredEnginePitch_5;
	// Assets._2D_Car.Script.Car Assets._2D_Car.Script.CarSfxHandler::car
	Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* ___car_6;
	// System.Boolean Assets._2D_Car.Script.CarSfxHandler::Mute
	bool ___Mute_7;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::_gameOverCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameOverCanvas_5;
	// UnityEngine.GameObject GameManager::_gamePuseCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gamePuseCanvas_6;
	// UnityEngine.GameObject GameManager::_payDialogCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____payDialogCanvas_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::CarPrefabs
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___CarPrefabs_8;
	// UnityEngine.GameObject GameManager::_CoinStatus
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____CoinStatus_9;
	// UnityEngine.GameObject GameManager::_DimStatus
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____DimStatus_10;
	// UnityEngine.GameObject GameManager::_FadeCanvase
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____FadeCanvase_11;
	// System.Boolean GameManager::InGame
	bool ___InGame_12;
	// UnityEngine.GameObject GameManager::_item_ForPay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____item_ForPay_13;
	// UnityEngine.AudioClip GameManager::audioClip_ButtonClick
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip_ButtonClick_14;
	// System.Int32 GameManager::CoinBox
	int32_t ___CoinBox_15;
	// System.Int32 GameManager::DimBox
	int32_t ___DimBox_16;
	// System.Int32 GameManager::record
	int32_t ___record_17;
	// System.Boolean GameManager::<RunFunctionAfterDatabaseRedy>k__BackingField
	bool ___U3CRunFunctionAfterDatabaseRedyU3Ek__BackingField_18;
	// SnapshotCamera GameManager::snapshotCamera
	SnapshotCamera_t9476C8DE61ADF62D6A8C4875DD9621F4555A4EE3* ___snapshotCamera_20;
	// UnityEngine.GameObject GameManager::gameObjectToSnapshot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObjectToSnapshot_21;
	// System.Action GameManager::_FadeAndLoadGame
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____FadeAndLoadGame_22;
	// Assets._2D_Car.Script.Models.VehicleStatus GameManager::_vehicleStatus
	VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* ____vehicleStatus_24;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
	// System.Int32 GameManager::<PlayGameCounter>k__BackingField
	int32_t ___U3CPlayGameCounterU3Ek__BackingField_19;
	// GameLanguage GameManager::Language
	int32_t ___Language_23;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// Assets._2D_Car.Script.Car/Axle[]
struct AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA  : public RuntimeArray
{
	ALIGN_FIELD (8) Axle_tE71752E414D64E1652A6028466793217B6D041E5* m_Items[1];

	inline Axle_tE71752E414D64E1652A6028466793217B6D041E5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Axle_tE71752E414D64E1652A6028466793217B6D041E5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Axle_tE71752E414D64E1652A6028466793217B6D041E5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Axle_tE71752E414D64E1652A6028466793217B6D041E5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Axle_tE71752E414D64E1652A6028466793217B6D041E5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Axle_tE71752E414D64E1652A6028466793217B6D041E5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080  : public RuntimeArray
{
	ALIGN_FIELD (8) NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* m_Items[1];

	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC6FA107934316BE28EA02DDB9EADA7AE8DD1916B_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Int32 System.Convert::ToInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void AdColony.Options::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Options__ctor_mC1405433713134480DF9D332C3EB22C9A8180DD9 (Options_t81CB146584085A0B18696637087657C2535B909B* __this, const RuntimeMethod* method) ;
// System.Void AdColony.Options::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Options__ctor_mDDDDB6FA52B295D361866F05DADECA511161DA74 (Options_t81CB146584085A0B18696637087657C2535B909B* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___values0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mC900B057C1E0D012E89457D94D5E2ADAEDE859D1 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___d0, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m35ABFE9171C8E44E23C95CD872DFEF2F2B643214 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___c0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_mE5E29C04982F778600F57587CD121FEB55A31102 (int32_t ___value0, const RuntimeMethod* method) ;
// System.String AdColony.AdColonyJson::Encode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdColonyJson_Encode_m17E4F0503856405BC764FDFFD77C2F209AAC1E12 (RuntimeObject* ___json0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void AdColony.UserMetadata::set_Interests(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_set_Interests_mF8C35B5BDEA8D98795B28B394FCD9B523AB3547F (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> AdColony.UserMetadata::get_Interests()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* UserMetadata_get_Interests_mA2416275695DE40377E9A6DCB2EB49A25DAFBB38_inline (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Object AdColony.AdColonyJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdColonyJson_ParseValue_mC144C7A31FA5FBC4D6BC3AF17B191CD6CC0E2301 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Boolean AdColony.AdColonyJson::SerializeValue(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdColonyJson_SerializeValue_m18991931D122D839C3D4C7D4DAE4C6E522572E79 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, RuntimeObject* ___value0, StringBuilder_t* ___builder1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// AdColony.AdColonyJson/JsonToken AdColony.AdColonyJson::NextToken(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) ;
// AdColony.AdColonyJson/JsonToken AdColony.AdColonyJson::LookAhead(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdColonyJson_LookAhead_m78AF646BBCF99E5C6C7917ABCF86C7EE0A748C74 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String AdColony.AdColonyJson::ParseString(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdColonyJson_ParseString_m9CBA1A84D96DC3795665CAF0CED46ED6BBE58FD8 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Double AdColony.AdColonyJson::ParseNumber(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdColonyJson_ParseNumber_mF2DE4FCA4AB4B6413DBF324DBFA57897A513A478 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) ;
// System.Collections.Hashtable AdColony.AdColonyJson::ParseObject(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* AdColonyJson_ParseObject_mDA38462ABB7B96D306E8F6B409029F826B0D8CA9 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) ;
// System.Collections.ArrayList AdColony.AdColonyJson::ParseArray(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* AdColonyJson_ParseArray_m77CE942ECF8C67BB610B48EF9A9E7522C5CA5715 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) ;
// System.Void AdColony.AdColonyJson::EatWhitespace(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdColonyJson_EatWhitespace_m0EF35CC5CEA57655061707B96E72F65AA6C53272 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method) ;
// System.String System.Char::ConvertFromUtf32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ConvertFromUtf32_m6AC7B7F6371FC03CDD4C42CEC8B9ACE751CE3BC8 (int32_t ___utf320, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Int32 AdColony.AdColonyJson::GetLastIndexOfNumber(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdColonyJson_GetLastIndexOfNumber_mBFFE66F372C961DDE9450F0A610807CF58ACA675 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean AdColony.AdColonyJson::SerializeObject(System.Collections.Hashtable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdColonyJson_SerializeObject_m2D458FFA2832633CA9FA85EF4786E96101E4DB8F (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___anObject0, StringBuilder_t* ___builder1, const RuntimeMethod* method) ;
// System.Boolean AdColony.AdColonyJson::SerializeArray(System.Collections.ArrayList,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdColonyJson_SerializeArray_mB946BD70575290079CFCEBCEA78774EB506D138E (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___anArray0, StringBuilder_t* ___builder1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void AdColony.AdColonyJson::SerializeString(System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdColonyJson_SerializeString_m2BF1C8837FA7B9B6459691EF565F86F66C6E9294 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, String_t* ___aString0, StringBuilder_t* ___builder1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m8270C8361D2796C5C4659D441829CAFEEFBAC91C (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void AdColony.AdColonyJson::SerializeNumber(System.Double,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdColonyJson_SerializeNumber_mBCE232FFFF0F474F94BF1DB8A3249EC15832E0F1 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, double ___number0, StringBuilder_t* ___builder1, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052 (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35 (int32_t ___value0, int32_t ___toBase1, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7EBE84B1D453D12C9514AD3EF4F6B3F55A5E5C9B (double ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void AdColony.AdColonyJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdColonyJson__ctor_mFB08B50AFDB8B5732513B821A6702D0C51F574A5 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Assets._2D_Car.Script.Car::SetWoldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_SetWoldCamera_m850D28FB16AC4648C8E499E3B02E5381C662D5E8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.CameraFollow::set_Add_Z_Value(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_set_Add_Z_Value_mE9CC3FFA0D165A27049D8FE12224220B5AA0EA1E_inline (CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Assets._2D_Car.Script.CameraFollow::get_Add_Z_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraFollow_get_Add_Z_Value_m0B7B3F5A6C7E473218C613B86C41E519035611B1_inline (CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Assets._2D_Car.Script.Car::get_static_Canvas_CarOption_WorldCamera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Car_get_static_Canvas_CarOption_WorldCamera_mDC482D878D8F3BBB7F3CAD69EF7BC916E5B50D06_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CarOption>()
inline CarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24* GameObject_GetComponent_TisCarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24_mB77F5E82A720E909D4FC50AC463CCDD78979B461 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Assets._2D_Car.Script.CarPedal>()
inline CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E* GameObject_GetComponent_TisCarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_mA6E1D53932CFEDDFAE699F36C54C39BF14FC653A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// Assets._2D_Car.Script.Models.VehicleStatus GameManager::getVehicleInDb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* GameManager_getVehicleInDb_m646B114A8400AA38943D98BA16504BCC6B12AE37 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Car::set_ItemDb(Assets._2D_Car.Script.Models.VehicleStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Car_set_ItemDb_m86AFA7933F1C3E90422EF2BE76600C05219D5679_inline (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* ___value0, const RuntimeMethod* method) ;
// Assets._2D_Car.Script.Models.VehicleStatus Assets._2D_Car.Script.Car::get_ItemDb()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* Car_get_ItemDb_m72879FDB181C55A33F59B818AB4C77E78C3F8870_inline (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) ;
// System.Int32 Assets._2D_Car.Script.Models.VehicleStatus::get_TuneLevelUserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VehicleStatus_get_TuneLevelUserSave_m8007E6F2F401F8D3C4E825E35A72902DA06828B2 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Car::SetTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_SetTorque_m7B32F196758B449C0210603DE60834F43512CC07 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rigidbody2D::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_angularVelocity_mAD2505FB1F8C9E1A66D1EA8F8680D14380BFC58D (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_freezeRotation_mFD0A56A3ED021B714BE05CE0EB22E954ED74E9B9 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddTorque_mB126101CF0ECA5CC8C284ED06132B24FD8885029 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___torque0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Assets._2D_Car.Script.CarSfxHandler>()
inline CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* Component_GetComponent_TisCarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D_m1D030C5A136794BFDB631FDE4CBCF4E7941AE0B7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Assets._2D_Car.Script.CarSfxHandler::CarMute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarSfxHandler_CarMute_m89A1A6682DCCBE9867AE2DC08A2837A4CB6C9AD9 (CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* __this, bool ___IsMute0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Car::set_static_Canvas_CarOption_WorldCamera(UnityEngine.Camera)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Car_set_static_Canvas_CarOption_WorldCamera_mBEBDCF05C9D2EB9D300BF819704ADE8E0489D2BB_inline (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Assets._2D_Car.Script.Car>()
inline Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* Component_GetComponentInParent_TisCar_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_m29D719BD4DEC058EE4CEFA4B1CD9AF52F3D2ED33 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void Assets._2D_Car.Script.CarSfxHandler::UpdateEngineSFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarSfxHandler_UpdateEngineSFX_m6F61C0DB23FCD2C1F97CE2C1AFF8309B8928C601 (CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Assets._2D_Car.Script.Car::GetVelocityMagnitudeForCarSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Car_GetVelocityMagnitudeForCarSound_mB8D06517353E0496FA696C6E0A2693DBA54E2A57 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083 (const RuntimeMethod* method) ;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method) ;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Net.IPAddress,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m27F266C9FB9DFF776F57600B17D3F69C70D1A6D6 (Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::First<System.Net.IPAddress>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* Enumerable_First_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_mF43AC4DE97842B5192459D10A671758DCB3F1695 (RuntimeObject* ___source0, Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* ___predicate1, const RuntimeMethod* method)
{
	return ((  IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* (*) (RuntimeObject*, Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC6FA107934316BE28EA02DDB9EADA7AE8DD1916B_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_OSSupportsIPv6_mDF10C5F623BBCBB218599E9C4B1AE3E7EE2AB2CB (const RuntimeMethod* method) ;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.NetworkInterface::GetAllNetworkInterfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* NetworkInterface_GetAllNetworkInterfaces_m4E5A4AAEED8B11868BDC8F78975460D9B6F3CD70 (const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.IPManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m214CB1B1AE163B6097D121EADE4F2DC42C2BDA40 (U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117* __this, const RuntimeMethod* method) ;
// System.Boolean Realms.RealmObjectBase::get_IsManaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7 (RealmObjectBase_t1310868649387884B3BF9524480262CC0EFE6F91* __this, const RuntimeMethod* method) ;
// Realms.RealmValue Realms.RealmObjectBase::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7 (RealmObjectBase_t1310868649387884B3BF9524480262CC0EFE6F91* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.String Realms.RealmValue::op_Explicit(Realms.RealmValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RealmValue_op_Explicit_m81AEFD38DE673AAA6A7B8B775C9919A601B6960B (RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 ___val0, const RuntimeMethod* method) ;
// System.Void Realms.RealmObjectBase::RaisePropertyChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19 (RealmObjectBase_t1310868649387884B3BF9524480262CC0EFE6F91* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// Realms.RealmValue Realms.RealmValue::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 RealmValue_op_Implicit_mA722CB03B3A73CAB13AA8DA0BF11D2965F1C5FB6 (String_t* ___val0, const RuntimeMethod* method) ;
// System.Void Realms.RealmObjectBase::SetValueUnique(System.String,Realms.RealmValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmObjectBase_SetValueUnique_m300F0A046E466A1C879226FF59CC62ED02BBCAF7 (RealmObjectBase_t1310868649387884B3BF9524480262CC0EFE6F91* __this, String_t* ___propertyName0, RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 ___val1, const RuntimeMethod* method) ;
// System.Void Realms.RealmObjectBase::SetValue(System.String,Realms.RealmValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3 (RealmObjectBase_t1310868649387884B3BF9524480262CC0EFE6F91* __this, String_t* ___propertyName0, RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 ___val1, const RuntimeMethod* method) ;
// Realms.RealmInteger`1<System.Int32> Realms.RealmValue::op_Explicit(Realms.RealmValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 RealmValue_op_Explicit_mC927090D4358CA939FE828FA17450771DBE3781C (RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 ___val0, const RuntimeMethod* method) ;
// Realms.RealmValue Realms.RealmValue::op_Implicit(Realms.RealmInteger`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 RealmValue_op_Implicit_mBCE3D4A8C76EAEC4F071FBFCD1121C0A1569D419 (RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 ___val0, const RuntimeMethod* method) ;
// System.Int32 Realms.RealmValue::op_Explicit(Realms.RealmValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RealmValue_op_Explicit_m087397DC4D28EEC0E561A89AA8884547B02A5AE8 (RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 ___val0, const RuntimeMethod* method) ;
// Realms.RealmValue Realms.RealmValue::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 RealmValue_op_Implicit_m4676448F81F769AF82C51B7BF80840FA9FE0BD43 (int32_t ___val0, const RuntimeMethod* method) ;
// System.Boolean Realms.RealmValue::op_Explicit(Realms.RealmValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealmValue_op_Explicit_m6747CBC4A9CE796995B793206D6BE1E22BB2B4C0 (RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 ___val0, const RuntimeMethod* method) ;
// Realms.RealmValue Realms.RealmValue::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 RealmValue_op_Implicit_mA788FBC1CC2441E831A19C240E95E15594E594ED (bool ___val0, const RuntimeMethod* method) ;
// System.Void Realms.RealmObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmObject__ctor_mBA49C68637DD73B7611B8CD3496C4340AD5DE755 (RealmObject_tCF123A13EE1C2524B24DB9D0BFADBA35E7C32E61* __this, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_mE8CAF251BCBC10A1651AFF992C68170576085F1C (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_UserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_UserName_mE2F99C62FA1BD42B1CCEDF0594A734799440AA85 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_Record(Realms.RealmInteger`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_Record_mA425BFEE366A9098E6F522AEFA4B89CF354B11F7 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_Coin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_Coin_m6A7E4E66B99DE05DB32A14129BADD736BDB7F927 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_Dim(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_Dim_mBF90E141BB5DCBA4CBD08ADC6B1844D05A9E1905 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_API_DB_userID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_API_DB_userID_mDBEF63ACDCD4200A6C796B7799B671516C656C59 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_GameMute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_GameMute_m649ABF2D2A77F5DF93DF3E14B1476D868D8F1420 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_Last_Stage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_Last_Stage_mB7B780F3B83B72E593D4222A3E801DFD1ABADEC2 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_Last_Vehicle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_Last_Vehicle_m39A41890735C3A0E5B9ECC2788D5023A2F47AAB4 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_ShowAd(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_ShowAd_mC9A31714F4258356FFA38733B33DEFE6FE641450 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String Assets._2D_Car.Script.Models.PlayerInfo::get_gamerTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_get_gamerTag_m668A6121BB90CF0C58242019301F96048B34AA06 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) ;
// MongoDB.Bson.ObjectId Realms.RealmValue::op_Explicit(Realms.RealmValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA RealmValue_op_Explicit_m0FE77C5C2BFAD31CB51CE6AE187F464D272B4D9F (RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 ___val0, const RuntimeMethod* method) ;
// Realms.RealmValue Realms.RealmValue::op_Implicit(MongoDB.Bson.ObjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 RealmValue_op_Implicit_mA20509DB278E8CA78F4A95F0344A0C1A9D86B170 (ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ___val0, const RuntimeMethod* method) ;
// System.DateTimeOffset Realms.RealmValue::op_Explicit(Realms.RealmValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 RealmValue_op_Explicit_m1BE92DB7BFC4ECF97D2F2842AABE64DD65390CF3 (RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 ___val0, const RuntimeMethod* method) ;
// Realms.RealmValue Realms.RealmValue::op_Implicit(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 RealmValue_op_Implicit_m8EAD10E46FF675A4AF7615FCE13C000D86F2C628 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___val0, const RuntimeMethod* method) ;
// MongoDB.Bson.ObjectId MongoDB.Bson.ObjectId::GenerateNewId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ObjectId_GenerateNewId_m02B974B84F8DA0AFBCB5B4387C1800B2A0A3C854 (const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.RewardLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardLog__ctor_m444AD8DB4DE45DAEF0BDE8B9F92A36B8919A8F76 (RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* __this, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.RewardLog::set_Id(MongoDB.Bson.ObjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardLog_set_Id_m7B8F7903637FC1F895B227CF67EFB3566ABB9BD1 (RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* __this, ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.RewardLog::set_Date(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardLog_set_Date_mB65A57931275B09B87F06AF6055CD663841D52E7 (RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// Realms.RealmValue Realms.RealmValue::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 RealmValue_get_Null_mF1558CD541617C7740E2A03B4E683A42401A4C17 (const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.StageStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageStatus__ctor_m0560AEED25DEEC1AE492DBE49421BCE094E9050A (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.StageStatus::set_Id(MongoDB.Bson.ObjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageStatus_set_Id_m5DC329D3CDFABB1665239EFAE4FD4384FD146AC6 (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.StageStatus::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageStatus_set_Name_m537BC4E0C913147B5E8E6C3E0B4AECD721DE4ACA (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.StageStatus::set_Lock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageStatus_set_Lock_mCF24894C798F33D1867CBDF1231AB1FC950CB67F (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus__ctor_mCC2C4C844F067B405D496FA08D37049B18BC8D0C (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_Id(MongoDB.Bson.ObjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_Id_m64D9E007FF85EA951085364A7520B28C49831921 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_Name_m93C8AB9B174557F39B024FF4A21B5651B524347F (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_Lock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_Lock_m183DD635277C5A3771974A078FE269DFDAE40BDC (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_TuneLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_TuneLevel_m6A4F326ED9642C658E76AB503AF29AC9C36A4583 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_TuneLevelUserSave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_TuneLevelUserSave_m80838F9F3D8903EBC3EF03A40D781F2B0FBC46DC (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_BestRecord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_BestRecord_mC131A24D17B61714392B47ADC004F3CBF9F051EF (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Realms.Schema.RealmSchema::AddDefaultTypes(System.Collections.Generic.IEnumerable`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmSchema_AddDefaultTypes_m81DAC6B28723C24A92B7594DAC897E577D9D43AA (RuntimeObject* ___types0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean AdColony.AppOptions::get_DisableLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppOptions_get_DisableLogging_m8B25957673ABB5B4347178916140318C56DEEB57 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, const RuntimeMethod* method) 
{
	{
		// return _disableLogging;
		bool L_0 = __this->____disableLogging_5;
		return L_0;
	}
}
// System.Void AdColony.AppOptions::set_DisableLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_DisableLogging_m21C6F5F9B4EC56C547D911B550CDFC22AD57FD01 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _disableLogging = value;
		bool L_0 = ___value0;
		__this->____disableLogging_5 = L_0;
		// _data[Constants.AppOptionsDisableLoggingKey] = _disableLogging;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsDisableLoggingKey_1;
		bool L_3 = __this->____disableLogging_5;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.String AdColony.AppOptions::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptions_get_UserId_m2AA7C3A6771F33EDE8FC2E288638349F8122EBA2 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, const RuntimeMethod* method) 
{
	{
		// return _userId;
		String_t* L_0 = __this->____userId_6;
		return L_0;
	}
}
// System.Void AdColony.AppOptions::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_UserId_mD3229F8BECB8C8D4BA13B6021978F6742A29ECB2 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _userId = value;
		String_t* L_0 = ___value0;
		__this->____userId_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userId_6), (void*)L_0);
		// _data[Constants.AppOptionsUserIdKey] = _userId;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsUserIdKey_2;
		String_t* L_3 = __this->____userId_6;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_3);
		// }
		return;
	}
}
// AdColony.AdOrientationType AdColony.AppOptions::get_AdOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppOptions_get_AdOrientation_m88374F2CA274E5DB56B5521C65E17A369CAAA438 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, const RuntimeMethod* method) 
{
	{
		// return _adOrientation;
		int32_t L_0 = __this->____adOrientation_7;
		return L_0;
	}
}
// System.Void AdColony.AppOptions::set_AdOrientation(AdColony.AdOrientationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_AdOrientation_mA1D614FCA14F72380D1047E7A9B54238F969098C (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdOrientationType_t5AA23240A9C8CEEA25BFE1E3345A884C564E6878_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _adOrientation = value;
		int32_t L_0 = ___value0;
		__this->____adOrientation_7 = L_0;
		// _data[Constants.AppOptionsOrientationKey] = Convert.ToInt32(_adOrientation);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsOrientationKey_3;
		int32_t L_3 = __this->____adOrientation_7;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(AdOrientationType_t5AA23240A9C8CEEA25BFE1E3345A884C564E6878_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_5, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_8);
		// }
		return;
	}
}
// System.Boolean AdColony.AppOptions::get_MultiWindowEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppOptions_get_MultiWindowEnabled_m49EF4A14F5B7D86A4A5FC9AC0B6A758638A5579E (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, const RuntimeMethod* method) 
{
	{
		// return _multiWindowEnabled;
		bool L_0 = __this->____multiWindowEnabled_8;
		return L_0;
	}
}
// System.Void AdColony.AppOptions::set_MultiWindowEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_MultiWindowEnabled_m5A1BA29EA46406DA95AABA5B48C814E549014E3A (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _multiWindowEnabled = value;
		bool L_0 = ___value0;
		__this->____multiWindowEnabled_8 = L_0;
		// _data[Constants.AppOptionsMultiWindowEnabledKey] = _multiWindowEnabled;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsMultiWindowEnabledKey_7;
		bool L_3 = __this->____multiWindowEnabled_8;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.String AdColony.AppOptions::get_OriginStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptions_get_OriginStore_m4102A9413CE6B441F6C3D27F6A10D7EED2949713 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, const RuntimeMethod* method) 
{
	{
		// return _originStore;
		String_t* L_0 = __this->____originStore_9;
		return L_0;
	}
}
// System.Void AdColony.AppOptions::set_OriginStore(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_OriginStore_m514DDDB83B710CCF7CCE3A98A8B49302C3FB6344 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _originStore = value;
		String_t* L_0 = ___value0;
		__this->____originStore_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____originStore_9), (void*)L_0);
		// _data[Constants.AppOptionsOriginStoreKey] = _originStore;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsOriginStoreKey_8;
		String_t* L_3 = __this->____originStore_9;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Boolean AdColony.AppOptions::get_TestModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppOptions_get_TestModeEnabled_mDCEEADA9AE0DEE6EBAB933ABB27AE68F889E5B41 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, const RuntimeMethod* method) 
{
	{
		// return _testModeEnabled;
		bool L_0 = __this->____testModeEnabled_10;
		return L_0;
	}
}
// System.Void AdColony.AppOptions::set_TestModeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_TestModeEnabled_mCE5ED016C690FB04F14196C40446FF4797FDD344 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _testModeEnabled = value;
		bool L_0 = ___value0;
		__this->____testModeEnabled_10 = L_0;
		// _data[Constants.AppOptionsTestModeKey] = _testModeEnabled;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsTestModeKey_4;
		bool L_3 = __this->____testModeEnabled_10;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.Boolean AdColony.AppOptions::get_GdprRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppOptions_get_GdprRequired_m1D095A52EE3899DCA80A12517188DE6CFBB628B4 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, const RuntimeMethod* method) 
{
	{
		// return _gdprRequired;
		bool L_0 = __this->____gdprRequired_11;
		return L_0;
	}
}
// System.Void AdColony.AppOptions::set_GdprRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_GdprRequired_m1AFA4ADEE5570047537BB55CDC00D84F89C425B4 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gdprRequired = value;
		bool L_0 = ___value0;
		__this->____gdprRequired_11 = L_0;
		// _data[Constants.AppOptionsGdprRequiredKey] = _gdprRequired;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsGdprRequiredKey_5;
		bool L_3 = __this->____gdprRequired_11;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.String AdColony.AppOptions::get_GdprConsentString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptions_get_GdprConsentString_m9AF399588ECAA6A2F5EA2DCD38B1404F066C5307 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, const RuntimeMethod* method) 
{
	{
		// return _gdprConsentString;
		String_t* L_0 = __this->____gdprConsentString_12;
		return L_0;
	}
}
// System.Void AdColony.AppOptions::set_GdprConsentString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_GdprConsentString_m00A8AD4BCBA50CAAA1B21D5D2DC199078477DD12 (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gdprConsentString = value;
		String_t* L_0 = ___value0;
		__this->____gdprConsentString_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gdprConsentString_12), (void*)L_0);
		// _data[Constants.AppOptionsGdprConsentStringKey] = _gdprConsentString;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsGdprConsentStringKey_6;
		String_t* L_3 = __this->____gdprConsentString_12;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void AdColony.AppOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions__ctor_mCBABA9751D5ECCC23E09740981AA98559E2DE1BA (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, const RuntimeMethod* method) 
{
	{
		// private AdOrientationType _adOrientation = AdOrientationType.AdColonyOrientationAll;
		__this->____adOrientation_7 = 2;
		// public AppOptions()
		Options__ctor_mC1405433713134480DF9D332C3EB22C9A8180DD9(__this, NULL);
		// }
		return;
	}
}
// System.Void AdColony.AppOptions::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions__ctor_mC06F535644D54194D3B65D53EC09D09EFB49FDBE (AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AdOrientationType _adOrientation = AdOrientationType.AdColonyOrientationAll;
		__this->____adOrientation_7 = 2;
		// public AppOptions(Hashtable values) : base(values)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___values0;
		Options__ctor_mDDDDB6FA52B295D361866F05DADECA511161DA74(__this, L_0, NULL);
		// if (values != null)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___values0;
		if (!L_1)
		{
			goto IL_0115;
		}
	}
	{
		// _data = new Hashtable(values);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = ___values0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Hashtable__ctor_mC900B057C1E0D012E89457D94D5E2ADAEDE859D1(L_3, L_2, NULL);
		((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1), (void*)L_3);
		// if (values.ContainsKey(Constants.AppOptionsDisableLoggingKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsDisableLoggingKey_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// _disableLogging = Convert.ToBoolean(values[Constants.AppOptionsDisableLoggingKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_8 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsDisableLoggingKey_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_7, L_8);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Convert_ToBoolean_m35ABFE9171C8E44E23C95CD872DFEF2F2B643214(L_9, NULL);
		__this->____disableLogging_5 = L_10;
	}

IL_0043:
	{
		// if (values.ContainsKey(Constants.AppOptionsUserIdKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_11 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_12 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsUserIdKey_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_11, L_12);
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		// _userId = values[Constants.AppOptionsUserIdKey] as string;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_15 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsUserIdKey_2;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, L_15);
		__this->____userId_6 = ((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userId_6), (void*)((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)));
	}

IL_0066:
	{
		// if (values.ContainsKey(Constants.AppOptionsOrientationKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_17 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_18 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsOrientationKey_3;
		NullCheck(L_17);
		bool L_19;
		L_19 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_17, L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		// _adOrientation = (AdOrientationType)Convert.ToInt32(values[Constants.AppOptionsOrientationKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_20 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_21 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsOrientationKey_3;
		NullCheck(L_20);
		RuntimeObject* L_22;
		L_22 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_20, L_21);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_22, NULL);
		__this->____adOrientation_7 = L_23;
	}

IL_0089:
	{
		// if (values.ContainsKey(Constants.AppOptionsMultiWindowEnabledKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_24 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_25 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsMultiWindowEnabledKey_7;
		NullCheck(L_24);
		bool L_26;
		L_26 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_24, L_25);
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		// _multiWindowEnabled = Convert.ToBoolean(values[Constants.AppOptionsMultiWindowEnabledKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_27 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_28 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsMultiWindowEnabledKey_7;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_27, L_28);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Convert_ToBoolean_m35ABFE9171C8E44E23C95CD872DFEF2F2B643214(L_29, NULL);
		__this->____multiWindowEnabled_8 = L_30;
	}

IL_00ac:
	{
		// if (values.ContainsKey(Constants.AppOptionsOriginStoreKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_31 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_32 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsOriginStoreKey_8;
		NullCheck(L_31);
		bool L_33;
		L_33 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cf;
		}
	}
	{
		// _originStore = values[Constants.AppOptionsOriginStoreKey] as string;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_34 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_35 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsOriginStoreKey_8;
		NullCheck(L_34);
		RuntimeObject* L_36;
		L_36 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_34, L_35);
		__this->____originStore_9 = ((String_t*)IsInstSealed((RuntimeObject*)L_36, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____originStore_9), (void*)((String_t*)IsInstSealed((RuntimeObject*)L_36, String_t_il2cpp_TypeInfo_var)));
	}

IL_00cf:
	{
		// if (values.ContainsKey(Constants.AppOptionsGdprRequiredKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_37 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_38 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsGdprRequiredKey_5;
		NullCheck(L_37);
		bool L_39;
		L_39 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_37, L_38);
		if (!L_39)
		{
			goto IL_00f2;
		}
	}
	{
		// _gdprRequired = Convert.ToBoolean(values[Constants.AppOptionsGdprRequiredKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_40 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_41 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsGdprRequiredKey_5;
		NullCheck(L_40);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_40, L_41);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Convert_ToBoolean_m35ABFE9171C8E44E23C95CD872DFEF2F2B643214(L_42, NULL);
		__this->____gdprRequired_11 = L_43;
	}

IL_00f2:
	{
		// if (values.ContainsKey(Constants.AppOptionsGdprConsentStringKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_44 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_45 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsGdprConsentStringKey_6;
		NullCheck(L_44);
		bool L_46;
		L_46 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_44, L_45);
		if (!L_46)
		{
			goto IL_0115;
		}
	}
	{
		// _gdprConsentString = values[Constants.AppOptionsGdprConsentStringKey] as string;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_47 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_48 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AppOptionsGdprConsentStringKey_6;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_47, L_48);
		__this->____gdprConsentString_12 = ((String_t*)IsInstSealed((RuntimeObject*)L_49, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gdprConsentString_12), (void*)((String_t*)IsInstSealed((RuntimeObject*)L_49, String_t_il2cpp_TypeInfo_var)));
	}

IL_0115:
	{
		// }
		return;
	}
}
// System.Void AdColony.AppOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions__cctor_m2989570376AF8FBCC946439F7A1F4F4DF89EC7A1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C1FD9FAE31F383ADD320E5FCA9DCBF7A86C6E6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62C4F290035999D38AC685022DE08073F5D9F532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6AED819E646816B4C6FBDDED96E8F2672E40152);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string CCPA = "CCPA";
		((AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_StaticFields*)il2cpp_codegen_static_fields_for(AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_il2cpp_TypeInfo_var))->___CCPA_2 = _stringLiteralE6AED819E646816B4C6FBDDED96E8F2672E40152;
		Il2CppCodeGenWriteBarrier((void**)(&((AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_StaticFields*)il2cpp_codegen_static_fields_for(AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_il2cpp_TypeInfo_var))->___CCPA_2), (void*)_stringLiteralE6AED819E646816B4C6FBDDED96E8F2672E40152);
		// public static string GDPR = "GDPR";
		((AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_StaticFields*)il2cpp_codegen_static_fields_for(AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_il2cpp_TypeInfo_var))->___GDPR_3 = _stringLiteral62C4F290035999D38AC685022DE08073F5D9F532;
		Il2CppCodeGenWriteBarrier((void**)(&((AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_StaticFields*)il2cpp_codegen_static_fields_for(AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_il2cpp_TypeInfo_var))->___GDPR_3), (void*)_stringLiteral62C4F290035999D38AC685022DE08073F5D9F532);
		// public static string COPPA = "COPPA";
		((AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_StaticFields*)il2cpp_codegen_static_fields_for(AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_il2cpp_TypeInfo_var))->___COPPA_4 = _stringLiteral0C1FD9FAE31F383ADD320E5FCA9DCBF7A86C6E6F;
		Il2CppCodeGenWriteBarrier((void**)(&((AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_StaticFields*)il2cpp_codegen_static_fields_for(AppOptions_t01FB270CA7C86117E33AB95750EC9B2413C4B6E4_il2cpp_TypeInfo_var))->___COPPA_4), (void*)_stringLiteral0C1FD9FAE31F383ADD320E5FCA9DCBF7A86C6E6F);
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
// System.Boolean AdColony.AdOptions::get_ShowPrePopup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdOptions_get_ShowPrePopup_m35C2E23AA1884B78AD0BCEA37E74B190752C7F4F (AdOptions_tEEB98159A587FEA572F53CF22B70562A7A392D24* __this, const RuntimeMethod* method) 
{
	{
		// return _showPrePopup;
		bool L_0 = __this->____showPrePopup_2;
		return L_0;
	}
}
// System.Void AdColony.AdOptions::set_ShowPrePopup(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdOptions_set_ShowPrePopup_m33F82BFA86CDEDFB39B65503F481AEBFE86D0F13 (AdOptions_tEEB98159A587FEA572F53CF22B70562A7A392D24* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _showPrePopup = value;
		bool L_0 = ___value0;
		__this->____showPrePopup_2 = L_0;
		// _data[Constants.AdOptionsPrePopupKey] = _showPrePopup;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AdOptionsPrePopupKey_9;
		bool L_3 = __this->____showPrePopup_2;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.Boolean AdColony.AdOptions::get_ShowPostPopup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdOptions_get_ShowPostPopup_m8909A77B50719CA012F7A63A19D77869C8BD42E4 (AdOptions_tEEB98159A587FEA572F53CF22B70562A7A392D24* __this, const RuntimeMethod* method) 
{
	{
		// return _showPostPopup;
		bool L_0 = __this->____showPostPopup_3;
		return L_0;
	}
}
// System.Void AdColony.AdOptions::set_ShowPostPopup(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdOptions_set_ShowPostPopup_m0A9E8871A24C3CA760E11B1003F3FC3D485A5213 (AdOptions_tEEB98159A587FEA572F53CF22B70562A7A392D24* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _showPostPopup = value;
		bool L_0 = ___value0;
		__this->____showPostPopup_3 = L_0;
		// _data[Constants.AdOptionsPostPopupKey] = _showPostPopup;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AdOptionsPostPopupKey_10;
		bool L_3 = __this->____showPostPopup_3;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.Void AdColony.AdOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdOptions__ctor_m963577E286C6857229C060CF616E9EB479705AB7 (AdOptions_tEEB98159A587FEA572F53CF22B70562A7A392D24* __this, const RuntimeMethod* method) 
{
	{
		// public AdOptions()
		Options__ctor_mC1405433713134480DF9D332C3EB22C9A8180DD9(__this, NULL);
		// }
		return;
	}
}
// System.Void AdColony.AdOptions::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdOptions__ctor_m666EED9B447717153640333F88AD0A1D2B778920 (AdOptions_tEEB98159A587FEA572F53CF22B70562A7A392D24* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdOptions(Hashtable values) : base(values)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___values0;
		Options__ctor_mDDDDB6FA52B295D361866F05DADECA511161DA74(__this, L_0, NULL);
		// if (values != null)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___values0;
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		// _data = new Hashtable(values);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = ___values0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Hashtable__ctor_mC900B057C1E0D012E89457D94D5E2ADAEDE859D1(L_3, L_2, NULL);
		((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Options_t81CB146584085A0B18696637087657C2535B909B*)__this)->____data_1), (void*)L_3);
		// if (values.ContainsKey(Constants.AdOptionsPrePopupKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AdOptionsPrePopupKey_9;
		NullCheck(L_4);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// _showPrePopup = Convert.ToBoolean(values[Constants.AdOptionsPrePopupKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_8 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AdOptionsPrePopupKey_9;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_7, L_8);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Convert_ToBoolean_m35ABFE9171C8E44E23C95CD872DFEF2F2B643214(L_9, NULL);
		__this->____showPrePopup_2 = L_10;
	}

IL_0039:
	{
		// if (values.ContainsKey(Constants.AdOptionsPostPopupKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_11 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_12 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AdOptionsPostPopupKey_10;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_11, L_12);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// _showPostPopup = Convert.ToBoolean(values[Constants.AdOptionsPostPopupKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_15 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___AdOptionsPostPopupKey_10;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, L_15);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Convert_ToBoolean_m35ABFE9171C8E44E23C95CD872DFEF2F2B643214(L_16, NULL);
		__this->____showPostPopup_3 = L_17;
	}

IL_005c:
	{
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
// System.Int32 AdColony.UserMetadata::get_Age()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserMetadata_get_Age_mDE0FD71AE289581752DB4B1CFB1AB8993F426F20 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	{
		// return _age;
		int32_t L_0 = __this->____age_0;
		return L_0;
	}
}
// System.Void AdColony.UserMetadata::set_Age(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_set_Age_mAC410E1B844FA438097E38E4AEDA15ABADB9AEE6 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34C2BCA5431F98C3584D7A0DEF32829249C8C420);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value <= 0)
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// Debug.Log("Tried to set user metadata age with an invalid value. Value will not be included.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral34C2BCA5431F98C3584D7A0DEF32829249C8C420, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// _age = value;
		int32_t L_1 = ___value0;
		__this->____age_0 = L_1;
		// _data[Constants.UserMetadataAgeKey] = _age;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = __this->____data_9;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataAgeKey_11;
		int32_t L_4 = __this->____age_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_3, L_6);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> AdColony.UserMetadata::get_Interests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* UserMetadata_get_Interests_mA2416275695DE40377E9A6DCB2EB49A25DAFBB38 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	{
		// return _interests;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____interests_1;
		return L_0;
	}
}
// System.Void AdColony.UserMetadata::set_Interests(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_set_Interests_mF8C35B5BDEA8D98795B28B394FCD9B523AB3547F (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _interests = value;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->____interests_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interests_1), (void*)L_0);
		// _data[Constants.UserMetadataInterestsKey] = new ArrayList(_interests);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____data_9;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataInterestsKey_12;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->____interests_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11(L_4, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_4);
		// }
		return;
	}
}
// System.String AdColony.UserMetadata::get_Gender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserMetadata_get_Gender_mB074DEC4F161FF48CD319DB8DB96E79611929018 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	{
		// return _gender;
		String_t* L_0 = __this->____gender_2;
		return L_0;
	}
}
// System.Void AdColony.UserMetadata::set_Gender(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_set_Gender_m6657666618AD976DFDC1DF6E2120CF52EC9242C4 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FC0BA618B7ED5923F41911E548FC6085302EFFE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (value == null)
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Debug.Log("Tried to set user metadata gender with an invalid string. Value will not be included.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8FC0BA618B7ED5923F41911E548FC6085302EFFE, NULL);
		// return;
		return;
	}

IL_000e:
	{
		// string setGender = value;
		String_t* L_1 = ___value0;
		V_0 = L_1;
		// _gender = setGender;
		String_t* L_2 = V_0;
		__this->____gender_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gender_2), (void*)L_2);
		// _data[Constants.UserMetadataGenderKey] = _gender;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____data_9;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataGenderKey_13;
		String_t* L_5 = __this->____gender_2;
		NullCheck(L_3);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Double AdColony.UserMetadata::get_Latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UserMetadata_get_Latitude_mCDD9C812B57502728FC4E8177F5FD1B404FC2456 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	{
		// return _latitude;
		double L_0 = __this->____latitude_3;
		return L_0;
	}
}
// System.Void AdColony.UserMetadata::set_Latitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_set_Latitude_m11BD05840EA2AAD95185C0FB3820DE6877594F5E (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _latitude = value;
		double L_0 = ___value0;
		__this->____latitude_3 = L_0;
		// _data[Constants.UserMetadataLatitudeKey] = _latitude;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____data_9;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataLatitudeKey_14;
		double L_3 = __this->____latitude_3;
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.Double AdColony.UserMetadata::get_Longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UserMetadata_get_Longitude_mC8CF5D2B627F26B6B6C39F134A3F93C1CE059E17 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	{
		// return _longitude;
		double L_0 = __this->____longitude_4;
		return L_0;
	}
}
// System.Void AdColony.UserMetadata::set_Longitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_set_Longitude_mC74A239F117F9BD71EF34803D3D9B7ED3C125CB4 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _longitude = value;
		double L_0 = ___value0;
		__this->____longitude_4 = L_0;
		// _data[Constants.UserMetadataLongitudeKey] = _longitude;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____data_9;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataLongitudeKey_15;
		double L_3 = __this->____longitude_4;
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.String AdColony.UserMetadata::get_ZipCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserMetadata_get_ZipCode_m50F2C38821F87D883EC6D11C964518CA81E9D78D (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	{
		// return _zipCode;
		String_t* L_0 = __this->____zipCode_5;
		return L_0;
	}
}
// System.Void AdColony.UserMetadata::set_ZipCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_set_ZipCode_m0D7224EF635E380B6D0795D74829A0F327CCAAC0 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADBBFA7D49FF899FC072DAE66A3D434BA8638FC6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (value == null)
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Debug.Log("Tried to set user metadata zip code with an invalid string. Value will not be included.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralADBBFA7D49FF899FC072DAE66A3D434BA8638FC6, NULL);
		// return;
		return;
	}

IL_000e:
	{
		// string setZipCode = value as string;
		String_t* L_1 = ___value0;
		V_0 = L_1;
		// _zipCode = setZipCode;
		String_t* L_2 = V_0;
		__this->____zipCode_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____zipCode_5), (void*)L_2);
		// _data[Constants.UserMetadataZipCodeKey] = _zipCode;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____data_9;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataZipCodeKey_16;
		String_t* L_5 = __this->____zipCode_5;
		NullCheck(L_3);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Int32 AdColony.UserMetadata::get_HouseholdIncome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserMetadata_get_HouseholdIncome_mA8F42EEBDF184E00F68F1AE4B1BF5F11FADF1295 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	{
		// return _householdIncome;
		int32_t L_0 = __this->____householdIncome_6;
		return L_0;
	}
}
// System.Void AdColony.UserMetadata::set_HouseholdIncome(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_set_HouseholdIncome_mE4CEBC053A6EE72352777C0EFFB6C447B86F46B6 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _householdIncome = value;
		int32_t L_0 = ___value0;
		__this->____householdIncome_6 = L_0;
		// _data[Constants.UserMetadataHouseholdIncomeKey] = _householdIncome;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____data_9;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataHouseholdIncomeKey_17;
		int32_t L_3 = __this->____householdIncome_6;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.String AdColony.UserMetadata::get_MaritalStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserMetadata_get_MaritalStatus_mCCB815DCA1E793C6CE51E2FE80E43BAD5C6199C2 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	{
		// return _maritalStatus;
		String_t* L_0 = __this->____maritalStatus_7;
		return L_0;
	}
}
// System.Void AdColony.UserMetadata::set_MaritalStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_set_MaritalStatus_m762467F61A7FBA098405AA8968C6C67301A7007C (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C7DD8EC22843DDD329CB54BBDB2825D0FC007F6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (value == null)
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Debug.Log("Tried to set user metadata marital status with an invalid string. Value will not be included.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4C7DD8EC22843DDD329CB54BBDB2825D0FC007F6, NULL);
		// return;
		return;
	}

IL_000e:
	{
		// string setMaritalStatus = value as string;
		String_t* L_1 = ___value0;
		V_0 = L_1;
		// _maritalStatus = setMaritalStatus;
		String_t* L_2 = V_0;
		__this->____maritalStatus_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____maritalStatus_7), (void*)L_2);
		// _data[Constants.UserMetadataMaritalStatusKey] = _maritalStatus;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____data_9;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataMaritalStatusKey_18;
		String_t* L_5 = __this->____maritalStatus_7;
		NullCheck(L_3);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.String AdColony.UserMetadata::get_EducationLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserMetadata_get_EducationLevel_mA357A377A3D58E89EA7700A2FEE65B056C8C04E7 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	{
		// return _educationLevel;
		String_t* L_0 = __this->____educationLevel_8;
		return L_0;
	}
}
// System.Void AdColony.UserMetadata::set_EducationLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_set_EducationLevel_mE6B2C1854FE0FCB8E2DA39507F4F01D2CE7564A8 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E30EDBD648154A5A8BE87BD177441F8B9F2FD76);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (value == null)
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Debug.Log("Tried to set user metadata education level with an invalid string. Value will not be included.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2E30EDBD648154A5A8BE87BD177441F8B9F2FD76, NULL);
		// return;
		return;
	}

IL_000e:
	{
		// string setEducationLevel = value as string;
		String_t* L_1 = ___value0;
		V_0 = L_1;
		// _educationLevel = setEducationLevel;
		String_t* L_2 = V_0;
		__this->____educationLevel_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____educationLevel_8), (void*)L_2);
		// _data[Constants.UserMetadataEducationLevelKey] = _educationLevel;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____data_9;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataEducationLevelKey_19;
		String_t* L_5 = __this->____educationLevel_8;
		NullCheck(L_3);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void AdColony.UserMetadata::SetMetadata(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_SetMetadata_m849C6622D1C8F40AAC32D4B121F06B782845ED9F (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		// if (key == null)
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// _data[key] = value;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____data_9;
		String_t* L_2 = ___key0;
		String_t* L_3 = ___value1;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void AdColony.UserMetadata::SetMetadata(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_SetMetadata_m31508E57A91BCA154691AF8320861D14A6F38347 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (key == null)
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// _data[key] = value;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____data_9;
		String_t* L_2 = ___key0;
		int32_t L_3 = ___value1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.Void AdColony.UserMetadata::SetMetadata(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_SetMetadata_m15BAEDCA97B22F1E62A6EB0B692CF68635ECC30E (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___key0, double ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (key == null)
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// _data[key] = value;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____data_9;
		String_t* L_2 = ___key0;
		double L_3 = ___value1;
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.Void AdColony.UserMetadata::SetMetadata(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata_SetMetadata_mDDE6ED992537934DA1717AA8224387D1F3D4FF98 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (key == null)
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// _data[key] = value;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____data_9;
		String_t* L_2 = ___key0;
		bool L_3 = ___value1;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_2, L_5);
		// }
		return;
	}
}
// System.String AdColony.UserMetadata::GetStringMetadata(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserMetadata_GetStringMetadata_m6F098A82096DE6093A912D9FEC61500BD1BDF292 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _data.ContainsKey(key) ? _data[key] as string : null;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____data_9;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0010:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____data_9;
		String_t* L_4 = ___key0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
		return ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Int32 AdColony.UserMetadata::GetIntMetadata(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserMetadata_GetIntMetadata_m22CCE80A62CFD8D6131206E49219C3AF02F630FF (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _data.ContainsKey(key) ? Convert.ToInt32(_data[key]) : 0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____data_9;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____data_9;
		String_t* L_4 = ___key0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_5, NULL);
		return L_6;
	}
}
// System.Double AdColony.UserMetadata::GetDoubleMetadata(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UserMetadata_GetDoubleMetadata_m8FDB2F32A8A11B3F76F946C79B1569F56BBD31AD (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _data.ContainsKey(key) ? Convert.ToDouble(_data[key]) : 0.0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____data_9;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (0.0);
	}

IL_0018:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____data_9;
		String_t* L_4 = ___key0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_5, NULL);
		return L_6;
	}
}
// System.Boolean AdColony.UserMetadata::GetBoolMetadata(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserMetadata_GetBoolMetadata_mFF7F5C862AE2589BEE16C3C88DF5DA47C1C372B4 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _data.ContainsKey(key) ? Convert.ToBoolean(Convert.ToInt32(_data[key])) : false;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____data_9;
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____data_9;
		String_t* L_4 = ___key0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_5, NULL);
		bool L_7;
		L_7 = Convert_ToBoolean_mE5E29C04982F778600F57587CD121FEB55A31102(L_6, NULL);
		return L_7;
	}
}
// System.Collections.Hashtable AdColony.UserMetadata::ToHashtable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* UserMetadata_ToHashtable_m73BB6F848F9ECEC66DD585A04659CCDD7E184756 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Hashtable(_data);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____data_9;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hashtable__ctor_mC900B057C1E0D012E89457D94D5E2ADAEDE859D1(L_1, L_0, NULL);
		return L_1;
	}
}
// System.String AdColony.UserMetadata::ToJsonString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserMetadata_ToJsonString_mAAF0E35AF9948B08BD074207F79B12A670E7686F (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AdColonyJson.Encode(_data);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____data_9;
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AdColonyJson_Encode_m17E4F0503856405BC764FDFFD77C2F209AAC1E12(L_0, NULL);
		return L_1;
	}
}
// System.Void AdColony.UserMetadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata__ctor_m0D82077F3C6A3EEE8599DB9CB1AFA394F0A75785 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Hashtable _data = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		__this->____data_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_9), (void*)L_0);
		// public UserMetadata()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void AdColony.UserMetadata::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMetadata__ctor_m71F2EDC72D62E2C488C8A79376D0CF367F023DE9 (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// private Hashtable _data = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		__this->____data_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_9), (void*)L_0);
		// public UserMetadata(Hashtable values)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _data = new Hashtable(values);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___values0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Hashtable__ctor_mC900B057C1E0D012E89457D94D5E2ADAEDE859D1(L_2, L_1, NULL);
		__this->____data_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_9), (void*)L_2);
		// if (values != null)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = ___values0;
		if (!L_3)
		{
			goto IL_019e;
		}
	}
	{
		// if (values.ContainsKey(Constants.UserMetadataAgeKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataAgeKey_11;
		NullCheck(L_4);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// _age = Convert.ToInt32(values[Constants.UserMetadataAgeKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_8 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataAgeKey_11;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_7, L_8);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_9, NULL);
		__this->____age_0 = L_10;
	}

IL_0046:
	{
		// if (values.ContainsKey(Constants.UserMetadataInterestsKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_11 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_12 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataInterestsKey_12;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_11, L_12);
		if (!L_13)
		{
			goto IL_00a9;
		}
	}
	{
		// ArrayList interests = values[Constants.UserMetadataInterestsKey] as ArrayList;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_15 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataInterestsKey_12;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, L_15);
		// Interests = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_17, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		UserMetadata_set_Interests_mF8C35B5BDEA8D98795B28B394FCD9B523AB3547F(__this, L_17, NULL);
		// foreach (string interest in interests)
		NullCheck(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_16, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)));
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(37 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_16, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)));
		V_0 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_19 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_20 = V_2;
					if (!L_20)
					{
						goto IL_00a8;
					}
				}
				{
					RuntimeObject* L_21 = V_2;
					NullCheck(L_21);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_21);
				}

IL_00a8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008e_1;
			}

IL_0076_1:
			{
				// foreach (string interest in interests)
				RuntimeObject* L_22 = V_0;
				NullCheck(L_22);
				RuntimeObject* L_23;
				L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_23, String_t_il2cpp_TypeInfo_var));
				// Interests.Add(interest);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24;
				L_24 = UserMetadata_get_Interests_mA2416275695DE40377E9A6DCB2EB49A25DAFBB38_inline(__this, NULL);
				String_t* L_25 = V_1;
				NullCheck(L_24);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_24, L_25, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_008e_1:
			{
				// foreach (string interest in interests)
				RuntimeObject* L_26 = V_0;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_0076_1;
				}
			}
			{
				goto IL_00a9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a9:
	{
		// if (values.ContainsKey(Constants.UserMetadataGenderKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_28 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_29 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataGenderKey_13;
		NullCheck(L_28);
		bool L_30;
		L_30 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_28, L_29);
		if (!L_30)
		{
			goto IL_00cc;
		}
	}
	{
		// _gender = values[Constants.UserMetadataGenderKey] as string;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_31 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_32 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataGenderKey_13;
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_31, L_32);
		__this->____gender_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_33, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gender_2), (void*)((String_t*)IsInstSealed((RuntimeObject*)L_33, String_t_il2cpp_TypeInfo_var)));
	}

IL_00cc:
	{
		// if (values.ContainsKey(Constants.UserMetadataLatitudeKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_34 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_35 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataLatitudeKey_14;
		NullCheck(L_34);
		bool L_36;
		L_36 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_34, L_35);
		if (!L_36)
		{
			goto IL_00ef;
		}
	}
	{
		// _latitude = Convert.ToDouble(values[Constants.UserMetadataLatitudeKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_37 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_38 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataLatitudeKey_14;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_37, L_38);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_40;
		L_40 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_39, NULL);
		__this->____latitude_3 = L_40;
	}

IL_00ef:
	{
		// if (values.ContainsKey(Constants.UserMetadataLongitudeKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_41 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_42 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataLongitudeKey_15;
		NullCheck(L_41);
		bool L_43;
		L_43 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_41, L_42);
		if (!L_43)
		{
			goto IL_0112;
		}
	}
	{
		// _longitude = Convert.ToDouble(values[Constants.UserMetadataLongitudeKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_44 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_45 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataLongitudeKey_15;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_44, L_45);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_47;
		L_47 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_46, NULL);
		__this->____longitude_4 = L_47;
	}

IL_0112:
	{
		// if (values.ContainsKey(Constants.UserMetadataZipCodeKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_48 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_49 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataZipCodeKey_16;
		NullCheck(L_48);
		bool L_50;
		L_50 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_48, L_49);
		if (!L_50)
		{
			goto IL_0135;
		}
	}
	{
		// _zipCode = values[Constants.UserMetadataZipCodeKey] as string;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_51 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_52 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataZipCodeKey_16;
		NullCheck(L_51);
		RuntimeObject* L_53;
		L_53 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_51, L_52);
		__this->____zipCode_5 = ((String_t*)IsInstSealed((RuntimeObject*)L_53, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____zipCode_5), (void*)((String_t*)IsInstSealed((RuntimeObject*)L_53, String_t_il2cpp_TypeInfo_var)));
	}

IL_0135:
	{
		// if (values.ContainsKey(Constants.UserMetadataHouseholdIncomeKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_54 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_55 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataHouseholdIncomeKey_17;
		NullCheck(L_54);
		bool L_56;
		L_56 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_54, L_55);
		if (!L_56)
		{
			goto IL_0158;
		}
	}
	{
		// _householdIncome = Convert.ToInt32(values[Constants.UserMetadataHouseholdIncomeKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_57 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_58 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataHouseholdIncomeKey_17;
		NullCheck(L_57);
		RuntimeObject* L_59;
		L_59 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_57, L_58);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_60;
		L_60 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_59, NULL);
		__this->____householdIncome_6 = L_60;
	}

IL_0158:
	{
		// if (values.ContainsKey(Constants.UserMetadataMaritalStatusKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_61 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_62 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataMaritalStatusKey_18;
		NullCheck(L_61);
		bool L_63;
		L_63 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_61, L_62);
		if (!L_63)
		{
			goto IL_017b;
		}
	}
	{
		// _maritalStatus = values[Constants.UserMetadataMaritalStatusKey] as string;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_64 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_65 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataMaritalStatusKey_18;
		NullCheck(L_64);
		RuntimeObject* L_66;
		L_66 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_64, L_65);
		__this->____maritalStatus_7 = ((String_t*)IsInstSealed((RuntimeObject*)L_66, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____maritalStatus_7), (void*)((String_t*)IsInstSealed((RuntimeObject*)L_66, String_t_il2cpp_TypeInfo_var)));
	}

IL_017b:
	{
		// if (values.ContainsKey(Constants.UserMetadataEducationLevelKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_67 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_68 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataEducationLevelKey_19;
		NullCheck(L_67);
		bool L_69;
		L_69 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_67, L_68);
		if (!L_69)
		{
			goto IL_019e;
		}
	}
	{
		// _educationLevel = values[Constants.UserMetadataEducationLevelKey] as string;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_70 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_71 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___UserMetadataEducationLevelKey_19;
		NullCheck(L_70);
		RuntimeObject* L_72;
		L_72 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_70, L_71);
		__this->____educationLevel_8 = ((String_t*)IsInstSealed((RuntimeObject*)L_72, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____educationLevel_8), (void*)((String_t*)IsInstSealed((RuntimeObject*)L_72, String_t_il2cpp_TypeInfo_var)));
	}

IL_019e:
	{
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
// System.Object AdColony.AdColonyJson::Decode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdColonyJson_Decode_m60D13497153879D0674861BDFE1AC575C515F080 (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (json == null)
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// AdColonyJson.instance.lastDecode = json;
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_1 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
		String_t* L_2 = ___json0;
		NullCheck(L_1);
		L_1->___lastDecode_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___lastDecode_3), (void*)L_2);
		// object value = null;
		V_0 = NULL;
	}
	try
	{// begin try (depth: 1)
		{
			// char[] charArray = json.ToCharArray();
			String_t* L_3 = ___json0;
			NullCheck(L_3);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4;
			L_4 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_3, NULL);
			V_1 = L_4;
			// int index = 0;
			V_2 = 0;
			// bool success = true;
			V_3 = (bool)1;
			// value = AdColonyJson.instance.ParseValue(charArray, ref index, ref success);
			il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
			AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_5 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_7;
			L_7 = AdColonyJson_ParseValue_mC144C7A31FA5FBC4D6BC3AF17B191CD6CC0E2301(L_5, L_6, (&V_2), (&V_3), NULL);
			V_0 = L_7;
			// if (success)
			bool L_8 = V_3;
			if (!L_8)
			{
				goto IL_003d_1;
			}
		}
		{
			// AdColonyJson.instance.lastErrorIndex = -1;
			il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
			AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_9 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
			NullCheck(L_9);
			L_9->___lastErrorIndex_2 = (-1);
			goto IL_0048_1;
		}

IL_003d_1:
		{
			// AdColonyJson.instance.lastErrorIndex = index;
			il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
			AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_10 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
			int32_t L_11 = V_2;
			NullCheck(L_10);
			L_10->___lastErrorIndex_2 = L_11;
		}

IL_0048_1:
		{
			// }
			goto IL_0056;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004a;
		}
		throw e;
	}

CATCH_004a:
	{// begin catch(System.Exception)
		// UnityEngine.Debug.LogError(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_12, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0056;
	}// end catch (depth: 1)

IL_0056:
	{
		// return value;
		RuntimeObject* L_13 = V_0;
		return L_13;
	}
}
// System.String AdColony.AdColonyJson::Encode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdColonyJson_Encode_m17E4F0503856405BC764FDFFD77C2F209AAC1E12 (RuntimeObject* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringBuilder_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (json == null)
		RuntimeObject* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0005:
	{
		// bool success = false;
		V_0 = (bool)0;
		// StringBuilder builder = new StringBuilder(BUILDER_CAPACITY);
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_1, ((int32_t)2000), NULL);
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		// success = AdColonyJson.instance.SerializeValue(json, builder);
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_2 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
		RuntimeObject* L_3 = ___json0;
		StringBuilder_t* L_4 = V_1;
		NullCheck(L_2);
		bool L_5;
		L_5 = AdColonyJson_SerializeValue_m18991931D122D839C3D4C7D4DAE4C6E522572E79(L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// }
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0021:
	{// begin catch(System.Exception)
		// UnityEngine.Debug.LogError(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002d;
	}// end catch (depth: 1)

IL_002d:
	{
		// return (success ? builder.ToString() : null);
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0032:
	{
		StringBuilder_t* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Boolean AdColony.AdColonyJson::LastDecodeSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdColonyJson_LastDecodeSuccessful_m8CC22CB81FC06C8D6281789F5994A153A43BFF1A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (AdColonyJson.instance.lastErrorIndex == -1);
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_0 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___lastErrorIndex_2;
		return (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Int32 AdColony.AdColonyJson::GetLastErrorIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdColonyJson_GetLastErrorIndex_mE1FE6589AF24FD68B41C07EC142E8527B50F091B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AdColonyJson.instance.lastErrorIndex;
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_0 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___lastErrorIndex_2;
		return L_1;
	}
}
// System.String AdColony.AdColonyJson::GetLastErrorSnippet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdColonyJson_GetLastErrorSnippet_m8E87D8E095ED983C69A5ACF64D690E05DDDFDCAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (AdColonyJson.instance.lastErrorIndex == -1)
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_0 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___lastErrorIndex_2;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0013:
	{
		// int startIndex = AdColonyJson.instance.lastErrorIndex - 5;
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_2 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___lastErrorIndex_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 5));
		// int endIndex = AdColonyJson.instance.lastErrorIndex + 15;
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_4 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___lastErrorIndex_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)15)));
		// if (startIndex < 0)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		// startIndex = 0;
		V_0 = 0;
	}

IL_0034:
	{
		// if (endIndex >= AdColonyJson.instance.lastDecode.Length)
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_8 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->___lastDecode_3;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_0058;
		}
	}
	{
		// endIndex = AdColonyJson.instance.lastDecode.Length - 1;
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_11 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
		NullCheck(L_11);
		String_t* L_12 = L_11->___lastDecode_3;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0058:
	{
		// return AdColonyJson.instance.lastDecode.Substring(startIndex, endIndex - startIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_14 = ((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1;
		NullCheck(L_14);
		String_t* L_15 = L_14->___lastDecode_3;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		NullCheck(L_15);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_15, L_16, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_17, L_18)), 1)), NULL);
		return L_19;
	}
}
// System.Collections.Hashtable AdColony.AdColonyJson::ParseObject(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* AdColonyJson_ParseObject_mDA38462ABB7B96D306E8F6B409029F826B0D8CA9 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	{
		// Hashtable table = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		V_0 = L_0;
		// NextToken(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		int32_t L_3;
		L_3 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_1, L_2, NULL);
		// bool done = false;
		V_2 = (bool)0;
		goto IL_007b;
	}

IL_0013:
	{
		// token = LookAhead(json, index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7;
		L_7 = AdColonyJson_LookAhead_m78AF646BBCF99E5C6C7917ABCF86C7EE0A748C74(__this, L_4, L_6, NULL);
		V_1 = L_7;
		// if (token == JsonToken.NONE)
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_0022;
		}
	}
	{
		// return null;
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_0022:
	{
		// else if (token == JsonToken.COMMA)
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_0031;
		}
	}
	{
		// NextToken(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___json0;
		int32_t* L_11 = ___index1;
		int32_t L_12;
		L_12 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_10, L_11, NULL);
		goto IL_007b;
	}

IL_0031:
	{
		// else if (token == JsonToken.CURLY_CLOSE)
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0040;
		}
	}
	{
		// NextToken(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		int32_t L_16;
		L_16 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_14, L_15, NULL);
		// return table;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_17 = V_0;
		return L_17;
	}

IL_0040:
	{
		// string name = ParseString(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = ___json0;
		int32_t* L_19 = ___index1;
		String_t* L_20;
		L_20 = AdColonyJson_ParseString_m9CBA1A84D96DC3795665CAF0CED46ED6BBE58FD8(__this, L_18, L_19, NULL);
		V_3 = L_20;
		// if (name == null)
		String_t* L_21 = V_3;
		if (L_21)
		{
			goto IL_004e;
		}
	}
	{
		// return null;
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_004e:
	{
		// token = NextToken(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = ___json0;
		int32_t* L_23 = ___index1;
		int32_t L_24;
		L_24 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_22, L_23, NULL);
		V_1 = L_24;
		// if (token != JsonToken.COLON)
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)5)))
		{
			goto IL_005d;
		}
	}
	{
		// return null;
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_005d:
	{
		// bool success = true;
		V_4 = (bool)1;
		// object value = ParseValue(json, ref index, ref success);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		RuntimeObject* L_28;
		L_28 = AdColonyJson_ParseValue_mC144C7A31FA5FBC4D6BC3AF17B191CD6CC0E2301(__this, L_26, L_27, (&V_4), NULL);
		V_5 = L_28;
		// if (!success)
		bool L_29 = V_4;
		if (L_29)
		{
			goto IL_0072;
		}
	}
	{
		// return null;
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_0072:
	{
		// table[name] = value;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_30 = V_0;
		String_t* L_31 = V_3;
		RuntimeObject* L_32 = V_5;
		NullCheck(L_30);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_30, L_31, L_32);
	}

IL_007b:
	{
		// while (!done)
		bool L_33 = V_2;
		if (!L_33)
		{
			goto IL_0013;
		}
	}
	{
		// return table;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_34 = V_0;
		return L_34;
	}
}
// System.Collections.ArrayList AdColony.AdColonyJson::ParseArray(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* AdColonyJson_ParseArray_m77CE942ECF8C67BB610B48EF9A9E7522C5CA5715 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		// ArrayList array = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		V_0 = L_0;
		// NextToken(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		int32_t L_3;
		L_3 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_1, L_2, NULL);
		// bool done = false;
		V_1 = (bool)0;
		goto IL_005c;
	}

IL_0013:
	{
		// JsonToken token = LookAhead(json, index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7;
		L_7 = AdColonyJson_LookAhead_m78AF646BBCF99E5C6C7917ABCF86C7EE0A748C74(__this, L_4, L_6, NULL);
		V_2 = L_7;
		// if (token == JsonToken.NONE)
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0022;
		}
	}
	{
		// return null;
		return (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)NULL;
	}

IL_0022:
	{
		// else if (token == JsonToken.COMMA)
		int32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_0031;
		}
	}
	{
		// NextToken(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___json0;
		int32_t* L_11 = ___index1;
		int32_t L_12;
		L_12 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_10, L_11, NULL);
		goto IL_005c;
	}

IL_0031:
	{
		// else if (token == JsonToken.SQUARED_CLOSE)
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)4))))
		{
			goto IL_0040;
		}
	}
	{
		// NextToken(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		int32_t L_16;
		L_16 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_14, L_15, NULL);
		// break;
		goto IL_005f;
	}

IL_0040:
	{
		// bool success = true;
		V_3 = (bool)1;
		// object value = ParseValue(json, ref index, ref success);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = ___json0;
		int32_t* L_18 = ___index1;
		RuntimeObject* L_19;
		L_19 = AdColonyJson_ParseValue_mC144C7A31FA5FBC4D6BC3AF17B191CD6CC0E2301(__this, L_17, L_18, (&V_3), NULL);
		V_4 = L_19;
		// if (!success)
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_0053;
		}
	}
	{
		// return null;
		return (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)NULL;
	}

IL_0053:
	{
		// array.Add(value);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_21 = V_0;
		RuntimeObject* L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23;
		L_23 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_21, L_22);
	}

IL_005c:
	{
		// while (!done)
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_0013;
		}
	}

IL_005f:
	{
		// return array;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_25 = V_0;
		return L_25;
	}
}
// System.Object AdColony.AdColonyJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdColonyJson_ParseValue_mC144C7A31FA5FBC4D6BC3AF17B191CD6CC0E2301 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (LookAhead(json, index))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = AdColonyJson_LookAhead_m78AF646BBCF99E5C6C7917ABCF86C7EE0A748C74(__this, L_0, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0096;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0096;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0096;
			}
			case 5:
			{
				goto IL_0096;
			}
			case 6:
			{
				goto IL_0096;
			}
			case 7:
			{
				goto IL_0042;
			}
			case 8:
			{
				goto IL_004b;
			}
			case 9:
			{
				goto IL_006b;
			}
			case 10:
			{
				goto IL_007b;
			}
			case 11:
			{
				goto IL_008b;
			}
		}
	}
	{
		goto IL_0096;
	}

IL_0042:
	{
		// return ParseString(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___json0;
		int32_t* L_6 = ___index1;
		String_t* L_7;
		L_7 = AdColonyJson_ParseString_m9CBA1A84D96DC3795665CAF0CED46ED6BBE58FD8(__this, L_5, L_6, NULL);
		return L_7;
	}

IL_004b:
	{
		// return ParseNumber(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		double L_10;
		L_10 = AdColonyJson_ParseNumber_mF2DE4FCA4AB4B6413DBF324DBFA57897A513A478(__this, L_8, L_9, NULL);
		double L_11 = L_10;
		RuntimeObject* L_12 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}

IL_0059:
	{
		// return ParseObject(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___json0;
		int32_t* L_14 = ___index1;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_15;
		L_15 = AdColonyJson_ParseObject_mDA38462ABB7B96D306E8F6B409029F826B0D8CA9(__this, L_13, L_14, NULL);
		return L_15;
	}

IL_0062:
	{
		// return ParseArray(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = ___json0;
		int32_t* L_17 = ___index1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_18;
		L_18 = AdColonyJson_ParseArray_m77CE942ECF8C67BB610B48EF9A9E7522C5CA5715(__this, L_16, L_17, NULL);
		return L_18;
	}

IL_006b:
	{
		// NextToken(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = ___json0;
		int32_t* L_20 = ___index1;
		int32_t L_21;
		L_21 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_19, L_20, NULL);
		// return true;
		bool L_22 = ((bool)1);
		RuntimeObject* L_23 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_007b:
	{
		// NextToken(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = ___json0;
		int32_t* L_25 = ___index1;
		int32_t L_26;
		L_26 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_24, L_25, NULL);
		// return false;
		bool L_27 = ((bool)0);
		RuntimeObject* L_28 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_008b:
	{
		// NextToken(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = ___json0;
		int32_t* L_30 = ___index1;
		int32_t L_31;
		L_31 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_29, L_30, NULL);
		// return null;
		return NULL;
	}

IL_0096:
	{
		// success = false;
		bool* L_32 = ___success2;
		*((int8_t*)L_32) = (int8_t)0;
		// return null;
		return NULL;
	}
}
// System.String AdColony.AdColonyJson::ParseString(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdColonyJson_ParseString_m9CBA1A84D96DC3795665CAF0CED46ED6BBE58FD8 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_4 = NULL;
	{
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// EatWhitespace(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		AdColonyJson_EatWhitespace_m0EF35CC5CEA57655061707B96E72F65AA6C53272(__this, L_0, L_1, NULL);
		// c = json[index++];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t* L_4 = ___index1;
		int32_t L_5 = *((int32_t*)L_4);
		V_3 = L_5;
		int32_t L_6 = V_3;
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_3;
		NullCheck(L_2);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// bool complete = false;
		V_2 = (bool)0;
		goto IL_015d;
	}

IL_0021:
	{
		// if (index == json.Length)
		int32_t* L_10 = ___index1;
		int32_t L_11 = *((int32_t*)L_10);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = ___json0;
		NullCheck(L_12);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0163;
		}
	}
	{
		// c = json[index++];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___json0;
		int32_t* L_14 = ___index1;
		int32_t* L_15 = ___index1;
		int32_t L_16 = *((int32_t*)L_15);
		V_3 = L_16;
		int32_t L_17 = V_3;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_3;
		NullCheck(L_13);
		int32_t L_19 = L_18;
		uint16_t L_20 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = L_20;
		// if (c == '"')
		Il2CppChar L_21 = V_1;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0043;
		}
	}
	{
		// complete = true;
		V_2 = (bool)1;
		// break;
		goto IL_0163;
	}

IL_0043:
	{
		// else if (c == '\\')
		Il2CppChar L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_014f;
		}
	}
	{
		// if (index == json.Length)
		int32_t* L_23 = ___index1;
		int32_t L_24 = *((int32_t*)L_23);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = ___json0;
		NullCheck(L_25);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0163;
		}
	}
	{
		// c = json[index++];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		int32_t* L_28 = ___index1;
		int32_t L_29 = *((int32_t*)L_28);
		V_3 = L_29;
		int32_t L_30 = V_3;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = V_3;
		NullCheck(L_26);
		int32_t L_32 = L_31;
		uint16_t L_33 = (uint16_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_1 = L_33;
		// if (c == '"')
		Il2CppChar L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0077;
		}
	}
	{
		// s += '"';
		String_t* L_35 = V_0;
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_35, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		V_0 = L_36;
		goto IL_015d;
	}

IL_0077:
	{
		// else if (c == '\\')
		Il2CppChar L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_008d;
		}
	}
	{
		// s += '\\';
		String_t* L_38 = V_0;
		String_t* L_39;
		L_39 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_38, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, NULL);
		V_0 = L_39;
		goto IL_015d;
	}

IL_008d:
	{
		// else if (c == '/')
		Il2CppChar L_40 = V_1;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00a3;
		}
	}
	{
		// s += '/';
		String_t* L_41 = V_0;
		String_t* L_42;
		L_42 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_41, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		V_0 = L_42;
		goto IL_015d;
	}

IL_00a3:
	{
		// else if (c == 'b')
		Il2CppChar L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00b9;
		}
	}
	{
		// s += '\b';
		String_t* L_44 = V_0;
		String_t* L_45;
		L_45 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_44, _stringLiteral053D8D6CEEBA9453C97D0EE5374DB863E6F77AD4, NULL);
		V_0 = L_45;
		goto IL_015d;
	}

IL_00b9:
	{
		// else if (c == 'f')
		Il2CppChar L_46 = V_1;
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00cf;
		}
	}
	{
		// s += '\f';
		String_t* L_47 = V_0;
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_47, _stringLiteralDE28F98354F48E7C0878BBA93033C6BDC68B27E2, NULL);
		V_0 = L_48;
		goto IL_015d;
	}

IL_00cf:
	{
		// else if (c == 'n')
		Il2CppChar L_49 = V_1;
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00e2;
		}
	}
	{
		// s += '\n';
		String_t* L_50 = V_0;
		String_t* L_51;
		L_51 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_50, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_0 = L_51;
		goto IL_015d;
	}

IL_00e2:
	{
		// else if (c == 'r')
		Il2CppChar L_52 = V_1;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_00f5;
		}
	}
	{
		// s += '\r';
		String_t* L_53 = V_0;
		String_t* L_54;
		L_54 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_53, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, NULL);
		V_0 = L_54;
		goto IL_015d;
	}

IL_00f5:
	{
		// else if (c == 't')
		Il2CppChar L_55 = V_1;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0108;
		}
	}
	{
		// s += '\t';
		String_t* L_56 = V_0;
		String_t* L_57;
		L_57 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_56, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, NULL);
		V_0 = L_57;
		goto IL_015d;
	}

IL_0108:
	{
		// else if (c == 'u')
		Il2CppChar L_58 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_015d;
		}
	}
	{
		// int remainingLength = json.Length - index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59 = ___json0;
		NullCheck(L_59);
		int32_t* L_60 = ___index1;
		int32_t L_61 = *((int32_t*)L_60);
		// if (remainingLength >= 4)
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_59)->max_length)), L_61))) < ((int32_t)4)))
		{
			goto IL_0163;
		}
	}
	{
		// char[] unicodeCharArray = new char[4];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_4 = L_62;
		// Array.Copy(json, index, unicodeCharArray, 0, 4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_63 = ___json0;
		int32_t* L_64 = ___index1;
		int32_t L_65 = *((int32_t*)L_64);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_66 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_63, L_65, (RuntimeArray*)L_66, 0, 4, NULL);
		// s += char.ConvertFromUtf32(int.Parse(new string(unicodeCharArray), System.Globalization.NumberStyles.HexNumber));
		String_t* L_67 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_68 = V_4;
		String_t* L_69;
		L_69 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_68, NULL);
		int32_t L_70;
		L_70 = Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E(L_69, ((int32_t)515), NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		String_t* L_71;
		L_71 = Char_ConvertFromUtf32_m6AC7B7F6371FC03CDD4C42CEC8B9ACE751CE3BC8(L_70, NULL);
		String_t* L_72;
		L_72 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_67, L_71, NULL);
		V_0 = L_72;
		// index += 4;
		int32_t* L_73 = ___index1;
		int32_t* L_74 = ___index1;
		int32_t L_75 = *((int32_t*)L_74);
		*((int32_t*)L_73) = (int32_t)((int32_t)il2cpp_codegen_add(L_75, 4));
		goto IL_015d;
	}

IL_014f:
	{
		// s += c;
		String_t* L_76 = V_0;
		String_t* L_77;
		L_77 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_1), NULL);
		String_t* L_78;
		L_78 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_76, L_77, NULL);
		V_0 = L_78;
	}

IL_015d:
	{
		// while (!complete)
		bool L_79 = V_2;
		if (!L_79)
		{
			goto IL_0021;
		}
	}

IL_0163:
	{
		// if (!complete)
		bool L_80 = V_2;
		if (L_80)
		{
			goto IL_0168;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0168:
	{
		// return s;
		String_t* L_81 = V_0;
		return L_81;
	}
}
// System.Double AdColony.AdColonyJson::ParseNumber(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdColonyJson_ParseNumber_mF2DE4FCA4AB4B6413DBF324DBFA57897A513A478 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	{
		// EatWhitespace(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		AdColonyJson_EatWhitespace_m0EF35CC5CEA57655061707B96E72F65AA6C53272(__this, L_0, L_1, NULL);
		// int lastIndex = GetLastIndexOfNumber(json, index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5;
		L_5 = AdColonyJson_GetLastIndexOfNumber_mBFFE66F372C961DDE9450F0A610807CF58ACA675(__this, L_2, L_4, NULL);
		V_0 = L_5;
		// int charLength = (lastIndex - index) + 1;
		int32_t L_6 = V_0;
		int32_t* L_7 = ___index1;
		int32_t L_8 = *((int32_t*)L_7);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_6, L_8)), 1));
		// char[] numberCharArray = new char[charLength];
		int32_t L_9 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_2 = L_10;
		// Array.Copy(json, index, numberCharArray, 0, charLength);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ___json0;
		int32_t* L_12 = ___index1;
		int32_t L_13 = *((int32_t*)L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = V_2;
		int32_t L_15 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, L_13, (RuntimeArray*)L_14, 0, L_15, NULL);
		// index = lastIndex + 1;
		int32_t* L_16 = ___index1;
		int32_t L_17 = V_0;
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1));
		// return double.Parse(new string(numberCharArray));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = V_2;
		String_t* L_19;
		L_19 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_18, NULL);
		double L_20;
		L_20 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_19, NULL);
		return L_20;
	}
}
// System.Int32 AdColony.AdColonyJson::GetLastIndexOfNumber(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdColonyJson_GetLastIndexOfNumber_mBFFE66F372C961DDE9450F0A610807CF58ACA675 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (lastIndex = index; lastIndex < json.Length; lastIndex++)
		int32_t L_0 = ___index1;
		V_0 = L_0;
		goto IL_0018;
	}

IL_0004:
	{
		// if ("0123456789+-.eE".IndexOf(json[lastIndex]) == -1)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___json0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80, L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_001e;
		}
	}
	{
		// for (lastIndex = index; lastIndex < json.Length; lastIndex++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0018:
	{
		// for (lastIndex = index; lastIndex < json.Length; lastIndex++)
		int32_t L_7 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}

IL_001e:
	{
		// return lastIndex - 1;
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}
}
// System.Void AdColony.AdColonyJson::EatWhitespace(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdColonyJson_EatWhitespace_m0EF35CC5CEA57655061707B96E72F65AA6C53272 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0019;
	}

IL_0002:
	{
		// if (" \t\n\r".IndexOf(json[index]) == -1)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C, L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		// for (; index < json.Length; index++)
		int32_t* L_6 = ___index1;
		int32_t* L_7 = ___index1;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0019:
	{
		// for (; index < json.Length; index++)
		int32_t* L_9 = ___index1;
		int32_t L_10 = *((int32_t*)L_9);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ___json0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0002;
		}
	}

IL_0020:
	{
		// }
		return;
	}
}
// AdColony.AdColonyJson/JsonToken AdColony.AdColonyJson::LookAhead(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdColonyJson_LookAhead_m78AF646BBCF99E5C6C7917ABCF86C7EE0A748C74 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int saveIndex = index;
		int32_t L_0 = ___index1;
		V_0 = L_0;
		// return NextToken(json, ref saveIndex);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___json0;
		int32_t L_2;
		L_2 = AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25(__this, L_1, (&V_0), NULL);
		return L_2;
	}
}
// AdColony.AdColonyJson/JsonToken AdColony.AdColonyJson::NextToken(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdColonyJson_NextToken_m065C81F56DF993FBE23C8E42F296BD492FBB3F25 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___json0, int32_t* ___index1, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		// EatWhitespace(json, ref index);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		AdColonyJson_EatWhitespace_m0EF35CC5CEA57655061707B96E72F65AA6C53272(__this, L_0, L_1, NULL);
		// if (index == json.Length)
		int32_t* L_2 = ___index1;
		int32_t L_3 = *((int32_t*)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___json0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// return JsonToken.NONE;
		return (int32_t)(0);
	}

IL_0011:
	{
		// char c = json[index];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___json0;
		int32_t* L_6 = ___index1;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		// index++;
		int32_t* L_10 = ___index1;
		int32_t* L_11 = ___index1;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_12, 1));
		Il2CppChar L_13 = V_0;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0095;
		}
	}
	{
		Il2CppChar L_14 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_00b0;
			}
			case 1:
			{
				goto IL_00b6;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00b6;
			}
			case 4:
			{
				goto IL_00b6;
			}
			case 5:
			{
				goto IL_00b6;
			}
			case 6:
			{
				goto IL_00b6;
			}
			case 7:
			{
				goto IL_00b6;
			}
			case 8:
			{
				goto IL_00b6;
			}
			case 9:
			{
				goto IL_00b6;
			}
			case 10:
			{
				goto IL_00ae;
			}
			case 11:
			{
				goto IL_00b2;
			}
			case 12:
			{
				goto IL_00b6;
			}
			case 13:
			{
				goto IL_00b6;
			}
			case 14:
			{
				goto IL_00b2;
			}
			case 15:
			{
				goto IL_00b2;
			}
			case 16:
			{
				goto IL_00b2;
			}
			case 17:
			{
				goto IL_00b2;
			}
			case 18:
			{
				goto IL_00b2;
			}
			case 19:
			{
				goto IL_00b2;
			}
			case 20:
			{
				goto IL_00b2;
			}
			case 21:
			{
				goto IL_00b2;
			}
			case 22:
			{
				goto IL_00b2;
			}
			case 23:
			{
				goto IL_00b2;
			}
			case 24:
			{
				goto IL_00b4;
			}
		}
	}
	{
		Il2CppChar L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)91))))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00b6;
	}

IL_0095:
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ac;
		}
	}
	{
		Il2CppChar L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a6;
		}
	}
	{
		Il2CppChar L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00b6;
	}

IL_00a6:
	{
		// return JsonToken.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a8:
	{
		// return JsonToken.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00aa:
	{
		// return JsonToken.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00ac:
	{
		// return JsonToken.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00ae:
	{
		// return JsonToken.COMMA;
		return (int32_t)(6);
	}

IL_00b0:
	{
		// return JsonToken.STRING;
		return (int32_t)(7);
	}

IL_00b2:
	{
		// return JsonToken.NUMBER;
		return (int32_t)(8);
	}

IL_00b4:
	{
		// return JsonToken.COLON;
		return (int32_t)(5);
	}

IL_00b6:
	{
		// index--;
		int32_t* L_19 = ___index1;
		int32_t* L_20 = ___index1;
		int32_t L_21 = *((int32_t*)L_20);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1));
		// int remainingLength = json.Length - index;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = ___json0;
		NullCheck(L_22);
		int32_t* L_23 = ___index1;
		int32_t L_24 = *((int32_t*)L_23);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), L_24));
		// if (remainingLength >= 5)
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)5)))
		{
			goto IL_0100;
		}
	}
	{
		// if (json[index] == 'f' &&
		//     json[index + 1] == 'a' &&
		//     json[index + 2] == 'l' &&
		//     json[index + 3] == 's' &&
		//     json[index + 4] == 'e')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		int32_t L_28 = *((int32_t*)L_27);
		NullCheck(L_26);
		int32_t L_29 = L_28;
		uint16_t L_30 = (uint16_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0100;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = ___json0;
		int32_t* L_32 = ___index1;
		int32_t L_33 = *((int32_t*)L_32);
		NullCheck(L_31);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint16_t L_35 = (uint16_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0100;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36 = ___json0;
		int32_t* L_37 = ___index1;
		int32_t L_38 = *((int32_t*)L_37);
		NullCheck(L_36);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 2));
		uint16_t L_40 = (uint16_t)(L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0100;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = ___json0;
		int32_t* L_42 = ___index1;
		int32_t L_43 = *((int32_t*)L_42);
		NullCheck(L_41);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 3));
		uint16_t L_45 = (uint16_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0100;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_46 = ___json0;
		int32_t* L_47 = ___index1;
		int32_t L_48 = *((int32_t*)L_47);
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 4));
		uint16_t L_50 = (uint16_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0100;
		}
	}
	{
		// index += 5;
		int32_t* L_51 = ___index1;
		int32_t* L_52 = ___index1;
		int32_t L_53 = *((int32_t*)L_52);
		*((int32_t*)L_51) = (int32_t)((int32_t)il2cpp_codegen_add(L_53, 5));
		// return JsonToken.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_0100:
	{
		// if (remainingLength >= 4)
		int32_t L_54 = V_1;
		if ((((int32_t)L_54) < ((int32_t)4)))
		{
			goto IL_0133;
		}
	}
	{
		// if (json[index] == 't' &&
		//     json[index + 1] == 'r' &&
		//     json[index + 2] == 'u' &&
		//     json[index + 3] == 'e')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55 = ___json0;
		int32_t* L_56 = ___index1;
		int32_t L_57 = *((int32_t*)L_56);
		NullCheck(L_55);
		int32_t L_58 = L_57;
		uint16_t L_59 = (uint16_t)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0133;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_60 = ___json0;
		int32_t* L_61 = ___index1;
		int32_t L_62 = *((int32_t*)L_61);
		NullCheck(L_60);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		uint16_t L_64 = (uint16_t)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0133;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_65 = ___json0;
		int32_t* L_66 = ___index1;
		int32_t L_67 = *((int32_t*)L_66);
		NullCheck(L_65);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 2));
		uint16_t L_69 = (uint16_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0133;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_70 = ___json0;
		int32_t* L_71 = ___index1;
		int32_t L_72 = *((int32_t*)L_71);
		NullCheck(L_70);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(L_72, 3));
		uint16_t L_74 = (uint16_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0133;
		}
	}
	{
		// index += 4;
		int32_t* L_75 = ___index1;
		int32_t* L_76 = ___index1;
		int32_t L_77 = *((int32_t*)L_76);
		*((int32_t*)L_75) = (int32_t)((int32_t)il2cpp_codegen_add(L_77, 4));
		// return JsonToken.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0133:
	{
		// if (remainingLength >= 4)
		int32_t L_78 = V_1;
		if ((((int32_t)L_78) < ((int32_t)4)))
		{
			goto IL_0166;
		}
	}
	{
		// if (json[index] == 'n' &&
		//     json[index + 1] == 'u' &&
		//     json[index + 2] == 'l' &&
		//     json[index + 3] == 'l')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_79 = ___json0;
		int32_t* L_80 = ___index1;
		int32_t L_81 = *((int32_t*)L_80);
		NullCheck(L_79);
		int32_t L_82 = L_81;
		uint16_t L_83 = (uint16_t)(L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		if ((!(((uint32_t)L_83) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_0166;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_84 = ___json0;
		int32_t* L_85 = ___index1;
		int32_t L_86 = *((int32_t*)L_85);
		NullCheck(L_84);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 1));
		uint16_t L_88 = (uint16_t)(L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		if ((!(((uint32_t)L_88) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0166;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_89 = ___json0;
		int32_t* L_90 = ___index1;
		int32_t L_91 = *((int32_t*)L_90);
		NullCheck(L_89);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 2));
		uint16_t L_93 = (uint16_t)(L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		if ((!(((uint32_t)L_93) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0166;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_94 = ___json0;
		int32_t* L_95 = ___index1;
		int32_t L_96 = *((int32_t*)L_95);
		NullCheck(L_94);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 3));
		uint16_t L_98 = (uint16_t)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		if ((!(((uint32_t)L_98) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0166;
		}
	}
	{
		// index += 4;
		int32_t* L_99 = ___index1;
		int32_t* L_100 = ___index1;
		int32_t L_101 = *((int32_t*)L_100);
		*((int32_t*)L_99) = (int32_t)((int32_t)il2cpp_codegen_add(L_101, 4));
		// return JsonToken.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0166:
	{
		// return JsonToken.NONE;
		return (int32_t)(0);
	}
}
// System.Boolean AdColony.AdColonyJson::SerializeObjectOrArray(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdColonyJson_SerializeObjectOrArray_m23B4B2AB88A58E0F7B6DA99261E19CBFD7F05490 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, RuntimeObject* ___objectOrArray0, StringBuilder_t* ___builder1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (objectOrArray is Hashtable)
		RuntimeObject* L_0 = ___objectOrArray0;
		if (!((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)IsInstClass((RuntimeObject*)L_0, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		// return SerializeObject((Hashtable)objectOrArray, builder);
		RuntimeObject* L_1 = ___objectOrArray0;
		StringBuilder_t* L_2 = ___builder1;
		bool L_3;
		L_3 = AdColonyJson_SerializeObject_m2D458FFA2832633CA9FA85EF4786E96101E4DB8F(__this, ((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)CastclassClass((RuntimeObject*)L_1, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)), L_2, NULL);
		return L_3;
	}

IL_0016:
	{
		// else if (objectOrArray is ArrayList)
		RuntimeObject* L_4 = ___objectOrArray0;
		if (!((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_4, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)))
		{
			goto IL_002c;
		}
	}
	{
		// return SerializeArray((ArrayList)objectOrArray, builder);
		RuntimeObject* L_5 = ___objectOrArray0;
		StringBuilder_t* L_6 = ___builder1;
		bool L_7;
		L_7 = AdColonyJson_SerializeArray_mB946BD70575290079CFCEBCEA78774EB506D138E(__this, ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_5, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), L_6, NULL);
		return L_7;
	}

IL_002c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean AdColony.AdColonyJson::SerializeObject(System.Collections.Hashtable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdColonyJson_SerializeObject_m2D458FFA2832633CA9FA85EF4786E96101E4DB8F (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___anObject0, StringBuilder_t* ___builder1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// builder.Append("{");
		StringBuilder_t* L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		// IDictionaryEnumerator e = anObject.GetEnumerator();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = ___anObject0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(31 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_2);
		V_0 = L_3;
		// bool first = true;
		V_1 = (bool)1;
		goto IL_005b;
	}

IL_0017:
	{
		// string key = e.Key.ToString();
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_2 = L_6;
		// object value = e.Value;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Value() */, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_7);
		V_3 = L_8;
		// if (!first)
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0039;
		}
	}
	{
		// builder.Append(", ");
		StringBuilder_t* L_10 = ___builder1;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0039:
	{
		// SerializeString(key, builder);
		String_t* L_12 = V_2;
		StringBuilder_t* L_13 = ___builder1;
		AdColonyJson_SerializeString_m2BF1C8837FA7B9B6459691EF565F86F66C6E9294(__this, L_12, L_13, NULL);
		// builder.Append(":");
		StringBuilder_t* L_14 = ___builder1;
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		// if (!SerializeValue(value, builder))
		RuntimeObject* L_16 = V_3;
		StringBuilder_t* L_17 = ___builder1;
		bool L_18;
		L_18 = AdColonyJson_SerializeValue_m18991931D122D839C3D4C7D4DAE4C6E522572E79(__this, L_16, L_17, NULL);
		if (L_18)
		{
			goto IL_0059;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// first = false;
		V_1 = (bool)0;
	}

IL_005b:
	{
		// while (e.MoveNext())
		RuntimeObject* L_19 = V_0;
		NullCheck(L_19);
		bool L_20;
		L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
		if (L_20)
		{
			goto IL_0017;
		}
	}
	{
		// builder.Append("}");
		StringBuilder_t* L_21 = ___builder1;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean AdColony.AdColonyJson::SerializeArray(System.Collections.ArrayList,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdColonyJson_SerializeArray_mB946BD70575290079CFCEBCEA78774EB506D138E (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___anArray0, StringBuilder_t* ___builder1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// builder.Append("[");
		StringBuilder_t* L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		// bool first = true;
		V_0 = (bool)1;
		// for (int i = 0; i < anArray.Count; i++)
		V_1 = 0;
		goto IL_003b;
	}

IL_0012:
	{
		// object value = anArray[i];
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = ___anArray0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_2 = L_4;
		// if (!first)
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		// builder.Append(", ");
		StringBuilder_t* L_6 = ___builder1;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0029:
	{
		// if (!SerializeValue(value, builder))
		RuntimeObject* L_8 = V_2;
		StringBuilder_t* L_9 = ___builder1;
		bool L_10;
		L_10 = AdColonyJson_SerializeValue_m18991931D122D839C3D4C7D4DAE4C6E522572E79(__this, L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0035:
	{
		// first = false;
		V_0 = (bool)0;
		// for (int i = 0; i < anArray.Count; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003b:
	{
		// for (int i = 0; i < anArray.Count; i++)
		int32_t L_12 = V_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_13 = ___anArray0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0012;
		}
	}
	{
		// builder.Append("]");
		StringBuilder_t* L_15 = ___builder1;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean AdColony.AdColonyJson::SerializeValue(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdColonyJson_SerializeValue_m18991931D122D839C3D4C7D4DAE4C6E522572E79 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, RuntimeObject* ___value0, StringBuilder_t* ___builder1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t* L_1 = ___builder1;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		goto IL_00fc;
	}

IL_0014:
	{
		// else if (value.GetType().IsArray)
		RuntimeObject* L_3 = ___value0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_4, NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// SerializeArray(new ArrayList((ICollection)value), builder);
		RuntimeObject* L_6 = ___value0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11(L_7, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)), NULL);
		StringBuilder_t* L_8 = ___builder1;
		bool L_9;
		L_9 = AdColonyJson_SerializeArray_mB946BD70575290079CFCEBCEA78774EB506D138E(__this, L_7, L_8, NULL);
		goto IL_00fc;
	}

IL_0039:
	{
		// else if (value is string)
		RuntimeObject* L_10 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0053;
		}
	}
	{
		// SerializeString((string)value, builder);
		RuntimeObject* L_11 = ___value0;
		StringBuilder_t* L_12 = ___builder1;
		AdColonyJson_SerializeString_m2BF1C8837FA7B9B6459691EF565F86F66C6E9294(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var)), L_12, NULL);
		goto IL_00fc;
	}

IL_0053:
	{
		// else if (value is Char)
		RuntimeObject* L_13 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_0072;
		}
	}
	{
		// SerializeString(Convert.ToString((char)value), builder);
		RuntimeObject* L_14 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Convert_ToString_m8270C8361D2796C5C4659D441829CAFEEFBAC91C(((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_14, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
		StringBuilder_t* L_16 = ___builder1;
		AdColonyJson_SerializeString_m2BF1C8837FA7B9B6459691EF565F86F66C6E9294(__this, L_15, L_16, NULL);
		goto IL_00fc;
	}

IL_0072:
	{
		// else if (value is Hashtable)
		RuntimeObject* L_17 = ___value0;
		if (!((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)IsInstClass((RuntimeObject*)L_17, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)))
		{
			goto IL_008a;
		}
	}
	{
		// SerializeObject((Hashtable)value, builder);
		RuntimeObject* L_18 = ___value0;
		StringBuilder_t* L_19 = ___builder1;
		bool L_20;
		L_20 = AdColonyJson_SerializeObject_m2D458FFA2832633CA9FA85EF4786E96101E4DB8F(__this, ((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)CastclassClass((RuntimeObject*)L_18, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)), L_19, NULL);
		goto IL_00fc;
	}

IL_008a:
	{
		// else if (value is ArrayList)
		RuntimeObject* L_21 = ___value0;
		if (!((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_21, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)))
		{
			goto IL_00a2;
		}
	}
	{
		// SerializeArray((ArrayList)value, builder);
		RuntimeObject* L_22 = ___value0;
		StringBuilder_t* L_23 = ___builder1;
		bool L_24;
		L_24 = AdColonyJson_SerializeArray_mB946BD70575290079CFCEBCEA78774EB506D138E(__this, ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_22, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), L_23, NULL);
		goto IL_00fc;
	}

IL_00a2:
	{
		// else if ((value is bool) && ((bool)value == true))
		RuntimeObject* L_25 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_25, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_00c0;
		}
	}
	{
		RuntimeObject* L_26 = ___value0;
		if (!((*(bool*)((bool*)(bool*)UnBox(L_26, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			goto IL_00c0;
		}
	}
	{
		// builder.Append("true");
		StringBuilder_t* L_27 = ___builder1;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		goto IL_00fc;
	}

IL_00c0:
	{
		// else if ((value is bool) && ((bool)value == false))
		RuntimeObject* L_29 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_29, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_00de;
		}
	}
	{
		RuntimeObject* L_30 = ___value0;
		if (((*(bool*)((bool*)(bool*)UnBox(L_30, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			goto IL_00de;
		}
	}
	{
		// builder.Append("false");
		StringBuilder_t* L_31 = ___builder1;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		goto IL_00fc;
	}

IL_00de:
	{
		// else if (value.GetType().IsPrimitive)
		RuntimeObject* L_33 = ___value0;
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_33, NULL);
		NullCheck(L_34);
		bool L_35;
		L_35 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_34, NULL);
		if (!L_35)
		{
			goto IL_00fa;
		}
	}
	{
		// SerializeNumber(Convert.ToDouble(value), builder);
		RuntimeObject* L_36 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_37;
		L_37 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_36, NULL);
		StringBuilder_t* L_38 = ___builder1;
		AdColonyJson_SerializeNumber_mBCE232FFFF0F474F94BF1DB8A3249EC15832E0F1(__this, L_37, L_38, NULL);
		goto IL_00fc;
	}

IL_00fa:
	{
		// return false;
		return (bool)0;
	}

IL_00fc:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void AdColony.AdColonyJson::SerializeString(System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdColonyJson_SerializeString_m2BF1C8837FA7B9B6459691EF565F86F66C6E9294 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, String_t* ___aString0, StringBuilder_t* ___builder1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append("\"");
		StringBuilder_t* L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// char[] charArray = aString.ToCharArray();
		String_t* L_2 = ___aString0;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		V_0 = L_3;
		// for (int i = 0; i < charArray.Length; i++)
		V_1 = 0;
		goto IL_00eb;
	}

IL_001a:
	{
		// char c = charArray[i];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// if (c == '"')
		Il2CppChar L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0034;
		}
	}
	{
		// builder.Append("\\\"");
		StringBuilder_t* L_9 = ___builder1;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		goto IL_00e7;
	}

IL_0034:
	{
		// else if (c == '\\')
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_004a;
		}
	}
	{
		// builder.Append("\\\\");
		StringBuilder_t* L_12 = ___builder1;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		goto IL_00e7;
	}

IL_004a:
	{
		// else if (c == '\b')
		Il2CppChar L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_005f;
		}
	}
	{
		// builder.Append("\\b");
		StringBuilder_t* L_15 = ___builder1;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		goto IL_00e7;
	}

IL_005f:
	{
		// else if (c == '\f')
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0072;
		}
	}
	{
		// builder.Append("\\f");
		StringBuilder_t* L_18 = ___builder1;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		goto IL_00e7;
	}

IL_0072:
	{
		// else if (c == '\n')
		Il2CppChar L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0085;
		}
	}
	{
		// builder.Append("\\n");
		StringBuilder_t* L_21 = ___builder1;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		goto IL_00e7;
	}

IL_0085:
	{
		// else if (c == '\r')
		Il2CppChar L_23 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0098;
		}
	}
	{
		// builder.Append("\\r");
		StringBuilder_t* L_24 = ___builder1;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		goto IL_00e7;
	}

IL_0098:
	{
		// else if (c == '\t')
		Il2CppChar L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00ab;
		}
	}
	{
		// builder.Append("\\t");
		StringBuilder_t* L_27 = ___builder1;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		goto IL_00e7;
	}

IL_00ab:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_29 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_30;
		L_30 = Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052(L_29, NULL);
		V_3 = L_30;
		// if ((codepoint >= 32) && (codepoint <= 126))
		int32_t L_31 = V_3;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)32))))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_32 = V_3;
		if ((((int32_t)L_32) > ((int32_t)((int32_t)126))))
		{
			goto IL_00c6;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t* L_33 = ___builder1;
		Il2CppChar L_34 = V_2;
		NullCheck(L_33);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_33, L_34, NULL);
		goto IL_00e7;
	}

IL_00c6:
	{
		// builder.Append("\\u" + Convert.ToString(codepoint, 16).PadLeft(4, '0'));
		StringBuilder_t* L_36 = ___builder1;
		int32_t L_37 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35(L_37, ((int32_t)16), NULL);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_38, 4, ((int32_t)48), NULL);
		String_t* L_40;
		L_40 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_39, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, L_40, NULL);
	}

IL_00e7:
	{
		// for (int i = 0; i < charArray.Length; i++)
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00eb:
	{
		// for (int i = 0; i < charArray.Length; i++)
		int32_t L_43 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// builder.Append("\"");
		StringBuilder_t* L_45 = ___builder1;
		NullCheck(L_45);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_45, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		// }
		return;
	}
}
// System.Void AdColony.AdColonyJson::SerializeNumber(System.Double,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdColonyJson_SerializeNumber_mBCE232FFFF0F474F94BF1DB8A3249EC15832E0F1 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, double ___number0, StringBuilder_t* ___builder1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// builder.Append(Convert.ToString(number, CultureInfo.InvariantCulture));
		StringBuilder_t* L_0 = ___builder1;
		double L_1 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_m7EBE84B1D453D12C9514AD3EF4F6B3F55A5E5C9B(L_1, L_2, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void AdColony.AdColonyJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdColonyJson__ctor_mFB08B50AFDB8B5732513B821A6702D0C51F574A5 (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int lastErrorIndex = -1;
		__this->___lastErrorIndex_2 = (-1);
		// string lastDecode = "";
		__this->___lastDecode_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastDecode_3), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AdColony.AdColonyJson::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdColonyJson__cctor_mDD6B848612014C119F9AD708E837B95DB2A50256 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static AdColonyJson instance = new AdColonyJson();
		AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42* L_0 = (AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42*)il2cpp_codegen_object_new(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AdColonyJson__ctor_mFB08B50AFDB8B5732513B821A6702D0C51F574A5(L_0, NULL);
		((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_StaticFields*)il2cpp_codegen_static_fields_for(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var))->___instance_1), (void*)L_0);
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
// System.Void AdColony.Zone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zone__ctor_m701BCA46109438C340BCF515C24662A6ED5DB3E5 (Zone_tCE53E8C7D6CC21D5846DA58398F5A638406715E6* __this, const RuntimeMethod* method) 
{
	{
		// public Zone()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void AdColony.Zone::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zone__ctor_m9EFE818F8CF9844F0B86FA6233FF408F764753D8 (Zone_tCE53E8C7D6CC21D5846DA58398F5A638406715E6* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Zone(Hashtable values)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (values != null)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___values0;
		if (!L_0)
		{
			goto IL_012e;
		}
	}
	{
		// if (values.ContainsKey(Constants.ZoneIdentifierKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneIdentifierKey_20;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// Identifier = values[Constants.ZoneIdentifierKey] as string;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneIdentifierKey_20;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		__this->___Identifier_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier_0), (void*)((String_t*)IsInstSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)));
	}

IL_002f:
	{
		// if (values.ContainsKey(Constants.ZoneTypeKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_8 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneTypeKey_21;
		NullCheck(L_7);
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_7, L_8);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// Type = (AdZoneType)Convert.ToInt32(values[Constants.ZoneTypeKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_10 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneTypeKey_21;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, L_11);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_12, NULL);
		__this->___Type_1 = L_13;
	}

IL_0052:
	{
		// if (values.ContainsKey(Constants.ZoneEnabledKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_15 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneEnabledKey_22;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_14, L_15);
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		// Enabled = Convert.ToBoolean(Convert.ToInt32(values[Constants.ZoneEnabledKey]));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_17 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_18 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneEnabledKey_22;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_17, L_18);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_19, NULL);
		bool L_21;
		L_21 = Convert_ToBoolean_mE5E29C04982F778600F57587CD121FEB55A31102(L_20, NULL);
		__this->___Enabled_2 = L_21;
	}

IL_007a:
	{
		// if (values.ContainsKey(Constants.ZoneRewardedKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_22 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_23 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneRewardedKey_23;
		NullCheck(L_22);
		bool L_24;
		L_24 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_22, L_23);
		if (!L_24)
		{
			goto IL_00a2;
		}
	}
	{
		// Rewarded = Convert.ToBoolean(Convert.ToInt32(values[Constants.ZoneRewardedKey]));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_25 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_26 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneRewardedKey_23;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_25, L_26);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_27, NULL);
		bool L_29;
		L_29 = Convert_ToBoolean_mE5E29C04982F778600F57587CD121FEB55A31102(L_28, NULL);
		__this->___Rewarded_3 = L_29;
	}

IL_00a2:
	{
		// if (values.ContainsKey(Constants.ZoneViewsPerRewardKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_30 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_31 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneViewsPerRewardKey_24;
		NullCheck(L_30);
		bool L_32;
		L_32 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_30, L_31);
		if (!L_32)
		{
			goto IL_00c5;
		}
	}
	{
		// ViewsPerReward = Convert.ToInt32(values[Constants.ZoneViewsPerRewardKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_33 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_34 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneViewsPerRewardKey_24;
		NullCheck(L_33);
		RuntimeObject* L_35;
		L_35 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_33, L_34);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_36;
		L_36 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_35, NULL);
		__this->___ViewsPerReward_4 = L_36;
	}

IL_00c5:
	{
		// if (values.ContainsKey(Constants.ZoneViewsUntilRewardKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_37 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_38 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneViewsUntilRewardKey_25;
		NullCheck(L_37);
		bool L_39;
		L_39 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_37, L_38);
		if (!L_39)
		{
			goto IL_00e8;
		}
	}
	{
		// ViewsUntilReward = Convert.ToInt32(values[Constants.ZoneViewsUntilRewardKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_40 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_41 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneViewsUntilRewardKey_25;
		NullCheck(L_40);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_40, L_41);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_43;
		L_43 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_42, NULL);
		__this->___ViewsUntilReward_5 = L_43;
	}

IL_00e8:
	{
		// if (values.ContainsKey(Constants.ZoneRewardAmountKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_44 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_45 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneRewardAmountKey_26;
		NullCheck(L_44);
		bool L_46;
		L_46 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_44, L_45);
		if (!L_46)
		{
			goto IL_010b;
		}
	}
	{
		// RewardAmount = Convert.ToInt32(values[Constants.ZoneRewardAmountKey]);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_47 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_48 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneRewardAmountKey_26;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_47, L_48);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_50;
		L_50 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_49, NULL);
		__this->___RewardAmount_6 = L_50;
	}

IL_010b:
	{
		// if (values.ContainsKey(Constants.ZoneRewardNameKey))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_51 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_52 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneRewardNameKey_27;
		NullCheck(L_51);
		bool L_53;
		L_53 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_51, L_52);
		if (!L_53)
		{
			goto IL_012e;
		}
	}
	{
		// RewardName = values[Constants.ZoneRewardNameKey] as string;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_54 = ___values0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_55 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneRewardNameKey_27;
		NullCheck(L_54);
		RuntimeObject* L_56;
		L_56 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_54, L_55);
		__this->___RewardName_7 = ((String_t*)IsInstSealed((RuntimeObject*)L_56, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RewardName_7), (void*)((String_t*)IsInstSealed((RuntimeObject*)L_56, String_t_il2cpp_TypeInfo_var)));
	}

IL_012e:
	{
		// }
		return;
	}
}
// System.String AdColony.Zone::toJsonString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Zone_toJsonString_m6DD12C41197D28AA0BD663A7157765C839608CEB (Zone_tCE53E8C7D6CC21D5846DA58398F5A638406715E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdZoneType_t975B32499E948A0086944160631A01949C72DC91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B2_0 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B2_1 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B1_1 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B3_2 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B5_1 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B5_2 = NULL;
	String_t* G_B4_0 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B4_1 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B6_2 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* G_B6_3 = NULL;
	{
		// Hashtable data = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		// data.Add(Constants.ZoneIdentifierKey, Identifier);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneIdentifierKey_20;
		String_t* L_3 = __this->___Identifier_0;
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_1, L_2, L_3);
		// data.Add(Constants.ZoneTypeKey, Convert.ToInt32(Type).ToString());
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = L_1;
		String_t* L_5 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneTypeKey_21;
		int32_t L_6 = __this->___Type_1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(AdZoneType_t975B32499E948A0086944160631A01949C72DC91_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_4);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_4, L_5, L_10);
		// data.Add(Constants.ZoneEnabledKey, Enabled ? "1" : "0");
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_11 = L_4;
		String_t* L_12 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneEnabledKey_22;
		bool L_13 = __this->___Enabled_2;
		G_B1_0 = L_12;
		G_B1_1 = L_11;
		G_B1_2 = L_11;
		if (L_13)
		{
			G_B2_0 = L_12;
			G_B2_1 = L_11;
			G_B2_2 = L_11;
			goto IL_004e;
		}
	}
	{
		G_B3_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0053;
	}

IL_004e:
	{
		G_B3_0 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0053:
	{
		NullCheck(G_B3_2);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, G_B3_2, G_B3_1, G_B3_0);
		// data.Add(Constants.ZoneRewardedKey, Rewarded ? "1" : "0");
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14 = G_B3_3;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_15 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneRewardedKey_23;
		bool L_16 = __this->___Rewarded_3;
		G_B4_0 = L_15;
		G_B4_1 = L_14;
		G_B4_2 = L_14;
		if (L_16)
		{
			G_B5_0 = L_15;
			G_B5_1 = L_14;
			G_B5_2 = L_14;
			goto IL_006d;
		}
	}
	{
		G_B6_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0072;
	}

IL_006d:
	{
		G_B6_0 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0072:
	{
		NullCheck(G_B6_2);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, G_B6_2, G_B6_1, G_B6_0);
		// data.Add(Constants.ZoneViewsPerRewardKey, ViewsPerReward.ToString());
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_17 = G_B6_3;
		il2cpp_codegen_runtime_class_init_inline(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var);
		String_t* L_18 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneViewsPerRewardKey_24;
		int32_t* L_19 = (&__this->___ViewsPerReward_4);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		NullCheck(L_17);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_17, L_18, L_20);
		// data.Add(Constants.ZoneViewsUntilRewardKey, ViewsUntilReward.ToString());
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_21 = L_17;
		String_t* L_22 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneViewsUntilRewardKey_25;
		int32_t* L_23 = (&__this->___ViewsUntilReward_5);
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_23, NULL);
		NullCheck(L_21);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_21, L_22, L_24);
		// data.Add(Constants.ZoneRewardAmountKey, RewardAmount.ToString());
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_25 = L_21;
		String_t* L_26 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneRewardAmountKey_26;
		int32_t* L_27 = (&__this->___RewardAmount_6);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_27, NULL);
		NullCheck(L_25);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_25, L_26, L_28);
		// data.Add(Constants.ZoneRewardNameKey, RewardName);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_29 = L_25;
		String_t* L_30 = ((Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_StaticFields*)il2cpp_codegen_static_fields_for(Constants_tF95178F943FEE02D4AFB3302577E7E94FDB09125_il2cpp_TypeInfo_var))->___ZoneRewardNameKey_27;
		String_t* L_31 = __this->___RewardName_7;
		NullCheck(L_29);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_29, L_30, L_31);
		// return AdColonyJson.Encode(data);
		il2cpp_codegen_runtime_class_init_inline(AdColonyJson_t3158F96AF2BACE99E498D37CE3A12DD6071D3D42_il2cpp_TypeInfo_var);
		String_t* L_32;
		L_32 = AdColonyJson_Encode_m17E4F0503856405BC764FDFFD77C2F209AAC1E12(L_29, NULL);
		return L_32;
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
// System.Single Assets._2D_Car.Script.CameraFollow::get_Add_Z_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraFollow_get_Add_Z_Value_m0B7B3F5A6C7E473218C613B86C41E519035611B1 (CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* __this, const RuntimeMethod* method) 
{
	{
		// public float Add_Z_Value { get; set; }
		float L_0 = __this->___U3CAdd_Z_ValueU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Assets._2D_Car.Script.CameraFollow::set_Add_Z_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_set_Add_Z_Value_mE9CC3FFA0D165A27049D8FE12224220B5AA0EA1E (CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Add_Z_Value { get; set; }
		float L_0 = ___value0;
		__this->___U3CAdd_Z_ValueU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void Assets._2D_Car.Script.CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_mFCB828AE97D57D07FC4F8233B060ADAFBDA4B20C (CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* L_0 = ((CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var))->___instance_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var))->___instance_12 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var))->___instance_12), (void*)__this);
	}

IL_0013:
	{
		// isCameraFollow = true;
		((CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var))->___isCameraFollow_7 = (bool)1;
		// isCameraFollowX = false;
		__this->___isCameraFollowX_8 = (bool)0;
		// followTransform = value_followTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var))->___value_followTransform_4;
		__this->___followTransform_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followTransform_5), (void*)L_2);
		// Car.SetWoldCamera(gameObject.GetComponent<Camera>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_3, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		Car_SetWoldCamera_m850D28FB16AC4648C8E499E3B02E5381C662D5E8(L_4, NULL);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_mE7243D3C2680121BBDAA6171FA14584974221D08 (CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* G_B5_0 = NULL;
	CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* G_B6_1 = NULL;
	float G_B9_0 = 0.0f;
	CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* G_B9_1 = NULL;
	float G_B8_0 = 0.0f;
	CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* G_B8_1 = NULL;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* G_B10_2 = NULL;
	{
		// var xx = Car.instance.rb.velocity.magnitude;
		Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* L_0 = ((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = L_0->___rb_5;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_1, NULL);
		V_2 = L_2;
		float L_3;
		L_3 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_2), NULL);
		V_0 = L_3;
		// bool GoBack = velocity.x < 0 ? true : false;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___velocity_9);
		float L_5 = L_4->___x_2;
		if ((((float)L_5) < ((float)(0.0f))))
		{
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 1;
	}

IL_002e:
	{
		V_1 = (bool)G_B3_0;
		// Add_Z_Value = (xx / 6.5f) * -1;
		float L_6 = V_0;
		CameraFollow_set_Add_Z_Value_mE9CC3FFA0D165A27049D8FE12224220B5AA0EA1E_inline(__this, ((float)il2cpp_codegen_multiply(((float)(L_6/(6.5f))), (-1.0f))), NULL);
		// Add_Z_Value = Add_Z_Value < -4f ? -4f : Add_Z_Value;
		float L_7;
		L_7 = CameraFollow_get_Add_Z_Value_m0B7B3F5A6C7E473218C613B86C41E519035611B1_inline(__this, NULL);
		G_B4_0 = __this;
		if ((((float)L_7) < ((float)(-4.0f))))
		{
			G_B5_0 = __this;
			goto IL_0058;
		}
	}
	{
		float L_8;
		L_8 = CameraFollow_get_Add_Z_Value_m0B7B3F5A6C7E473218C613B86C41E519035611B1_inline(__this, NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B4_0;
		goto IL_005d;
	}

IL_0058:
	{
		G_B6_0 = (-4.0f);
		G_B6_1 = G_B5_0;
	}

IL_005d:
	{
		NullCheck(G_B6_1);
		CameraFollow_set_Add_Z_Value_mE9CC3FFA0D165A27049D8FE12224220B5AA0EA1E_inline(G_B6_1, G_B6_0, NULL);
		// if (followTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___followTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_00ca;
		}
	}
	{
		// _Camera_Targetposition = new Vector3(
		//     followTransform.position.x + 5f - (!GoBack ? (Add_Z_Value * 2.3f) : 0),
		//     followTransform.position.y + 0f,
		//     -7f + Add_Z_Value);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___followTransform_5;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___x_2;
		bool L_14 = V_1;
		G_B8_0 = ((float)il2cpp_codegen_add(L_13, (5.0f)));
		G_B8_1 = __this;
		if (!L_14)
		{
			G_B9_0 = ((float)il2cpp_codegen_add(L_13, (5.0f)));
			G_B9_1 = __this;
			goto IL_0091;
		}
	}
	{
		G_B10_0 = (0.0f);
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_009d;
	}

IL_0091:
	{
		float L_15;
		L_15 = CameraFollow_get_Add_Z_Value_m0B7B3F5A6C7E473218C613B86C41E519035611B1_inline(__this, NULL);
		G_B10_0 = ((float)il2cpp_codegen_multiply(L_15, (2.29999995f)));
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_009d:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___followTransform_5;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___y_3;
		float L_19;
		L_19 = CameraFollow_get_Add_Z_Value_m0B7B3F5A6C7E473218C613B86C41E519035611B1_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((float)il2cpp_codegen_subtract(G_B10_1, G_B10_0)), ((float)il2cpp_codegen_add(L_18, (0.0f))), ((float)il2cpp_codegen_add((-7.0f), L_19)), /*hidden argument*/NULL);
		NullCheck(G_B10_2);
		G_B10_2->____Camera_Targetposition_11 = L_20;
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CameraFollow::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_FixedUpdate_m77A5FC37A64CE05BC0B8437636F92C90437814AE (CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (followTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___followTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// if (isCameraFollow) transform.position = Vector3.SmoothDamp(transform.position, _Camera_Targetposition, ref velocity, smoothSpeed);
		bool L_2 = ((CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var))->___isCameraFollow_7;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// if (isCameraFollow) transform.position = Vector3.SmoothDamp(transform.position, _Camera_Targetposition, ref velocity, smoothSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->____Camera_Targetposition_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___velocity_9);
		float L_8 = __this->___smoothSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_5, L_6, L_7, L_8, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_9, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CameraFollow::SetFollowTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_SetFollowTransform_m8E8AB50561E06D13D433219C533C5B37E7823671 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* L_0 = ((CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var))->___instance_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// value_followTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___transform0;
		((CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var))->___value_followTransform_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var))->___value_followTransform_4), (void*)L_2);
		return;
	}

IL_0014:
	{
		// instance.followTransform = transform;
		CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* L_3 = ((CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE_il2cpp_TypeInfo_var))->___instance_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___transform0;
		NullCheck(L_3);
		L_3->___followTransform_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___followTransform_5), (void*)L_4);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_mFCE635AF3819A0835A2A456C96538DB2B18C9745 (CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* __this, const RuntimeMethod* method) 
{
	{
		// float smoothSpeed = 0.220f;
		__this->___smoothSpeed_6 = (0.219999999f);
		// private Vector3 velocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___velocity_9 = L_0;
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
// UnityEngine.Camera Assets._2D_Car.Script.Car::get_static_Canvas_CarOption_WorldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Car_get_static_Canvas_CarOption_WorldCamera_mDC482D878D8F3BBB7F3CAD69EF7BC916E5B50D06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Camera static_Canvas_CarOption_WorldCamera { get; set; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___U3Cstatic_Canvas_CarOption_WorldCameraU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Assets._2D_Car.Script.Car::set_static_Canvas_CarOption_WorldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_set_static_Canvas_CarOption_WorldCamera_mBEBDCF05C9D2EB9D300BF819704ADE8E0489D2BB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Camera static_Canvas_CarOption_WorldCamera { get; set; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___value0;
		((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___U3Cstatic_Canvas_CarOption_WorldCameraU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___U3Cstatic_Canvas_CarOption_WorldCameraU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// Assets._2D_Car.Script.Models.VehicleStatus Assets._2D_Car.Script.Car::get_ItemDb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* Car_get_ItemDb_m72879FDB181C55A33F59B818AB4C77E78C3F8870 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) 
{
	{
		// public VehicleStatus ItemDb { get; set; }
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_0 = __this->___U3CItemDbU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Assets._2D_Car.Script.Car::set_ItemDb(Assets._2D_Car.Script.Models.VehicleStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_set_ItemDb_m86AFA7933F1C3E90422EF2BE76600C05219D5679 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* ___value0, const RuntimeMethod* method) 
{
	{
		// public VehicleStatus ItemDb { get; set; }
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_0 = ___value0;
		__this->___U3CItemDbU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CItemDbU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.Void Assets._2D_Car.Script.Car::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_Awake_m8B6FC325C22B98927598D234B25202253D65C8F2 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Car_OnBrake_m0E91DDA99E2F04AE2EF1FCF99401887E84E9EC0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Car_OnGas_mB203A1D69E4FD2BA2C3B5B573442057EC36AB545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24_mB77F5E82A720E909D4FC50AC463CCDD78979B461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_mA6E1D53932CFEDDFAE699F36C54C39BF14FC653A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* L_0 = ((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0013:
	{
		// if (static_Canvas_CarOption_WorldCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Car_get_static_Canvas_CarOption_WorldCamera_mDC482D878D8F3BBB7F3CAD69EF7BC916E5B50D06_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// Canvas_CarOption.GetComponent<Canvas>().worldCamera = static_Canvas_CarOption_WorldCamera;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Canvas_CarOption_11;
		NullCheck(L_4);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5;
		L_5 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_4, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Car_get_static_Canvas_CarOption_WorldCamera_mDC482D878D8F3BBB7F3CAD69EF7BC916E5B50D06_inline(NULL);
		NullCheck(L_5);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_5, L_6, NULL);
	}

IL_0034:
	{
		// CarPedal_Gas = Canvas_CarOption.GetComponent<CarOption>().pedal_Gas;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Canvas_CarOption_11;
		NullCheck(L_7);
		CarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24* L_8;
		L_8 = GameObject_GetComponent_TisCarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24_mB77F5E82A720E909D4FC50AC463CCDD78979B461(L_7, GameObject_GetComponent_TisCarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24_mB77F5E82A720E909D4FC50AC463CCDD78979B461_RuntimeMethod_var);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___pedal_Gas_4;
		__this->___CarPedal_Gas_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CarPedal_Gas_9), (void*)L_9);
		// CarPedal_Brack = Canvas_CarOption.GetComponent<CarOption>().pedal_Back;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Canvas_CarOption_11;
		NullCheck(L_10);
		CarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24* L_11;
		L_11 = GameObject_GetComponent_TisCarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24_mB77F5E82A720E909D4FC50AC463CCDD78979B461(L_10, GameObject_GetComponent_TisCarOption_t2E26D6395E8C2EBFB5902B871D19082C1D5C2E24_mB77F5E82A720E909D4FC50AC463CCDD78979B461_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___pedal_Back_5;
		__this->___CarPedal_Brack_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CarPedal_Brack_10), (void*)L_12);
		// CarPedal_Gas.GetComponent<CarPedal>().onMouse.AddListener(OnGas);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___CarPedal_Gas_9;
		NullCheck(L_13);
		CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E* L_14;
		L_14 = GameObject_GetComponent_TisCarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_mA6E1D53932CFEDDFAE699F36C54C39BF14FC653A(L_13, GameObject_GetComponent_TisCarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_mA6E1D53932CFEDDFAE699F36C54C39BF14FC653A_RuntimeMethod_var);
		NullCheck(L_14);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15 = L_14->___onMouse_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_16 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_16, __this, (intptr_t)((void*)Car_OnGas_mB203A1D69E4FD2BA2C3B5B573442057EC36AB545_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_15, L_16, NULL);
		// CarPedal_Brack.GetComponent<CarPedal>().onMouse.AddListener(OnBrake);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___CarPedal_Brack_10;
		NullCheck(L_17);
		CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E* L_18;
		L_18 = GameObject_GetComponent_TisCarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_mA6E1D53932CFEDDFAE699F36C54C39BF14FC653A(L_17, GameObject_GetComponent_TisCarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_mA6E1D53932CFEDDFAE699F36C54C39BF14FC653A_RuntimeMethod_var);
		NullCheck(L_18);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_19 = L_18->___onMouse_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_20 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_20, __this, (intptr_t)((void*)Car_OnBrake_m0E91DDA99E2F04AE2EF1FCF99401887E84E9EC0E_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_19, L_20, NULL);
		// ItemDb = GameManager.instance.getVehicleInDb();
		il2cpp_codegen_runtime_class_init_inline(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_21 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_21);
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_22;
		L_22 = GameManager_getVehicleInDb_m646B114A8400AA38943D98BA16504BCC6B12AE37(L_21, NULL);
		Car_set_ItemDb_m86AFA7933F1C3E90422EF2BE76600C05219D5679_inline(__this, L_22, NULL);
		// fullTuneSpeed = speed * 2.5f;
		float L_23 = __this->___speed_6;
		__this->___fullTuneSpeed_7 = ((float)il2cpp_codegen_multiply(L_23, (2.5f)));
		// speed += ((fullTuneSpeed - speed) / 8) * ItemDb.TuneLevelUserSave;
		float L_24 = __this->___speed_6;
		float L_25 = __this->___fullTuneSpeed_7;
		float L_26 = __this->___speed_6;
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_27;
		L_27 = Car_get_ItemDb_m72879FDB181C55A33F59B818AB4C77E78C3F8870_inline(__this, NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VehicleStatus_get_TuneLevelUserSave_m8007E6F2F401F8D3C4E825E35A72902DA06828B2(L_27, NULL);
		__this->___speed_6 = ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_25, L_26))/(8.0f))), ((float)L_28)))));
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.Car::OnGas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_OnGas_mB203A1D69E4FD2BA2C3B5B573442057EC36AB545 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) 
{
	{
		// SetTorque(-speed);
		float L_0 = __this->___speed_6;
		Car_SetTorque_m7B32F196758B449C0210603DE60834F43512CC07(__this, ((-L_0)), NULL);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.Car::OnBrake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_OnBrake_m0E91DDA99E2F04AE2EF1FCF99401887E84E9EC0E (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) 
{
	{
		// SetTorque(speed);
		float L_0 = __this->___speed_6;
		Car_SetTorque_m7B32F196758B449C0210603DE60834F43512CC07(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.Car::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_Update_m622C8416B78921F221A744BF62869EBF3EABD76B (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.Car::SetTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_SetTorque_m7B32F196758B449C0210603DE60834F43512CC07 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, float ___speed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* V_1 = NULL;
	int32_t V_2 = 0;
	Axle_tE71752E414D64E1652A6028466793217B6D041E5* V_3 = NULL;
	float V_4 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	{
		// var IsBack = speed > 0;
		float L_0 = ___speed0;
		// var EffectivSpeed = IsBack ? (speed * 60 / 100) : speed;
		if (((((float)L_0) > ((float)(0.0f)))? 1 : 0))
		{
			goto IL_000d;
		}
	}
	{
		float L_1 = ___speed0;
		G_B3_0 = L_1;
		goto IL_001a;
	}

IL_000d:
	{
		float L_2 = ___speed0;
		G_B3_0 = ((float)(((float)il2cpp_codegen_multiply(L_2, (60.0f)))/(100.0f)));
	}

IL_001a:
	{
		V_0 = G_B3_0;
		// foreach (var item in axles)
		AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* L_3 = __this->___axles_8;
		V_1 = L_3;
		V_2 = 0;
		goto IL_00d2;
	}

IL_0029:
	{
		// foreach (var item in axles)
		AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// var wheelAngularVelocity = item.wheel.angularVelocity;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_8 = V_3;
		NullCheck(L_8);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = L_8->___wheel_0;
		NullCheck(L_9);
		float L_10;
		L_10 = Rigidbody2D_get_angularVelocity_mAD2505FB1F8C9E1A66D1EA8F8680D14380BFC58D(L_9, NULL);
		V_4 = L_10;
		// Debug.Log(wheelAngularVelocity);
		float L_11 = V_4;
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_12);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// if ((wheelAngularVelocity < 0 & EffectivSpeed > 0) ||
		//     (wheelAngularVelocity > 0 & EffectivSpeed < 0))
		float L_14 = V_4;
		float L_15 = V_0;
		if (((int32_t)(((((float)L_14) < ((float)(0.0f)))? 1 : 0)&((((float)L_15) > ((float)(0.0f)))? 1 : 0))))
		{
			goto IL_006e;
		}
	}
	{
		float L_16 = V_4;
		float L_17 = V_0;
		if (!((int32_t)(((((float)L_16) > ((float)(0.0f)))? 1 : 0)&((((float)L_17) < ((float)(0.0f)))? 1 : 0))))
		{
			goto IL_007a;
		}
	}

IL_006e:
	{
		// item.wheel.freezeRotation = true;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_18 = V_3;
		NullCheck(L_18);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_19 = L_18->___wheel_0;
		NullCheck(L_19);
		Rigidbody2D_set_freezeRotation_mFD0A56A3ED021B714BE05CE0EB22E954ED74E9B9(L_19, (bool)1, NULL);
	}

IL_007a:
	{
		// item.wheel.freezeRotation = false;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_20 = V_3;
		NullCheck(L_20);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_21 = L_20->___wheel_0;
		NullCheck(L_21);
		Rigidbody2D_set_freezeRotation_mFD0A56A3ED021B714BE05CE0EB22E954ED74E9B9(L_21, (bool)0, NULL);
		// if ((wheelAngularVelocity < 0 ? wheelAngularVelocity * -1 : wheelAngularVelocity) <
		//     (speed < 0 ? speed * -1 : EffectivSpeed) * 7)
		float L_22 = V_4;
		if ((((float)L_22) < ((float)(0.0f))))
		{
			goto IL_0093;
		}
	}
	{
		float L_23 = V_4;
		G_B10_0 = L_23;
		goto IL_009b;
	}

IL_0093:
	{
		float L_24 = V_4;
		G_B10_0 = ((float)il2cpp_codegen_multiply(L_24, (-1.0f)));
	}

IL_009b:
	{
		float L_25 = ___speed0;
		G_B11_0 = G_B10_0;
		if ((((float)L_25) < ((float)(0.0f))))
		{
			G_B12_0 = G_B10_0;
			goto IL_00a6;
		}
	}
	{
		float L_26 = V_0;
		G_B13_0 = L_26;
		G_B13_1 = G_B11_0;
		goto IL_00ad;
	}

IL_00a6:
	{
		float L_27 = ___speed0;
		G_B13_0 = ((float)il2cpp_codegen_multiply(L_27, (-1.0f)));
		G_B13_1 = G_B12_0;
	}

IL_00ad:
	{
		if ((!(((float)G_B13_1) < ((float)((float)il2cpp_codegen_multiply(G_B13_0, (7.0f)))))))
		{
			goto IL_00ce;
		}
	}
	{
		// item.wheel.AddTorque(speed * item.speedMultiplier * Time.deltaTime);
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_28 = V_3;
		NullCheck(L_28);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_29 = L_28->___wheel_0;
		float L_30 = ___speed0;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_31 = V_3;
		NullCheck(L_31);
		float L_32 = L_31->___speedMultiplier_1;
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_29);
		Rigidbody2D_AddTorque_mB126101CF0ECA5CC8C284ED06132B24FD8885029(L_29, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_30, L_32)), L_33)), NULL);
	}

IL_00ce:
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d2:
	{
		// foreach (var item in axles)
		int32_t L_35 = V_2;
		AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* L_36 = V_1;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// }
		return;
	}
}
// System.Single Assets._2D_Car.Script.Car::GetVelocityMagnitudeForCarSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Car_GetVelocityMagnitudeForCarSound_mB8D06517353E0496FA696C6E0A2693DBA54E2A57 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CarPedal.PedalDown)
		bool L_0 = ((CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_StaticFields*)il2cpp_codegen_static_fields_for(CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_il2cpp_TypeInfo_var))->___PedalDown_10;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// var val = axles[0].wheel.angularVelocity < 0 ? axles[0].wheel.angularVelocity * -1 : axles[0].wheel.angularVelocity;
		AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* L_1 = __this->___axles_8;
		NullCheck(L_1);
		int32_t L_2 = 0;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = L_3->___wheel_0;
		NullCheck(L_4);
		float L_5;
		L_5 = Rigidbody2D_get_angularVelocity_mAD2505FB1F8C9E1A66D1EA8F8680D14380BFC58D(L_4, NULL);
		if ((((float)L_5) < ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* L_6 = __this->___axles_8;
		NullCheck(L_6);
		int32_t L_7 = 0;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = L_8->___wheel_0;
		NullCheck(L_9);
		float L_10;
		L_10 = Rigidbody2D_get_angularVelocity_mAD2505FB1F8C9E1A66D1EA8F8680D14380BFC58D(L_9, NULL);
		return L_10;
	}

IL_0033:
	{
		AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* L_11 = __this->___axles_8;
		NullCheck(L_11);
		int32_t L_12 = 0;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_14 = L_13->___wheel_0;
		NullCheck(L_14);
		float L_15;
		L_15 = Rigidbody2D_get_angularVelocity_mAD2505FB1F8C9E1A66D1EA8F8680D14380BFC58D(L_14, NULL);
		// return val;
		return ((float)il2cpp_codegen_multiply(L_15, (-1.0f)));
	}

IL_004c:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Single Assets._2D_Car.Script.Car::GetVelocityMagnitudeForSpeedBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Car_GetVelocityMagnitudeForSpeedBox_m052CBCA6EE351C037EE259E75CC43B1BB030F269 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) 
{
	{
		// var val = axles[0].wheel.angularVelocity < 0 ? axles[0].wheel.angularVelocity * -1 : axles[0].wheel.angularVelocity;
		AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* L_0 = __this->___axles_8;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = L_2->___wheel_0;
		NullCheck(L_3);
		float L_4;
		L_4 = Rigidbody2D_get_angularVelocity_mAD2505FB1F8C9E1A66D1EA8F8680D14380BFC58D(L_3, NULL);
		if ((((float)L_4) < ((float)(0.0f))))
		{
			goto IL_002c;
		}
	}
	{
		AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* L_5 = __this->___axles_8;
		NullCheck(L_5);
		int32_t L_6 = 0;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8 = L_7->___wheel_0;
		NullCheck(L_8);
		float L_9;
		L_9 = Rigidbody2D_get_angularVelocity_mAD2505FB1F8C9E1A66D1EA8F8680D14380BFC58D(L_8, NULL);
		return L_9;
	}

IL_002c:
	{
		AxleU5BU5D_tB762FB4B705AA673D654298147B080A840F60FFA* L_10 = __this->___axles_8;
		NullCheck(L_10);
		int32_t L_11 = 0;
		Axle_tE71752E414D64E1652A6028466793217B6D041E5* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_13 = L_12->___wheel_0;
		NullCheck(L_13);
		float L_14;
		L_14 = Rigidbody2D_get_angularVelocity_mAD2505FB1F8C9E1A66D1EA8F8680D14380BFC58D(L_13, NULL);
		// return val;
		return ((float)il2cpp_codegen_multiply(L_14, (-1.0f)));
	}
}
// System.Void Assets._2D_Car.Script.Car::Mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_Mute_mD7566A2484A6D8F9768E9F7484312C39BBF9BA43 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, bool ___IsMute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D_m1D030C5A136794BFDB631FDE4CBCF4E7941AE0B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var x = GetComponent<CarSfxHandler>();
		CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* L_0;
		L_0 = Component_GetComponent_TisCarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D_m1D030C5A136794BFDB631FDE4CBCF4E7941AE0B7(__this, Component_GetComponent_TisCarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D_m1D030C5A136794BFDB631FDE4CBCF4E7941AE0B7_RuntimeMethod_var);
		// x.CarMute(IsMute);
		bool L_1 = ___IsMute0;
		NullCheck(L_0);
		CarSfxHandler_CarMute_m89A1A6682DCCBE9867AE2DC08A2837A4CB6C9AD9(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.Car::FixPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_FixPosition_m05106CCF97C66FDBA0BE633AC6496AB691EFEDDC (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, bool ___IsFix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsFix)
		bool L_0 = ___IsFix0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		NullCheck(L_1);
		Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248(L_1, 2, NULL);
		return;
	}

IL_0010:
	{
		// GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		NullCheck(L_2);
		Rigidbody2D_set_bodyType_mE2FAC2D78B06B445BD2AD58F87AC5B1865B23248(L_2, 0, NULL);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.Car::SetWoldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_SetWoldCamera_m850D28FB16AC4648C8E499E3B02E5381C662D5E8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* L_0 = ((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// static_Canvas_CarOption_WorldCamera = camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___camera0;
		Car_set_static_Canvas_CarOption_WorldCamera_mBEBDCF05C9D2EB9D300BF819704ADE8E0489D2BB_inline(L_2, NULL);
		return;
	}

IL_0014:
	{
		// instance.Canvas_CarOption.GetComponent<Canvas>().worldCamera = camera;
		Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* L_3 = ((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___Canvas_CarOption_11;
		NullCheck(L_4);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5;
		L_5 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_4, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = ___camera0;
		NullCheck(L_5);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.Car::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car__ctor_m267C74205BC7B011052D982E1BDFCD4D349B2E21 (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) 
{
	{
		// float speed = 75;
		__this->___speed_6 = (75.0f);
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
// System.Void Assets._2D_Car.Script.Car/Axle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axle__ctor_m28D983344E687BE58F7262902FBF3F6C0B95BE73 (Axle_tE71752E414D64E1652A6028466793217B6D041E5* __this, const RuntimeMethod* method) 
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
// System.Void Assets._2D_Car.Script.CarPedal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarPedal_Start_m7FEA0B75F398C480306E1C7326B93A9D11ED2776 (CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E* __this, const RuntimeMethod* method) 
{
	{
		// graphicComponent.sprite = defaultGraphic;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___graphicComponent_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___defaultGraphic_5;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CarPedal::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarPedal_OnMouseDown_m38A5058991523D9B08BAD2B85475AFAB450E63A3 (CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isMousDown = true;
		__this->___isMousDown_9 = (bool)1;
		// graphicComponent.sprite = pressedGraphic;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___graphicComponent_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___pressedGraphic_6;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// PedalDown = true;
		((CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_StaticFields*)il2cpp_codegen_static_fields_for(CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_il2cpp_TypeInfo_var))->___PedalDown_10 = (bool)1;
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CarPedal::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarPedal_OnMouseUp_m56D9E5896F9D5170F0B1A3C414242AE8A1858EC8 (CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isMousDown = false;
		__this->___isMousDown_9 = (bool)0;
		// graphicComponent.sprite = defaultGraphic;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___graphicComponent_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___defaultGraphic_5;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// PedalDown = false;
		((CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_StaticFields*)il2cpp_codegen_static_fields_for(CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E_il2cpp_TypeInfo_var))->___PedalDown_10 = (bool)0;
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CarPedal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarPedal_Update_m0FD81D16D9827691DA9AA237F4948BAEB5DC2694 (CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E* __this, const RuntimeMethod* method) 
{
	{
		// if (isMousDown)
		bool L_0 = __this->___isMousDown_9;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// onMouse.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___onMouse_8;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CarPedal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarPedal__ctor_m7416E8B9EBA98170D819D897B98243B76E8E8099 (CarPedal_t258E0014FE80215EB4156C298B78A2F29042E82E* __this, const RuntimeMethod* method) 
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
// System.Void Assets._2D_Car.Script.CarSfxHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarSfxHandler_Awake_m6DD4861063EE3FEFCBD116D3A50ECF3EA76E0E18 (CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCar_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_m29D719BD4DEC058EE4CEFA4B1CD9AF52F3D2ED33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// car = GetComponentInParent<Car>();
		Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* L_0;
		L_0 = Component_GetComponentInParent_TisCar_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_m29D719BD4DEC058EE4CEFA4B1CD9AF52F3D2ED33(__this, Component_GetComponentInParent_TisCar_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_m29D719BD4DEC058EE4CEFA4B1CD9AF52F3D2ED33_RuntimeMethod_var);
		__this->___car_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___car_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CarSfxHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarSfxHandler_Start_mB099B5D70E4F16B12054DCCC18909A41E878AAF9 (CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CarSfxHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarSfxHandler_Update_m403B699B496F7F7DEA2826013E423321394DBEA0 (CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* __this, const RuntimeMethod* method) 
{
	{
		// if (!Mute)
		bool L_0 = __this->___Mute_7;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdateEngineSFX();
		CarSfxHandler_UpdateEngineSFX_m6F61C0DB23FCD2C1F97CE2C1AFF8309B8928C601(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CarSfxHandler::CarMute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarSfxHandler_CarMute_m89A1A6682DCCBE9867AE2DC08A2837A4CB6C9AD9 (CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* __this, bool ___IsMute0, const RuntimeMethod* method) 
{
	{
		// Mute = IsMute;
		bool L_0 = ___IsMute0;
		__this->___Mute_7 = L_0;
		// engineAudioSource.volume = 0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___engineAudioSource_4;
		NullCheck(L_1);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_1, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CarSfxHandler::UpdateEngineSFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarSfxHandler_UpdateEngineSFX_m6F61C0DB23FCD2C1F97CE2C1AFF8309B8928C601 (CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float velocityMagnitude = car.GetVelocityMagnitudeForCarSound();
		Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* L_0 = __this->___car_6;
		NullCheck(L_0);
		float L_1;
		L_1 = Car_GetVelocityMagnitudeForCarSound_mB8D06517353E0496FA696C6E0A2693DBA54E2A57(L_0, NULL);
		V_0 = L_1;
		// float desiredEngineVolume = velocityMagnitude * 0.05f;
		float L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_2, (0.0500000007f)));
		// desiredEngineVolume = Mathf.Clamp(desiredEngineVolume, 0.2f, 1.0f);
		float L_3 = V_1;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_3, (0.200000003f), (1.0f), NULL);
		V_1 = L_4;
		// engineAudioSource.volume = Mathf.Lerp(engineAudioSource.volume, desiredEngineVolume, Time.deltaTime * 10);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___engineAudioSource_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___engineAudioSource_4;
		NullCheck(L_6);
		float L_7;
		L_7 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_6, NULL);
		float L_8 = V_1;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_10;
		L_10 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_7, L_8, ((float)il2cpp_codegen_multiply(L_9, (10.0f))), NULL);
		NullCheck(L_5);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_5, L_10, NULL);
		// desiredEnginePitch = velocityMagnitude * 0.2f;
		float L_11 = V_0;
		__this->___desiredEnginePitch_5 = ((float)il2cpp_codegen_multiply(L_11, (0.200000003f)));
		// desiredEnginePitch = Mathf.Clamp(desiredEnginePitch, 0.5f, 2f);
		float L_12 = __this->___desiredEnginePitch_5;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_12, (0.5f), (2.0f), NULL);
		__this->___desiredEnginePitch_5 = L_13;
		// engineAudioSource.pitch = Mathf.Lerp(engineAudioSource.pitch, desiredEnginePitch, Time.deltaTime * 1.5f);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___engineAudioSource_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = __this->___engineAudioSource_4;
		NullCheck(L_15);
		float L_16;
		L_16 = AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863(L_15, NULL);
		float L_17 = __this->___desiredEnginePitch_5;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_19;
		L_19 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_16, L_17, ((float)il2cpp_codegen_multiply(L_18, (1.5f))), NULL);
		NullCheck(L_14);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_14, L_19, NULL);
		// }
		return;
	}
}
// System.Void Assets._2D_Car.Script.CarSfxHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarSfxHandler__ctor_mFBC8A6201D081B603EF997D71F0821B8B71D9B86 (CarSfxHandler_t2DD5342BB1A203755D138F21F3886D989602548D* __this, const RuntimeMethod* method) 
{
	{
		// float desiredEnginePitch = 0.5f;
		__this->___desiredEnginePitch_5 = (0.5f);
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
// System.String Assets._2D_Car.Script.IPManager::GetLocalIPv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPManager_GetLocalIPv4_m29998803B15DC2896DCC3AF3F60C56397DFE0D2F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_mF43AC4DE97842B5192459D10A671758DCB3F1695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetLocalIPv4U3Eb__0_0_m99CA3DFDAE5F1AB81FE8FEAA57834F60AD0985F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* G_B2_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* G_B2_1 = NULL;
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* G_B1_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* G_B1_1 = NULL;
	{
		// return Dns.GetHostEntry(Dns.GetHostName())
		// .AddressList.First(
		// f => f.AddressFamily == System.Net.Sockets.AddressFamily.InterNetwork)
		// .ToString();
		String_t* L_0;
		L_0 = Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083(NULL);
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_1;
		L_1 = Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53(L_0, NULL);
		NullCheck(L_1);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_2;
		L_2 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var);
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_3 = ((U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var);
		U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117* L_5 = ((U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_6 = (Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611*)il2cpp_codegen_object_new(Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m27F266C9FB9DFF776F57600B17D3F69C70D1A6D6(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CGetLocalIPv4U3Eb__0_0_m99CA3DFDAE5F1AB81FE8FEAA57834F60AD0985F0_RuntimeMethod_var), NULL);
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_7 = L_6;
		((U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002e:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8;
		L_8 = Enumerable_First_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_mF43AC4DE97842B5192459D10A671758DCB3F1695((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_First_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_mF43AC4DE97842B5192459D10A671758DCB3F1695_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.String Assets._2D_Car.Script.IPManager::GetIP(Assets._2D_Car.Script.ADDRESSFAM)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPManager_GetIP_m13F52FAA3843B8FAAE18534AC6093FA794A33DD1 (int32_t ___Addfam0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA218C3658C89562941B7435E73E48E2EDC26D9BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* V_4 = NULL;
	{
		// if (Addfam == ADDRESSFAM.IPv6 && !Socket.OSSupportsIPv6)
		int32_t L_0 = ___Addfam0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Socket_get_OSSupportsIPv6_mDF10C5F623BBCBB218599E9C4B1AE3E7EE2AB2CB(NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_000d:
	{
		// string output = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (NetworkInterface item in NetworkInterface.GetAllNetworkInterfaces())
		NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_2;
		L_2 = NetworkInterface_GetAllNetworkInterfaces_m4E5A4AAEED8B11868BDC8F78975460D9B6F3CD70(NULL);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0094;
	}

IL_001d:
	{
		// foreach (NetworkInterface item in NetworkInterface.GetAllNetworkInterfaces())
		NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
		NullCheck(L_6);
		IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_7;
		L_7 = VirtualFuncInvoker0< IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* >::Invoke(4 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_6);
		NullCheck(L_7);
		UnicastIPAddressInformationCollection_tB4D61C9127DFB4168CA3855020CCEB59B75C6EDA* L_8;
		L_8 = VirtualFuncInvoker0< UnicastIPAddressInformationCollection_tB4D61C9127DFB4168CA3855020CCEB59B75C6EDA* >::Invoke(4 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_8);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0086:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_3;
					if (!L_10)
					{
						goto IL_008f;
					}
				}
				{
					RuntimeObject* L_11 = V_3;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_008f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007c_1;
			}

IL_0032_1:
			{
				// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
				RuntimeObject* L_12 = V_3;
				NullCheck(L_12);
				UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_13;
				L_13 = InterfaceFuncInvoker0< UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_tA218C3658C89562941B7435E73E48E2EDC26D9BD_il2cpp_TypeInfo_var, L_12);
				V_4 = L_13;
				// if (Addfam == ADDRESSFAM.IPv4)
				int32_t L_14 = ___Addfam0;
				if (L_14)
				{
					goto IL_005b_1;
				}
			}
			{
				// if (ip.Address.AddressFamily == AddressFamily.InterNetwork)
				UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_15 = V_4;
				NullCheck(L_15);
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_16;
				L_16 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_15);
				NullCheck(L_16);
				int32_t L_17;
				L_17 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_16, NULL);
				if ((!(((uint32_t)L_17) == ((uint32_t)2))))
				{
					goto IL_007c_1;
				}
			}
			{
				// output = ip.Address.ToString();
				UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_18 = V_4;
				NullCheck(L_18);
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_19;
				L_19 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_18);
				NullCheck(L_19);
				String_t* L_20;
				L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
				V_0 = L_20;
				goto IL_007c_1;
			}

IL_005b_1:
			{
				// else if (Addfam == ADDRESSFAM.IPv6)
				int32_t L_21 = ___Addfam0;
				if ((!(((uint32_t)L_21) == ((uint32_t)1))))
				{
					goto IL_007c_1;
				}
			}
			{
				// if (ip.Address.AddressFamily == AddressFamily.InterNetworkV6)
				UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_22 = V_4;
				NullCheck(L_22);
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_23;
				L_23 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_22);
				NullCheck(L_23);
				int32_t L_24;
				L_24 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_23, NULL);
				if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)23)))))
				{
					goto IL_007c_1;
				}
			}
			{
				// output = ip.Address.ToString();
				UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_25 = V_4;
				NullCheck(L_25);
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_26;
				L_26 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_25);
				NullCheck(L_26);
				String_t* L_27;
				L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
				V_0 = L_27;
			}

IL_007c_1:
			{
				// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				if (L_29)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0090;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0090:
	{
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0094:
	{
		// foreach (NetworkInterface item in NetworkInterface.GetAllNetworkInterfaces())
		int32_t L_31 = V_2;
		NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// return output;
		String_t* L_33 = V_0;
		return L_33;
	}
}
// System.Void Assets._2D_Car.Script.IPManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPManager__ctor_mF71569E19B50A5F18F0172B4675EB26C929571D2 (IPManager_t5D7590FEB3525E9CA2DB68617BBD27AC0542BFCF* __this, const RuntimeMethod* method) 
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
// System.Void Assets._2D_Car.Script.IPManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m64AC488F2F191BFA50E29440BA208DC772141526 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117* L_0 = (U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117*)il2cpp_codegen_object_new(U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m214CB1B1AE163B6097D121EADE4F2DC42C2BDA40(L_0, NULL);
		((U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Assets._2D_Car.Script.IPManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m214CB1B1AE163B6097D121EADE4F2DC42C2BDA40 (U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Assets._2D_Car.Script.IPManager/<>c::<GetLocalIPv4>b__0_0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetLocalIPv4U3Eb__0_0_m99CA3DFDAE5F1AB81FE8FEAA57834F60AD0985F0 (U3CU3Ec_tEAE351D074C1CE9136F7D820AB99EDCE713C7117* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___f0, const RuntimeMethod* method) 
{
	{
		// f => f.AddressFamily == System.Net.Sockets.AddressFamily.InterNetwork)
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___f0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
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
// System.Void Assets._2D_Car.Script.Models.GameScoreApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameScoreApi__ctor_mBC1C7AB1068798F9EC7566FBC3E33C5D631CCEE8 (GameScoreApi_t9F7B63F8E6D0045D77F8B590C5084DC42AC7D19D* __this, const RuntimeMethod* method) 
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
// System.Void Assets._2D_Car.Script.Models.Log::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m6F2BC3C55F6C2BEB5B8AA69F11A9C1ACF1D7D408 (Log_t5D5803DA8C38443C718346ABCC45E5766F7E47B1* __this, const RuntimeMethod* method) 
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
// System.String Assets._2D_Car.Script.Models.PlayerInfo::get_gamerTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_get_gamerTag_m668A6121BB90CF0C58242019301F96048B34AA06 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91D5EEA318225B70BC7A287B49B802D858E164E);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteralE91D5EEA318225B70BC7A287B49B802D858E164E, NULL);
		String_t* L_2;
		L_2 = RealmValue_op_Explicit_m81AEFD38DE673AAA6A7B8B775C9919A601B6960B(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public string gamerTag { get; set; }
		String_t* L_3 = __this->___U3CgamerTagU3Ek__BackingField_2;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_gamerTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_gamerTag_m30C49DCE739395836AF563F197AD2EFF8F287FED (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91D5EEA318225B70BC7A287B49B802D858E164E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string gamerTag { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = ___value0;
		__this->___U3CgamerTagU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgamerTagU3Ek__BackingField_2), (void*)L_1);
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteralE91D5EEA318225B70BC7A287B49B802D858E164E, NULL);
		return;
	}

IL_001b:
	{
		String_t* L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA722CB03B3A73CAB13AA8DA0BF11D2965F1C5FB6(L_2, NULL);
		RealmObjectBase_SetValueUnique_m300F0A046E466A1C879226FF59CC62ED02BBCAF7(__this, _stringLiteralE91D5EEA318225B70BC7A287B49B802D858E164E, L_3, NULL);
		return;
	}
}
// System.String Assets._2D_Car.Script.Models.PlayerInfo::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_get_UserName_m1B7706AD5F4158D241D43E73044D59C1AD6411CB (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4AAC819B3CDF6979DEA784A5FE3F94A001675D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteralBD4AAC819B3CDF6979DEA784A5FE3F94A001675D, NULL);
		String_t* L_2;
		L_2 = RealmValue_op_Explicit_m81AEFD38DE673AAA6A7B8B775C9919A601B6960B(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public string UserName { get; set; }
		String_t* L_3 = __this->___U3CUserNameU3Ek__BackingField_3;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_UserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_UserName_mE2F99C62FA1BD42B1CCEDF0594A734799440AA85 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4AAC819B3CDF6979DEA784A5FE3F94A001675D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string UserName { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = ___value0;
		__this->___U3CUserNameU3Ek__BackingField_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_3), (void*)L_1);
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteralBD4AAC819B3CDF6979DEA784A5FE3F94A001675D, NULL);
		return;
	}

IL_001b:
	{
		String_t* L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA722CB03B3A73CAB13AA8DA0BF11D2965F1C5FB6(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteralBD4AAC819B3CDF6979DEA784A5FE3F94A001675D, L_3, NULL);
		return;
	}
}
// Realms.RealmInteger`1<System.Int32> Assets._2D_Car.Script.Models.PlayerInfo::get_Record()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 PlayerInfo_get_Record_m1F55C57FEF7546FD674C287C13B08473BEDAB92A (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1, NULL);
		RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 L_2;
		L_2 = RealmValue_op_Explicit_mC927090D4358CA939FE828FA17450771DBE3781C(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public RealmInteger<int> Record { get; set; }
		RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 L_3 = __this->___U3CRecordU3Ek__BackingField_4;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_Record(Realms.RealmInteger`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_Record_mA425BFEE366A9098E6F522AEFA4B89CF354B11F7 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RealmInteger<int> Record { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 L_1 = ___value0;
		__this->___U3CRecordU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CRecordU3Ek__BackingField_4))->____objectHandle_1), (void*)NULL);
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1, NULL);
		return;
	}

IL_001b:
	{
		RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mBCE3D4A8C76EAEC4F071FBFCD1121C0A1569D419(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1, L_3, NULL);
		return;
	}
}
// System.Int32 Assets._2D_Car.Script.Models.PlayerInfo::get_Coin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerInfo_get_Coin_mB0AC74DAC489DD4B63E944FD592AF74F057A39A5 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, NULL);
		int32_t L_2;
		L_2 = RealmValue_op_Explicit_m087397DC4D28EEC0E561A89AA8884547B02A5AE8(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public int Coin { get; set; }
		int32_t L_3 = __this->___U3CCoinU3Ek__BackingField_5;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_Coin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_Coin_m6A7E4E66B99DE05DB32A14129BADD736BDB7F927 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Coin { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___value0;
		__this->___U3CCoinU3Ek__BackingField_5 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, NULL);
		return;
	}

IL_001b:
	{
		int32_t L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_m4676448F81F769AF82C51B7BF80840FA9FE0BD43(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, L_3, NULL);
		return;
	}
}
// System.Int32 Assets._2D_Car.Script.Models.PlayerInfo::get_Dim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerInfo_get_Dim_m5041A82FCA895178991ADAF14C30E74C2479BFB7 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB21D9EB0CDECCD775DB2D6547A6CE2E24115B918);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteralB21D9EB0CDECCD775DB2D6547A6CE2E24115B918, NULL);
		int32_t L_2;
		L_2 = RealmValue_op_Explicit_m087397DC4D28EEC0E561A89AA8884547B02A5AE8(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public int Dim { get; set; }
		int32_t L_3 = __this->___U3CDimU3Ek__BackingField_6;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_Dim(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_Dim_mBF90E141BB5DCBA4CBD08ADC6B1844D05A9E1905 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB21D9EB0CDECCD775DB2D6547A6CE2E24115B918);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Dim { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___value0;
		__this->___U3CDimU3Ek__BackingField_6 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteralB21D9EB0CDECCD775DB2D6547A6CE2E24115B918, NULL);
		return;
	}

IL_001b:
	{
		int32_t L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_m4676448F81F769AF82C51B7BF80840FA9FE0BD43(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteralB21D9EB0CDECCD775DB2D6547A6CE2E24115B918, L_3, NULL);
		return;
	}
}
// System.String Assets._2D_Car.Script.Models.PlayerInfo::get_API_DB_userID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_get_API_DB_userID_m9D259B10D75834594253B35626225A715722FD18 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E3192B6351D53F16C57C0410BACAFA171D966AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral8E3192B6351D53F16C57C0410BACAFA171D966AC, NULL);
		String_t* L_2;
		L_2 = RealmValue_op_Explicit_m81AEFD38DE673AAA6A7B8B775C9919A601B6960B(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public string API_DB_userID { get; set; }
		String_t* L_3 = __this->___U3CAPI_DB_userIDU3Ek__BackingField_7;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_API_DB_userID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_API_DB_userID_mDBEF63ACDCD4200A6C796B7799B671516C656C59 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E3192B6351D53F16C57C0410BACAFA171D966AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string API_DB_userID { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = ___value0;
		__this->___U3CAPI_DB_userIDU3Ek__BackingField_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAPI_DB_userIDU3Ek__BackingField_7), (void*)L_1);
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral8E3192B6351D53F16C57C0410BACAFA171D966AC, NULL);
		return;
	}

IL_001b:
	{
		String_t* L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA722CB03B3A73CAB13AA8DA0BF11D2965F1C5FB6(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral8E3192B6351D53F16C57C0410BACAFA171D966AC, L_3, NULL);
		return;
	}
}
// System.Boolean Assets._2D_Car.Script.Models.PlayerInfo::get_GameMute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInfo_get_GameMute_m06B4197F1FC5B079077EB0E94E26EE1A51F3055F (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral538A136789A6F91CAA8E26DE1A5187831F9CDAC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral538A136789A6F91CAA8E26DE1A5187831F9CDAC7, NULL);
		bool L_2;
		L_2 = RealmValue_op_Explicit_m6747CBC4A9CE796995B793206D6BE1E22BB2B4C0(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public bool GameMute { get; set; }
		bool L_3 = __this->___U3CGameMuteU3Ek__BackingField_8;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_GameMute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_GameMute_m649ABF2D2A77F5DF93DF3E14B1476D868D8F1420 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral538A136789A6F91CAA8E26DE1A5187831F9CDAC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool GameMute { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = ___value0;
		__this->___U3CGameMuteU3Ek__BackingField_8 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral538A136789A6F91CAA8E26DE1A5187831F9CDAC7, NULL);
		return;
	}

IL_001b:
	{
		bool L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA788FBC1CC2441E831A19C240E95E15594E594ED(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral538A136789A6F91CAA8E26DE1A5187831F9CDAC7, L_3, NULL);
		return;
	}
}
// System.String Assets._2D_Car.Script.Models.PlayerInfo::get_Last_Stage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_get_Last_Stage_mE3BC5385DB5781E5B5CAA4DA5CFE66C2C380EFD5 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral036F200E9FDB7D21000859B77B5AF1CEDD78BD18);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral036F200E9FDB7D21000859B77B5AF1CEDD78BD18, NULL);
		String_t* L_2;
		L_2 = RealmValue_op_Explicit_m81AEFD38DE673AAA6A7B8B775C9919A601B6960B(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public string Last_Stage { get; set; }
		String_t* L_3 = __this->___U3CLast_StageU3Ek__BackingField_9;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_Last_Stage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_Last_Stage_mB7B780F3B83B72E593D4222A3E801DFD1ABADEC2 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral036F200E9FDB7D21000859B77B5AF1CEDD78BD18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Last_Stage { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = ___value0;
		__this->___U3CLast_StageU3Ek__BackingField_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLast_StageU3Ek__BackingField_9), (void*)L_1);
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral036F200E9FDB7D21000859B77B5AF1CEDD78BD18, NULL);
		return;
	}

IL_001b:
	{
		String_t* L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA722CB03B3A73CAB13AA8DA0BF11D2965F1C5FB6(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral036F200E9FDB7D21000859B77B5AF1CEDD78BD18, L_3, NULL);
		return;
	}
}
// System.String Assets._2D_Car.Script.Models.PlayerInfo::get_Last_Vehicle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInfo_get_Last_Vehicle_m4FD6224C4519846966A01A07157001D8E2A5A470 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9C200E0322EBE87821F45CC04C4E4D190CE7D41);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteralD9C200E0322EBE87821F45CC04C4E4D190CE7D41, NULL);
		String_t* L_2;
		L_2 = RealmValue_op_Explicit_m81AEFD38DE673AAA6A7B8B775C9919A601B6960B(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public string Last_Vehicle { get; set; }
		String_t* L_3 = __this->___U3CLast_VehicleU3Ek__BackingField_10;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_Last_Vehicle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_Last_Vehicle_m39A41890735C3A0E5B9ECC2788D5023A2F47AAB4 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9C200E0322EBE87821F45CC04C4E4D190CE7D41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Last_Vehicle { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = ___value0;
		__this->___U3CLast_VehicleU3Ek__BackingField_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLast_VehicleU3Ek__BackingField_10), (void*)L_1);
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteralD9C200E0322EBE87821F45CC04C4E4D190CE7D41, NULL);
		return;
	}

IL_001b:
	{
		String_t* L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA722CB03B3A73CAB13AA8DA0BF11D2965F1C5FB6(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteralD9C200E0322EBE87821F45CC04C4E4D190CE7D41, L_3, NULL);
		return;
	}
}
// System.Boolean Assets._2D_Car.Script.Models.PlayerInfo::get_ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInfo_get_ShowAd_mE2946E5EF1C826CBD835D6251F4B780E271BF679 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA9933AEA637696C28967097859DC522E6B344D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteralDEA9933AEA637696C28967097859DC522E6B344D, NULL);
		bool L_2;
		L_2 = RealmValue_op_Explicit_m6747CBC4A9CE796995B793206D6BE1E22BB2B4C0(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public bool ShowAd { get; set; }
		bool L_3 = __this->___U3CShowAdU3Ek__BackingField_11;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::set_ShowAd(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo_set_ShowAd_mC9A31714F4258356FFA38733B33DEFE6FE641450 (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA9933AEA637696C28967097859DC522E6B344D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool ShowAd { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = ___value0;
		__this->___U3CShowAdU3Ek__BackingField_11 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteralDEA9933AEA637696C28967097859DC522E6B344D, NULL);
		return;
	}

IL_001b:
	{
		bool L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA788FBC1CC2441E831A19C240E95E15594E594ED(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteralDEA9933AEA637696C28967097859DC522E6B344D, L_3, NULL);
		return;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_mE8CAF251BCBC10A1651AFF992C68170576085F1C (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* __this, const RuntimeMethod* method) 
{
	{
		RealmObject__ctor_mBA49C68637DD73B7611B8CD3496C4340AD5DE755(__this, NULL);
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
// Realms.IRealmObjectBase Assets._2D_Car.Script.Models.PlayerInfo/RealmHelper::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealmHelper_CreateInstance_m553F870F740717EE6D3C25958FE45005A1451271 (RealmHelper_tAD29E68697D12029F4B188332665583E332B4AD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_0 = (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA*)il2cpp_codegen_object_new(PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerInfo__ctor_mE8CAF251BCBC10A1651AFF992C68170576085F1C(L_0, NULL);
		return L_0;
	}
}
// Realms.ManagedAccessor Assets._2D_Car.Script.Models.PlayerInfo/RealmHelper::CreateAccessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedAccessor_t33EB06E7AD95873A682E1E680FCCEE50FC71B2E0* RealmHelper_CreateAccessor_mA8F32797C194716CBB2753B81214674798B46BF0 (RealmHelper_tAD29E68697D12029F4B188332665583E332B4AD4* __this, const RuntimeMethod* method) 
{
	{
		return (ManagedAccessor_t33EB06E7AD95873A682E1E680FCCEE50FC71B2E0*)NULL;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo/RealmHelper::CopyToRealm(Realms.IRealmObjectBase,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmHelper_CopyToRealm_m387E45DCA8C86E2FB70AE18A40D9F4C085EBB328 (RealmHelper_tAD29E68697D12029F4B188332665583E332B4AD4* __this, RuntimeObject* ___instance0, bool ___update1, bool ___skipDefaults2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___instance0;
		V_0 = ((PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA*)CastclassClass((RuntimeObject*)L_0, PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_il2cpp_TypeInfo_var));
		bool L_1 = ___skipDefaults2;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___U3CUserNameU3Ek__BackingField_3;
		if (!L_3)
		{
			goto IL_001e;
		}
	}

IL_0012:
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_4 = V_0;
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___U3CUserNameU3Ek__BackingField_3;
		NullCheck(L_4);
		PlayerInfo_set_UserName_mE2F99C62FA1BD42B1CCEDF0594A734799440AA85(L_4, L_6, NULL);
	}

IL_001e:
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_7 = V_0;
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_8 = V_0;
		NullCheck(L_8);
		RealmInteger_1_t7A45755AC070C8D1D4E796C608F195DD79D5EF44 L_9 = L_8->___U3CRecordU3Ek__BackingField_4;
		NullCheck(L_7);
		PlayerInfo_set_Record_mA425BFEE366A9098E6F522AEFA4B89CF354B11F7(L_7, L_9, NULL);
		bool L_10 = ___skipDefaults2;
		if (!L_10)
		{
			goto IL_0037;
		}
	}
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___U3CCoinU3Ek__BackingField_5;
		if (!L_12)
		{
			goto IL_0043;
		}
	}

IL_0037:
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_13 = V_0;
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___U3CCoinU3Ek__BackingField_5;
		NullCheck(L_13);
		PlayerInfo_set_Coin_m6A7E4E66B99DE05DB32A14129BADD736BDB7F927(L_13, L_15, NULL);
	}

IL_0043:
	{
		bool L_16 = ___skipDefaults2;
		if (!L_16)
		{
			goto IL_004f;
		}
	}
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___U3CDimU3Ek__BackingField_6;
		if (!L_18)
		{
			goto IL_005b;
		}
	}

IL_004f:
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_19 = V_0;
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___U3CDimU3Ek__BackingField_6;
		NullCheck(L_19);
		PlayerInfo_set_Dim_mBF90E141BB5DCBA4CBD08ADC6B1844D05A9E1905(L_19, L_21, NULL);
	}

IL_005b:
	{
		bool L_22 = ___skipDefaults2;
		if (!L_22)
		{
			goto IL_0067;
		}
	}
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24 = L_23->___U3CAPI_DB_userIDU3Ek__BackingField_7;
		if (!L_24)
		{
			goto IL_0073;
		}
	}

IL_0067:
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_25 = V_0;
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = L_26->___U3CAPI_DB_userIDU3Ek__BackingField_7;
		NullCheck(L_25);
		PlayerInfo_set_API_DB_userID_mDBEF63ACDCD4200A6C796B7799B671516C656C59(L_25, L_27, NULL);
	}

IL_0073:
	{
		bool L_28 = ___skipDefaults2;
		if (!L_28)
		{
			goto IL_007f;
		}
	}
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_29 = V_0;
		NullCheck(L_29);
		bool L_30 = L_29->___U3CGameMuteU3Ek__BackingField_8;
		if (!L_30)
		{
			goto IL_008b;
		}
	}

IL_007f:
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_31 = V_0;
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_32 = V_0;
		NullCheck(L_32);
		bool L_33 = L_32->___U3CGameMuteU3Ek__BackingField_8;
		NullCheck(L_31);
		PlayerInfo_set_GameMute_m649ABF2D2A77F5DF93DF3E14B1476D868D8F1420(L_31, L_33, NULL);
	}

IL_008b:
	{
		bool L_34 = ___skipDefaults2;
		if (!L_34)
		{
			goto IL_0097;
		}
	}
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = L_35->___U3CLast_StageU3Ek__BackingField_9;
		if (!L_36)
		{
			goto IL_00a3;
		}
	}

IL_0097:
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_37 = V_0;
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39 = L_38->___U3CLast_StageU3Ek__BackingField_9;
		NullCheck(L_37);
		PlayerInfo_set_Last_Stage_mB7B780F3B83B72E593D4222A3E801DFD1ABADEC2(L_37, L_39, NULL);
	}

IL_00a3:
	{
		bool L_40 = ___skipDefaults2;
		if (!L_40)
		{
			goto IL_00af;
		}
	}
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_41 = V_0;
		NullCheck(L_41);
		String_t* L_42 = L_41->___U3CLast_VehicleU3Ek__BackingField_10;
		if (!L_42)
		{
			goto IL_00bb;
		}
	}

IL_00af:
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_43 = V_0;
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_44 = V_0;
		NullCheck(L_44);
		String_t* L_45 = L_44->___U3CLast_VehicleU3Ek__BackingField_10;
		NullCheck(L_43);
		PlayerInfo_set_Last_Vehicle_m39A41890735C3A0E5B9ECC2788D5023A2F47AAB4(L_43, L_45, NULL);
	}

IL_00bb:
	{
		bool L_46 = ___skipDefaults2;
		if (!L_46)
		{
			goto IL_00c7;
		}
	}
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_47 = V_0;
		NullCheck(L_47);
		bool L_48 = L_47->___U3CShowAdU3Ek__BackingField_11;
		if (!L_48)
		{
			goto IL_00d3;
		}
	}

IL_00c7:
	{
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_49 = V_0;
		PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA* L_50 = V_0;
		NullCheck(L_50);
		bool L_51 = L_50->___U3CShowAdU3Ek__BackingField_11;
		NullCheck(L_49);
		PlayerInfo_set_ShowAd_mC9A31714F4258356FFA38733B33DEFE6FE641450(L_49, L_51, NULL);
	}

IL_00d3:
	{
		return;
	}
}
// System.Boolean Assets._2D_Car.Script.Models.PlayerInfo/RealmHelper::TryGetPrimaryKeyValue(Realms.IRealmObjectBase,Realms.RealmValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealmHelper_TryGetPrimaryKeyValue_mB185586DCD604A2A84B614EE9B25DC1E1CAA0A42 (RealmHelper_tAD29E68697D12029F4B188332665583E332B4AD4* __this, RuntimeObject* ___instance0, RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3* L_0 = ___value1;
		RuntimeObject* L_1 = ___instance0;
		NullCheck(((PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA*)CastclassClass((RuntimeObject*)L_1, PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = PlayerInfo_get_gamerTag_m668A6121BB90CF0C58242019301F96048B34AA06(((PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA*)CastclassClass((RuntimeObject*)L_1, PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_il2cpp_TypeInfo_var)), NULL);
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA722CB03B3A73CAB13AA8DA0BF11D2965F1C5FB6(L_2, NULL);
		*(RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____stringValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____dataValue_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____objectValue_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____objectHandle_4), (void*)NULL);
		#endif
		return (bool)1;
	}
}
// System.Void Assets._2D_Car.Script.Models.PlayerInfo/RealmHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmHelper__ctor_m5EEFB67DD39220CDE5EF4CBA815E8DA15462C6BC (RealmHelper_tAD29E68697D12029F4B188332665583E332B4AD4* __this, const RuntimeMethod* method) 
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
// System.Void Assets._2D_Car.Script.Models.PlayerInfoApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfoApi__ctor_m1DEB7C72B01B1981FECFC3A9F8DDBA436DEF5B48 (PlayerInfoApi_tF06D5D093B0DD188C80586E58C23814B9F23E78A* __this, const RuntimeMethod* method) 
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
// MongoDB.Bson.ObjectId Assets._2D_Car.Script.Models.RewardLog::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA RewardLog_get_Id_mC53A30C542318857A7E1F7059069BD6B7A10279E (RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, NULL);
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_2;
		L_2 = RealmValue_op_Explicit_m0FE77C5C2BFAD31CB51CE6AE187F464D272B4D9F(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_3 = __this->___U3CIdU3Ek__BackingField_2;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.RewardLog::set_Id(MongoDB.Bson.ObjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardLog_set_Id_m7B8F7903637FC1F895B227CF67EFB3566ABB9BD1 (RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* __this, ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_1 = ___value0;
		__this->___U3CIdU3Ek__BackingField_2 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, NULL);
		return;
	}

IL_001b:
	{
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA20509DB278E8CA78F4A95F0344A0C1A9D86B170(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, L_3, NULL);
		return;
	}
}
// System.DateTimeOffset Assets._2D_Car.Script.Models.RewardLog::get_Date()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 RewardLog_get_Date_m8272CAA6420310D2E32E04DA70E80D76A308307C (RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2;
		L_2 = RealmValue_op_Explicit_m1BE92DB7BFC4ECF97D2F2842AABE64DD65390CF3(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public DateTimeOffset Date { get; set; }
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_3 = __this->___U3CDateU3Ek__BackingField_3;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.RewardLog::set_Date(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardLog_set_Date_mB65A57931275B09B87F06AF6055CD663841D52E7 (RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DateTimeOffset Date { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1 = ___value0;
		__this->___U3CDateU3Ek__BackingField_3 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03, NULL);
		return;
	}

IL_001b:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_m8EAD10E46FF675A4AF7615FCE13C000D86F2C628(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03, L_3, NULL);
		return;
	}
}
// System.Void Assets._2D_Car.Script.Models.RewardLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardLog__ctor_m444AD8DB4DE45DAEF0BDE8B9F92A36B8919A8F76 (RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
		il2cpp_codegen_runtime_class_init_inline(ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA_il2cpp_TypeInfo_var);
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_0;
		L_0 = ObjectId_GenerateNewId_m02B974B84F8DA0AFBCB5B4387C1800B2A0A3C854(NULL);
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		RealmObject__ctor_mBA49C68637DD73B7611B8CD3496C4340AD5DE755(__this, NULL);
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
// Realms.IRealmObjectBase Assets._2D_Car.Script.Models.RewardLog/RealmHelper::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealmHelper_CreateInstance_mCAAE77E599F3C6894CE657129E202D50E2B0EA7B (RealmHelper_t3CDC7F374BB0E588A3FB3CB546A1D7A71AC89605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* L_0 = (RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611*)il2cpp_codegen_object_new(RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RewardLog__ctor_m444AD8DB4DE45DAEF0BDE8B9F92A36B8919A8F76(L_0, NULL);
		return L_0;
	}
}
// Realms.ManagedAccessor Assets._2D_Car.Script.Models.RewardLog/RealmHelper::CreateAccessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedAccessor_t33EB06E7AD95873A682E1E680FCCEE50FC71B2E0* RealmHelper_CreateAccessor_mCE5F334D6C24541F57E23AAE3AE52595DA97DCA7 (RealmHelper_t3CDC7F374BB0E588A3FB3CB546A1D7A71AC89605* __this, const RuntimeMethod* method) 
{
	{
		return (ManagedAccessor_t33EB06E7AD95873A682E1E680FCCEE50FC71B2E0*)NULL;
	}
}
// System.Void Assets._2D_Car.Script.Models.RewardLog/RealmHelper::CopyToRealm(Realms.IRealmObjectBase,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmHelper_CopyToRealm_mF6E9B226FDFA11B5184DAD29B088265906AFE82B (RealmHelper_t3CDC7F374BB0E588A3FB3CB546A1D7A71AC89605* __this, RuntimeObject* ___instance0, bool ___update1, bool ___skipDefaults2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___instance0;
		V_0 = ((RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611*)CastclassClass((RuntimeObject*)L_0, RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611_il2cpp_TypeInfo_var));
		RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* L_1 = V_0;
		RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* L_2 = V_0;
		NullCheck(L_2);
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_3 = L_2->___U3CIdU3Ek__BackingField_2;
		NullCheck(L_1);
		RewardLog_set_Id_m7B8F7903637FC1F895B227CF67EFB3566ABB9BD1(L_1, L_3, NULL);
		RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* L_4 = V_0;
		RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611* L_5 = V_0;
		NullCheck(L_5);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_6 = L_5->___U3CDateU3Ek__BackingField_3;
		NullCheck(L_4);
		RewardLog_set_Date_mB65A57931275B09B87F06AF6055CD663841D52E7(L_4, L_6, NULL);
		return;
	}
}
// System.Boolean Assets._2D_Car.Script.Models.RewardLog/RealmHelper::TryGetPrimaryKeyValue(Realms.IRealmObjectBase,Realms.RealmValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealmHelper_TryGetPrimaryKeyValue_m8EF0F35F2BF8943DE10A08D8B6953E7DBC2BCD4E (RealmHelper_t3CDC7F374BB0E588A3FB3CB546A1D7A71AC89605* __this, RuntimeObject* ___instance0, RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3* ___value1, const RuntimeMethod* method) 
{
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3* L_0 = ___value1;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmValue_get_Null_mF1558CD541617C7740E2A03B4E683A42401A4C17(NULL);
		*(RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____stringValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____dataValue_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____objectValue_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____objectHandle_4), (void*)NULL);
		#endif
		return (bool)0;
	}
}
// System.Void Assets._2D_Car.Script.Models.RewardLog/RealmHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmHelper__ctor_m3BB47F77FF173E7279531B5E1BF1D778362899BC (RealmHelper_t3CDC7F374BB0E588A3FB3CB546A1D7A71AC89605* __this, const RuntimeMethod* method) 
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
// MongoDB.Bson.ObjectId Assets._2D_Car.Script.Models.StageStatus::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA StageStatus_get_Id_mBBF3E3693F260DBDA4E6205D483D131C1331A3AA (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, NULL);
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_2;
		L_2 = RealmValue_op_Explicit_m0FE77C5C2BFAD31CB51CE6AE187F464D272B4D9F(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_3 = __this->___U3CIdU3Ek__BackingField_2;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.StageStatus::set_Id(MongoDB.Bson.ObjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageStatus_set_Id_m5DC329D3CDFABB1665239EFAE4FD4384FD146AC6 (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_1 = ___value0;
		__this->___U3CIdU3Ek__BackingField_2 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, NULL);
		return;
	}

IL_001b:
	{
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA20509DB278E8CA78F4A95F0344A0C1A9D86B170(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, L_3, NULL);
		return;
	}
}
// System.String Assets._2D_Car.Script.Models.StageStatus::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StageStatus_get_Name_m490C2A93A369DA26AD6FA46D72B68D6C2CD1E4A9 (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, NULL);
		String_t* L_2;
		L_2 = RealmValue_op_Explicit_m81AEFD38DE673AAA6A7B8B775C9919A601B6960B(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public string Name { get; set; }
		String_t* L_3 = __this->___U3CNameU3Ek__BackingField_3;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.StageStatus::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageStatus_set_Name_m537BC4E0C913147B5E8E6C3E0B4AECD721DE4ACA (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Name { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = ___value0;
		__this->___U3CNameU3Ek__BackingField_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_3), (void*)L_1);
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, NULL);
		return;
	}

IL_001b:
	{
		String_t* L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA722CB03B3A73CAB13AA8DA0BF11D2965F1C5FB6(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, L_3, NULL);
		return;
	}
}
// System.Boolean Assets._2D_Car.Script.Models.StageStatus::get_Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StageStatus_get_Lock_m5E33C2C86CED1743D26C247E1BF296F1A038F459 (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E, NULL);
		bool L_2;
		L_2 = RealmValue_op_Explicit_m6747CBC4A9CE796995B793206D6BE1E22BB2B4C0(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public bool Lock { get; set; }
		bool L_3 = __this->___U3CLockU3Ek__BackingField_4;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.StageStatus::set_Lock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageStatus_set_Lock_mCF24894C798F33D1867CBDF1231AB1FC950CB67F (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Lock { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = ___value0;
		__this->___U3CLockU3Ek__BackingField_4 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E, NULL);
		return;
	}

IL_001b:
	{
		bool L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA788FBC1CC2441E831A19C240E95E15594E594ED(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E, L_3, NULL);
		return;
	}
}
// System.Void Assets._2D_Car.Script.Models.StageStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageStatus__ctor_m0560AEED25DEEC1AE492DBE49421BCE094E9050A (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
		il2cpp_codegen_runtime_class_init_inline(ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA_il2cpp_TypeInfo_var);
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_0;
		L_0 = ObjectId_GenerateNewId_m02B974B84F8DA0AFBCB5B4387C1800B2A0A3C854(NULL);
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		RealmObject__ctor_mBA49C68637DD73B7611B8CD3496C4340AD5DE755(__this, NULL);
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
// Realms.IRealmObjectBase Assets._2D_Car.Script.Models.StageStatus/RealmHelper::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealmHelper_CreateInstance_m5BA97467163EF7F18A548E3505B43B0CC5D90267 (RealmHelper_tFB6B63BACDEB5C30F6F57758586F5325BE5B9037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* L_0 = (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B*)il2cpp_codegen_object_new(StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StageStatus__ctor_m0560AEED25DEEC1AE492DBE49421BCE094E9050A(L_0, NULL);
		return L_0;
	}
}
// Realms.ManagedAccessor Assets._2D_Car.Script.Models.StageStatus/RealmHelper::CreateAccessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedAccessor_t33EB06E7AD95873A682E1E680FCCEE50FC71B2E0* RealmHelper_CreateAccessor_mBC0D69AD106008A41415DCCBC1CCC02F7E47AE04 (RealmHelper_tFB6B63BACDEB5C30F6F57758586F5325BE5B9037* __this, const RuntimeMethod* method) 
{
	{
		return (ManagedAccessor_t33EB06E7AD95873A682E1E680FCCEE50FC71B2E0*)NULL;
	}
}
// System.Void Assets._2D_Car.Script.Models.StageStatus/RealmHelper::CopyToRealm(Realms.IRealmObjectBase,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmHelper_CopyToRealm_m8E7D3A22A346DF6AC128B210B417373610CF943C (RealmHelper_tFB6B63BACDEB5C30F6F57758586F5325BE5B9037* __this, RuntimeObject* ___instance0, bool ___update1, bool ___skipDefaults2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___instance0;
		V_0 = ((StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B*)CastclassClass((RuntimeObject*)L_0, StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B_il2cpp_TypeInfo_var));
		StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* L_1 = V_0;
		StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* L_2 = V_0;
		NullCheck(L_2);
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_3 = L_2->___U3CIdU3Ek__BackingField_2;
		NullCheck(L_1);
		StageStatus_set_Id_m5DC329D3CDFABB1665239EFAE4FD4384FD146AC6(L_1, L_3, NULL);
		bool L_4 = ___skipDefaults2;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___U3CNameU3Ek__BackingField_3;
		if (!L_6)
		{
			goto IL_002b;
		}
	}

IL_001f:
	{
		StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* L_7 = V_0;
		StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___U3CNameU3Ek__BackingField_3;
		NullCheck(L_7);
		StageStatus_set_Name_m537BC4E0C913147B5E8E6C3E0B4AECD721DE4ACA(L_7, L_9, NULL);
	}

IL_002b:
	{
		bool L_10 = ___skipDefaults2;
		if (!L_10)
		{
			goto IL_0037;
		}
	}
	{
		StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___U3CLockU3Ek__BackingField_4;
		if (!L_12)
		{
			goto IL_0043;
		}
	}

IL_0037:
	{
		StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* L_13 = V_0;
		StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B* L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = L_14->___U3CLockU3Ek__BackingField_4;
		NullCheck(L_13);
		StageStatus_set_Lock_mCF24894C798F33D1867CBDF1231AB1FC950CB67F(L_13, L_15, NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Boolean Assets._2D_Car.Script.Models.StageStatus/RealmHelper::TryGetPrimaryKeyValue(Realms.IRealmObjectBase,Realms.RealmValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealmHelper_TryGetPrimaryKeyValue_m8BA7EC136A365B2FAFDF36044598E9CED8BF0AD6 (RealmHelper_tFB6B63BACDEB5C30F6F57758586F5325BE5B9037* __this, RuntimeObject* ___instance0, RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3* ___value1, const RuntimeMethod* method) 
{
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3* L_0 = ___value1;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmValue_get_Null_mF1558CD541617C7740E2A03B4E683A42401A4C17(NULL);
		*(RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____stringValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____dataValue_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____objectValue_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____objectHandle_4), (void*)NULL);
		#endif
		return (bool)0;
	}
}
// System.Void Assets._2D_Car.Script.Models.StageStatus/RealmHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmHelper__ctor_mE44F0EEA6DDB7687FABEE998E4BC1D1A4EC7740F (RealmHelper_tFB6B63BACDEB5C30F6F57758586F5325BE5B9037* __this, const RuntimeMethod* method) 
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
// System.Void Assets._2D_Car.Script.Models.TopScoreList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TopScoreList__ctor_m7A34D9D9F66F08868B0B5AFC5D78A601FADBCE11 (TopScoreList_t47D048D3C0AF621ED57844EFD68F41D23C289514* __this, const RuntimeMethod* method) 
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
// System.Void Assets._2D_Car.Script.Models.TopScoreViewModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TopScoreViewModel__ctor_m9346420E362ACF85205A1DAD8B4AE7225070C592 (TopScoreViewModel_t61910B427857717F74B6B94C530069310A5D6119* __this, const RuntimeMethod* method) 
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
// MongoDB.Bson.ObjectId Assets._2D_Car.Script.Models.VehicleStatus::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA VehicleStatus_get_Id_m2E3BC3AD425034D8D92C92A06860A962DC1B6510 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, NULL);
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_2;
		L_2 = RealmValue_op_Explicit_m0FE77C5C2BFAD31CB51CE6AE187F464D272B4D9F(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_3 = __this->___U3CIdU3Ek__BackingField_2;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_Id(MongoDB.Bson.ObjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_Id_m64D9E007FF85EA951085364A7520B28C49831921 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_1 = ___value0;
		__this->___U3CIdU3Ek__BackingField_2 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, NULL);
		return;
	}

IL_001b:
	{
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA20509DB278E8CA78F4A95F0344A0C1A9D86B170(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteralBFF9324A7A4DB3E1D645999C8B9E2DA54472D42C, L_3, NULL);
		return;
	}
}
// System.String Assets._2D_Car.Script.Models.VehicleStatus::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VehicleStatus_get_Name_m25D7FEB5F7A333B86E9D7BE59AC839CA048B0B41 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, NULL);
		String_t* L_2;
		L_2 = RealmValue_op_Explicit_m81AEFD38DE673AAA6A7B8B775C9919A601B6960B(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public string Name { get; set; }
		String_t* L_3 = __this->___U3CNameU3Ek__BackingField_3;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_Name_m93C8AB9B174557F39B024FF4A21B5651B524347F (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Name { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = ___value0;
		__this->___U3CNameU3Ek__BackingField_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_3), (void*)L_1);
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, NULL);
		return;
	}

IL_001b:
	{
		String_t* L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA722CB03B3A73CAB13AA8DA0BF11D2965F1C5FB6(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, L_3, NULL);
		return;
	}
}
// System.Boolean Assets._2D_Car.Script.Models.VehicleStatus::get_Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VehicleStatus_get_Lock_mB19706C7F9E357BF54213C22D19BF99183D81E07 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E, NULL);
		bool L_2;
		L_2 = RealmValue_op_Explicit_m6747CBC4A9CE796995B793206D6BE1E22BB2B4C0(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public bool Lock { get; set; }
		bool L_3 = __this->___U3CLockU3Ek__BackingField_4;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_Lock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_Lock_m183DD635277C5A3771974A078FE269DFDAE40BDC (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Lock { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = ___value0;
		__this->___U3CLockU3Ek__BackingField_4 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E, NULL);
		return;
	}

IL_001b:
	{
		bool L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_mA788FBC1CC2441E831A19C240E95E15594E594ED(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral7BB4A364AF6F122C72F55215DB2B223E9F1F576E, L_3, NULL);
		return;
	}
}
// System.Int32 Assets._2D_Car.Script.Models.VehicleStatus::get_TuneLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VehicleStatus_get_TuneLevel_m193BE185A9616E83217481E951D6EE4C034D5008 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral761896019B38F8CF6AD720BD3BAF4228C3AD2607);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral761896019B38F8CF6AD720BD3BAF4228C3AD2607, NULL);
		int32_t L_2;
		L_2 = RealmValue_op_Explicit_m087397DC4D28EEC0E561A89AA8884547B02A5AE8(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public int TuneLevel { get; set; }
		int32_t L_3 = __this->___U3CTuneLevelU3Ek__BackingField_5;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_TuneLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_TuneLevel_m6A4F326ED9642C658E76AB503AF29AC9C36A4583 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral761896019B38F8CF6AD720BD3BAF4228C3AD2607);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int TuneLevel { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___value0;
		__this->___U3CTuneLevelU3Ek__BackingField_5 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral761896019B38F8CF6AD720BD3BAF4228C3AD2607, NULL);
		return;
	}

IL_001b:
	{
		int32_t L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_m4676448F81F769AF82C51B7BF80840FA9FE0BD43(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral761896019B38F8CF6AD720BD3BAF4228C3AD2607, L_3, NULL);
		return;
	}
}
// System.Int32 Assets._2D_Car.Script.Models.VehicleStatus::get_TuneLevelUserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VehicleStatus_get_TuneLevelUserSave_m8007E6F2F401F8D3C4E825E35A72902DA06828B2 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74E63724C8C7B7E3B096A909844EA27AE9D7E338);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral74E63724C8C7B7E3B096A909844EA27AE9D7E338, NULL);
		int32_t L_2;
		L_2 = RealmValue_op_Explicit_m087397DC4D28EEC0E561A89AA8884547B02A5AE8(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public int TuneLevelUserSave { get; set; }
		int32_t L_3 = __this->___U3CTuneLevelUserSaveU3Ek__BackingField_6;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_TuneLevelUserSave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_TuneLevelUserSave_m80838F9F3D8903EBC3EF03A40D781F2B0FBC46DC (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74E63724C8C7B7E3B096A909844EA27AE9D7E338);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int TuneLevelUserSave { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___value0;
		__this->___U3CTuneLevelUserSaveU3Ek__BackingField_6 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral74E63724C8C7B7E3B096A909844EA27AE9D7E338, NULL);
		return;
	}

IL_001b:
	{
		int32_t L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_m4676448F81F769AF82C51B7BF80840FA9FE0BD43(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral74E63724C8C7B7E3B096A909844EA27AE9D7E338, L_3, NULL);
		return;
	}
}
// System.Int32 Assets._2D_Car.Script.Models.VehicleStatus::get_BestRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VehicleStatus_get_BestRecord_m33DE7CBE67B65C9D7B77623B3A50541D89D1CB64 (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral178F981917FFDDA02A2F99BE1867769B08DCEAD6);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmObjectBase_GetValue_m42E6FD0194972FBA2A431EF83EE8ADC478B5F9B7(__this, _stringLiteral178F981917FFDDA02A2F99BE1867769B08DCEAD6, NULL);
		int32_t L_2;
		L_2 = RealmValue_op_Explicit_m087397DC4D28EEC0E561A89AA8884547B02A5AE8(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// public int BestRecord { get; set; }
		int32_t L_3 = __this->___U3CBestRecordU3Ek__BackingField_7;
		return L_3;
	}
}
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::set_BestRecord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus_set_BestRecord_mC131A24D17B61714392B47ADC004F3CBF9F051EF (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral178F981917FFDDA02A2F99BE1867769B08DCEAD6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int BestRecord { get; set; }
		bool L_0;
		L_0 = RealmObjectBase_get_IsManaged_m8C2A45455EDCA07650783C7FF317D3F331EF3DD7(__this, NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___value0;
		__this->___U3CBestRecordU3Ek__BackingField_7 = L_1;
		RealmObjectBase_RaisePropertyChanged_m439DAD55ABDD42AF519B46EC6DB25C721CB3DB19(__this, _stringLiteral178F981917FFDDA02A2F99BE1867769B08DCEAD6, NULL);
		return;
	}

IL_001b:
	{
		int32_t L_2 = ___value0;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_3;
		L_3 = RealmValue_op_Implicit_m4676448F81F769AF82C51B7BF80840FA9FE0BD43(L_2, NULL);
		RealmObjectBase_SetValue_m8B0C4DEE5EFD6D674487F5AF4276990914969DF3(__this, _stringLiteral178F981917FFDDA02A2F99BE1867769B08DCEAD6, L_3, NULL);
		return;
	}
}
// System.Void Assets._2D_Car.Script.Models.VehicleStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleStatus__ctor_mCC2C4C844F067B405D496FA08D37049B18BC8D0C (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
		il2cpp_codegen_runtime_class_init_inline(ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA_il2cpp_TypeInfo_var);
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_0;
		L_0 = ObjectId_GenerateNewId_m02B974B84F8DA0AFBCB5B4387C1800B2A0A3C854(NULL);
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		RealmObject__ctor_mBA49C68637DD73B7611B8CD3496C4340AD5DE755(__this, NULL);
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
// Realms.IRealmObjectBase Assets._2D_Car.Script.Models.VehicleStatus/RealmHelper::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealmHelper_CreateInstance_mA87C6D0D85C4761D65B54C2B8914D46171C4859A (RealmHelper_t55AA9A97B0F56716809DDAC1B945FF3772F8E447* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_0 = (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9*)il2cpp_codegen_object_new(VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VehicleStatus__ctor_mCC2C4C844F067B405D496FA08D37049B18BC8D0C(L_0, NULL);
		return L_0;
	}
}
// Realms.ManagedAccessor Assets._2D_Car.Script.Models.VehicleStatus/RealmHelper::CreateAccessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedAccessor_t33EB06E7AD95873A682E1E680FCCEE50FC71B2E0* RealmHelper_CreateAccessor_mE48836269773EF0BEC2F6CF6976355E354148962 (RealmHelper_t55AA9A97B0F56716809DDAC1B945FF3772F8E447* __this, const RuntimeMethod* method) 
{
	{
		return (ManagedAccessor_t33EB06E7AD95873A682E1E680FCCEE50FC71B2E0*)NULL;
	}
}
// System.Void Assets._2D_Car.Script.Models.VehicleStatus/RealmHelper::CopyToRealm(Realms.IRealmObjectBase,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmHelper_CopyToRealm_m8A070BC317857001D58CEDE93CD62D7EEF02DE53 (RealmHelper_t55AA9A97B0F56716809DDAC1B945FF3772F8E447* __this, RuntimeObject* ___instance0, bool ___update1, bool ___skipDefaults2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___instance0;
		V_0 = ((VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9*)CastclassClass((RuntimeObject*)L_0, VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9_il2cpp_TypeInfo_var));
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_1 = V_0;
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_2 = V_0;
		NullCheck(L_2);
		ObjectId_t79DF36D00B632135693BD4EE588AC0B1B816C2EA L_3 = L_2->___U3CIdU3Ek__BackingField_2;
		NullCheck(L_1);
		VehicleStatus_set_Id_m64D9E007FF85EA951085364A7520B28C49831921(L_1, L_3, NULL);
		bool L_4 = ___skipDefaults2;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___U3CNameU3Ek__BackingField_3;
		if (!L_6)
		{
			goto IL_002b;
		}
	}

IL_001f:
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_7 = V_0;
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___U3CNameU3Ek__BackingField_3;
		NullCheck(L_7);
		VehicleStatus_set_Name_m93C8AB9B174557F39B024FF4A21B5651B524347F(L_7, L_9, NULL);
	}

IL_002b:
	{
		bool L_10 = ___skipDefaults2;
		if (!L_10)
		{
			goto IL_0037;
		}
	}
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->___U3CLockU3Ek__BackingField_4;
		if (!L_12)
		{
			goto IL_0043;
		}
	}

IL_0037:
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_13 = V_0;
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = L_14->___U3CLockU3Ek__BackingField_4;
		NullCheck(L_13);
		VehicleStatus_set_Lock_m183DD635277C5A3771974A078FE269DFDAE40BDC(L_13, L_15, NULL);
	}

IL_0043:
	{
		bool L_16 = ___skipDefaults2;
		if (!L_16)
		{
			goto IL_004f;
		}
	}
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___U3CTuneLevelU3Ek__BackingField_5;
		if (!L_18)
		{
			goto IL_005b;
		}
	}

IL_004f:
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_19 = V_0;
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___U3CTuneLevelU3Ek__BackingField_5;
		NullCheck(L_19);
		VehicleStatus_set_TuneLevel_m6A4F326ED9642C658E76AB503AF29AC9C36A4583(L_19, L_21, NULL);
	}

IL_005b:
	{
		bool L_22 = ___skipDefaults2;
		if (!L_22)
		{
			goto IL_0067;
		}
	}
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___U3CTuneLevelUserSaveU3Ek__BackingField_6;
		if (!L_24)
		{
			goto IL_0073;
		}
	}

IL_0067:
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_25 = V_0;
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___U3CTuneLevelUserSaveU3Ek__BackingField_6;
		NullCheck(L_25);
		VehicleStatus_set_TuneLevelUserSave_m80838F9F3D8903EBC3EF03A40D781F2B0FBC46DC(L_25, L_27, NULL);
	}

IL_0073:
	{
		bool L_28 = ___skipDefaults2;
		if (!L_28)
		{
			goto IL_007f;
		}
	}
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->___U3CBestRecordU3Ek__BackingField_7;
		if (!L_30)
		{
			goto IL_008b;
		}
	}

IL_007f:
	{
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_31 = V_0;
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___U3CBestRecordU3Ek__BackingField_7;
		NullCheck(L_31);
		VehicleStatus_set_BestRecord_mC131A24D17B61714392B47ADC004F3CBF9F051EF(L_31, L_33, NULL);
	}

IL_008b:
	{
		return;
	}
}
// System.Boolean Assets._2D_Car.Script.Models.VehicleStatus/RealmHelper::TryGetPrimaryKeyValue(Realms.IRealmObjectBase,Realms.RealmValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealmHelper_TryGetPrimaryKeyValue_mDEC0CB67BF0A6DFEE7D1E6EA577CCF8A678A41EC (RealmHelper_t55AA9A97B0F56716809DDAC1B945FF3772F8E447* __this, RuntimeObject* ___instance0, RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3* ___value1, const RuntimeMethod* method) 
{
	{
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3* L_0 = ___value1;
		RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3 L_1;
		L_1 = RealmValue_get_Null_mF1558CD541617C7740E2A03B4E683A42401A4C17(NULL);
		*(RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____stringValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____dataValue_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____objectValue_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((RealmValue_tA7D5AB9D345C4DFA7391F9DFBEB40F6A64D688F3*)L_0)->____objectHandle_4), (void*)NULL);
		#endif
		return (bool)0;
	}
}
// System.Void Assets._2D_Car.Script.Models.VehicleStatus/RealmHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmHelper__ctor_mEEB54560BD742D7DF879D78893C430F6E31EC563 (RealmHelper_t55AA9A97B0F56716809DDAC1B945FF3772F8E447* __this, const RuntimeMethod* method) 
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
// System.Void PropertyChanged.DoNotNotifyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoNotNotifyAttribute__ctor_m9B4E17379FBAB9411FFDCAC0493791E1D7E7F1FF (DoNotNotifyAttribute_tCA2066BDD8DBA48327C1C32DE65017C57E7DF816* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void RealmModuleInitializer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealmModuleInitializer_Initialize_mC753955FD4DCDC9971840B92049613BC0E3FE0C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealmSchema_tC4E54035741556C8101BA6B9C2D4A036A3D903F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (PlayerInfo_t38AD8D6BEED0EC0F5C26BE529CABF19564DA64BA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)0)), (Type_t*)L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (RewardLog_t6A47BD2C201EA0C79C3BC163CA65A2AACF628611_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)1)), (Type_t*)L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (StageStatus_tB7AA66F16EE2D2E620757E41D10381B87CCC4B2B_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)2)), (Type_t*)L_9);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = L_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)3)), (Type_t*)L_12);
		il2cpp_codegen_runtime_class_init_inline(RealmSchema_tC4E54035741556C8101BA6B9C2D4A036A3D903F0_il2cpp_TypeInfo_var);
		RealmSchema_AddDefaultTypes_m81DAC6B28723C24A92B7594DAC897E577D9D43AA((RuntimeObject*)L_10, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* UserMetadata_get_Interests_mA2416275695DE40377E9A6DCB2EB49A25DAFBB38_inline (UserMetadata_t84707C000E8C03430077421D71D30816B3293915* __this, const RuntimeMethod* method) 
{
	{
		// return _interests;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____interests_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_set_Add_Z_Value_mE9CC3FFA0D165A27049D8FE12224220B5AA0EA1E_inline (CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Add_Z_Value { get; set; }
		float L_0 = ___value0;
		__this->___U3CAdd_Z_ValueU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraFollow_get_Add_Z_Value_m0B7B3F5A6C7E473218C613B86C41E519035611B1_inline (CameraFollow_tF171C76AFB5D9D42E27A61F1EB4DA10D2DE6BBFE* __this, const RuntimeMethod* method) 
{
	{
		// public float Add_Z_Value { get; set; }
		float L_0 = __this->___U3CAdd_Z_ValueU3Ek__BackingField_10;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Car_get_static_Canvas_CarOption_WorldCamera_mDC482D878D8F3BBB7F3CAD69EF7BC916E5B50D06_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Camera static_Canvas_CarOption_WorldCamera { get; set; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___U3Cstatic_Canvas_CarOption_WorldCameraU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Car_set_ItemDb_m86AFA7933F1C3E90422EF2BE76600C05219D5679_inline (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* ___value0, const RuntimeMethod* method) 
{
	{
		// public VehicleStatus ItemDb { get; set; }
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_0 = ___value0;
		__this->___U3CItemDbU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CItemDbU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* Car_get_ItemDb_m72879FDB181C55A33F59B818AB4C77E78C3F8870_inline (Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C* __this, const RuntimeMethod* method) 
{
	{
		// public VehicleStatus ItemDb { get; set; }
		VehicleStatus_tBD04B83D3D3D7D1F174CB00992B75DBBA8B20FB9* L_0 = __this->___U3CItemDbU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Car_set_static_Canvas_CarOption_WorldCamera_mBEBDCF05C9D2EB9D300BF819704ADE8E0489D2BB_inline (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Camera static_Canvas_CarOption_WorldCamera { get; set; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___value0;
		((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___U3Cstatic_Canvas_CarOption_WorldCameraU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_StaticFields*)il2cpp_codegen_static_fields_for(Car_t12E1EBAAB9F126C1239D8B7146B235C41D87C34C_il2cpp_TypeInfo_var))->___U3Cstatic_Canvas_CarOption_WorldCameraU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) 
{
	{
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_0 = __this->___addressList_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
