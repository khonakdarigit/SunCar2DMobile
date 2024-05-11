#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2*, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Func`3<System.Type,System.Type[],System.Type>
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7;
// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader>
struct List_1_tD698B2A66D241B0EFFAE6CE4A7882E6E7B3457D3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader
struct AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper
struct AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings
struct AdaptivePerformanceManagerSettings_t825765630D775605D6E53BE60D90E50CCDDF30C2;
// Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator
struct AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588;
// Remotion.Linq.Clauses.ResultOperators.AggregateResultOperator
struct AggregateResultOperator_t6F17C3EC0EC172B96B31A4210508090D6910D83E;
// Remotion.Linq.Clauses.ResultOperators.AllResultOperator
struct AllResultOperator_t65CDD249101BE553D69C2587B23F31A7AA617DF9;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// UnityEngine.ISubsystem
struct ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MissingMethodException
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155;
// System.MonoTypeInfo
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
// Remotion.Linq.Clauses.ResultOperatorBase
struct ResultOperatorBase_tF12E5C0C14644C21FCF2A946F9DC2BDCBB7771E7;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Remotion.Linq.Clauses.StreamedData.StreamedSequence
struct StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25;
// Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo
struct StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378;
// Remotion.Linq.Clauses.StreamedData.StreamedValue
struct StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2;
// Remotion.Linq.Clauses.StreamedData.StreamedValueInfo
struct StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AdaptivePerformanceManagerSettings_t825765630D775605D6E53BE60D90E50CCDDF30C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E;
IL2CPP_EXTERN_C String_t* _stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C;
IL2CPP_EXTERN_C String_t* _stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D;
IL2CPP_EXTERN_C const RuntimeMethod* Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Activator_CreateInstance_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2E0658E7FAF19B9ED6D30C9B4CB30D617C2D16C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_CreateSubsystem_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAA12C09B692C441F963CC25A33A9BFFEC01E4FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptivePerformanceLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m5A5862F45F20C876D0E996E32E4F74463ED37883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_mA1A866611778FF72A2067F7E30B32913C4EB4904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeArray_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

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

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Activator
struct Activator_tB31D4E2D282C5AA90D61D6EB0A297A5D3D41DA24  : public RuntimeObject
{
};

// Unity.Burst.CompilerServices.Aliasing
struct Aliasing_t7A6C81C1A5903944F6D1A99D91B35D77CAADC996  : public RuntimeObject
{
};

// UnityEngine.AndroidJNIHelper
struct AndroidJNIHelper_t2C1AB9F6B2295C20B24108936A003F65F02D71DD  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Remotion.Linq.Clauses.ResultOperatorBase
struct ResultOperatorBase_tF12E5C0C14644C21FCF2A946F9DC2BDCBB7771E7  : public RuntimeObject
{
};

// Remotion.Linq.Clauses.StreamedData.StreamedSequence
struct StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25  : public RuntimeObject
{
	// Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo Remotion.Linq.Clauses.StreamedData.StreamedSequence::<DataInfo>k__BackingField
	StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* ___U3CDataInfoU3Ek__BackingField_0;
	// System.Collections.IEnumerable Remotion.Linq.Clauses.StreamedData.StreamedSequence::<Sequence>k__BackingField
	RuntimeObject* ___U3CSequenceU3Ek__BackingField_1;
};

// Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo
struct StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378  : public RuntimeObject
{
	// System.Type Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo::<ResultItemType>k__BackingField
	Type_t* ___U3CResultItemTypeU3Ek__BackingField_1;
	// System.Linq.Expressions.Expression Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo::<ItemExpression>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CItemExpressionU3Ek__BackingField_2;
	// System.Type Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo::<DataType>k__BackingField
	Type_t* ___U3CDataTypeU3Ek__BackingField_3;
};

struct StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378_StaticFields
{
	// System.Reflection.MethodInfo Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo::s_executeMethod
	MethodInfo_t* ___s_executeMethod_0;
};

// Remotion.Linq.Clauses.StreamedData.StreamedValue
struct StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2  : public RuntimeObject
{
	// Remotion.Linq.Clauses.StreamedData.StreamedValueInfo Remotion.Linq.Clauses.StreamedData.StreamedValue::<DataInfo>k__BackingField
	StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* ___U3CDataInfoU3Ek__BackingField_0;
	// System.Object Remotion.Linq.Clauses.StreamedData.StreamedValue::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// Remotion.Linq.Clauses.StreamedData.StreamedValueInfo
struct StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F  : public RuntimeObject
{
	// System.Type Remotion.Linq.Clauses.StreamedData.StreamedValueInfo::<DataType>k__BackingField
	Type_t* ___U3CDataTypeU3Ek__BackingField_0;
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

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// Remotion.Linq.Clauses.ResultOperators.ValueFromSequenceResultOperatorBase
struct ValueFromSequenceResultOperatorBase_t24B5CEE43F2362ABCB6FDC576A1CA96BA032511B  : public ResultOperatorBase_tF12E5C0C14644C21FCF2A946F9DC2BDCBB7771E7
{
};

struct ValueFromSequenceResultOperatorBase_t24B5CEE43F2362ABCB6FDC576A1CA96BA032511B_StaticFields
{
	// System.Reflection.MethodInfo Remotion.Linq.Clauses.ResultOperators.ValueFromSequenceResultOperatorBase::s_executeMethod
	MethodInfo_t* ___s_executeMethod_0;
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

// <Module>/?????????????????????????????????????????
struct U202EU206DU200EU202BU202EU202BU206EU202BU206DU200FU206EU206EU200FU206BU202AU202BU202CU202AU202DU202AU202CU206AU200CU200FU206EU206DU200EU200CU200EU202BU202DU206FU202CU202EU200FU202DU202DU206FU206DU202CU202E_t56356F4B044DF51DAD5DF694FC0C4B883D332BA2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U202EU206DU200EU202BU202EU202BU206EU202BU206DU200FU206EU206EU200FU206BU202AU202BU202CU202AU202DU202AU202CU206AU200CU200FU206EU206DU200EU200CU200EU202BU202DU206FU202CU202EU200FU202DU202DU206FU206DU202CU202E_t56356F4B044DF51DAD5DF694FC0C4B883D332BA2__padding[448];
	};
};

// <Module>/?????????????????????????????????????????
struct U200EU200DU200FU206EU202EU200DU202BU202EU202DU206EU202EU206BU206DU202BU200CU202AU202CU200BU202BU200BU202BU200BU206EU206EU206BU202AU200FU206EU206EU206CU200DU200DU200DU206DU200CU206EU206EU206CU200CU206DU202E_t15804F2ACFA878B5F1FC17607C381EDC48CE0FF3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U200EU200DU200FU206EU202EU200DU202BU202EU202DU206EU202EU206BU206DU202BU200CU202AU202CU200BU202BU200BU202BU200BU206EU206EU206BU202AU200FU206EU206EU206CU200DU200DU200DU206DU200CU206EU206EU206CU200CU206DU202E_t15804F2ACFA878B5F1FC17607C381EDC48CE0FF3__padding[448];
	};
};

// <Module>
struct U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171 
{
};

struct U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields
{
	// System.Byte[] <Module>::?????????????????????????????????????????
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
	// <Module>/????????????????????????????????????????? <Module>::?????????????????????????????????????????
	U202EU206DU200EU202BU202EU202BU206EU202BU206DU200FU206EU206EU200FU206BU202AU202BU202CU202AU202DU202AU202CU206AU200CU200FU206EU206DU200EU200CU200EU202BU202DU206FU202CU202EU200FU202DU202DU206FU206DU202CU202E_t56356F4B044DF51DAD5DF694FC0C4B883D332BA2 ___U202BU202EU206DU202DU202BU200EU200FU206DU206AU200BU206BU200DU206CU200FU200FU206AU206BU206BU206DU206EU200FU206DU200FU206BU206BU206CU206EU200FU206BU200EU200EU200CU200CU202CU202EU202EU200DU202AU202BU206DU202E_3;
};

// <Module>
struct U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C 
{
};

struct U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields
{
	// System.Byte[] <Module>::?????????????????????????????????????????
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
	// <Module>/????????????????????????????????????????? <Module>::?????????????????????????????????????????
	U200EU200DU200FU206EU202EU200DU202BU202EU202DU206EU202EU206BU206DU202BU200CU202AU202CU200BU202BU200BU202BU200BU206EU206EU206BU202AU200FU206EU206EU206CU200DU200DU200DU206DU200CU206EU206EU206CU200CU206DU202E_t15804F2ACFA878B5F1FC17607C381EDC48CE0FF3 ___U200CU200BU206AU200CU202EU200BU202EU200DU200EU200CU202BU200EU206DU202DU202AU206AU206BU202EU200FU206DU206AU206BU206CU202BU202DU206CU200DU202EU202DU200BU200FU200BU200FU202CU206BU200EU200BU202BU200DU206CU202E_3;
};

// Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator
struct AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588  : public ValueFromSequenceResultOperatorBase_t24B5CEE43F2362ABCB6FDC576A1CA96BA032511B
{
	// System.Linq.Expressions.Expression Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::_seed
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____seed_2;
	// System.Linq.Expressions.LambdaExpression Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::_func
	LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* ____func_3;
	// System.Linq.Expressions.LambdaExpression Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::_resultSelector
	LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* ____resultSelector_4;
};

struct AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588_StaticFields
{
	// System.Reflection.MethodInfo Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::s_executeMethod
	MethodInfo_t* ___s_executeMethod_1;
};

// Remotion.Linq.Clauses.ResultOperators.AggregateResultOperator
struct AggregateResultOperator_t6F17C3EC0EC172B96B31A4210508090D6910D83E  : public ValueFromSequenceResultOperatorBase_t24B5CEE43F2362ABCB6FDC576A1CA96BA032511B
{
	// System.Linq.Expressions.LambdaExpression Remotion.Linq.Clauses.ResultOperators.AggregateResultOperator::_func
	LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* ____func_1;
};

// Remotion.Linq.Clauses.ResultOperators.AllResultOperator
struct AllResultOperator_t65CDD249101BE553D69C2587B23F31A7AA617DF9  : public ValueFromSequenceResultOperatorBase_t24B5CEE43F2362ABCB6FDC576A1CA96BA032511B
{
	// System.Linq.Expressions.Expression Remotion.Linq.Clauses.ResultOperators.AllResultOperator::_predicate
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____predicate_1;
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

// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8  : public RuntimeObject
{
	// System.Boolean UnityEngine.GlobalJavaObjectRef::m_disposed
	bool ___m_disposed_0;
	// System.IntPtr UnityEngine.GlobalJavaObjectRef::m_jobject
	intptr_t ___m_jobject_1;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};

// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader
struct AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings
struct AdaptivePerformanceManagerSettings_t825765630D775605D6E53BE60D90E50CCDDF30C2  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_5;
	// System.Boolean UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_6;
	// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader> UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings::m_Loaders
	List_1_tD698B2A66D241B0EFFAE6CE4A7882E6E7B3457D3* ___m_Loaders_7;
};

struct AdaptivePerformanceManagerSettings_t825765630D775605D6E53BE60D90E50CCDDF30C2_StaticFields
{
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings::s_ActiveLoader
	AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E* ___s_ActiveLoader_8;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.MemberAccessException
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper
struct AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F  : public AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.MissingMemberException
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211  : public MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC
{
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_18;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_19;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Signature_20;
};

// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info_28;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject* ___GenericCache_29;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor_30;
};

struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType_11;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType_12;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType_13;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType_14;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType_15;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes_16;
	// System.Func`3<System.Type,System.Type[],System.Type> System.RuntimeType::MakeTypeBuilderInstantiation
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation_17;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef_27;
};

// System.MissingMethodException
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155  : public MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
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
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};


// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T Remotion.Utilities.ArgumentUtility::CheckNotNull<System.Object>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArgumentUtility_CheckNotNull_TisRuntimeObject_mF2AE4EE993A427D2BD71E7A28444E312FCCA8C14_gshared (String_t* ___argumentName0, RuntimeObject* ___actualValue1, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Boolean>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Char>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Int32>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Single>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m646B71E5782A91A5A247FFAEEA04D44FB31AA619_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Char>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Double>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Int16>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.SByte>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Boolean>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Char>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared (intptr_t ___array0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::_Get<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::_Get<System.Single>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m599A48B8B43BD171290DD40A653B639B6F856D42_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::_GetStatic<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4289B7D740963C5007AD93A07FF6A0A01857DD28_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::_GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Boolean>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364_gshared (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Char>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6069C54C9918EFBFD1D0EEA1FAF09666F183F925_gshared (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mDB40CA13303FDBBDB58268D7D77B4B04DE3E182E_gshared (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m37AE925317BC8416FAF14FA6E8AB341EF2C1C804_gshared (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9_gshared (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7_gshared (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m502D18176A3EEDA2AF299069FA9247064B7D8D51_gshared (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6191F97DB89FB7E398F8A3DF9E448A9DCD5F07EA_gshared (intptr_t ___jobject0, const RuntimeMethod* method) ;

// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::Intern(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___elementType0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_HasElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void System.MissingMethodException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838 (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Object System.RuntimeType::CreateInstanceDefaultCtor(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6 (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* __this, bool ___publicOnly0, bool ___skipCheckThis1, bool ___fillCache2, bool ___wrapExceptions3, int32_t* ___stackMark4, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F_gshared)(___descriptors0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::Remove(TKey)
inline bool Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E* AdaptivePerformanceManagerSettings_get_activeLoader_m437ADEEB204181146DAB13B27D6752C74CEACD6F_inline (AdaptivePerformanceManagerSettings_t825765630D775605D6E53BE60D90E50CCDDF30C2* __this, const RuntimeMethod* method) ;
// T Remotion.Utilities.ArgumentUtility::CheckNotNull<Remotion.Linq.Clauses.StreamedData.StreamedSequence>(System.String,T)
inline StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371 (String_t* ___argumentName0, StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* ___actualValue1, const RuntimeMethod* method)
{
	return ((  StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* (*) (String_t*, StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25*, const RuntimeMethod*))ArgumentUtility_CheckNotNull_TisRuntimeObject_mF2AE4EE993A427D2BD71E7A28444E312FCCA8C14_gshared)(___argumentName0, ___actualValue1, method);
}
// Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo Remotion.Linq.Clauses.StreamedData.StreamedSequence::get_DataInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* StreamedSequence_get_DataInfo_mD796975440F367881014804A5A13FBC55AC5CB90_inline (StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* __this, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo::get_ItemExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* StreamedSequenceInfo_get_ItemExpression_mB1816BFC065BAE1A5D1CCA9E106975D2A2E44663_inline (StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* __this, const RuntimeMethod* method) ;
// System.Linq.Expressions.LambdaExpression Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::get_Func()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* AggregateFromSeedResultOperator_get_Func_m933A0F71F80031BA5592AD21D040F65710A9983F_inline (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, const RuntimeMethod* method) ;
// System.Linq.Expressions.LambdaExpression Remotion.Linq.Clauses.ExpressionVisitors.ReverseResolvingExpressionVisitor::ReverseResolveLambda(System.Linq.Expressions.Expression,System.Linq.Expressions.LambdaExpression,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* ReverseResolvingExpressionVisitor_ReverseResolveLambda_m299AFF2712D7C3235CFCC70E2DCFA484B61C6495 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___itemExpression0, LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* ___resolvedExpression1, int32_t ___parameterInsertionPosition2, const RuntimeMethod* method) ;
// System.Delegate System.Linq.Expressions.LambdaExpression::Compile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7 (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// Remotion.Linq.Clauses.StreamedData.StreamedValueInfo Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::GetOutputDataInfo(Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* AggregateFromSeedResultOperator_GetOutputDataInfo_m35FBA58992AF8EC1A49857CC0C93BE867D8CECD4 (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* ___sequenceInfo0, const RuntimeMethod* method) ;
// System.Linq.Expressions.LambdaExpression Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::get_OptionalResultSelector()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* AggregateFromSeedResultOperator_get_OptionalResultSelector_m836241DBF2E335AC6317917ED00B4A23E9C1BF91_inline (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, const RuntimeMethod* method) ;
// System.Void Remotion.Linq.Clauses.StreamedData.StreamedValue::.ctor(System.Object,Remotion.Linq.Clauses.StreamedData.StreamedValueInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamedValue__ctor_m9FB2EC896898650EAA9BFE86F26BE25DF1F8E275 (StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2* __this, RuntimeObject* ___value0, StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* ___streamedValueInfo1, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::get_Seed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* AggregateFromSeedResultOperator_get_Seed_m310EBD5BBF50CF6EFA50F21CE59409F4CC61DF46_inline (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, const RuntimeMethod* method) ;
// System.Type Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::GetResultType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AggregateFromSeedResultOperator_GetResultType_mE637CA667829561E1967C8888A354099F8BAD3E3 (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, const RuntimeMethod* method) ;
// System.Object Remotion.Linq.Clauses.ResultOperatorBase::InvokeExecuteMethod(System.Reflection.MethodInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResultOperatorBase_InvokeExecuteMethod_mC44408136C5D7013E7712100E6C78F1D1556A10A (ResultOperatorBase_tF12E5C0C14644C21FCF2A946F9DC2BDCBB7771E7* __this, MethodInfo_t* ___method0, RuntimeObject* ___input1, const RuntimeMethod* method) ;
// System.Linq.Expressions.LambdaExpression Remotion.Linq.Clauses.ResultOperators.AggregateResultOperator::get_Func()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* AggregateResultOperator_get_Func_m42D0F0BE64610B581B2BAD01D42FF1841F37084D_inline (AggregateResultOperator_t6F17C3EC0EC172B96B31A4210508090D6910D83E* __this, const RuntimeMethod* method) ;
// Remotion.Linq.Clauses.StreamedData.StreamedValueInfo Remotion.Linq.Clauses.ResultOperators.AggregateResultOperator::GetOutputDataInfo(Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* AggregateResultOperator_GetOutputDataInfo_m58CE2DB29A4737076A642942716476EFED0677C7 (AggregateResultOperator_t6F17C3EC0EC172B96B31A4210508090D6910D83E* __this, StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* ___sequenceInfo0, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression Remotion.Linq.Clauses.ResultOperators.AllResultOperator::get_Predicate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* AllResultOperator_get_Predicate_m4848687F3C47B77647A4257FA16385268E562D22_inline (AllResultOperator_t65CDD249101BE553D69C2587B23F31A7AA617DF9* __this, const RuntimeMethod* method) ;
// System.Linq.Expressions.LambdaExpression Remotion.Linq.Clauses.ExpressionVisitors.ReverseResolvingExpressionVisitor::ReverseResolve(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* ReverseResolvingExpressionVisitor_ReverseResolve_mC0BC4EC2F8D45B41BC2F066A4E18A571B2E76F6E (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___itemExpression0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___resolvedExpression1, const RuntimeMethod* method) ;
// Remotion.Linq.Clauses.StreamedData.StreamedValueInfo Remotion.Linq.Clauses.ResultOperators.AllResultOperator::GetOutputDataInfo(Remotion.Linq.Clauses.StreamedData.StreamedSequenceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* AllResultOperator_GetOutputDataInfo_mFDCDF2CA07BDA90E220C9AF896D32AFE876472D7 (AllResultOperator_t65CDD249101BE553D69C2587B23F31A7AA617DF9* __this, StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* ___sequenceInfo0, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Boolean>(System.IntPtr)
inline bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343 (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared)(___array0, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Char>(System.IntPtr)
inline Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared)(___array0, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
inline double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73 (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared)(___array0, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
inline int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477 (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared)(___array0, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
inline int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168 (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared)(___array0, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
inline int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664 (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared)(___array0, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
inline RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_gshared)(___array0, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
inline int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151 (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared)(___array0, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
inline float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64 (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared)(___array0, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Int32>(System.IntPtr,System.String,System.Boolean)
inline intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared)(___jclass0, ___fieldName1, ___isStatic2, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
inline intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared)(___jclass0, ___fieldName1, ___isStatic2, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Single>(System.IntPtr,System.String,System.Boolean)
inline intptr_t _AndroidJNIHelper_GetFieldID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m646B71E5782A91A5A247FFAEEA04D44FB31AA619 (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m646B71E5782A91A5A247FFAEEA04D44FB31AA619_gshared)(___jclass0, ___fieldName1, ___isStatic2, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Char>(System.String,System.Object[])
inline Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Double>(System.String,System.Object[])
inline double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Int16>(System.String,System.Object[])
inline int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Object>(System.String,System.Object[])
inline RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.SByte>(System.String,System.Object[])
inline int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Single>(System.String,System.Object[])
inline float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::_Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::_CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::_CallStatic<System.Object>(System.String,System.Object[])
inline RuntimeObject* AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::_CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___localref0, const RuntimeMethod* method) ;
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Boolean>(System.IntPtr)
inline bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared)(___array0, method);
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Char>(System.IntPtr)
inline Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226 (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared)(___array0, method);
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
inline double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared)(___array0, method);
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
inline int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared)(___array0, method);
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
inline int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared)(___array0, method);
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
inline int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20 (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared)(___array0, method);
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
inline RuntimeObject* AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89 (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89_gshared)(___array0, method);
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
inline int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared)(___array0, method);
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
inline float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB (intptr_t ___array0, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared)(___array0, method);
}
// FieldType UnityEngine.AndroidJavaObject::_Get<System.Int32>(System.String)
inline int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared)(__this, ___fieldName0, method);
}
// FieldType UnityEngine.AndroidJavaObject::_Get<System.Single>(System.String)
inline float AndroidJavaObject__Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m599A48B8B43BD171290DD40A653B639B6F856D42 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m599A48B8B43BD171290DD40A653B639B6F856D42_gshared)(__this, ___fieldName0, method);
}
// FieldType UnityEngine.AndroidJavaObject::_GetStatic<System.Int32>(System.String)
inline int32_t AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4289B7D740963C5007AD93A07FF6A0A01857DD28 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4289B7D740963C5007AD93A07FF6A0A01857DD28_gshared)(__this, ___fieldName0, method);
}
// FieldType UnityEngine.AndroidJavaObject::_GetStatic<System.Object>(System.String)
inline RuntimeObject* AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86_gshared)(__this, ___fieldName0, method);
}
// System.IntPtr UnityEngine.GlobalJavaObjectRef::op_Implicit(UnityEngine.GlobalJavaObjectRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNISafe::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNISafe::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNISafe::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNISafe::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNISafe::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNISafe::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNISafe::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::AndroidJavaClassDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F (intptr_t ___jclass0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::AndroidJavaObjectDeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C (intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6 (Type_t* ___t0, Type_t* ___from1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Boolean>(System.IntPtr)
inline bool AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364 (intptr_t ___jobject0, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364_gshared)(___jobject0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Char>(System.IntPtr)
inline Il2CppChar AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6069C54C9918EFBFD1D0EEA1FAF09666F183F925 (intptr_t ___jobject0, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6069C54C9918EFBFD1D0EEA1FAF09666F183F925_gshared)(___jobject0, method);
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Double>(System.IntPtr)
inline double AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mDB40CA13303FDBBDB58268D7D77B4B04DE3E182E (intptr_t ___jobject0, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mDB40CA13303FDBBDB58268D7D77B4B04DE3E182E_gshared)(___jobject0, method);
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Int16>(System.IntPtr)
inline int16_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m37AE925317BC8416FAF14FA6E8AB341EF2C1C804 (intptr_t ___jobject0, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m37AE925317BC8416FAF14FA6E8AB341EF2C1C804_gshared)(___jobject0, method);
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Int32>(System.IntPtr)
inline int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256 (intptr_t ___jobject0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared)(___jobject0, method);
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Int64>(System.IntPtr)
inline int64_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9 (intptr_t ___jobject0, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9_gshared)(___jobject0, method);
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Object>(System.IntPtr)
inline RuntimeObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7 (intptr_t ___jobject0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7_gshared)(___jobject0, method);
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.SByte>(System.IntPtr)
inline int8_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m502D18176A3EEDA2AF299069FA9247064B7D8D51 (intptr_t ___jobject0, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m502D18176A3EEDA2AF299069FA9247064B7D8D51_gshared)(___jobject0, method);
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
inline intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared)(___jclass0, ___methodName1, ___args2, ___isStatic3, method);
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Single>(System.IntPtr)
inline float AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6191F97DB89FB7E398F8A3DF9E448A9DCD5F07EA (intptr_t ___jobject0, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6191F97DB89FB7E398F8A3DF9E448A9DCD5F07EA_gshared)(___jobject0, method);
}
// System.Int32 UnityEngine.AndroidJNISafe::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_m558318BA8E7A0A7526E48FF7218876FB987F397B (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNISafe::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallStaticBooleanMethod_mA65977CB0FC4E3759938FCBD7BA43330317E8A3D (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.SByte UnityEngine.AndroidJNISafe::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallStaticSByteMethod_m68A45FE3EEE495648B36902B51ECDB76385EE736 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int16 UnityEngine.AndroidJNISafe::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallStaticShortMethod_m47EFDF3473E6C4D6F61956725E6595A0B919589D (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNISafe::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallStaticLongMethod_mE3487C989E9D5EFA0FB2356408B7FF40E61DBD12 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Single UnityEngine.AndroidJNISafe::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallStaticFloatMethod_m46EE9FEEEFCF68FA1A014C2E417454BA55206945 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Double UnityEngine.AndroidJNISafe::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallStaticDoubleMethod_m0510A1F18E0ED9CE8CFA82C6B2A56DCD89814247 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Char UnityEngine.AndroidJNISafe::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallStaticCharMethod_m12390A6D01F33879740A94195E445D7B3D4CD652 (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m8BD92117111558CC00540B45437B4A90222B89BE (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNISafe::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U200FU202DU202AU202EU200CU206CU200FU202CU200DU202BU206EU200CU206EU202EU206AU206EU202CU206EU200CU206CU202DU206AU200DU200EU200FU206FU200CU200BU202AU200BU206AU200FU202DU202DU202BU206EU200BU202AU200BU202EU202E_TisRuntimeObject_m60EC24013C8F80D0A4FB39A72BE1A73BDD358E42_gshared (uint32_t p0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)-736162161)))^((int32_t)658618452)));
	}

IL_000f:
	{
		G_B2_0 = ((int32_t)-939846054);
	}

IL_0014:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1511762512)));
		V_8 = (uint32_t)L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)16))))
		{
			case 0:
			{
				goto IL_00a2;
			}
			case 1:
			{
				goto IL_014c;
			}
			case 2:
			{
				goto IL_02e4;
			}
			case 3:
			{
				goto IL_02a4;
			}
			case 4:
			{
				goto IL_0134;
			}
			case 5:
			{
				goto IL_025f;
			}
			case 6:
			{
				goto IL_006a;
			}
			case 7:
			{
				goto IL_020b;
			}
			case 8:
			{
				goto IL_01cf;
			}
			case 9:
			{
				goto IL_0111;
			}
			case 10:
			{
				goto IL_01eb;
			}
			case 11:
			{
				goto IL_02c9;
			}
			case 12:
			{
				goto IL_0166;
			}
			case 13:
			{
				goto IL_000f;
			}
			case 14:
			{
				goto IL_017b;
			}
			case 15:
			{
				goto IL_0279;
			}
		}
	}
	{
		goto IL_02e4;
	}

IL_006a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)1);
		V_4 = L_2;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_4 = p0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_4;
		uint32_t L_6 = sizeof(RuntimeObject*);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, (int32_t)L_4, (RuntimeArray*)L_5, 0, (int32_t)L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_4;
		NullCheck(L_7);
		int32_t L_8 = 0;
		RuntimeObject* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		uint32_t L_10 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)289875231)))^((int32_t)-1261290648)));
		goto IL_0014;
	}

IL_00a2:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_12 = p0;
		uint32_t L_13 = L_12;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, 1));
		NullCheck(L_11);
		uintptr_t L_14 = ((uintptr_t)L_13);
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_17 = p0;
		uint32_t L_18 = L_17;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, 1));
		NullCheck(L_16);
		uintptr_t L_19 = ((uintptr_t)L_18);
		uint8_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_22 = p0;
		uint32_t L_23 = L_22;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 1));
		NullCheck(L_21);
		uintptr_t L_24 = ((uintptr_t)L_23);
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_27 = p0;
		uint32_t L_28 = L_27;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, 1));
		NullCheck(L_26);
		uintptr_t L_29 = ((uintptr_t)L_28);
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_15|((int32_t)((int32_t)L_20<<8))))|((int32_t)((int32_t)L_25<<((int32_t)16)))))|((int32_t)((int32_t)L_30<<((int32_t)24)))));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_31;
		L_31 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_33 = p0;
		int32_t L_34 = V_3;
		NullCheck(L_31);
		String_t* L_35;
		L_35 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_31, L_32, (int32_t)L_33, L_34);
		String_t* L_36;
		L_36 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_35, NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_36, il2cpp_rgctx_data(method->rgctx_data, 1)));
		uint32_t L_37 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_37, ((int32_t)994901443)))^((int32_t)879529138)));
		goto IL_0014;
	}

IL_0111:
	{
		uint32_t L_38 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_38)) == ((int64_t)((int64_t)0))))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_39 = ((int32_t)-2109753007);
		G_B9_0 = L_39;
		G_B9_1 = L_39;
		goto IL_0125;
	}

IL_011f:
	{
		int32_t L_40 = ((int32_t)-1769641616);
		G_B9_0 = L_40;
		G_B9_1 = L_40;
	}

IL_0125:
	{
		uint32_t L_41 = V_8;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_41, ((int32_t)1414778944)))));
		goto IL_0014;
	}

IL_0134:
	{
		uint32_t L_42 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_42<<2));
		uint32_t L_43 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)2058181670)))^((int32_t)1459501793)));
		goto IL_0014;
	}

IL_014c:
	{
		uint32_t L_44 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_44)) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_45 = ((int32_t)-1866073130);
		G_B14_0 = L_45;
		G_B14_1 = L_45;
		goto IL_0160;
	}

IL_015a:
	{
		int32_t L_46 = ((int32_t)-966398571);
		G_B14_0 = L_46;
		G_B14_1 = L_46;
	}

IL_0160:
	{
		G_B2_0 = G_B14_1;
		goto IL_0014;
	}

IL_0166:
	{
		RuntimeObject* L_47 = V_2;
		V_1 = L_47;
		uint32_t L_48 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_48, ((int32_t)-506608739)))^((int32_t)1151543236)));
		goto IL_0014;
	}

IL_017b:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_50 = p0;
		uint32_t L_51 = L_50;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, 1));
		NullCheck(L_49);
		uintptr_t L_52 = ((uintptr_t)L_51);
		uint8_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_55 = p0;
		uint32_t L_56 = L_55;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, 1));
		NullCheck(L_54);
		uintptr_t L_57 = ((uintptr_t)L_56);
		uint8_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_60 = p0;
		uint32_t L_61 = L_60;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_61, 1));
		NullCheck(L_59);
		uintptr_t L_62 = ((uintptr_t)L_61);
		uint8_t L_63 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_65 = p0;
		uint32_t L_66 = L_65;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_66, 1));
		NullCheck(L_64);
		uintptr_t L_67 = ((uintptr_t)L_66);
		uint8_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_53|((int32_t)((int32_t)L_58<<8))))|((int32_t)((int32_t)L_63<<((int32_t)16)))))|((int32_t)((int32_t)L_68<<((int32_t)24)))));
		uint32_t L_69 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_69, ((int32_t)-802975278)))^((int32_t)-1108464149)));
		goto IL_0014;
	}

IL_01cf:
	{
		uint32_t L_70 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_70&((int32_t)1073741823)));
		uint32_t L_71 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_71, ((int32_t)1298816882)))^((int32_t)-42436412)));
		goto IL_0014;
	}

IL_01eb:
	{
		uint32_t L_72 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_72>>((int32_t)30)));
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		uint32_t L_73 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_73, ((int32_t)296780139)))^((int32_t)1205951986)));
		goto IL_0014;
	}

IL_020b:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_75 = p0;
		uint32_t L_76 = L_75;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, 1));
		NullCheck(L_74);
		uintptr_t L_77 = ((uintptr_t)L_76);
		uint8_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_80 = p0;
		uint32_t L_81 = L_80;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_81, 1));
		NullCheck(L_79);
		uintptr_t L_82 = ((uintptr_t)L_81);
		uint8_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_85 = p0;
		uint32_t L_86 = L_85;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_86, 1));
		NullCheck(L_84);
		uintptr_t L_87 = ((uintptr_t)L_86);
		uint8_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_90 = p0;
		uint32_t L_91 = L_90;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_91, 1));
		NullCheck(L_89);
		uintptr_t L_92 = ((uintptr_t)L_91);
		uint8_t L_93 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_78|((int32_t)((int32_t)L_83<<8))))|((int32_t)((int32_t)L_88<<((int32_t)16)))))|((int32_t)((int32_t)L_93<<((int32_t)24)))));
		uint32_t L_94 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_94, ((int32_t)1269296682)))^((int32_t)-1717043495)));
		goto IL_0014;
	}

IL_025f:
	{
		uint32_t L_95 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_95)) == ((int64_t)((int64_t)1))))
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_96 = ((int32_t)-985602254);
		G_B23_0 = L_96;
		G_B23_1 = L_96;
		goto IL_0273;
	}

IL_026d:
	{
		int32_t L_97 = ((int32_t)-244427234);
		G_B23_0 = L_97;
		G_B23_1 = L_97;
	}

IL_0273:
	{
		G_B2_0 = G_B23_1;
		goto IL_0014;
	}

IL_0279:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
		NullCheck(L_99);
		Type_t* L_100;
		L_100 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_99);
		int32_t L_101 = V_6;
		RuntimeArray* L_102;
		L_102 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_100, L_101, NULL);
		V_7 = L_102;
		uint32_t L_103 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_103, ((int32_t)1896812027)))^((int32_t)622743094)));
		goto IL_0014;
	}

IL_02a4:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_105 = p0;
		RuntimeArray* L_106 = V_7;
		int32_t L_107 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_104, (int32_t)L_105, L_106, 0, ((int32_t)il2cpp_codegen_subtract(L_107, 4)), NULL);
		uint32_t L_108 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_108, ((int32_t)1526583586)))^((int32_t)108635981)));
		goto IL_0014;
	}

IL_02c9:
	{
		RuntimeArray* L_109 = V_7;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_109, il2cpp_rgctx_data(method->rgctx_data, 1)));
		uint32_t L_110 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_110, ((int32_t)-1750248821)))^((int32_t)1541837115)));
		goto IL_0014;
	}

IL_02e4:
	{
		RuntimeObject* L_111 = V_1;
		return L_111;
	}
}
// - <Module>::?????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200FU202DU202AU202EU200CU206CU200FU202CU200DU202BU206EU200CU206EU202EU206AU206EU202CU206EU200CU206CU202DU206AU200DU200EU200FU206FU200CU200BU202AU200BU206AU200FU202DU202DU202BU206EU200BU202AU200BU202EU202E_TisIl2CppFullySharedGenericAny_m56AEC47BF8E8A177A3766B74FAA7C40C21422D51_gshared (uint32_t p0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(-)
	const uint32_t SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// -
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
	const Il2CppFullySharedGenericAny L_37 = L_9;
	const Il2CppFullySharedGenericAny L_49 = L_9;
	const Il2CppFullySharedGenericAny L_112 = L_9;
	const Il2CppFullySharedGenericAny L_115 = L_9;
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
	memset(V_1, 0, SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
	memset(V_2, 0, SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
	int32_t V_3 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)-736162161)))^((int32_t)658618452)));
	}

IL_000f:
	{
		G_B2_0 = ((int32_t)-939846054);
	}

IL_0014:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1511762512)));
		V_8 = (uint32_t)L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)16))))
		{
			case 0:
			{
				goto IL_00a2;
			}
			case 1:
			{
				goto IL_014c;
			}
			case 2:
			{
				goto IL_02e4;
			}
			case 3:
			{
				goto IL_02a4;
			}
			case 4:
			{
				goto IL_0134;
			}
			case 5:
			{
				goto IL_025f;
			}
			case 6:
			{
				goto IL_006a;
			}
			case 7:
			{
				goto IL_020b;
			}
			case 8:
			{
				goto IL_01cf;
			}
			case 9:
			{
				goto IL_0111;
			}
			case 10:
			{
				goto IL_01eb;
			}
			case 11:
			{
				goto IL_02c9;
			}
			case 12:
			{
				goto IL_0166;
			}
			case 13:
			{
				goto IL_000f;
			}
			case 14:
			{
				goto IL_017b;
			}
			case 15:
			{
				goto IL_0279;
			}
		}
	}
	{
		goto IL_02e4;
	}

IL_006a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)1);
		V_4 = L_2;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_4 = p0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_4;
		uint32_t L_6 = SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, (int32_t)L_4, (RuntimeArray*)L_5, 0, (int32_t)L_6, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_4;
		NullCheck(L_7);
		int32_t L_8 = 0;
		il2cpp_codegen_memcpy(L_9, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
		il2cpp_codegen_memcpy(V_1, L_9, SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
		uint32_t L_10 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)289875231)))^((int32_t)-1261290648)));
		goto IL_0014;
	}

IL_00a2:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_12 = p0;
		uint32_t L_13 = L_12;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, 1));
		NullCheck(L_11);
		uintptr_t L_14 = ((uintptr_t)L_13);
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_17 = p0;
		uint32_t L_18 = L_17;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, 1));
		NullCheck(L_16);
		uintptr_t L_19 = ((uintptr_t)L_18);
		uint8_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_22 = p0;
		uint32_t L_23 = L_22;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 1));
		NullCheck(L_21);
		uintptr_t L_24 = ((uintptr_t)L_23);
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_27 = p0;
		uint32_t L_28 = L_27;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, 1));
		NullCheck(L_26);
		uintptr_t L_29 = ((uintptr_t)L_28);
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_15|((int32_t)((int32_t)L_20<<8))))|((int32_t)((int32_t)L_25<<((int32_t)16)))))|((int32_t)((int32_t)L_30<<((int32_t)24)))));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_31;
		L_31 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_33 = p0;
		int32_t L_34 = V_3;
		NullCheck(L_31);
		String_t* L_35;
		L_35 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_31, L_32, (int32_t)L_33, L_34);
		String_t* L_36;
		L_36 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_35, NULL);
		void* L_38 = UnBox_Any((RuntimeObject*)L_36, il2cpp_rgctx_data(method->rgctx_data, 1), L_37);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38))), SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
		uint32_t L_39 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)994901443)))^((int32_t)879529138)));
		goto IL_0014;
	}

IL_0111:
	{
		uint32_t L_40 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_40)) == ((int64_t)((int64_t)0))))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_41 = ((int32_t)-2109753007);
		G_B9_0 = L_41;
		G_B9_1 = L_41;
		goto IL_0125;
	}

IL_011f:
	{
		int32_t L_42 = ((int32_t)-1769641616);
		G_B9_0 = L_42;
		G_B9_1 = L_42;
	}

IL_0125:
	{
		uint32_t L_43 = V_8;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)1414778944)))));
		goto IL_0014;
	}

IL_0134:
	{
		uint32_t L_44 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_44<<2));
		uint32_t L_45 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_45, ((int32_t)2058181670)))^((int32_t)1459501793)));
		goto IL_0014;
	}

IL_014c:
	{
		uint32_t L_46 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_46)) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_47 = ((int32_t)-1866073130);
		G_B14_0 = L_47;
		G_B14_1 = L_47;
		goto IL_0160;
	}

IL_015a:
	{
		int32_t L_48 = ((int32_t)-966398571);
		G_B14_0 = L_48;
		G_B14_1 = L_48;
	}

IL_0160:
	{
		G_B2_0 = G_B14_1;
		goto IL_0014;
	}

IL_0166:
	{
		il2cpp_codegen_memcpy(L_49, V_2, SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
		il2cpp_codegen_memcpy(V_1, L_49, SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
		uint32_t L_50 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_50, ((int32_t)-506608739)))^((int32_t)1151543236)));
		goto IL_0014;
	}

IL_017b:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_52 = p0;
		uint32_t L_53 = L_52;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, 1));
		NullCheck(L_51);
		uintptr_t L_54 = ((uintptr_t)L_53);
		uint8_t L_55 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_57 = p0;
		uint32_t L_58 = L_57;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, 1));
		NullCheck(L_56);
		uintptr_t L_59 = ((uintptr_t)L_58);
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_62 = p0;
		uint32_t L_63 = L_62;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, 1));
		NullCheck(L_61);
		uintptr_t L_64 = ((uintptr_t)L_63);
		uint8_t L_65 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_67 = p0;
		uint32_t L_68 = L_67;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, 1));
		NullCheck(L_66);
		uintptr_t L_69 = ((uintptr_t)L_68);
		uint8_t L_70 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_55|((int32_t)((int32_t)L_60<<8))))|((int32_t)((int32_t)L_65<<((int32_t)16)))))|((int32_t)((int32_t)L_70<<((int32_t)24)))));
		uint32_t L_71 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_71, ((int32_t)-802975278)))^((int32_t)-1108464149)));
		goto IL_0014;
	}

IL_01cf:
	{
		uint32_t L_72 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_72&((int32_t)1073741823)));
		uint32_t L_73 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_73, ((int32_t)1298816882)))^((int32_t)-42436412)));
		goto IL_0014;
	}

IL_01eb:
	{
		uint32_t L_74 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_74>>((int32_t)30)));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
		uint32_t L_75 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_75, ((int32_t)296780139)))^((int32_t)1205951986)));
		goto IL_0014;
	}

IL_020b:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_77 = p0;
		uint32_t L_78 = L_77;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, 1));
		NullCheck(L_76);
		uintptr_t L_79 = ((uintptr_t)L_78);
		uint8_t L_80 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_82 = p0;
		uint32_t L_83 = L_82;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_83, 1));
		NullCheck(L_81);
		uintptr_t L_84 = ((uintptr_t)L_83);
		uint8_t L_85 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_87 = p0;
		uint32_t L_88 = L_87;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, 1));
		NullCheck(L_86);
		uintptr_t L_89 = ((uintptr_t)L_88);
		uint8_t L_90 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_92 = p0;
		uint32_t L_93 = L_92;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_93, 1));
		NullCheck(L_91);
		uintptr_t L_94 = ((uintptr_t)L_93);
		uint8_t L_95 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_80|((int32_t)((int32_t)L_85<<8))))|((int32_t)((int32_t)L_90<<((int32_t)16)))))|((int32_t)((int32_t)L_95<<((int32_t)24)))));
		uint32_t L_96 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_96, ((int32_t)1269296682)))^((int32_t)-1717043495)));
		goto IL_0014;
	}

IL_025f:
	{
		uint32_t L_97 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_97)) == ((int64_t)((int64_t)1))))
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_98 = ((int32_t)-985602254);
		G_B23_0 = L_98;
		G_B23_1 = L_98;
		goto IL_0273;
	}

IL_026d:
	{
		int32_t L_99 = ((int32_t)-244427234);
		G_B23_0 = L_99;
		G_B23_1 = L_99;
	}

IL_0273:
	{
		G_B2_0 = G_B23_1;
		goto IL_0014;
	}

IL_0279:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		NullCheck(L_101);
		Type_t* L_102;
		L_102 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_101);
		int32_t L_103 = V_6;
		RuntimeArray* L_104;
		L_104 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_102, L_103, NULL);
		V_7 = L_104;
		uint32_t L_105 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_105, ((int32_t)1896812027)))^((int32_t)622743094)));
		goto IL_0014;
	}

IL_02a4:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_107 = p0;
		RuntimeArray* L_108 = V_7;
		int32_t L_109 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_106, (int32_t)L_107, L_108, 0, ((int32_t)il2cpp_codegen_subtract(L_109, 4)), NULL);
		uint32_t L_110 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_110, ((int32_t)1526583586)))^((int32_t)108635981)));
		goto IL_0014;
	}

IL_02c9:
	{
		RuntimeArray* L_111 = V_7;
		void* L_113 = UnBox_Any((RuntimeObject*)L_111, il2cpp_rgctx_data(method->rgctx_data, 1), L_112);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_113))), SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
		uint32_t L_114 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_114, ((int32_t)-1750248821)))^((int32_t)1541837115)));
		goto IL_0014;
	}

IL_02e4:
	{
		il2cpp_codegen_memcpy(L_115, V_1, SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_115, SizeOf_U2D_tBB43222A5A30A0D17DC92C6E478F8AF3E619B9E5);
		return;
	}
}
// - <Module>::????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U206CU200CU206BU202DU206EU206FU202DU206BU200BU206DU206EU206FU200BU202DU202AU202EU200BU206BU206EU200FU206FU206FU200BU206EU202BU200EU202BU202BU206EU206FU202DU202DU206AU206EU202DU202BU200EU200CU200EU202E_TisRuntimeObject_mCE1BF676922C55F7C0F774FD99AE87C7CE2EA638_gshared (uint32_t p0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)-1840356289)))^((int32_t)-1615998469)));
		uint32_t L_1 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_1>>((int32_t)30)));
	}

IL_0014:
	{
		G_B2_0 = ((int32_t)1462790353);
	}

IL_0019:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1574458517)));
		V_8 = (uint32_t)L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)19))))
		{
			case 0:
			{
				goto IL_010f;
			}
			case 1:
			{
				goto IL_01be;
			}
			case 2:
			{
				goto IL_007b;
			}
			case 3:
			{
				goto IL_012a;
			}
			case 4:
			{
				goto IL_017e;
			}
			case 5:
			{
				goto IL_00ea;
			}
			case 6:
			{
				goto IL_0193;
			}
			case 7:
			{
				goto IL_030a;
			}
			case 8:
			{
				goto IL_0014;
			}
			case 9:
			{
				goto IL_02df;
			}
			case 10:
			{
				goto IL_029c;
			}
			case 11:
			{
				goto IL_01ab;
			}
			case 12:
			{
				goto IL_02b8;
			}
			case 13:
			{
				goto IL_0326;
			}
			case 14:
			{
				goto IL_022d;
			}
			case 15:
			{
				goto IL_0248;
			}
			case 16:
			{
				goto IL_0093;
			}
			case 17:
			{
				goto IL_00d0;
			}
			case 18:
			{
				goto IL_00b6;
			}
		}
	}
	{
		goto IL_0326;
	}

IL_007b:
	{
		RuntimeArray* L_3 = V_7;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		uint32_t L_4 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)1964440101)))^((int32_t)-1499165247)));
		goto IL_0019;
	}

IL_0093:
	{
		uint32_t L_5 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_5)) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_6 = ((int32_t)-1083238393);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
		goto IL_00a7;
	}

IL_00a1:
	{
		int32_t L_7 = ((int32_t)-2072935023);
		G_B8_0 = L_7;
		G_B8_1 = L_7;
	}

IL_00a7:
	{
		uint32_t L_8 = V_8;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-176220852)))));
		goto IL_0019;
	}

IL_00b6:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_9)) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_10 = ((int32_t)87465468);
		G_B12_0 = L_10;
		G_B12_1 = L_10;
		goto IL_00ca;
	}

IL_00c4:
	{
		int32_t L_11 = ((int32_t)1970455595);
		G_B12_0 = L_11;
		G_B12_1 = L_11;
	}

IL_00ca:
	{
		G_B2_0 = G_B12_1;
		goto IL_0019;
	}

IL_00d0:
	{
		uint32_t L_12 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_12)) == ((int64_t)((int64_t)3))))
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_13 = ((int32_t)701422249);
		G_B16_0 = L_13;
		G_B16_1 = L_13;
		goto IL_00e4;
	}

IL_00de:
	{
		int32_t L_14 = ((int32_t)502337832);
		G_B16_0 = L_14;
		G_B16_1 = L_14;
	}

IL_00e4:
	{
		G_B2_0 = G_B16_1;
		goto IL_0019;
	}

IL_00ea:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_16 = p0;
		RuntimeArray* L_17 = V_7;
		int32_t L_18 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_15, (int32_t)L_16, L_17, 0, ((int32_t)il2cpp_codegen_subtract(L_18, 4)), NULL);
		uint32_t L_19 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)-1215663885)))^((int32_t)-179639970)));
		goto IL_0019;
	}

IL_010f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)1);
		V_4 = L_20;
		uint32_t L_21 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)-1491737302)))^((int32_t)335899300)));
		goto IL_0019;
	}

IL_012a:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_23 = p0;
		uint32_t L_24 = L_23;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, 1));
		NullCheck(L_22);
		uintptr_t L_25 = ((uintptr_t)L_24);
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_28 = p0;
		uint32_t L_29 = L_28;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, 1));
		NullCheck(L_27);
		uintptr_t L_30 = ((uintptr_t)L_29);
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_33 = p0;
		uint32_t L_34 = L_33;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, 1));
		NullCheck(L_32);
		uintptr_t L_35 = ((uintptr_t)L_34);
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_38 = p0;
		uint32_t L_39 = L_38;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, 1));
		NullCheck(L_37);
		uintptr_t L_40 = ((uintptr_t)L_39);
		uint8_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_26|((int32_t)((int32_t)L_31<<8))))|((int32_t)((int32_t)L_36<<((int32_t)16)))))|((int32_t)((int32_t)L_41<<((int32_t)24)))));
		uint32_t L_42 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, ((int32_t)-23897373)))^((int32_t)-1379498059)));
		goto IL_0019;
	}

IL_017e:
	{
		RuntimeObject* L_43 = V_2;
		V_1 = L_43;
		uint32_t L_44 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_44, ((int32_t)-504774165)))^((int32_t)139945033)));
		goto IL_0019;
	}

IL_0193:
	{
		uint32_t L_45 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_45<<2));
		uint32_t L_46 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_46, ((int32_t)-1239837590)))^((int32_t)1781491108)));
		goto IL_0019;
	}

IL_01ab:
	{
		uint32_t L_47 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_47, ((int32_t)-960987956)))^((int32_t)686651403)));
		goto IL_0019;
	}

IL_01be:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_49 = p0;
		uint32_t L_50 = L_49;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, 1));
		NullCheck(L_48);
		uintptr_t L_51 = ((uintptr_t)L_50);
		uint8_t L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_54 = p0;
		uint32_t L_55 = L_54;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, 1));
		NullCheck(L_53);
		uintptr_t L_56 = ((uintptr_t)L_55);
		uint8_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_59 = p0;
		uint32_t L_60 = L_59;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_60, 1));
		NullCheck(L_58);
		uintptr_t L_61 = ((uintptr_t)L_60);
		uint8_t L_62 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_64 = p0;
		uint32_t L_65 = L_64;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, 1));
		NullCheck(L_63);
		uintptr_t L_66 = ((uintptr_t)L_65);
		uint8_t L_67 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_52|((int32_t)((int32_t)L_57<<8))))|((int32_t)((int32_t)L_62<<((int32_t)16)))))|((int32_t)((int32_t)L_67<<((int32_t)24)))));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_68;
		L_68 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_70 = p0;
		int32_t L_71 = V_3;
		NullCheck(L_68);
		String_t* L_72;
		L_72 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_68, L_69, (int32_t)L_70, L_71);
		String_t* L_73;
		L_73 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_72, NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_73, il2cpp_rgctx_data(method->rgctx_data, 0)));
		uint32_t L_74 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_74, ((int32_t)929221996)))^((int32_t)-1435903677)));
		goto IL_0019;
	}

IL_022d:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		uint32_t L_75 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_75, ((int32_t)1586379295)))^((int32_t)671426166)));
		goto IL_0019;
	}

IL_0248:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_77 = p0;
		uint32_t L_78 = L_77;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, 1));
		NullCheck(L_76);
		uintptr_t L_79 = ((uintptr_t)L_78);
		uint8_t L_80 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_82 = p0;
		uint32_t L_83 = L_82;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_83, 1));
		NullCheck(L_81);
		uintptr_t L_84 = ((uintptr_t)L_83);
		uint8_t L_85 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_87 = p0;
		uint32_t L_88 = L_87;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, 1));
		NullCheck(L_86);
		uintptr_t L_89 = ((uintptr_t)L_88);
		uint8_t L_90 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_92 = p0;
		uint32_t L_93 = L_92;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_93, 1));
		NullCheck(L_91);
		uintptr_t L_94 = ((uintptr_t)L_93);
		uint8_t L_95 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_80|((int32_t)((int32_t)L_85<<8))))|((int32_t)((int32_t)L_90<<((int32_t)16)))))|((int32_t)((int32_t)L_95<<((int32_t)24)))));
		uint32_t L_96 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_96, ((int32_t)-1110318537)))^((int32_t)-1812196775)));
		goto IL_0019;
	}

IL_029c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_97 = V_4;
		NullCheck(L_97);
		int32_t L_98 = 0;
		RuntimeObject* L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_1 = L_99;
		uint32_t L_100 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_100, ((int32_t)-426199240)))^((int32_t)-288541803)));
		goto IL_0019;
	}

IL_02b8:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_102 = p0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_103 = V_4;
		uint32_t L_104 = sizeof(RuntimeObject*);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_101, (int32_t)L_102, (RuntimeArray*)L_103, 0, (int32_t)L_104, NULL);
		uint32_t L_105 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_105, ((int32_t)1424714007)))^((int32_t)1172323917)));
		goto IL_0019;
	}

IL_02df:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		NullCheck(L_107);
		Type_t* L_108;
		L_108 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_107);
		int32_t L_109 = V_6;
		RuntimeArray* L_110;
		L_110 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_108, L_109, NULL);
		V_7 = L_110;
		uint32_t L_111 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_111, ((int32_t)-661441582)))^((int32_t)212622788)));
		goto IL_0019;
	}

IL_030a:
	{
		uint32_t L_112 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_112&((int32_t)1073741823)));
		uint32_t L_113 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_113, ((int32_t)749969909)))^((int32_t)931375282)));
		goto IL_0019;
	}

IL_0326:
	{
		RuntimeObject* L_114 = V_1;
		return L_114;
	}
}
// - <Module>::????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U206CU200CU206BU202DU206EU206FU202DU206BU200BU206DU206EU206FU200BU202DU202AU202EU200BU206BU206EU200FU206FU206FU200BU206EU202BU200EU202BU202BU206EU206FU202DU202DU206AU206EU202DU202BU200EU200CU200EU202E_TisIl2CppFullySharedGenericAny_m80DA48315F53F00275E4E90E354ADE3D6C541389_gshared (uint32_t p0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(-)
	const uint32_t SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// -
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
	const Il2CppFullySharedGenericAny L_45 = L_4;
	const Il2CppFullySharedGenericAny L_76 = L_4;
	const Il2CppFullySharedGenericAny L_103 = L_4;
	const Il2CppFullySharedGenericAny L_118 = L_4;
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
	memset(V_1, 0, SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
	memset(V_2, 0, SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
	int32_t V_3 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)-1840356289)))^((int32_t)-1615998469)));
		uint32_t L_1 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_1>>((int32_t)30)));
	}

IL_0014:
	{
		G_B2_0 = ((int32_t)1462790353);
	}

IL_0019:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1574458517)));
		V_8 = (uint32_t)L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)19))))
		{
			case 0:
			{
				goto IL_010f;
			}
			case 1:
			{
				goto IL_01be;
			}
			case 2:
			{
				goto IL_007b;
			}
			case 3:
			{
				goto IL_012a;
			}
			case 4:
			{
				goto IL_017e;
			}
			case 5:
			{
				goto IL_00ea;
			}
			case 6:
			{
				goto IL_0193;
			}
			case 7:
			{
				goto IL_030a;
			}
			case 8:
			{
				goto IL_0014;
			}
			case 9:
			{
				goto IL_02df;
			}
			case 10:
			{
				goto IL_029c;
			}
			case 11:
			{
				goto IL_01ab;
			}
			case 12:
			{
				goto IL_02b8;
			}
			case 13:
			{
				goto IL_0326;
			}
			case 14:
			{
				goto IL_022d;
			}
			case 15:
			{
				goto IL_0248;
			}
			case 16:
			{
				goto IL_0093;
			}
			case 17:
			{
				goto IL_00d0;
			}
			case 18:
			{
				goto IL_00b6;
			}
		}
	}
	{
		goto IL_0326;
	}

IL_007b:
	{
		RuntimeArray* L_3 = V_7;
		void* L_5 = UnBox_Any((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_5))), SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
		uint32_t L_6 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)1964440101)))^((int32_t)-1499165247)));
		goto IL_0019;
	}

IL_0093:
	{
		uint32_t L_7 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_7)) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_8 = ((int32_t)-1083238393);
		G_B8_0 = L_8;
		G_B8_1 = L_8;
		goto IL_00a7;
	}

IL_00a1:
	{
		int32_t L_9 = ((int32_t)-2072935023);
		G_B8_0 = L_9;
		G_B8_1 = L_9;
	}

IL_00a7:
	{
		uint32_t L_10 = V_8;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-176220852)))));
		goto IL_0019;
	}

IL_00b6:
	{
		uint32_t L_11 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_11)) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_12 = ((int32_t)87465468);
		G_B12_0 = L_12;
		G_B12_1 = L_12;
		goto IL_00ca;
	}

IL_00c4:
	{
		int32_t L_13 = ((int32_t)1970455595);
		G_B12_0 = L_13;
		G_B12_1 = L_13;
	}

IL_00ca:
	{
		G_B2_0 = G_B12_1;
		goto IL_0019;
	}

IL_00d0:
	{
		uint32_t L_14 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_14)) == ((int64_t)((int64_t)3))))
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_15 = ((int32_t)701422249);
		G_B16_0 = L_15;
		G_B16_1 = L_15;
		goto IL_00e4;
	}

IL_00de:
	{
		int32_t L_16 = ((int32_t)502337832);
		G_B16_0 = L_16;
		G_B16_1 = L_16;
	}

IL_00e4:
	{
		G_B2_0 = G_B16_1;
		goto IL_0019;
	}

IL_00ea:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_18 = p0;
		RuntimeArray* L_19 = V_7;
		int32_t L_20 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_17, (int32_t)L_18, L_19, 0, ((int32_t)il2cpp_codegen_subtract(L_20, 4)), NULL);
		uint32_t L_21 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)-1215663885)))^((int32_t)-179639970)));
		goto IL_0019;
	}

IL_010f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)1);
		V_4 = L_22;
		uint32_t L_23 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)-1491737302)))^((int32_t)335899300)));
		goto IL_0019;
	}

IL_012a:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_25 = p0;
		uint32_t L_26 = L_25;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, 1));
		NullCheck(L_24);
		uintptr_t L_27 = ((uintptr_t)L_26);
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_30 = p0;
		uint32_t L_31 = L_30;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, 1));
		NullCheck(L_29);
		uintptr_t L_32 = ((uintptr_t)L_31);
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_35 = p0;
		uint32_t L_36 = L_35;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, 1));
		NullCheck(L_34);
		uintptr_t L_37 = ((uintptr_t)L_36);
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_40 = p0;
		uint32_t L_41 = L_40;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, 1));
		NullCheck(L_39);
		uintptr_t L_42 = ((uintptr_t)L_41);
		uint8_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_28|((int32_t)((int32_t)L_33<<8))))|((int32_t)((int32_t)L_38<<((int32_t)16)))))|((int32_t)((int32_t)L_43<<((int32_t)24)))));
		uint32_t L_44 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_44, ((int32_t)-23897373)))^((int32_t)-1379498059)));
		goto IL_0019;
	}

IL_017e:
	{
		il2cpp_codegen_memcpy(L_45, V_2, SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
		il2cpp_codegen_memcpy(V_1, L_45, SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
		uint32_t L_46 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_46, ((int32_t)-504774165)))^((int32_t)139945033)));
		goto IL_0019;
	}

IL_0193:
	{
		uint32_t L_47 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_47<<2));
		uint32_t L_48 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_48, ((int32_t)-1239837590)))^((int32_t)1781491108)));
		goto IL_0019;
	}

IL_01ab:
	{
		uint32_t L_49 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_49, ((int32_t)-960987956)))^((int32_t)686651403)));
		goto IL_0019;
	}

IL_01be:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_51 = p0;
		uint32_t L_52 = L_51;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, 1));
		NullCheck(L_50);
		uintptr_t L_53 = ((uintptr_t)L_52);
		uint8_t L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_56 = p0;
		uint32_t L_57 = L_56;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, 1));
		NullCheck(L_55);
		uintptr_t L_58 = ((uintptr_t)L_57);
		uint8_t L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_61 = p0;
		uint32_t L_62 = L_61;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_62, 1));
		NullCheck(L_60);
		uintptr_t L_63 = ((uintptr_t)L_62);
		uint8_t L_64 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_66 = p0;
		uint32_t L_67 = L_66;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, 1));
		NullCheck(L_65);
		uintptr_t L_68 = ((uintptr_t)L_67);
		uint8_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_54|((int32_t)((int32_t)L_59<<8))))|((int32_t)((int32_t)L_64<<((int32_t)16)))))|((int32_t)((int32_t)L_69<<((int32_t)24)))));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_70;
		L_70 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_72 = p0;
		int32_t L_73 = V_3;
		NullCheck(L_70);
		String_t* L_74;
		L_74 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_70, L_71, (int32_t)L_72, L_73);
		String_t* L_75;
		L_75 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_74, NULL);
		void* L_77 = UnBox_Any((RuntimeObject*)L_75, il2cpp_rgctx_data(method->rgctx_data, 0), L_76);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_77))), SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
		uint32_t L_78 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_78, ((int32_t)929221996)))^((int32_t)-1435903677)));
		goto IL_0019;
	}

IL_022d:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
		uint32_t L_79 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_79, ((int32_t)1586379295)))^((int32_t)671426166)));
		goto IL_0019;
	}

IL_0248:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_81 = p0;
		uint32_t L_82 = L_81;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_82, 1));
		NullCheck(L_80);
		uintptr_t L_83 = ((uintptr_t)L_82);
		uint8_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_86 = p0;
		uint32_t L_87 = L_86;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_87, 1));
		NullCheck(L_85);
		uintptr_t L_88 = ((uintptr_t)L_87);
		uint8_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_91 = p0;
		uint32_t L_92 = L_91;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_92, 1));
		NullCheck(L_90);
		uintptr_t L_93 = ((uintptr_t)L_92);
		uint8_t L_94 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_96 = p0;
		uint32_t L_97 = L_96;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, 1));
		NullCheck(L_95);
		uintptr_t L_98 = ((uintptr_t)L_97);
		uint8_t L_99 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_84|((int32_t)((int32_t)L_89<<8))))|((int32_t)((int32_t)L_94<<((int32_t)16)))))|((int32_t)((int32_t)L_99<<((int32_t)24)))));
		uint32_t L_100 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_100, ((int32_t)-1110318537)))^((int32_t)-1812196775)));
		goto IL_0019;
	}

IL_029c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_101 = V_4;
		NullCheck(L_101);
		int32_t L_102 = 0;
		il2cpp_codegen_memcpy(L_103, (L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_102)), SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
		il2cpp_codegen_memcpy(V_1, L_103, SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
		uint32_t L_104 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_104, ((int32_t)-426199240)))^((int32_t)-288541803)));
		goto IL_0019;
	}

IL_02b8:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_106 = p0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_107 = V_4;
		uint32_t L_108 = SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_105, (int32_t)L_106, (RuntimeArray*)L_107, 0, (int32_t)L_108, NULL);
		uint32_t L_109 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_109, ((int32_t)1424714007)))^((int32_t)1172323917)));
		goto IL_0019;
	}

IL_02df:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		NullCheck(L_111);
		Type_t* L_112;
		L_112 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_111);
		int32_t L_113 = V_6;
		RuntimeArray* L_114;
		L_114 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_112, L_113, NULL);
		V_7 = L_114;
		uint32_t L_115 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_115, ((int32_t)-661441582)))^((int32_t)212622788)));
		goto IL_0019;
	}

IL_030a:
	{
		uint32_t L_116 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_116&((int32_t)1073741823)));
		uint32_t L_117 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_117, ((int32_t)749969909)))^((int32_t)931375282)));
		goto IL_0019;
	}

IL_0326:
	{
		il2cpp_codegen_memcpy(L_118, V_1, SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_118, SizeOf_U2D_t02C225C3DFD34A5B3AD432D113B2AFFBFEF842A6);
		return;
	}
}
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U206FU206EU206DU200FU206AU202AU200EU206EU200BU206BU200FU206CU200DU206BU200EU206FU200FU202AU206CU206EU202DU200EU202BU206EU202EU200DU202DU202DU206CU206DU206FU202BU206DU206EU202AU200BU206EU206AU206BU200FU202E_TisRuntimeObject_m08CE0A1626D0304A34BB3769400E7E03A33A14A4_gshared (uint32_t p0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)-1911951459)))^((int32_t)2029003020)));
		uint32_t L_1 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_1>>((int32_t)30)));
	}

IL_0014:
	{
		G_B2_0 = ((int32_t)-1635729859);
	}

IL_0019:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-1336270682)));
		V_8 = (uint32_t)L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)14))))
		{
			case 0:
			{
				goto IL_01d1;
			}
			case 1:
			{
				goto IL_012c;
			}
			case 2:
			{
				goto IL_00d4;
			}
			case 3:
			{
				goto IL_0067;
			}
			case 4:
			{
				goto IL_009f;
			}
			case 5:
			{
				goto IL_015b;
			}
			case 6:
			{
				goto IL_00ef;
			}
			case 7:
			{
				goto IL_02b6;
			}
			case 8:
			{
				goto IL_0221;
			}
			case 9:
			{
				goto IL_00b9;
			}
			case 10:
			{
				goto IL_017e;
			}
			case 11:
			{
				goto IL_0014;
			}
			case 12:
			{
				goto IL_020e;
			}
			case 13:
			{
				goto IL_0109;
			}
		}
	}
	{
		goto IL_02b6;
	}

IL_0067:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)1);
		V_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_5 = p0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_4;
		uint32_t L_7 = sizeof(RuntimeObject*);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_4, (int32_t)L_5, (RuntimeArray*)L_6, 0, (int32_t)L_7, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_4;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		uint32_t L_11 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)1905927199)))^((int32_t)-141065327)));
		goto IL_0019;
	}

IL_009f:
	{
		uint32_t L_12 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_12)) == ((int64_t)((int64_t)1))))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_13 = ((int32_t)-1233226415);
		G_B8_0 = L_13;
		G_B8_1 = L_13;
		goto IL_00b3;
	}

IL_00ad:
	{
		int32_t L_14 = ((int32_t)-1672234314);
		G_B8_0 = L_14;
		G_B8_1 = L_14;
	}

IL_00b3:
	{
		G_B2_0 = G_B8_1;
		goto IL_0019;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		uint32_t L_15 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)2093876225)))^((int32_t)-869226302)));
		goto IL_0019;
	}

IL_00d4:
	{
		RuntimeArray* L_16 = V_7;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1)));
		uint32_t L_17 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)266597434)))^((int32_t)208881869)));
		goto IL_0019;
	}

IL_00ef:
	{
		uint32_t L_18 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_18)) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_19 = ((int32_t)-1186584555);
		G_B14_0 = L_19;
		G_B14_1 = L_19;
		goto IL_0103;
	}

IL_00fd:
	{
		int32_t L_20 = ((int32_t)-1556035146);
		G_B14_0 = L_20;
		G_B14_1 = L_20;
	}

IL_0103:
	{
		G_B2_0 = G_B14_1;
		goto IL_0019;
	}

IL_0109:
	{
		uint32_t L_21 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_21)) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_22 = ((int32_t)-1800085173);
		G_B18_0 = L_22;
		G_B18_1 = L_22;
		goto IL_011d;
	}

IL_0117:
	{
		int32_t L_23 = ((int32_t)-931051011);
		G_B18_0 = L_23;
		G_B18_1 = L_23;
	}

IL_011d:
	{
		uint32_t L_24 = V_8;
		G_B2_0 = ((int32_t)(G_B18_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)342938823)))));
		goto IL_0019;
	}

IL_012c:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_25;
		L_25 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_27 = p0;
		int32_t L_28 = V_3;
		NullCheck(L_25);
		String_t* L_29;
		L_29 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_25, L_26, (int32_t)L_27, L_28);
		String_t* L_30;
		L_30 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_29, NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 1)));
		uint32_t L_31 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)140590687)))^((int32_t)2010691474)));
		goto IL_0019;
	}

IL_015b:
	{
		RuntimeObject* L_32 = V_2;
		V_1 = L_32;
		uint32_t L_33 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_33&((int32_t)1073741823)));
		uint32_t L_34 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_34<<2));
		uint32_t L_35 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)-335627103)))^((int32_t)-634981054)));
		goto IL_0019;
	}

IL_017e:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_37 = p0;
		uint32_t L_38 = L_37;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, 1));
		NullCheck(L_36);
		uintptr_t L_39 = ((uintptr_t)L_38);
		uint8_t L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_42 = p0;
		uint32_t L_43 = L_42;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, 1));
		NullCheck(L_41);
		uintptr_t L_44 = ((uintptr_t)L_43);
		uint8_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_47 = p0;
		uint32_t L_48 = L_47;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, 1));
		NullCheck(L_46);
		uintptr_t L_49 = ((uintptr_t)L_48);
		uint8_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_52 = p0;
		uint32_t L_53 = L_52;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, 1));
		NullCheck(L_51);
		uintptr_t L_54 = ((uintptr_t)L_53);
		uint8_t L_55 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_40|((int32_t)((int32_t)L_45<<8))))|((int32_t)((int32_t)L_50<<((int32_t)16)))))|((int32_t)((int32_t)L_55<<((int32_t)24)))));
		uint32_t L_56 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_56, ((int32_t)979729809)))^((int32_t)882554891)));
		goto IL_0019;
	}

IL_01d1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		NullCheck(L_58);
		Type_t* L_59;
		L_59 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_58);
		int32_t L_60 = V_6;
		RuntimeArray* L_61;
		L_61 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_59, L_60, NULL);
		V_7 = L_61;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_63 = p0;
		RuntimeArray* L_64 = V_7;
		int32_t L_65 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_62, (int32_t)L_63, L_64, 0, ((int32_t)il2cpp_codegen_subtract(L_65, 4)), NULL);
		uint32_t L_66 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_66, ((int32_t)1227588344)))^((int32_t)-6931840)));
		goto IL_0019;
	}

IL_020e:
	{
		uint32_t L_67 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_67, ((int32_t)1420430990)))^((int32_t)1893881917)));
		goto IL_0019;
	}

IL_0221:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_69 = p0;
		uint32_t L_70 = L_69;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, 1));
		NullCheck(L_68);
		uintptr_t L_71 = ((uintptr_t)L_70);
		uint8_t L_72 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_74 = p0;
		uint32_t L_75 = L_74;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, 1));
		NullCheck(L_73);
		uintptr_t L_76 = ((uintptr_t)L_75);
		uint8_t L_77 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_79 = p0;
		uint32_t L_80 = L_79;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_80, 1));
		NullCheck(L_78);
		uintptr_t L_81 = ((uintptr_t)L_80);
		uint8_t L_82 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_84 = p0;
		uint32_t L_85 = L_84;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, 1));
		NullCheck(L_83);
		uintptr_t L_86 = ((uintptr_t)L_85);
		uint8_t L_87 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_72|((int32_t)((int32_t)L_77<<8))))|((int32_t)((int32_t)L_82<<((int32_t)16)))))|((int32_t)((int32_t)L_87<<((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_89 = p0;
		uint32_t L_90 = L_89;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, 1));
		NullCheck(L_88);
		uintptr_t L_91 = ((uintptr_t)L_90);
		uint8_t L_92 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_94 = p0;
		uint32_t L_95 = L_94;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_95, 1));
		NullCheck(L_93);
		uintptr_t L_96 = ((uintptr_t)L_95);
		uint8_t L_97 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_99 = p0;
		uint32_t L_100 = L_99;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_100, 1));
		NullCheck(L_98);
		uintptr_t L_101 = ((uintptr_t)L_100);
		uint8_t L_102 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_104 = p0;
		uint32_t L_105 = L_104;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_105, 1));
		NullCheck(L_103);
		uintptr_t L_106 = ((uintptr_t)L_105);
		uint8_t L_107 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_92|((int32_t)((int32_t)L_97<<8))))|((int32_t)((int32_t)L_102<<((int32_t)16)))))|((int32_t)((int32_t)L_107<<((int32_t)24)))));
		uint32_t L_108 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_108, ((int32_t)2130322048)))^((int32_t)1729008662)));
		goto IL_0019;
	}

IL_02b6:
	{
		RuntimeObject* L_109 = V_1;
		return L_109;
	}
}
// - <Module>::?????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U206FU206EU206DU200FU206AU202AU200EU206EU200BU206BU200FU206CU200DU206BU200EU206FU200FU202AU206CU206EU202DU200EU202BU206EU202EU200DU202DU202DU206CU206DU206FU202BU206DU206EU202AU200BU206EU206AU206BU200FU202E_TisIl2CppFullySharedGenericAny_m866ECA884A4DB1CF918D4A43540D2CB3CA82E71A_gshared (uint32_t p0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(-)
	const uint32_t SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// -
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
	const Il2CppFullySharedGenericAny L_17 = L_10;
	const Il2CppFullySharedGenericAny L_33 = L_10;
	const Il2CppFullySharedGenericAny L_36 = L_10;
	const Il2CppFullySharedGenericAny L_113 = L_10;
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
	memset(V_1, 0, SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
	memset(V_2, 0, SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
	int32_t V_3 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)-1911951459)))^((int32_t)2029003020)));
		uint32_t L_1 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_1>>((int32_t)30)));
	}

IL_0014:
	{
		G_B2_0 = ((int32_t)-1635729859);
	}

IL_0019:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-1336270682)));
		V_8 = (uint32_t)L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)14))))
		{
			case 0:
			{
				goto IL_01d1;
			}
			case 1:
			{
				goto IL_012c;
			}
			case 2:
			{
				goto IL_00d4;
			}
			case 3:
			{
				goto IL_0067;
			}
			case 4:
			{
				goto IL_009f;
			}
			case 5:
			{
				goto IL_015b;
			}
			case 6:
			{
				goto IL_00ef;
			}
			case 7:
			{
				goto IL_02b6;
			}
			case 8:
			{
				goto IL_0221;
			}
			case 9:
			{
				goto IL_00b9;
			}
			case 10:
			{
				goto IL_017e;
			}
			case 11:
			{
				goto IL_0014;
			}
			case 12:
			{
				goto IL_020e;
			}
			case 13:
			{
				goto IL_0109;
			}
		}
	}
	{
		goto IL_02b6;
	}

IL_0067:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)1);
		V_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_5 = p0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_4;
		uint32_t L_7 = SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_4, (int32_t)L_5, (RuntimeArray*)L_6, 0, (int32_t)L_7, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_4;
		NullCheck(L_8);
		int32_t L_9 = 0;
		il2cpp_codegen_memcpy(L_10, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
		il2cpp_codegen_memcpy(V_1, L_10, SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
		uint32_t L_11 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)1905927199)))^((int32_t)-141065327)));
		goto IL_0019;
	}

IL_009f:
	{
		uint32_t L_12 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_12)) == ((int64_t)((int64_t)1))))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_13 = ((int32_t)-1233226415);
		G_B8_0 = L_13;
		G_B8_1 = L_13;
		goto IL_00b3;
	}

IL_00ad:
	{
		int32_t L_14 = ((int32_t)-1672234314);
		G_B8_0 = L_14;
		G_B8_1 = L_14;
	}

IL_00b3:
	{
		G_B2_0 = G_B8_1;
		goto IL_0019;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
		uint32_t L_15 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)2093876225)))^((int32_t)-869226302)));
		goto IL_0019;
	}

IL_00d4:
	{
		RuntimeArray* L_16 = V_7;
		void* L_18 = UnBox_Any((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1), L_17);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_18))), SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
		uint32_t L_19 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)266597434)))^((int32_t)208881869)));
		goto IL_0019;
	}

IL_00ef:
	{
		uint32_t L_20 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_20)) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_21 = ((int32_t)-1186584555);
		G_B14_0 = L_21;
		G_B14_1 = L_21;
		goto IL_0103;
	}

IL_00fd:
	{
		int32_t L_22 = ((int32_t)-1556035146);
		G_B14_0 = L_22;
		G_B14_1 = L_22;
	}

IL_0103:
	{
		G_B2_0 = G_B14_1;
		goto IL_0019;
	}

IL_0109:
	{
		uint32_t L_23 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_23)) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_24 = ((int32_t)-1800085173);
		G_B18_0 = L_24;
		G_B18_1 = L_24;
		goto IL_011d;
	}

IL_0117:
	{
		int32_t L_25 = ((int32_t)-931051011);
		G_B18_0 = L_25;
		G_B18_1 = L_25;
	}

IL_011d:
	{
		uint32_t L_26 = V_8;
		G_B2_0 = ((int32_t)(G_B18_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)342938823)))));
		goto IL_0019;
	}

IL_012c:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_27;
		L_27 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_29 = p0;
		int32_t L_30 = V_3;
		NullCheck(L_27);
		String_t* L_31;
		L_31 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_27, L_28, (int32_t)L_29, L_30);
		String_t* L_32;
		L_32 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_31, NULL);
		void* L_34 = UnBox_Any((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 1), L_33);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_34))), SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
		uint32_t L_35 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)140590687)))^((int32_t)2010691474)));
		goto IL_0019;
	}

IL_015b:
	{
		il2cpp_codegen_memcpy(L_36, V_2, SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
		il2cpp_codegen_memcpy(V_1, L_36, SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
		uint32_t L_37 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_37&((int32_t)1073741823)));
		uint32_t L_38 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_38<<2));
		uint32_t L_39 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)-335627103)))^((int32_t)-634981054)));
		goto IL_0019;
	}

IL_017e:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_41 = p0;
		uint32_t L_42 = L_41;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, 1));
		NullCheck(L_40);
		uintptr_t L_43 = ((uintptr_t)L_42);
		uint8_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_46 = p0;
		uint32_t L_47 = L_46;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, 1));
		NullCheck(L_45);
		uintptr_t L_48 = ((uintptr_t)L_47);
		uint8_t L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_51 = p0;
		uint32_t L_52 = L_51;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, 1));
		NullCheck(L_50);
		uintptr_t L_53 = ((uintptr_t)L_52);
		uint8_t L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_56 = p0;
		uint32_t L_57 = L_56;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, 1));
		NullCheck(L_55);
		uintptr_t L_58 = ((uintptr_t)L_57);
		uint8_t L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_44|((int32_t)((int32_t)L_49<<8))))|((int32_t)((int32_t)L_54<<((int32_t)16)))))|((int32_t)((int32_t)L_59<<((int32_t)24)))));
		uint32_t L_60 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_60, ((int32_t)979729809)))^((int32_t)882554891)));
		goto IL_0019;
	}

IL_01d1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		NullCheck(L_62);
		Type_t* L_63;
		L_63 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_62);
		int32_t L_64 = V_6;
		RuntimeArray* L_65;
		L_65 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_63, L_64, NULL);
		V_7 = L_65;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_67 = p0;
		RuntimeArray* L_68 = V_7;
		int32_t L_69 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_66, (int32_t)L_67, L_68, 0, ((int32_t)il2cpp_codegen_subtract(L_69, 4)), NULL);
		uint32_t L_70 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_70, ((int32_t)1227588344)))^((int32_t)-6931840)));
		goto IL_0019;
	}

IL_020e:
	{
		uint32_t L_71 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_71, ((int32_t)1420430990)))^((int32_t)1893881917)));
		goto IL_0019;
	}

IL_0221:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_73 = p0;
		uint32_t L_74 = L_73;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_74, 1));
		NullCheck(L_72);
		uintptr_t L_75 = ((uintptr_t)L_74);
		uint8_t L_76 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_78 = p0;
		uint32_t L_79 = L_78;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_79, 1));
		NullCheck(L_77);
		uintptr_t L_80 = ((uintptr_t)L_79);
		uint8_t L_81 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_83 = p0;
		uint32_t L_84 = L_83;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_84, 1));
		NullCheck(L_82);
		uintptr_t L_85 = ((uintptr_t)L_84);
		uint8_t L_86 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_88 = p0;
		uint32_t L_89 = L_88;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_89, 1));
		NullCheck(L_87);
		uintptr_t L_90 = ((uintptr_t)L_89);
		uint8_t L_91 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_76|((int32_t)((int32_t)L_81<<8))))|((int32_t)((int32_t)L_86<<((int32_t)16)))))|((int32_t)((int32_t)L_91<<((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_93 = p0;
		uint32_t L_94 = L_93;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, 1));
		NullCheck(L_92);
		uintptr_t L_95 = ((uintptr_t)L_94);
		uint8_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_98 = p0;
		uint32_t L_99 = L_98;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, 1));
		NullCheck(L_97);
		uintptr_t L_100 = ((uintptr_t)L_99);
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_103 = p0;
		uint32_t L_104 = L_103;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_104, 1));
		NullCheck(L_102);
		uintptr_t L_105 = ((uintptr_t)L_104);
		uint8_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = ((U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_tA82FE59E8D2D3F520EE4F3A3805E43C9AB6E7171_il2cpp_TypeInfo_var))->___U202BU200DU202CU200EU202DU202DU200FU202EU200CU206AU202CU202CU200DU200CU200CU206BU202DU202BU200FU206DU202AU206DU206FU206BU200FU200FU202EU206DU202EU202AU206CU200BU202CU202CU202CU200FU202AU206DU200EU202AU202E_2;
		uint32_t L_108 = p0;
		uint32_t L_109 = L_108;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_109, 1));
		NullCheck(L_107);
		uintptr_t L_110 = ((uintptr_t)L_109);
		uint8_t L_111 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_96|((int32_t)((int32_t)L_101<<8))))|((int32_t)((int32_t)L_106<<((int32_t)16)))))|((int32_t)((int32_t)L_111<<((int32_t)24)))));
		uint32_t L_112 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_112, ((int32_t)2130322048)))^((int32_t)1729008662)));
		goto IL_0019;
	}

IL_02b6:
	{
		il2cpp_codegen_memcpy(L_113, V_1, SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
		il2cpp_codegen_memcpy(il2cppRetVal, L_113, SizeOf_U2D_t2B2E6B78F54B2B2843547C04E142740AECC98954);
		return;
	}
}
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisRuntimeObject_m12A2C6534575AFAB9E616F24DAA55AED9A942ABE_gshared (uint32_t p0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)454878013)))^((int32_t)1195724265)));
	}

IL_000f:
	{
		G_B2_0 = ((int32_t)1959579001);
	}

IL_0014:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1651575094)));
		V_8 = (uint32_t)L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)16))))
		{
			case 0:
			{
				goto IL_01be;
			}
			case 1:
			{
				goto IL_00b3;
			}
			case 2:
			{
				goto IL_000f;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0240;
			}
			case 5:
			{
				goto IL_0099;
			}
			case 6:
			{
				goto IL_02e1;
			}
			case 7:
			{
				goto IL_01d1;
			}
			case 8:
			{
				goto IL_006a;
			}
			case 9:
			{
				goto IL_01a9;
			}
			case 10:
			{
				goto IL_027f;
			}
			case 11:
			{
				goto IL_0263;
			}
			case 12:
			{
				goto IL_00cf;
			}
			case 13:
			{
				goto IL_0196;
			}
			case 14:
			{
				goto IL_029a;
			}
			case 15:
			{
				goto IL_02c9;
			}
		}
	}
	{
		goto IL_02e1;
	}

IL_006a:
	{
		uint32_t L_2 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_2<<2));
		uint32_t L_3 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1342084200)))^((int32_t)1393654418)));
		goto IL_0014;
	}

IL_007f:
	{
		uint32_t L_4 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_4)) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_5 = ((int32_t)150001930);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_0093;
	}

IL_008d:
	{
		int32_t L_6 = ((int32_t)2055012880);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_0093:
	{
		G_B2_0 = G_B8_1;
		goto IL_0014;
	}

IL_0099:
	{
		uint32_t L_7 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_7)) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_8 = ((int32_t)527382664);
		G_B12_0 = L_8;
		G_B12_1 = L_8;
		goto IL_00ad;
	}

IL_00a7:
	{
		int32_t L_9 = ((int32_t)112097717);
		G_B12_0 = L_9;
		G_B12_1 = L_9;
	}

IL_00ad:
	{
		G_B2_0 = G_B12_1;
		goto IL_0014;
	}

IL_00b3:
	{
		uint32_t L_10 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_10&((int32_t)1073741823)));
		uint32_t L_11 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)375384162)))^((int32_t)233849468)));
		goto IL_0014;
	}

IL_00cf:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_13 = p0;
		uint32_t L_14 = L_13;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
		NullCheck(L_12);
		uintptr_t L_15 = ((uintptr_t)L_14);
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_18 = p0;
		uint32_t L_19 = L_18;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, 1));
		NullCheck(L_17);
		uintptr_t L_20 = ((uintptr_t)L_19);
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_23 = p0;
		uint32_t L_24 = L_23;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, 1));
		NullCheck(L_22);
		uintptr_t L_25 = ((uintptr_t)L_24);
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_28 = p0;
		uint32_t L_29 = L_28;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, 1));
		NullCheck(L_27);
		uintptr_t L_30 = ((uintptr_t)L_29);
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_16|((int32_t)((int32_t)L_21<<8))))|((int32_t)((int32_t)L_26<<((int32_t)16)))))|((int32_t)((int32_t)L_31<<((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_33 = p0;
		uint32_t L_34 = L_33;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, 1));
		NullCheck(L_32);
		uintptr_t L_35 = ((uintptr_t)L_34);
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_38 = p0;
		uint32_t L_39 = L_38;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, 1));
		NullCheck(L_37);
		uintptr_t L_40 = ((uintptr_t)L_39);
		uint8_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_43 = p0;
		uint32_t L_44 = L_43;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, 1));
		NullCheck(L_42);
		uintptr_t L_45 = ((uintptr_t)L_44);
		uint8_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_48 = p0;
		uint32_t L_49 = L_48;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, 1));
		NullCheck(L_47);
		uintptr_t L_50 = ((uintptr_t)L_49);
		uint8_t L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_36|((int32_t)((int32_t)L_41<<8))))|((int32_t)((int32_t)L_46<<((int32_t)16)))))|((int32_t)((int32_t)L_51<<((int32_t)24)))));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		NullCheck(L_53);
		Type_t* L_54;
		L_54 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_53);
		int32_t L_55 = V_6;
		RuntimeArray* L_56;
		L_56 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_54, L_55, NULL);
		V_7 = L_56;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_58 = p0;
		RuntimeArray* L_59 = V_7;
		int32_t L_60 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_57, (int32_t)L_58, L_59, 0, ((int32_t)il2cpp_codegen_subtract(L_60, 4)), NULL);
		RuntimeArray* L_61 = V_7;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_61, il2cpp_rgctx_data(method->rgctx_data, 1)));
		uint32_t L_62 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_62, ((int32_t)-197350285)))^((int32_t)1949685988)));
		goto IL_0014;
	}

IL_0196:
	{
		uint32_t L_63 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_63, ((int32_t)1924169776)))^((int32_t)-624320672)));
		goto IL_0014;
	}

IL_01a9:
	{
		RuntimeObject* L_64 = V_2;
		V_1 = L_64;
		uint32_t L_65 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_65, ((int32_t)-438077940)))^((int32_t)-1019063605)));
		goto IL_0014;
	}

IL_01be:
	{
		uint32_t L_66 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_66, ((int32_t)90090748)))^((int32_t)-2113597424)));
		goto IL_0014;
	}

IL_01d1:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_68 = p0;
		uint32_t L_69 = L_68;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_69, 1));
		NullCheck(L_67);
		uintptr_t L_70 = ((uintptr_t)L_69);
		uint8_t L_71 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_73 = p0;
		uint32_t L_74 = L_73;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_74, 1));
		NullCheck(L_72);
		uintptr_t L_75 = ((uintptr_t)L_74);
		uint8_t L_76 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_78 = p0;
		uint32_t L_79 = L_78;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_79, 1));
		NullCheck(L_77);
		uintptr_t L_80 = ((uintptr_t)L_79);
		uint8_t L_81 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_83 = p0;
		uint32_t L_84 = L_83;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_84, 1));
		NullCheck(L_82);
		uintptr_t L_85 = ((uintptr_t)L_84);
		uint8_t L_86 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_71|((int32_t)((int32_t)L_76<<8))))|((int32_t)((int32_t)L_81<<((int32_t)16)))))|((int32_t)((int32_t)L_86<<((int32_t)24)))));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_87;
		L_87 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_89 = p0;
		int32_t L_90 = V_3;
		NullCheck(L_87);
		String_t* L_91;
		L_91 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_87, L_88, (int32_t)L_89, L_90);
		String_t* L_92;
		L_92 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_91, NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_92, il2cpp_rgctx_data(method->rgctx_data, 1)));
		uint32_t L_93 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_93, ((int32_t)978952633)))^((int32_t)1556801748)));
		goto IL_0014;
	}

IL_0240:
	{
		uint32_t L_94 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_94)) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_024e;
		}
	}
	{
		int32_t L_95 = ((int32_t)1309593217);
		G_B22_0 = L_95;
		G_B22_1 = L_95;
		goto IL_0254;
	}

IL_024e:
	{
		int32_t L_96 = ((int32_t)928406579);
		G_B22_0 = L_96;
		G_B22_1 = L_96;
	}

IL_0254:
	{
		uint32_t L_97 = V_8;
		G_B2_0 = ((int32_t)(G_B22_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_97, ((int32_t)1893672528)))));
		goto IL_0014;
	}

IL_0263:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_98 = V_4;
		NullCheck(L_98);
		int32_t L_99 = 0;
		RuntimeObject* L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_1 = L_100;
		uint32_t L_101 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_101, ((int32_t)-354995057)))^((int32_t)1783040931)));
		goto IL_0014;
	}

IL_027f:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		uint32_t L_102 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_102, ((int32_t)-1897223759)))^((int32_t)-602574059)));
		goto IL_0014;
	}

IL_029a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_103 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)1);
		V_4 = L_103;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_105 = p0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106 = V_4;
		uint32_t L_107 = sizeof(RuntimeObject*);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_104, (int32_t)L_105, (RuntimeArray*)L_106, 0, (int32_t)L_107, NULL);
		uint32_t L_108 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_108, ((int32_t)778066521)))^((int32_t)-2141565917)));
		goto IL_0014;
	}

IL_02c9:
	{
		uint32_t L_109 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_109>>((int32_t)30)));
		uint32_t L_110 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_110, ((int32_t)-1982798463)))^((int32_t)-1459480205)));
		goto IL_0014;
	}

IL_02e1:
	{
		RuntimeObject* L_111 = V_1;
		return L_111;
	}
}
// - <Module>::?????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisIl2CppFullySharedGenericAny_m9782F1ADB4CA83645190DAAE8FFE6BBB3E286A2B_gshared (uint32_t p0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(-)
	const uint32_t SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// -
	const Il2CppFullySharedGenericAny L_62 = alloca(SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
	const Il2CppFullySharedGenericAny L_66 = L_62;
	const Il2CppFullySharedGenericAny L_95 = L_62;
	const Il2CppFullySharedGenericAny L_104 = L_62;
	const Il2CppFullySharedGenericAny L_115 = L_62;
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
	memset(V_1, 0, SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
	memset(V_2, 0, SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
	int32_t V_3 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)454878013)))^((int32_t)1195724265)));
	}

IL_000f:
	{
		G_B2_0 = ((int32_t)1959579001);
	}

IL_0014:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1651575094)));
		V_8 = (uint32_t)L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)16))))
		{
			case 0:
			{
				goto IL_01be;
			}
			case 1:
			{
				goto IL_00b3;
			}
			case 2:
			{
				goto IL_000f;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0240;
			}
			case 5:
			{
				goto IL_0099;
			}
			case 6:
			{
				goto IL_02e1;
			}
			case 7:
			{
				goto IL_01d1;
			}
			case 8:
			{
				goto IL_006a;
			}
			case 9:
			{
				goto IL_01a9;
			}
			case 10:
			{
				goto IL_027f;
			}
			case 11:
			{
				goto IL_0263;
			}
			case 12:
			{
				goto IL_00cf;
			}
			case 13:
			{
				goto IL_0196;
			}
			case 14:
			{
				goto IL_029a;
			}
			case 15:
			{
				goto IL_02c9;
			}
		}
	}
	{
		goto IL_02e1;
	}

IL_006a:
	{
		uint32_t L_2 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_2<<2));
		uint32_t L_3 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1342084200)))^((int32_t)1393654418)));
		goto IL_0014;
	}

IL_007f:
	{
		uint32_t L_4 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_4)) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_5 = ((int32_t)150001930);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_0093;
	}

IL_008d:
	{
		int32_t L_6 = ((int32_t)2055012880);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_0093:
	{
		G_B2_0 = G_B8_1;
		goto IL_0014;
	}

IL_0099:
	{
		uint32_t L_7 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_7)) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_8 = ((int32_t)527382664);
		G_B12_0 = L_8;
		G_B12_1 = L_8;
		goto IL_00ad;
	}

IL_00a7:
	{
		int32_t L_9 = ((int32_t)112097717);
		G_B12_0 = L_9;
		G_B12_1 = L_9;
	}

IL_00ad:
	{
		G_B2_0 = G_B12_1;
		goto IL_0014;
	}

IL_00b3:
	{
		uint32_t L_10 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_10&((int32_t)1073741823)));
		uint32_t L_11 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)375384162)))^((int32_t)233849468)));
		goto IL_0014;
	}

IL_00cf:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_13 = p0;
		uint32_t L_14 = L_13;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
		NullCheck(L_12);
		uintptr_t L_15 = ((uintptr_t)L_14);
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_18 = p0;
		uint32_t L_19 = L_18;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, 1));
		NullCheck(L_17);
		uintptr_t L_20 = ((uintptr_t)L_19);
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_23 = p0;
		uint32_t L_24 = L_23;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, 1));
		NullCheck(L_22);
		uintptr_t L_25 = ((uintptr_t)L_24);
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_28 = p0;
		uint32_t L_29 = L_28;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, 1));
		NullCheck(L_27);
		uintptr_t L_30 = ((uintptr_t)L_29);
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_16|((int32_t)((int32_t)L_21<<8))))|((int32_t)((int32_t)L_26<<((int32_t)16)))))|((int32_t)((int32_t)L_31<<((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_33 = p0;
		uint32_t L_34 = L_33;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, 1));
		NullCheck(L_32);
		uintptr_t L_35 = ((uintptr_t)L_34);
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_38 = p0;
		uint32_t L_39 = L_38;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, 1));
		NullCheck(L_37);
		uintptr_t L_40 = ((uintptr_t)L_39);
		uint8_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_43 = p0;
		uint32_t L_44 = L_43;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, 1));
		NullCheck(L_42);
		uintptr_t L_45 = ((uintptr_t)L_44);
		uint8_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_48 = p0;
		uint32_t L_49 = L_48;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, 1));
		NullCheck(L_47);
		uintptr_t L_50 = ((uintptr_t)L_49);
		uint8_t L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_36|((int32_t)((int32_t)L_41<<8))))|((int32_t)((int32_t)L_46<<((int32_t)16)))))|((int32_t)((int32_t)L_51<<((int32_t)24)))));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		NullCheck(L_53);
		Type_t* L_54;
		L_54 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_53);
		int32_t L_55 = V_6;
		RuntimeArray* L_56;
		L_56 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_54, L_55, NULL);
		V_7 = L_56;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_58 = p0;
		RuntimeArray* L_59 = V_7;
		int32_t L_60 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_57, (int32_t)L_58, L_59, 0, ((int32_t)il2cpp_codegen_subtract(L_60, 4)), NULL);
		RuntimeArray* L_61 = V_7;
		void* L_63 = UnBox_Any((RuntimeObject*)L_61, il2cpp_rgctx_data(method->rgctx_data, 1), L_62);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_63))), SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
		uint32_t L_64 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_64, ((int32_t)-197350285)))^((int32_t)1949685988)));
		goto IL_0014;
	}

IL_0196:
	{
		uint32_t L_65 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_65, ((int32_t)1924169776)))^((int32_t)-624320672)));
		goto IL_0014;
	}

IL_01a9:
	{
		il2cpp_codegen_memcpy(L_66, V_2, SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
		il2cpp_codegen_memcpy(V_1, L_66, SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
		uint32_t L_67 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_67, ((int32_t)-438077940)))^((int32_t)-1019063605)));
		goto IL_0014;
	}

IL_01be:
	{
		uint32_t L_68 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_68, ((int32_t)90090748)))^((int32_t)-2113597424)));
		goto IL_0014;
	}

IL_01d1:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_70 = p0;
		uint32_t L_71 = L_70;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_71, 1));
		NullCheck(L_69);
		uintptr_t L_72 = ((uintptr_t)L_71);
		uint8_t L_73 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_75 = p0;
		uint32_t L_76 = L_75;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, 1));
		NullCheck(L_74);
		uintptr_t L_77 = ((uintptr_t)L_76);
		uint8_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_80 = p0;
		uint32_t L_81 = L_80;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_81, 1));
		NullCheck(L_79);
		uintptr_t L_82 = ((uintptr_t)L_81);
		uint8_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_85 = p0;
		uint32_t L_86 = L_85;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_86, 1));
		NullCheck(L_84);
		uintptr_t L_87 = ((uintptr_t)L_86);
		uint8_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_73|((int32_t)((int32_t)L_78<<8))))|((int32_t)((int32_t)L_83<<((int32_t)16)))))|((int32_t)((int32_t)L_88<<((int32_t)24)))));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_89;
		L_89 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_91 = p0;
		int32_t L_92 = V_3;
		NullCheck(L_89);
		String_t* L_93;
		L_93 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_89, L_90, (int32_t)L_91, L_92);
		String_t* L_94;
		L_94 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_93, NULL);
		void* L_96 = UnBox_Any((RuntimeObject*)L_94, il2cpp_rgctx_data(method->rgctx_data, 1), L_95);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_96))), SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
		uint32_t L_97 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_97, ((int32_t)978952633)))^((int32_t)1556801748)));
		goto IL_0014;
	}

IL_0240:
	{
		uint32_t L_98 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_98)) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_024e;
		}
	}
	{
		int32_t L_99 = ((int32_t)1309593217);
		G_B22_0 = L_99;
		G_B22_1 = L_99;
		goto IL_0254;
	}

IL_024e:
	{
		int32_t L_100 = ((int32_t)928406579);
		G_B22_0 = L_100;
		G_B22_1 = L_100;
	}

IL_0254:
	{
		uint32_t L_101 = V_8;
		G_B2_0 = ((int32_t)(G_B22_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_101, ((int32_t)1893672528)))));
		goto IL_0014;
	}

IL_0263:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_102 = V_4;
		NullCheck(L_102);
		int32_t L_103 = 0;
		il2cpp_codegen_memcpy(L_104, (L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_103)), SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
		il2cpp_codegen_memcpy(V_1, L_104, SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
		uint32_t L_105 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_105, ((int32_t)-354995057)))^((int32_t)1783040931)));
		goto IL_0014;
	}

IL_027f:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
		uint32_t L_106 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_106, ((int32_t)-1897223759)))^((int32_t)-602574059)));
		goto IL_0014;
	}

IL_029a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_107 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)1);
		V_4 = L_107;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_109 = p0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_110 = V_4;
		uint32_t L_111 = SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_108, (int32_t)L_109, (RuntimeArray*)L_110, 0, (int32_t)L_111, NULL);
		uint32_t L_112 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_112, ((int32_t)778066521)))^((int32_t)-2141565917)));
		goto IL_0014;
	}

IL_02c9:
	{
		uint32_t L_113 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_113>>((int32_t)30)));
		uint32_t L_114 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_114, ((int32_t)-1982798463)))^((int32_t)-1459480205)));
		goto IL_0014;
	}

IL_02e1:
	{
		il2cpp_codegen_memcpy(L_115, V_1, SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_115, SizeOf_U2D_t340B323A64370CFE1C176878EABC0307F7F6515E);
		return;
	}
}
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisRuntimeObject_m11DAA03FF0F860EE3EC2A435A6B024217A00B26E_gshared (uint32_t p0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)1528986181)))^((int32_t)-1758371973)));
		uint32_t L_1 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_1>>((int32_t)30)));
	}

IL_0014:
	{
		G_B2_0 = ((int32_t)1561321414);
	}

IL_0019:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)222471199)));
		V_8 = (uint32_t)L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)17))))
		{
			case 0:
			{
				goto IL_02e8;
			}
			case 1:
			{
				goto IL_02fb;
			}
			case 2:
			{
				goto IL_02d5;
			}
			case 3:
			{
				goto IL_01a7;
			}
			case 4:
			{
				goto IL_02ba;
			}
			case 5:
			{
				goto IL_018c;
			}
			case 6:
			{
				goto IL_023c;
			}
			case 7:
			{
				goto IL_01fa;
			}
			case 8:
			{
				goto IL_00e4;
			}
			case 9:
			{
				goto IL_00fe;
			}
			case 10:
			{
				goto IL_00bd;
			}
			case 11:
			{
				goto IL_0014;
			}
			case 12:
			{
				goto IL_0138;
			}
			case 13:
			{
				goto IL_011a;
			}
			case 14:
			{
				goto IL_0073;
			}
			case 15:
			{
				goto IL_00a2;
			}
			case 16:
			{
				goto IL_0214;
			}
		}
	}
	{
		goto IL_02fb;
	}

IL_0073:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_5 = p0;
		int32_t L_6 = V_3;
		NullCheck(L_3);
		String_t* L_7;
		L_7 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, (int32_t)L_5, L_6);
		String_t* L_8;
		L_8 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_7, NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 0)));
		uint32_t L_9 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)1425700394)))^((int32_t)-462978962)));
		goto IL_0019;
	}

IL_00a2:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)1);
		V_4 = L_10;
		uint32_t L_11 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)-908087455)))^((int32_t)-189134836)));
		goto IL_0019;
	}

IL_00bd:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_13 = p0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_4;
		uint32_t L_15 = sizeof(RuntimeObject*);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, (int32_t)L_13, (RuntimeArray*)L_14, 0, (int32_t)L_15, NULL);
		uint32_t L_16 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)-1688639834)))^((int32_t)383290781)));
		goto IL_0019;
	}

IL_00e4:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_17)) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_18 = ((int32_t)59074443);
		G_B10_0 = L_18;
		G_B10_1 = L_18;
		goto IL_00f8;
	}

IL_00f2:
	{
		int32_t L_19 = ((int32_t)296898447);
		G_B10_0 = L_19;
		G_B10_1 = L_19;
	}

IL_00f8:
	{
		G_B2_0 = G_B10_1;
		goto IL_0019;
	}

IL_00fe:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = 0;
		RuntimeObject* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_1 = L_22;
		uint32_t L_23 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)-841440405)))^((int32_t)-1341092694)));
		goto IL_0019;
	}

IL_011a:
	{
		RuntimeObject* L_24 = V_2;
		V_1 = L_24;
		uint32_t L_25 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_25&((int32_t)1073741823)));
		uint32_t L_26 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)1326572163)))^((int32_t)-302886882)));
		goto IL_0019;
	}

IL_0138:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_28 = p0;
		uint32_t L_29 = L_28;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, 1));
		NullCheck(L_27);
		uintptr_t L_30 = ((uintptr_t)L_29);
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_33 = p0;
		uint32_t L_34 = L_33;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, 1));
		NullCheck(L_32);
		uintptr_t L_35 = ((uintptr_t)L_34);
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_38 = p0;
		uint32_t L_39 = L_38;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, 1));
		NullCheck(L_37);
		uintptr_t L_40 = ((uintptr_t)L_39);
		uint8_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_43 = p0;
		uint32_t L_44 = L_43;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, 1));
		NullCheck(L_42);
		uintptr_t L_45 = ((uintptr_t)L_44);
		uint8_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_31|((int32_t)((int32_t)L_36<<8))))|((int32_t)((int32_t)L_41<<((int32_t)16)))))|((int32_t)((int32_t)L_46<<((int32_t)24)))));
		uint32_t L_47 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_47, ((int32_t)1620435343)))^((int32_t)566434255)));
		goto IL_0019;
	}

IL_018c:
	{
		RuntimeArray* L_48 = V_7;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_48, il2cpp_rgctx_data(method->rgctx_data, 0)));
		uint32_t L_49 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_49, ((int32_t)134530558)))^((int32_t)1751743579)));
		goto IL_0019;
	}

IL_01a7:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_51 = p0;
		uint32_t L_52 = L_51;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, 1));
		NullCheck(L_50);
		uintptr_t L_53 = ((uintptr_t)L_52);
		uint8_t L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_56 = p0;
		uint32_t L_57 = L_56;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, 1));
		NullCheck(L_55);
		uintptr_t L_58 = ((uintptr_t)L_57);
		uint8_t L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_61 = p0;
		uint32_t L_62 = L_61;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_62, 1));
		NullCheck(L_60);
		uintptr_t L_63 = ((uintptr_t)L_62);
		uint8_t L_64 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_66 = p0;
		uint32_t L_67 = L_66;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, 1));
		NullCheck(L_65);
		uintptr_t L_68 = ((uintptr_t)L_67);
		uint8_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_54|((int32_t)((int32_t)L_59<<8))))|((int32_t)((int32_t)L_64<<((int32_t)16)))))|((int32_t)((int32_t)L_69<<((int32_t)24)))));
		uint32_t L_70 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_70, ((int32_t)1882607330)))^((int32_t)-1728615136)));
		goto IL_0019;
	}

IL_01fa:
	{
		uint32_t L_71 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_71)) == ((int64_t)((int64_t)2))))
		{
			goto IL_0208;
		}
	}
	{
		int32_t L_72 = ((int32_t)1141916601);
		G_B19_0 = L_72;
		G_B19_1 = L_72;
		goto IL_020e;
	}

IL_0208:
	{
		int32_t L_73 = ((int32_t)1601767272);
		G_B19_0 = L_73;
		G_B19_1 = L_73;
	}

IL_020e:
	{
		G_B2_0 = G_B19_1;
		goto IL_0019;
	}

IL_0214:
	{
		uint32_t L_74 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_74<<2));
		uint32_t L_75 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_75)) == ((int64_t)((int64_t)1))))
		{
			goto IL_0227;
		}
	}
	{
		int32_t L_76 = ((int32_t)1336460976);
		G_B23_0 = L_76;
		G_B23_1 = L_76;
		goto IL_022d;
	}

IL_0227:
	{
		int32_t L_77 = ((int32_t)1973255931);
		G_B23_0 = L_77;
		G_B23_1 = L_77;
	}

IL_022d:
	{
		uint32_t L_78 = V_8;
		G_B2_0 = ((int32_t)(G_B23_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_78, ((int32_t)-551387584)))));
		goto IL_0019;
	}

IL_023c:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_80 = p0;
		uint32_t L_81 = L_80;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_81, 1));
		NullCheck(L_79);
		uintptr_t L_82 = ((uintptr_t)L_81);
		uint8_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_85 = p0;
		uint32_t L_86 = L_85;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_86, 1));
		NullCheck(L_84);
		uintptr_t L_87 = ((uintptr_t)L_86);
		uint8_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_90 = p0;
		uint32_t L_91 = L_90;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_91, 1));
		NullCheck(L_89);
		uintptr_t L_92 = ((uintptr_t)L_91);
		uint8_t L_93 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_95 = p0;
		uint32_t L_96 = L_95;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_96, 1));
		NullCheck(L_94);
		uintptr_t L_97 = ((uintptr_t)L_96);
		uint8_t L_98 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_83|((int32_t)((int32_t)L_88<<8))))|((int32_t)((int32_t)L_93<<((int32_t)16)))))|((int32_t)((int32_t)L_98<<((int32_t)24)))));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		NullCheck(L_100);
		Type_t* L_101;
		L_101 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_100);
		int32_t L_102 = V_6;
		RuntimeArray* L_103;
		L_103 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_101, L_102, NULL);
		V_7 = L_103;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_105 = p0;
		RuntimeArray* L_106 = V_7;
		int32_t L_107 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_104, (int32_t)L_105, L_106, 0, ((int32_t)il2cpp_codegen_subtract(L_107, 4)), NULL);
		uint32_t L_108 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_108, ((int32_t)-877758227)))^((int32_t)-636967739)));
		goto IL_0019;
	}

IL_02ba:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		uint32_t L_109 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_109, ((int32_t)291952495)))^((int32_t)-2087245722)));
		goto IL_0019;
	}

IL_02d5:
	{
		uint32_t L_110 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_110, ((int32_t)-1535849852)))^((int32_t)2069308115)));
		goto IL_0019;
	}

IL_02e8:
	{
		uint32_t L_111 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_111, ((int32_t)1616498769)))^((int32_t)1574630228)));
		goto IL_0019;
	}

IL_02fb:
	{
		RuntimeObject* L_112 = V_1;
		return L_112;
	}
}
// - <Module>::?????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisIl2CppFullySharedGenericAny_m6AF1C402E826E1874D947240C28E9F4D1AA3368B_gshared (uint32_t p0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(-)
	const uint32_t SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// -
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_26 = L_9;
	const Il2CppFullySharedGenericAny L_51 = L_9;
	const Il2CppFullySharedGenericAny L_116 = L_9;
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
	memset(V_1, 0, SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
	memset(V_2, 0, SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
	int32_t V_3 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)1528986181)))^((int32_t)-1758371973)));
		uint32_t L_1 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_1>>((int32_t)30)));
	}

IL_0014:
	{
		G_B2_0 = ((int32_t)1561321414);
	}

IL_0019:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)222471199)));
		V_8 = (uint32_t)L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)17))))
		{
			case 0:
			{
				goto IL_02e8;
			}
			case 1:
			{
				goto IL_02fb;
			}
			case 2:
			{
				goto IL_02d5;
			}
			case 3:
			{
				goto IL_01a7;
			}
			case 4:
			{
				goto IL_02ba;
			}
			case 5:
			{
				goto IL_018c;
			}
			case 6:
			{
				goto IL_023c;
			}
			case 7:
			{
				goto IL_01fa;
			}
			case 8:
			{
				goto IL_00e4;
			}
			case 9:
			{
				goto IL_00fe;
			}
			case 10:
			{
				goto IL_00bd;
			}
			case 11:
			{
				goto IL_0014;
			}
			case 12:
			{
				goto IL_0138;
			}
			case 13:
			{
				goto IL_011a;
			}
			case 14:
			{
				goto IL_0073;
			}
			case 15:
			{
				goto IL_00a2;
			}
			case 16:
			{
				goto IL_0214;
			}
		}
	}
	{
		goto IL_02fb;
	}

IL_0073:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_5 = p0;
		int32_t L_6 = V_3;
		NullCheck(L_3);
		String_t* L_7;
		L_7 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, (int32_t)L_5, L_6);
		String_t* L_8;
		L_8 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_7, NULL);
		void* L_10 = UnBox_Any((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 0), L_9);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10))), SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
		uint32_t L_11 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)1425700394)))^((int32_t)-462978962)));
		goto IL_0019;
	}

IL_00a2:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)1);
		V_4 = L_12;
		uint32_t L_13 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-908087455)))^((int32_t)-189134836)));
		goto IL_0019;
	}

IL_00bd:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_15 = p0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_4;
		uint32_t L_17 = SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_14, (int32_t)L_15, (RuntimeArray*)L_16, 0, (int32_t)L_17, NULL);
		uint32_t L_18 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-1688639834)))^((int32_t)383290781)));
		goto IL_0019;
	}

IL_00e4:
	{
		uint32_t L_19 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_19)) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_20 = ((int32_t)59074443);
		G_B10_0 = L_20;
		G_B10_1 = L_20;
		goto IL_00f8;
	}

IL_00f2:
	{
		int32_t L_21 = ((int32_t)296898447);
		G_B10_0 = L_21;
		G_B10_1 = L_21;
	}

IL_00f8:
	{
		G_B2_0 = G_B10_1;
		goto IL_0019;
	}

IL_00fe:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_4;
		NullCheck(L_22);
		int32_t L_23 = 0;
		il2cpp_codegen_memcpy(L_24, (L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
		il2cpp_codegen_memcpy(V_1, L_24, SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
		uint32_t L_25 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_25, ((int32_t)-841440405)))^((int32_t)-1341092694)));
		goto IL_0019;
	}

IL_011a:
	{
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
		il2cpp_codegen_memcpy(V_1, L_26, SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
		uint32_t L_27 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_27&((int32_t)1073741823)));
		uint32_t L_28 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)1326572163)))^((int32_t)-302886882)));
		goto IL_0019;
	}

IL_0138:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_30 = p0;
		uint32_t L_31 = L_30;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, 1));
		NullCheck(L_29);
		uintptr_t L_32 = ((uintptr_t)L_31);
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_35 = p0;
		uint32_t L_36 = L_35;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, 1));
		NullCheck(L_34);
		uintptr_t L_37 = ((uintptr_t)L_36);
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_40 = p0;
		uint32_t L_41 = L_40;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, 1));
		NullCheck(L_39);
		uintptr_t L_42 = ((uintptr_t)L_41);
		uint8_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_45 = p0;
		uint32_t L_46 = L_45;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, 1));
		NullCheck(L_44);
		uintptr_t L_47 = ((uintptr_t)L_46);
		uint8_t L_48 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_33|((int32_t)((int32_t)L_38<<8))))|((int32_t)((int32_t)L_43<<((int32_t)16)))))|((int32_t)((int32_t)L_48<<((int32_t)24)))));
		uint32_t L_49 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_49, ((int32_t)1620435343)))^((int32_t)566434255)));
		goto IL_0019;
	}

IL_018c:
	{
		RuntimeArray* L_50 = V_7;
		void* L_52 = UnBox_Any((RuntimeObject*)L_50, il2cpp_rgctx_data(method->rgctx_data, 0), L_51);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_52))), SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
		uint32_t L_53 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_53, ((int32_t)134530558)))^((int32_t)1751743579)));
		goto IL_0019;
	}

IL_01a7:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_55 = p0;
		uint32_t L_56 = L_55;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, 1));
		NullCheck(L_54);
		uintptr_t L_57 = ((uintptr_t)L_56);
		uint8_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_60 = p0;
		uint32_t L_61 = L_60;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_61, 1));
		NullCheck(L_59);
		uintptr_t L_62 = ((uintptr_t)L_61);
		uint8_t L_63 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_65 = p0;
		uint32_t L_66 = L_65;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_66, 1));
		NullCheck(L_64);
		uintptr_t L_67 = ((uintptr_t)L_66);
		uint8_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_70 = p0;
		uint32_t L_71 = L_70;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_71, 1));
		NullCheck(L_69);
		uintptr_t L_72 = ((uintptr_t)L_71);
		uint8_t L_73 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_58|((int32_t)((int32_t)L_63<<8))))|((int32_t)((int32_t)L_68<<((int32_t)16)))))|((int32_t)((int32_t)L_73<<((int32_t)24)))));
		uint32_t L_74 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_74, ((int32_t)1882607330)))^((int32_t)-1728615136)));
		goto IL_0019;
	}

IL_01fa:
	{
		uint32_t L_75 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_75)) == ((int64_t)((int64_t)2))))
		{
			goto IL_0208;
		}
	}
	{
		int32_t L_76 = ((int32_t)1141916601);
		G_B19_0 = L_76;
		G_B19_1 = L_76;
		goto IL_020e;
	}

IL_0208:
	{
		int32_t L_77 = ((int32_t)1601767272);
		G_B19_0 = L_77;
		G_B19_1 = L_77;
	}

IL_020e:
	{
		G_B2_0 = G_B19_1;
		goto IL_0019;
	}

IL_0214:
	{
		uint32_t L_78 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_78<<2));
		uint32_t L_79 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_79)) == ((int64_t)((int64_t)1))))
		{
			goto IL_0227;
		}
	}
	{
		int32_t L_80 = ((int32_t)1336460976);
		G_B23_0 = L_80;
		G_B23_1 = L_80;
		goto IL_022d;
	}

IL_0227:
	{
		int32_t L_81 = ((int32_t)1973255931);
		G_B23_0 = L_81;
		G_B23_1 = L_81;
	}

IL_022d:
	{
		uint32_t L_82 = V_8;
		G_B2_0 = ((int32_t)(G_B23_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_82, ((int32_t)-551387584)))));
		goto IL_0019;
	}

IL_023c:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_84 = p0;
		uint32_t L_85 = L_84;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, 1));
		NullCheck(L_83);
		uintptr_t L_86 = ((uintptr_t)L_85);
		uint8_t L_87 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_89 = p0;
		uint32_t L_90 = L_89;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, 1));
		NullCheck(L_88);
		uintptr_t L_91 = ((uintptr_t)L_90);
		uint8_t L_92 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_94 = p0;
		uint32_t L_95 = L_94;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_95, 1));
		NullCheck(L_93);
		uintptr_t L_96 = ((uintptr_t)L_95);
		uint8_t L_97 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_99 = p0;
		uint32_t L_100 = L_99;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_100, 1));
		NullCheck(L_98);
		uintptr_t L_101 = ((uintptr_t)L_100);
		uint8_t L_102 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_87|((int32_t)((int32_t)L_92<<8))))|((int32_t)((int32_t)L_97<<((int32_t)16)))))|((int32_t)((int32_t)L_102<<((int32_t)24)))));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		NullCheck(L_104);
		Type_t* L_105;
		L_105 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_104);
		int32_t L_106 = V_6;
		RuntimeArray* L_107;
		L_107 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_105, L_106, NULL);
		V_7 = L_107;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_109 = p0;
		RuntimeArray* L_110 = V_7;
		int32_t L_111 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_108, (int32_t)L_109, L_110, 0, ((int32_t)il2cpp_codegen_subtract(L_111, 4)), NULL);
		uint32_t L_112 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_112, ((int32_t)-877758227)))^((int32_t)-636967739)));
		goto IL_0019;
	}

IL_02ba:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
		uint32_t L_113 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_113, ((int32_t)291952495)))^((int32_t)-2087245722)));
		goto IL_0019;
	}

IL_02d5:
	{
		uint32_t L_114 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_114, ((int32_t)-1535849852)))^((int32_t)2069308115)));
		goto IL_0019;
	}

IL_02e8:
	{
		uint32_t L_115 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_115, ((int32_t)1616498769)))^((int32_t)1574630228)));
		goto IL_0019;
	}

IL_02fb:
	{
		il2cpp_codegen_memcpy(L_116, V_1, SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_116, SizeOf_U2D_tDB8831CC40E4F2A24050BD3DE44335F6CABA06FF);
		return;
	}
}
// - <Module>::????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisRuntimeObject_m22B1C7CB283CE3FEB56A4BA4A0E0789909F2A4E1_gshared (uint32_t p0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)-175751175)))^((int32_t)1409318985)));
	}

IL_000f:
	{
		G_B2_0 = ((int32_t)-1963480144);
	}

IL_0014:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-283811665)));
		V_8 = (uint32_t)L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)16))))
		{
			case 0:
			{
				goto IL_0122;
			}
			case 1:
			{
				goto IL_022c;
			}
			case 2:
			{
				goto IL_0269;
			}
			case 3:
			{
				goto IL_000f;
			}
			case 4:
			{
				goto IL_00b5;
			}
			case 5:
			{
				goto IL_009a;
			}
			case 6:
			{
				goto IL_02b5;
			}
			case 7:
			{
				goto IL_016c;
			}
			case 8:
			{
				goto IL_0108;
			}
			case 9:
			{
				goto IL_02e4;
			}
			case 10:
			{
				goto IL_01d8;
			}
			case 11:
			{
				goto IL_02c8;
			}
			case 12:
			{
				goto IL_0246;
			}
			case 13:
			{
				goto IL_028e;
			}
			case 14:
			{
				goto IL_0151;
			}
			case 15:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_02e4;
	}

IL_006a:
	{
		uint32_t L_2 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_2>>((int32_t)30)));
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_2;
		V_1 = L_3;
		uint32_t L_4 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_4&((int32_t)1073741823)));
		uint32_t L_5 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_5<<2));
		uint32_t L_6 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-1051375241)))^((int32_t)481634714)));
		goto IL_0014;
	}

IL_009a:
	{
		RuntimeArray* L_7 = V_7;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
		uint32_t L_8 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)881964645)))^((int32_t)1676149263)));
		goto IL_0014;
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_10 = p0;
		uint32_t L_11 = L_10;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, 1));
		NullCheck(L_9);
		uintptr_t L_12 = ((uintptr_t)L_11);
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_15 = p0;
		uint32_t L_16 = L_15;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, 1));
		NullCheck(L_14);
		uintptr_t L_17 = ((uintptr_t)L_16);
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_20 = p0;
		uint32_t L_21 = L_20;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, 1));
		NullCheck(L_19);
		uintptr_t L_22 = ((uintptr_t)L_21);
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_25 = p0;
		uint32_t L_26 = L_25;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, 1));
		NullCheck(L_24);
		uintptr_t L_27 = ((uintptr_t)L_26);
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_13|((int32_t)((int32_t)L_18<<8))))|((int32_t)((int32_t)L_23<<((int32_t)16)))))|((int32_t)((int32_t)L_28<<((int32_t)24)))));
		uint32_t L_29 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_29, ((int32_t)-1637535937)))^((int32_t)649790451)));
		goto IL_0014;
	}

IL_0108:
	{
		uint32_t L_30 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_30)) == ((int64_t)((int64_t)1))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_31 = ((int32_t)-86157362);
		G_B10_0 = L_31;
		G_B10_1 = L_31;
		goto IL_011c;
	}

IL_0116:
	{
		int32_t L_32 = ((int32_t)-2029989023);
		G_B10_0 = L_32;
		G_B10_1 = L_32;
	}

IL_011c:
	{
		G_B2_0 = G_B10_1;
		goto IL_0014;
	}

IL_0122:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_33;
		L_33 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_35 = p0;
		int32_t L_36 = V_3;
		NullCheck(L_33);
		String_t* L_37;
		L_37 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_33, L_34, (int32_t)L_35, L_36);
		String_t* L_38;
		L_38 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_37, NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_38, il2cpp_rgctx_data(method->rgctx_data, 0)));
		uint32_t L_39 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)-107086678)))^((int32_t)-1066960871)));
		goto IL_0014;
	}

IL_0151:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)1);
		V_4 = L_40;
		uint32_t L_41 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_41, ((int32_t)22775996)))^((int32_t)1591009546)));
		goto IL_0014;
	}

IL_016c:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_43 = p0;
		uint32_t L_44 = L_43;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, 1));
		NullCheck(L_42);
		uintptr_t L_45 = ((uintptr_t)L_44);
		uint8_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_48 = p0;
		uint32_t L_49 = L_48;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, 1));
		NullCheck(L_47);
		uintptr_t L_50 = ((uintptr_t)L_49);
		uint8_t L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_53 = p0;
		uint32_t L_54 = L_53;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_54, 1));
		NullCheck(L_52);
		uintptr_t L_55 = ((uintptr_t)L_54);
		uint8_t L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_58 = p0;
		uint32_t L_59 = L_58;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, 1));
		NullCheck(L_57);
		uintptr_t L_60 = ((uintptr_t)L_59);
		uint8_t L_61 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_46|((int32_t)((int32_t)L_51<<8))))|((int32_t)((int32_t)L_56<<((int32_t)16)))))|((int32_t)((int32_t)L_61<<((int32_t)24)))));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		NullCheck(L_63);
		Type_t* L_64;
		L_64 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_63);
		int32_t L_65 = V_6;
		RuntimeArray* L_66;
		L_66 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_64, L_65, NULL);
		V_7 = L_66;
		uint32_t L_67 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_67, ((int32_t)403650344)))^((int32_t)899534821)));
		goto IL_0014;
	}

IL_01d8:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_69 = p0;
		uint32_t L_70 = L_69;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, 1));
		NullCheck(L_68);
		uintptr_t L_71 = ((uintptr_t)L_70);
		uint8_t L_72 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_74 = p0;
		uint32_t L_75 = L_74;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, 1));
		NullCheck(L_73);
		uintptr_t L_76 = ((uintptr_t)L_75);
		uint8_t L_77 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_79 = p0;
		uint32_t L_80 = L_79;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_80, 1));
		NullCheck(L_78);
		uintptr_t L_81 = ((uintptr_t)L_80);
		uint8_t L_82 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_84 = p0;
		uint32_t L_85 = L_84;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, 1));
		NullCheck(L_83);
		uintptr_t L_86 = ((uintptr_t)L_85);
		uint8_t L_87 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_72|((int32_t)((int32_t)L_77<<8))))|((int32_t)((int32_t)L_82<<((int32_t)16)))))|((int32_t)((int32_t)L_87<<((int32_t)24)))));
		uint32_t L_88 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_88, ((int32_t)-615417799)))^((int32_t)1183160594)));
		goto IL_0014;
	}

IL_022c:
	{
		uint32_t L_89 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_89)) == ((int64_t)((int64_t)0))))
		{
			goto IL_023a;
		}
	}
	{
		int32_t L_90 = ((int32_t)-1371984266);
		G_B18_0 = L_90;
		G_B18_1 = L_90;
		goto IL_0240;
	}

IL_023a:
	{
		int32_t L_91 = ((int32_t)-1676934843);
		G_B18_0 = L_91;
		G_B18_1 = L_91;
	}

IL_0240:
	{
		G_B2_0 = G_B18_1;
		goto IL_0014;
	}

IL_0246:
	{
		uint32_t L_92 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_92)) == ((int64_t)((int64_t)3))))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_93 = ((int32_t)-669090845);
		G_B22_0 = L_93;
		G_B22_1 = L_93;
		goto IL_025a;
	}

IL_0254:
	{
		int32_t L_94 = ((int32_t)-1607451441);
		G_B22_0 = L_94;
		G_B22_1 = L_94;
	}

IL_025a:
	{
		uint32_t L_95 = V_8;
		G_B2_0 = ((int32_t)(G_B22_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_95, ((int32_t)-2033712525)))));
		goto IL_0014;
	}

IL_0269:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_97 = p0;
		RuntimeArray* L_98 = V_7;
		int32_t L_99 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_96, (int32_t)L_97, L_98, 0, ((int32_t)il2cpp_codegen_subtract(L_99, 4)), NULL);
		uint32_t L_100 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_100, ((int32_t)1563098605)))^((int32_t)1455111104)));
		goto IL_0014;
	}

IL_028e:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_102 = p0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_103 = V_4;
		uint32_t L_104 = sizeof(RuntimeObject*);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_101, (int32_t)L_102, (RuntimeArray*)L_103, 0, (int32_t)L_104, NULL);
		uint32_t L_105 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_105, ((int32_t)137146436)))^((int32_t)870525408)));
		goto IL_0014;
	}

IL_02b5:
	{
		uint32_t L_106 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_106, ((int32_t)-1125650981)))^((int32_t)1563534756)));
		goto IL_0014;
	}

IL_02c8:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_107 = V_4;
		NullCheck(L_107);
		int32_t L_108 = 0;
		RuntimeObject* L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_1 = L_109;
		uint32_t L_110 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_110, ((int32_t)660563659)))^((int32_t)-907623105)));
		goto IL_0014;
	}

IL_02e4:
	{
		RuntimeObject* L_111 = V_1;
		return L_111;
	}
}
// - <Module>::????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisIl2CppFullySharedGenericAny_m45D5A6712F90096295B9D754BD0C3C77E188D917_gshared (uint32_t p0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(-)
	const uint32_t SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// -
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
	const Il2CppFullySharedGenericAny L_8 = L_3;
	const Il2CppFullySharedGenericAny L_41 = L_3;
	const Il2CppFullySharedGenericAny L_113 = L_3;
	const Il2CppFullySharedGenericAny L_115 = L_3;
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
	memset(V_1, 0, SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
	memset(V_2, 0, SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
	int32_t V_3 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)-175751175)))^((int32_t)1409318985)));
	}

IL_000f:
	{
		G_B2_0 = ((int32_t)-1963480144);
	}

IL_0014:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-283811665)));
		V_8 = (uint32_t)L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)16))))
		{
			case 0:
			{
				goto IL_0122;
			}
			case 1:
			{
				goto IL_022c;
			}
			case 2:
			{
				goto IL_0269;
			}
			case 3:
			{
				goto IL_000f;
			}
			case 4:
			{
				goto IL_00b5;
			}
			case 5:
			{
				goto IL_009a;
			}
			case 6:
			{
				goto IL_02b5;
			}
			case 7:
			{
				goto IL_016c;
			}
			case 8:
			{
				goto IL_0108;
			}
			case 9:
			{
				goto IL_02e4;
			}
			case 10:
			{
				goto IL_01d8;
			}
			case 11:
			{
				goto IL_02c8;
			}
			case 12:
			{
				goto IL_0246;
			}
			case 13:
			{
				goto IL_028e;
			}
			case 14:
			{
				goto IL_0151;
			}
			case 15:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_02e4;
	}

IL_006a:
	{
		uint32_t L_2 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_2>>((int32_t)30)));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
		il2cpp_codegen_memcpy(L_3, V_2, SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
		uint32_t L_4 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_4&((int32_t)1073741823)));
		uint32_t L_5 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_5<<2));
		uint32_t L_6 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-1051375241)))^((int32_t)481634714)));
		goto IL_0014;
	}

IL_009a:
	{
		RuntimeArray* L_7 = V_7;
		void* L_9 = UnBox_Any((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0), L_8);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9))), SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
		uint32_t L_10 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)881964645)))^((int32_t)1676149263)));
		goto IL_0014;
	}

IL_00b5:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_12 = p0;
		uint32_t L_13 = L_12;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, 1));
		NullCheck(L_11);
		uintptr_t L_14 = ((uintptr_t)L_13);
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_17 = p0;
		uint32_t L_18 = L_17;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, 1));
		NullCheck(L_16);
		uintptr_t L_19 = ((uintptr_t)L_18);
		uint8_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_22 = p0;
		uint32_t L_23 = L_22;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 1));
		NullCheck(L_21);
		uintptr_t L_24 = ((uintptr_t)L_23);
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_27 = p0;
		uint32_t L_28 = L_27;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, 1));
		NullCheck(L_26);
		uintptr_t L_29 = ((uintptr_t)L_28);
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_15|((int32_t)((int32_t)L_20<<8))))|((int32_t)((int32_t)L_25<<((int32_t)16)))))|((int32_t)((int32_t)L_30<<((int32_t)24)))));
		uint32_t L_31 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)-1637535937)))^((int32_t)649790451)));
		goto IL_0014;
	}

IL_0108:
	{
		uint32_t L_32 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_32)) == ((int64_t)((int64_t)1))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_33 = ((int32_t)-86157362);
		G_B10_0 = L_33;
		G_B10_1 = L_33;
		goto IL_011c;
	}

IL_0116:
	{
		int32_t L_34 = ((int32_t)-2029989023);
		G_B10_0 = L_34;
		G_B10_1 = L_34;
	}

IL_011c:
	{
		G_B2_0 = G_B10_1;
		goto IL_0014;
	}

IL_0122:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_35;
		L_35 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_37 = p0;
		int32_t L_38 = V_3;
		NullCheck(L_35);
		String_t* L_39;
		L_39 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_35, L_36, (int32_t)L_37, L_38);
		String_t* L_40;
		L_40 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_39, NULL);
		void* L_42 = UnBox_Any((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 0), L_41);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_42))), SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
		uint32_t L_43 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)-107086678)))^((int32_t)-1066960871)));
		goto IL_0014;
	}

IL_0151:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_44 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)1);
		V_4 = L_44;
		uint32_t L_45 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_45, ((int32_t)22775996)))^((int32_t)1591009546)));
		goto IL_0014;
	}

IL_016c:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_47 = p0;
		uint32_t L_48 = L_47;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, 1));
		NullCheck(L_46);
		uintptr_t L_49 = ((uintptr_t)L_48);
		uint8_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_52 = p0;
		uint32_t L_53 = L_52;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, 1));
		NullCheck(L_51);
		uintptr_t L_54 = ((uintptr_t)L_53);
		uint8_t L_55 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_57 = p0;
		uint32_t L_58 = L_57;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, 1));
		NullCheck(L_56);
		uintptr_t L_59 = ((uintptr_t)L_58);
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_62 = p0;
		uint32_t L_63 = L_62;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, 1));
		NullCheck(L_61);
		uintptr_t L_64 = ((uintptr_t)L_63);
		uint8_t L_65 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_50|((int32_t)((int32_t)L_55<<8))))|((int32_t)((int32_t)L_60<<((int32_t)16)))))|((int32_t)((int32_t)L_65<<((int32_t)24)))));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		NullCheck(L_67);
		Type_t* L_68;
		L_68 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_67);
		int32_t L_69 = V_6;
		RuntimeArray* L_70;
		L_70 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_68, L_69, NULL);
		V_7 = L_70;
		uint32_t L_71 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_71, ((int32_t)403650344)))^((int32_t)899534821)));
		goto IL_0014;
	}

IL_01d8:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_73 = p0;
		uint32_t L_74 = L_73;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_74, 1));
		NullCheck(L_72);
		uintptr_t L_75 = ((uintptr_t)L_74);
		uint8_t L_76 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_78 = p0;
		uint32_t L_79 = L_78;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_79, 1));
		NullCheck(L_77);
		uintptr_t L_80 = ((uintptr_t)L_79);
		uint8_t L_81 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_83 = p0;
		uint32_t L_84 = L_83;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_84, 1));
		NullCheck(L_82);
		uintptr_t L_85 = ((uintptr_t)L_84);
		uint8_t L_86 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_88 = p0;
		uint32_t L_89 = L_88;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_89, 1));
		NullCheck(L_87);
		uintptr_t L_90 = ((uintptr_t)L_89);
		uint8_t L_91 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_76|((int32_t)((int32_t)L_81<<8))))|((int32_t)((int32_t)L_86<<((int32_t)16)))))|((int32_t)((int32_t)L_91<<((int32_t)24)))));
		uint32_t L_92 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_92, ((int32_t)-615417799)))^((int32_t)1183160594)));
		goto IL_0014;
	}

IL_022c:
	{
		uint32_t L_93 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_93)) == ((int64_t)((int64_t)0))))
		{
			goto IL_023a;
		}
	}
	{
		int32_t L_94 = ((int32_t)-1371984266);
		G_B18_0 = L_94;
		G_B18_1 = L_94;
		goto IL_0240;
	}

IL_023a:
	{
		int32_t L_95 = ((int32_t)-1676934843);
		G_B18_0 = L_95;
		G_B18_1 = L_95;
	}

IL_0240:
	{
		G_B2_0 = G_B18_1;
		goto IL_0014;
	}

IL_0246:
	{
		uint32_t L_96 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_96)) == ((int64_t)((int64_t)3))))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_97 = ((int32_t)-669090845);
		G_B22_0 = L_97;
		G_B22_1 = L_97;
		goto IL_025a;
	}

IL_0254:
	{
		int32_t L_98 = ((int32_t)-1607451441);
		G_B22_0 = L_98;
		G_B22_1 = L_98;
	}

IL_025a:
	{
		uint32_t L_99 = V_8;
		G_B2_0 = ((int32_t)(G_B22_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_99, ((int32_t)-2033712525)))));
		goto IL_0014;
	}

IL_0269:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_101 = p0;
		RuntimeArray* L_102 = V_7;
		int32_t L_103 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_100, (int32_t)L_101, L_102, 0, ((int32_t)il2cpp_codegen_subtract(L_103, 4)), NULL);
		uint32_t L_104 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_104, ((int32_t)1563098605)))^((int32_t)1455111104)));
		goto IL_0014;
	}

IL_028e:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_106 = p0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_107 = V_4;
		uint32_t L_108 = SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_105, (int32_t)L_106, (RuntimeArray*)L_107, 0, (int32_t)L_108, NULL);
		uint32_t L_109 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_109, ((int32_t)137146436)))^((int32_t)870525408)));
		goto IL_0014;
	}

IL_02b5:
	{
		uint32_t L_110 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_110, ((int32_t)-1125650981)))^((int32_t)1563534756)));
		goto IL_0014;
	}

IL_02c8:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_111 = V_4;
		NullCheck(L_111);
		int32_t L_112 = 0;
		il2cpp_codegen_memcpy(L_113, (L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)), SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
		il2cpp_codegen_memcpy(V_1, L_113, SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
		uint32_t L_114 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_114, ((int32_t)660563659)))^((int32_t)-907623105)));
		goto IL_0014;
	}

IL_02e4:
	{
		il2cpp_codegen_memcpy(L_115, V_1, SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
		il2cpp_codegen_memcpy(il2cppRetVal, L_115, SizeOf_U2D_t47DA11D7F3F96F7A872288BE4E9F40189B71A768);
		return;
	}
}
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisRuntimeObject_m9BBFF419BEC8BFBD35A2DDBA839D572CB89718C6_gshared (uint32_t p0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)1546741187)))^((int32_t)-858746129)));
		uint32_t L_1 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_1>>((int32_t)30)));
	}

IL_0014:
	{
		G_B2_0 = ((int32_t)1389315724);
	}

IL_0019:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1022087971)));
		V_8 = (uint32_t)L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)17))))
		{
			case 0:
			{
				goto IL_02f8;
			}
			case 1:
			{
				goto IL_01a7;
			}
			case 2:
			{
				goto IL_01ca;
			}
			case 3:
			{
				goto IL_0238;
			}
			case 4:
			{
				goto IL_0014;
			}
			case 5:
			{
				goto IL_0184;
			}
			case 6:
			{
				goto IL_0139;
			}
			case 7:
			{
				goto IL_025e;
			}
			case 8:
			{
				goto IL_01e4;
			}
			case 9:
			{
				goto IL_0278;
			}
			case 10:
			{
				goto IL_024b;
			}
			case 11:
			{
				goto IL_0073;
			}
			case 12:
			{
				goto IL_00e5;
			}
			case 13:
			{
				goto IL_008b;
			}
			case 14:
			{
				goto IL_00b6;
			}
			case 15:
			{
				goto IL_0168;
			}
			case 16:
			{
				goto IL_02cb;
			}
		}
	}
	{
		goto IL_02f8;
	}

IL_0073:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		uint32_t L_3 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1256149838)))^((int32_t)1036779314)));
		goto IL_0019;
	}

IL_008b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_5);
		int32_t L_7 = V_6;
		RuntimeArray* L_8;
		L_8 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_6, L_7, NULL);
		V_7 = L_8;
		uint32_t L_9 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-910663971)))^((int32_t)-781144041)));
		goto IL_0019;
	}

IL_00b6:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_12 = p0;
		int32_t L_13 = V_3;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, (int32_t)L_12, L_13);
		String_t* L_15;
		L_15 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_14, NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->rgctx_data, 0)));
		uint32_t L_16 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)1710135150)))^((int32_t)611199228)));
		goto IL_0019;
	}

IL_00e5:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_18 = p0;
		uint32_t L_19 = L_18;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, 1));
		NullCheck(L_17);
		uintptr_t L_20 = ((uintptr_t)L_19);
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_23 = p0;
		uint32_t L_24 = L_23;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, 1));
		NullCheck(L_22);
		uintptr_t L_25 = ((uintptr_t)L_24);
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_28 = p0;
		uint32_t L_29 = L_28;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, 1));
		NullCheck(L_27);
		uintptr_t L_30 = ((uintptr_t)L_29);
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_33 = p0;
		uint32_t L_34 = L_33;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, 1));
		NullCheck(L_32);
		uintptr_t L_35 = ((uintptr_t)L_34);
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_21|((int32_t)((int32_t)L_26<<8))))|((int32_t)((int32_t)L_31<<((int32_t)16)))))|((int32_t)((int32_t)L_36<<((int32_t)24)))));
		uint32_t L_37 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_37, ((int32_t)-2128264687)))^((int32_t)1776641595)));
		goto IL_0019;
	}

IL_0139:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)1);
		V_4 = L_38;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_40 = p0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = V_4;
		uint32_t L_42 = sizeof(RuntimeObject*);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_39, (int32_t)L_40, (RuntimeArray*)L_41, 0, (int32_t)L_42, NULL);
		uint32_t L_43 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)1773111270)))^((int32_t)-1645078969)));
		goto IL_0019;
	}

IL_0168:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = 0;
		RuntimeObject* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_1 = L_46;
		uint32_t L_47 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_47, ((int32_t)824322495)))^((int32_t)-841725635)));
		goto IL_0019;
	}

IL_0184:
	{
		RuntimeObject* L_48 = V_2;
		V_1 = L_48;
		uint32_t L_49 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_49&((int32_t)1073741823)));
		uint32_t L_50 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_50<<2));
		uint32_t L_51 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_51, ((int32_t)-2067606775)))^((int32_t)-323468753)));
		goto IL_0019;
	}

IL_01a7:
	{
		uint32_t L_52 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_52)) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_01b5;
		}
	}
	{
		int32_t L_53 = ((int32_t)103563139);
		G_B14_0 = L_53;
		G_B14_1 = L_53;
		goto IL_01bb;
	}

IL_01b5:
	{
		int32_t L_54 = ((int32_t)1333643011);
		G_B14_0 = L_54;
		G_B14_1 = L_54;
	}

IL_01bb:
	{
		uint32_t L_55 = V_8;
		G_B2_0 = ((int32_t)(G_B14_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_55, ((int32_t)-590950933)))));
		goto IL_0019;
	}

IL_01ca:
	{
		uint32_t L_56 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_56)) == ((int64_t)((int64_t)3))))
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_57 = ((int32_t)1482374822);
		G_B18_0 = L_57;
		G_B18_1 = L_57;
		goto IL_01de;
	}

IL_01d8:
	{
		int32_t L_58 = ((int32_t)1294665680);
		G_B18_0 = L_58;
		G_B18_1 = L_58;
	}

IL_01de:
	{
		G_B2_0 = G_B18_1;
		goto IL_0019;
	}

IL_01e4:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_60 = p0;
		uint32_t L_61 = L_60;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_61, 1));
		NullCheck(L_59);
		uintptr_t L_62 = ((uintptr_t)L_61);
		uint8_t L_63 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_65 = p0;
		uint32_t L_66 = L_65;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_66, 1));
		NullCheck(L_64);
		uintptr_t L_67 = ((uintptr_t)L_66);
		uint8_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_70 = p0;
		uint32_t L_71 = L_70;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_71, 1));
		NullCheck(L_69);
		uintptr_t L_72 = ((uintptr_t)L_71);
		uint8_t L_73 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_75 = p0;
		uint32_t L_76 = L_75;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, 1));
		NullCheck(L_74);
		uintptr_t L_77 = ((uintptr_t)L_76);
		uint8_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_63|((int32_t)((int32_t)L_68<<8))))|((int32_t)((int32_t)L_73<<((int32_t)16)))))|((int32_t)((int32_t)L_78<<((int32_t)24)))));
		uint32_t L_79 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_79, ((int32_t)-1737106681)))^((int32_t)-595716839)));
		goto IL_0019;
	}

IL_0238:
	{
		uint32_t L_80 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_80, ((int32_t)-365355176)))^((int32_t)-611535818)));
		goto IL_0019;
	}

IL_024b:
	{
		uint32_t L_81 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_81, ((int32_t)1346596622)))^((int32_t)-781701920)));
		goto IL_0019;
	}

IL_025e:
	{
		uint32_t L_82 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_82)) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_83 = ((int32_t)1137287337);
		G_B25_0 = L_83;
		G_B25_1 = L_83;
		goto IL_0272;
	}

IL_026c:
	{
		int32_t L_84 = ((int32_t)1699508643);
		G_B25_0 = L_84;
		G_B25_1 = L_84;
	}

IL_0272:
	{
		G_B2_0 = G_B25_1;
		goto IL_0019;
	}

IL_0278:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_86 = p0;
		uint32_t L_87 = L_86;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_87, 1));
		NullCheck(L_85);
		uintptr_t L_88 = ((uintptr_t)L_87);
		uint8_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_91 = p0;
		uint32_t L_92 = L_91;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_92, 1));
		NullCheck(L_90);
		uintptr_t L_93 = ((uintptr_t)L_92);
		uint8_t L_94 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_96 = p0;
		uint32_t L_97 = L_96;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, 1));
		NullCheck(L_95);
		uintptr_t L_98 = ((uintptr_t)L_97);
		uint8_t L_99 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_101 = p0;
		uint32_t L_102 = L_101;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_102, 1));
		NullCheck(L_100);
		uintptr_t L_103 = ((uintptr_t)L_102);
		uint8_t L_104 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_89|((int32_t)((int32_t)L_94<<8))))|((int32_t)((int32_t)L_99<<((int32_t)16)))))|((int32_t)((int32_t)L_104<<((int32_t)24)))));
		uint32_t L_105 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_105, ((int32_t)1542202735)))^((int32_t)-1997767253)));
		goto IL_0019;
	}

IL_02cb:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_107 = p0;
		RuntimeArray* L_108 = V_7;
		int32_t L_109 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_106, (int32_t)L_107, L_108, 0, ((int32_t)il2cpp_codegen_subtract(L_109, 4)), NULL);
		RuntimeArray* L_110 = V_7;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 0)));
		uint32_t L_111 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_111, ((int32_t)1335436660)))^((int32_t)1308473258)));
		goto IL_0019;
	}

IL_02f8:
	{
		RuntimeObject* L_112 = V_1;
		return L_112;
	}
}
// - <Module>::?????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisIl2CppFullySharedGenericAny_mAE2A7477C6EDFEFA112C1ABEBA96754E08F977A7_gshared (uint32_t p0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(-)
	const uint32_t SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// -
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
	const Il2CppFullySharedGenericAny L_48 = L_16;
	const Il2CppFullySharedGenericAny L_50 = L_16;
	const Il2CppFullySharedGenericAny L_113 = L_16;
	const Il2CppFullySharedGenericAny L_116 = L_16;
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
	memset(V_1, 0, SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
	memset(V_2, 0, SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
	int32_t V_3 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)1546741187)))^((int32_t)-858746129)));
		uint32_t L_1 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_1>>((int32_t)30)));
	}

IL_0014:
	{
		G_B2_0 = ((int32_t)1389315724);
	}

IL_0019:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1022087971)));
		V_8 = (uint32_t)L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)17))))
		{
			case 0:
			{
				goto IL_02f8;
			}
			case 1:
			{
				goto IL_01a7;
			}
			case 2:
			{
				goto IL_01ca;
			}
			case 3:
			{
				goto IL_0238;
			}
			case 4:
			{
				goto IL_0014;
			}
			case 5:
			{
				goto IL_0184;
			}
			case 6:
			{
				goto IL_0139;
			}
			case 7:
			{
				goto IL_025e;
			}
			case 8:
			{
				goto IL_01e4;
			}
			case 9:
			{
				goto IL_0278;
			}
			case 10:
			{
				goto IL_024b;
			}
			case 11:
			{
				goto IL_0073;
			}
			case 12:
			{
				goto IL_00e5;
			}
			case 13:
			{
				goto IL_008b;
			}
			case 14:
			{
				goto IL_00b6;
			}
			case 15:
			{
				goto IL_0168;
			}
			case 16:
			{
				goto IL_02cb;
			}
		}
	}
	{
		goto IL_02f8;
	}

IL_0073:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
		uint32_t L_3 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1256149838)))^((int32_t)1036779314)));
		goto IL_0019;
	}

IL_008b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_5);
		int32_t L_7 = V_6;
		RuntimeArray* L_8;
		L_8 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_6, L_7, NULL);
		V_7 = L_8;
		uint32_t L_9 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-910663971)))^((int32_t)-781144041)));
		goto IL_0019;
	}

IL_00b6:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_12 = p0;
		int32_t L_13 = V_3;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, (int32_t)L_12, L_13);
		String_t* L_15;
		L_15 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_14, NULL);
		void* L_17 = UnBox_Any((RuntimeObject*)L_15, il2cpp_rgctx_data(method->rgctx_data, 0), L_16);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))), SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
		uint32_t L_18 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)1710135150)))^((int32_t)611199228)));
		goto IL_0019;
	}

IL_00e5:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_20 = p0;
		uint32_t L_21 = L_20;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, 1));
		NullCheck(L_19);
		uintptr_t L_22 = ((uintptr_t)L_21);
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_25 = p0;
		uint32_t L_26 = L_25;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, 1));
		NullCheck(L_24);
		uintptr_t L_27 = ((uintptr_t)L_26);
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_30 = p0;
		uint32_t L_31 = L_30;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, 1));
		NullCheck(L_29);
		uintptr_t L_32 = ((uintptr_t)L_31);
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_35 = p0;
		uint32_t L_36 = L_35;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, 1));
		NullCheck(L_34);
		uintptr_t L_37 = ((uintptr_t)L_36);
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_23|((int32_t)((int32_t)L_28<<8))))|((int32_t)((int32_t)L_33<<((int32_t)16)))))|((int32_t)((int32_t)L_38<<((int32_t)24)))));
		uint32_t L_39 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)-2128264687)))^((int32_t)1776641595)));
		goto IL_0019;
	}

IL_0139:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)1);
		V_4 = L_40;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_42 = p0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_43 = V_4;
		uint32_t L_44 = SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_41, (int32_t)L_42, (RuntimeArray*)L_43, 0, (int32_t)L_44, NULL);
		uint32_t L_45 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_45, ((int32_t)1773111270)))^((int32_t)-1645078969)));
		goto IL_0019;
	}

IL_0168:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = 0;
		il2cpp_codegen_memcpy(L_48, (L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)), SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
		il2cpp_codegen_memcpy(V_1, L_48, SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
		uint32_t L_49 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_49, ((int32_t)824322495)))^((int32_t)-841725635)));
		goto IL_0019;
	}

IL_0184:
	{
		il2cpp_codegen_memcpy(L_50, V_2, SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
		il2cpp_codegen_memcpy(V_1, L_50, SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
		uint32_t L_51 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_51&((int32_t)1073741823)));
		uint32_t L_52 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_52<<2));
		uint32_t L_53 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_53, ((int32_t)-2067606775)))^((int32_t)-323468753)));
		goto IL_0019;
	}

IL_01a7:
	{
		uint32_t L_54 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_54)) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_01b5;
		}
	}
	{
		int32_t L_55 = ((int32_t)103563139);
		G_B14_0 = L_55;
		G_B14_1 = L_55;
		goto IL_01bb;
	}

IL_01b5:
	{
		int32_t L_56 = ((int32_t)1333643011);
		G_B14_0 = L_56;
		G_B14_1 = L_56;
	}

IL_01bb:
	{
		uint32_t L_57 = V_8;
		G_B2_0 = ((int32_t)(G_B14_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_57, ((int32_t)-590950933)))));
		goto IL_0019;
	}

IL_01ca:
	{
		uint32_t L_58 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_58)) == ((int64_t)((int64_t)3))))
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_59 = ((int32_t)1482374822);
		G_B18_0 = L_59;
		G_B18_1 = L_59;
		goto IL_01de;
	}

IL_01d8:
	{
		int32_t L_60 = ((int32_t)1294665680);
		G_B18_0 = L_60;
		G_B18_1 = L_60;
	}

IL_01de:
	{
		G_B2_0 = G_B18_1;
		goto IL_0019;
	}

IL_01e4:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_62 = p0;
		uint32_t L_63 = L_62;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, 1));
		NullCheck(L_61);
		uintptr_t L_64 = ((uintptr_t)L_63);
		uint8_t L_65 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_67 = p0;
		uint32_t L_68 = L_67;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, 1));
		NullCheck(L_66);
		uintptr_t L_69 = ((uintptr_t)L_68);
		uint8_t L_70 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_72 = p0;
		uint32_t L_73 = L_72;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_73, 1));
		NullCheck(L_71);
		uintptr_t L_74 = ((uintptr_t)L_73);
		uint8_t L_75 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_77 = p0;
		uint32_t L_78 = L_77;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, 1));
		NullCheck(L_76);
		uintptr_t L_79 = ((uintptr_t)L_78);
		uint8_t L_80 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_65|((int32_t)((int32_t)L_70<<8))))|((int32_t)((int32_t)L_75<<((int32_t)16)))))|((int32_t)((int32_t)L_80<<((int32_t)24)))));
		uint32_t L_81 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_81, ((int32_t)-1737106681)))^((int32_t)-595716839)));
		goto IL_0019;
	}

IL_0238:
	{
		uint32_t L_82 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_82, ((int32_t)-365355176)))^((int32_t)-611535818)));
		goto IL_0019;
	}

IL_024b:
	{
		uint32_t L_83 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_83, ((int32_t)1346596622)))^((int32_t)-781701920)));
		goto IL_0019;
	}

IL_025e:
	{
		uint32_t L_84 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_84)) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_85 = ((int32_t)1137287337);
		G_B25_0 = L_85;
		G_B25_1 = L_85;
		goto IL_0272;
	}

IL_026c:
	{
		int32_t L_86 = ((int32_t)1699508643);
		G_B25_0 = L_86;
		G_B25_1 = L_86;
	}

IL_0272:
	{
		G_B2_0 = G_B25_1;
		goto IL_0019;
	}

IL_0278:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_88 = p0;
		uint32_t L_89 = L_88;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_89, 1));
		NullCheck(L_87);
		uintptr_t L_90 = ((uintptr_t)L_89);
		uint8_t L_91 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_93 = p0;
		uint32_t L_94 = L_93;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, 1));
		NullCheck(L_92);
		uintptr_t L_95 = ((uintptr_t)L_94);
		uint8_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_98 = p0;
		uint32_t L_99 = L_98;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, 1));
		NullCheck(L_97);
		uintptr_t L_100 = ((uintptr_t)L_99);
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_103 = p0;
		uint32_t L_104 = L_103;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_104, 1));
		NullCheck(L_102);
		uintptr_t L_105 = ((uintptr_t)L_104);
		uint8_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_91|((int32_t)((int32_t)L_96<<8))))|((int32_t)((int32_t)L_101<<((int32_t)16)))))|((int32_t)((int32_t)L_106<<((int32_t)24)))));
		uint32_t L_107 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_107, ((int32_t)1542202735)))^((int32_t)-1997767253)));
		goto IL_0019;
	}

IL_02cb:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_109 = p0;
		RuntimeArray* L_110 = V_7;
		int32_t L_111 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_108, (int32_t)L_109, L_110, 0, ((int32_t)il2cpp_codegen_subtract(L_111, 4)), NULL);
		RuntimeArray* L_112 = V_7;
		void* L_114 = UnBox_Any((RuntimeObject*)L_112, il2cpp_rgctx_data(method->rgctx_data, 0), L_113);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_114))), SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
		uint32_t L_115 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_115, ((int32_t)1335436660)))^((int32_t)1308473258)));
		goto IL_0019;
	}

IL_02f8:
	{
		il2cpp_codegen_memcpy(L_116, V_1, SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_116, SizeOf_U2D_tD04DA3C6877CA863B3C61C754BC9609B600F12B7);
		return;
	}
}
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisRuntimeObject_mB4AB051DA3153717A74524E4D83DD6715D721635_gshared (uint32_t p0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)1397945091)))^((int32_t)1812720143)));
	}

IL_000f:
	{
		G_B2_0 = ((int32_t)88315479);
	}

IL_0014:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1769836871)));
		V_8 = (uint32_t)L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)18))))
		{
			case 0:
			{
				goto IL_0216;
			}
			case 1:
			{
				goto IL_013a;
			}
			case 2:
			{
				goto IL_02bc;
			}
			case 3:
			{
				goto IL_017a;
			}
			case 4:
			{
				goto IL_0192;
			}
			case 5:
			{
				goto IL_000f;
			}
			case 6:
			{
				goto IL_0092;
			}
			case 7:
			{
				goto IL_015f;
			}
			case 8:
			{
				goto IL_023d;
			}
			case 9:
			{
				goto IL_030f;
			}
			case 10:
			{
				goto IL_00c6;
			}
			case 11:
			{
				goto IL_01cb;
			}
			case 12:
			{
				goto IL_0072;
			}
			case 13:
			{
				goto IL_01fa;
			}
			case 14:
			{
				goto IL_00e6;
			}
			case 15:
			{
				goto IL_0250;
			}
			case 16:
			{
				goto IL_01b0;
			}
			case 17:
			{
				goto IL_00ac;
			}
		}
	}
	{
		goto IL_030f;
	}

IL_0072:
	{
		uint32_t L_2 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) == ((int64_t)((int64_t)1))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_3 = ((int32_t)1450344530);
		G_B7_0 = L_3;
		G_B7_1 = L_3;
		goto IL_0086;
	}

IL_0080:
	{
		int32_t L_4 = ((int32_t)1977060241);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
	}

IL_0086:
	{
		uint32_t L_5 = V_8;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)976169190)))));
		goto IL_0014;
	}

IL_0092:
	{
		uint32_t L_6 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_6)) == ((int64_t)((int64_t)3))))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_7 = ((int32_t)1446615254);
		G_B11_0 = L_7;
		G_B11_1 = L_7;
		goto IL_00a6;
	}

IL_00a0:
	{
		int32_t L_8 = ((int32_t)397919219);
		G_B11_0 = L_8;
		G_B11_1 = L_8;
	}

IL_00a6:
	{
		G_B2_0 = G_B11_1;
		goto IL_0014;
	}

IL_00ac:
	{
		uint32_t L_9 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_9)) == ((int64_t)((int64_t)0))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_10 = ((int32_t)1281214823);
		G_B15_0 = L_10;
		G_B15_1 = L_10;
		goto IL_00c0;
	}

IL_00ba:
	{
		int32_t L_11 = ((int32_t)2063385402);
		G_B15_0 = L_11;
		G_B15_1 = L_11;
	}

IL_00c0:
	{
		G_B2_0 = G_B15_1;
		goto IL_0014;
	}

IL_00c6:
	{
		uint32_t L_12 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_12>>((int32_t)30)));
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		uint32_t L_13 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-505755810)))^((int32_t)554674863)));
		goto IL_0014;
	}

IL_00e6:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_15 = p0;
		uint32_t L_16 = L_15;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, 1));
		NullCheck(L_14);
		uintptr_t L_17 = ((uintptr_t)L_16);
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_20 = p0;
		uint32_t L_21 = L_20;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, 1));
		NullCheck(L_19);
		uintptr_t L_22 = ((uintptr_t)L_21);
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_25 = p0;
		uint32_t L_26 = L_25;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, 1));
		NullCheck(L_24);
		uintptr_t L_27 = ((uintptr_t)L_26);
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_30 = p0;
		uint32_t L_31 = L_30;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, 1));
		NullCheck(L_29);
		uintptr_t L_32 = ((uintptr_t)L_31);
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_18|((int32_t)((int32_t)L_23<<8))))|((int32_t)((int32_t)L_28<<((int32_t)16)))))|((int32_t)((int32_t)L_33<<((int32_t)24)))));
		uint32_t L_34 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_34, ((int32_t)250881840)))^((int32_t)77734286)));
		goto IL_0014;
	}

IL_013a:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_36 = p0;
		RuntimeArray* L_37 = V_7;
		int32_t L_38 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_35, (int32_t)L_36, L_37, 0, ((int32_t)il2cpp_codegen_subtract(L_38, 4)), NULL);
		uint32_t L_39 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)-927052750)))^((int32_t)-2047496881)));
		goto IL_0014;
	}

IL_015f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)1);
		V_4 = L_40;
		uint32_t L_41 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_41, ((int32_t)615833659)))^((int32_t)503826124)));
		goto IL_0014;
	}

IL_017a:
	{
		uint32_t L_42 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_42<<2));
		uint32_t L_43 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)1299462888)))^((int32_t)-1651461903)));
		goto IL_0014;
	}

IL_0192:
	{
		RuntimeObject* L_44 = V_2;
		V_1 = L_44;
		uint32_t L_45 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_45&((int32_t)1073741823)));
		uint32_t L_46 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_46, ((int32_t)-1638467692)))^((int32_t)-131013900)));
		goto IL_0014;
	}

IL_01b0:
	{
		RuntimeArray* L_47 = V_7;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 0)));
		uint32_t L_48 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_48, ((int32_t)110089077)))^((int32_t)-573350472)));
		goto IL_0014;
	}

IL_01cb:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_49;
		L_49 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_51 = p0;
		int32_t L_52 = V_3;
		NullCheck(L_49);
		String_t* L_53;
		L_53 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_49, L_50, (int32_t)L_51, L_52);
		String_t* L_54;
		L_54 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_53, NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_54, il2cpp_rgctx_data(method->rgctx_data, 0)));
		uint32_t L_55 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_55, ((int32_t)881843119)))^((int32_t)289141943)));
		goto IL_0014;
	}

IL_01fa:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = V_4;
		NullCheck(L_56);
		int32_t L_57 = 0;
		RuntimeObject* L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_1 = L_58;
		uint32_t L_59 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_59, ((int32_t)-1311361099)))^((int32_t)-1248522478)));
		goto IL_0014;
	}

IL_0216:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_61 = p0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = V_4;
		uint32_t L_63 = sizeof(RuntimeObject*);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_60, (int32_t)L_61, (RuntimeArray*)L_62, 0, (int32_t)L_63, NULL);
		uint32_t L_64 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_64, ((int32_t)668525151)))^((int32_t)-1798749538)));
		goto IL_0014;
	}

IL_023d:
	{
		uint32_t L_65 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_65, ((int32_t)-1638474719)))^((int32_t)1604743658)));
		goto IL_0014;
	}

IL_0250:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_67 = p0;
		uint32_t L_68 = L_67;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, 1));
		NullCheck(L_66);
		uintptr_t L_69 = ((uintptr_t)L_68);
		uint8_t L_70 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_72 = p0;
		uint32_t L_73 = L_72;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_73, 1));
		NullCheck(L_71);
		uintptr_t L_74 = ((uintptr_t)L_73);
		uint8_t L_75 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_77 = p0;
		uint32_t L_78 = L_77;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, 1));
		NullCheck(L_76);
		uintptr_t L_79 = ((uintptr_t)L_78);
		uint8_t L_80 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_82 = p0;
		uint32_t L_83 = L_82;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_83, 1));
		NullCheck(L_81);
		uintptr_t L_84 = ((uintptr_t)L_83);
		uint8_t L_85 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_70|((int32_t)((int32_t)L_75<<8))))|((int32_t)((int32_t)L_80<<((int32_t)16)))))|((int32_t)((int32_t)L_85<<((int32_t)24)))));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		NullCheck(L_87);
		Type_t* L_88;
		L_88 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_87);
		int32_t L_89 = V_6;
		RuntimeArray* L_90;
		L_90 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_88, L_89, NULL);
		V_7 = L_90;
		uint32_t L_91 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_91, ((int32_t)-527470699)))^((int32_t)-928851027)));
		goto IL_0014;
	}

IL_02bc:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_93 = p0;
		uint32_t L_94 = L_93;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, 1));
		NullCheck(L_92);
		uintptr_t L_95 = ((uintptr_t)L_94);
		uint8_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_98 = p0;
		uint32_t L_99 = L_98;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, 1));
		NullCheck(L_97);
		uintptr_t L_100 = ((uintptr_t)L_99);
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_103 = p0;
		uint32_t L_104 = L_103;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_104, 1));
		NullCheck(L_102);
		uintptr_t L_105 = ((uintptr_t)L_104);
		uint8_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_108 = p0;
		uint32_t L_109 = L_108;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_109, 1));
		NullCheck(L_107);
		uintptr_t L_110 = ((uintptr_t)L_109);
		uint8_t L_111 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_96|((int32_t)((int32_t)L_101<<8))))|((int32_t)((int32_t)L_106<<((int32_t)16)))))|((int32_t)((int32_t)L_111<<((int32_t)24)))));
		uint32_t L_112 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_112, ((int32_t)-1152471960)))^((int32_t)-121149576)));
		goto IL_0014;
	}

IL_030f:
	{
		RuntimeObject* L_113 = V_1;
		return L_113;
	}
}
// - <Module>::?????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisIl2CppFullySharedGenericAny_m52FDF5E7B359E801AC84F1DA11FE36C7F1496AAF_gshared (uint32_t p0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(-)
	const uint32_t SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// -
	const Il2CppFullySharedGenericAny L_44 = alloca(SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
	const Il2CppFullySharedGenericAny L_48 = L_44;
	const Il2CppFullySharedGenericAny L_57 = L_44;
	const Il2CppFullySharedGenericAny L_62 = L_44;
	const Il2CppFullySharedGenericAny L_117 = L_44;
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
	memset(V_1, 0, SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
	memset(V_2, 0, SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
	int32_t V_3 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeArray* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	{
		uint32_t L_0 = p0;
		p0 = (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, ((int32_t)1397945091)))^((int32_t)1812720143)));
	}

IL_000f:
	{
		G_B2_0 = ((int32_t)88315479);
	}

IL_0014:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1769836871)));
		V_8 = (uint32_t)L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)18))))
		{
			case 0:
			{
				goto IL_0216;
			}
			case 1:
			{
				goto IL_013a;
			}
			case 2:
			{
				goto IL_02bc;
			}
			case 3:
			{
				goto IL_017a;
			}
			case 4:
			{
				goto IL_0192;
			}
			case 5:
			{
				goto IL_000f;
			}
			case 6:
			{
				goto IL_0092;
			}
			case 7:
			{
				goto IL_015f;
			}
			case 8:
			{
				goto IL_023d;
			}
			case 9:
			{
				goto IL_030f;
			}
			case 10:
			{
				goto IL_00c6;
			}
			case 11:
			{
				goto IL_01cb;
			}
			case 12:
			{
				goto IL_0072;
			}
			case 13:
			{
				goto IL_01fa;
			}
			case 14:
			{
				goto IL_00e6;
			}
			case 15:
			{
				goto IL_0250;
			}
			case 16:
			{
				goto IL_01b0;
			}
			case 17:
			{
				goto IL_00ac;
			}
		}
	}
	{
		goto IL_030f;
	}

IL_0072:
	{
		uint32_t L_2 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) == ((int64_t)((int64_t)1))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_3 = ((int32_t)1450344530);
		G_B7_0 = L_3;
		G_B7_1 = L_3;
		goto IL_0086;
	}

IL_0080:
	{
		int32_t L_4 = ((int32_t)1977060241);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
	}

IL_0086:
	{
		uint32_t L_5 = V_8;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)976169190)))));
		goto IL_0014;
	}

IL_0092:
	{
		uint32_t L_6 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_6)) == ((int64_t)((int64_t)3))))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_7 = ((int32_t)1446615254);
		G_B11_0 = L_7;
		G_B11_1 = L_7;
		goto IL_00a6;
	}

IL_00a0:
	{
		int32_t L_8 = ((int32_t)397919219);
		G_B11_0 = L_8;
		G_B11_1 = L_8;
	}

IL_00a6:
	{
		G_B2_0 = G_B11_1;
		goto IL_0014;
	}

IL_00ac:
	{
		uint32_t L_9 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_9)) == ((int64_t)((int64_t)0))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_10 = ((int32_t)1281214823);
		G_B15_0 = L_10;
		G_B15_1 = L_10;
		goto IL_00c0;
	}

IL_00ba:
	{
		int32_t L_11 = ((int32_t)2063385402);
		G_B15_0 = L_11;
		G_B15_1 = L_11;
	}

IL_00c0:
	{
		G_B2_0 = G_B15_1;
		goto IL_0014;
	}

IL_00c6:
	{
		uint32_t L_12 = p0;
		V_0 = (uint32_t)((int32_t)((uint32_t)L_12>>((int32_t)30)));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
		uint32_t L_13 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-505755810)))^((int32_t)554674863)));
		goto IL_0014;
	}

IL_00e6:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_15 = p0;
		uint32_t L_16 = L_15;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, 1));
		NullCheck(L_14);
		uintptr_t L_17 = ((uintptr_t)L_16);
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_20 = p0;
		uint32_t L_21 = L_20;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, 1));
		NullCheck(L_19);
		uintptr_t L_22 = ((uintptr_t)L_21);
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_25 = p0;
		uint32_t L_26 = L_25;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, 1));
		NullCheck(L_24);
		uintptr_t L_27 = ((uintptr_t)L_26);
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_30 = p0;
		uint32_t L_31 = L_30;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, 1));
		NullCheck(L_29);
		uintptr_t L_32 = ((uintptr_t)L_31);
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_18|((int32_t)((int32_t)L_23<<8))))|((int32_t)((int32_t)L_28<<((int32_t)16)))))|((int32_t)((int32_t)L_33<<((int32_t)24)))));
		uint32_t L_34 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_34, ((int32_t)250881840)))^((int32_t)77734286)));
		goto IL_0014;
	}

IL_013a:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_36 = p0;
		RuntimeArray* L_37 = V_7;
		int32_t L_38 = V_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_35, (int32_t)L_36, L_37, 0, ((int32_t)il2cpp_codegen_subtract(L_38, 4)), NULL);
		uint32_t L_39 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)-927052750)))^((int32_t)-2047496881)));
		goto IL_0014;
	}

IL_015f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)1);
		V_4 = L_40;
		uint32_t L_41 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_41, ((int32_t)615833659)))^((int32_t)503826124)));
		goto IL_0014;
	}

IL_017a:
	{
		uint32_t L_42 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_42<<2));
		uint32_t L_43 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)1299462888)))^((int32_t)-1651461903)));
		goto IL_0014;
	}

IL_0192:
	{
		il2cpp_codegen_memcpy(L_44, V_2, SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
		il2cpp_codegen_memcpy(V_1, L_44, SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
		uint32_t L_45 = p0;
		p0 = (uint32_t)((int32_t)((int32_t)L_45&((int32_t)1073741823)));
		uint32_t L_46 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_46, ((int32_t)-1638467692)))^((int32_t)-131013900)));
		goto IL_0014;
	}

IL_01b0:
	{
		RuntimeArray* L_47 = V_7;
		void* L_49 = UnBox_Any((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 0), L_48);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_49))), SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
		uint32_t L_50 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_50, ((int32_t)110089077)))^((int32_t)-573350472)));
		goto IL_0014;
	}

IL_01cb:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_51;
		L_51 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_53 = p0;
		int32_t L_54 = V_3;
		NullCheck(L_51);
		String_t* L_55;
		L_55 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_51, L_52, (int32_t)L_53, L_54);
		String_t* L_56;
		L_56 = String_Intern_m2FE19E8D8CE2641044033E0C7C4B64DC46A00318(L_55, NULL);
		void* L_58 = UnBox_Any((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 0), L_57);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_58))), SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
		uint32_t L_59 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_59, ((int32_t)881843119)))^((int32_t)289141943)));
		goto IL_0014;
	}

IL_01fa:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_60 = V_4;
		NullCheck(L_60);
		int32_t L_61 = 0;
		il2cpp_codegen_memcpy(L_62, (L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)), SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
		il2cpp_codegen_memcpy(V_1, L_62, SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
		uint32_t L_63 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_63, ((int32_t)-1311361099)))^((int32_t)-1248522478)));
		goto IL_0014;
	}

IL_0216:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_65 = p0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_66 = V_4;
		uint32_t L_67 = SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_64, (int32_t)L_65, (RuntimeArray*)L_66, 0, (int32_t)L_67, NULL);
		uint32_t L_68 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_68, ((int32_t)668525151)))^((int32_t)-1798749538)));
		goto IL_0014;
	}

IL_023d:
	{
		uint32_t L_69 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_69, ((int32_t)-1638474719)))^((int32_t)1604743658)));
		goto IL_0014;
	}

IL_0250:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_71 = p0;
		uint32_t L_72 = L_71;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_72, 1));
		NullCheck(L_70);
		uintptr_t L_73 = ((uintptr_t)L_72);
		uint8_t L_74 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_76 = p0;
		uint32_t L_77 = L_76;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_77, 1));
		NullCheck(L_75);
		uintptr_t L_78 = ((uintptr_t)L_77);
		uint8_t L_79 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_81 = p0;
		uint32_t L_82 = L_81;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_82, 1));
		NullCheck(L_80);
		uintptr_t L_83 = ((uintptr_t)L_82);
		uint8_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_86 = p0;
		uint32_t L_87 = L_86;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_87, 1));
		NullCheck(L_85);
		uintptr_t L_88 = ((uintptr_t)L_87);
		uint8_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_74|((int32_t)((int32_t)L_79<<8))))|((int32_t)((int32_t)L_84<<((int32_t)16)))))|((int32_t)((int32_t)L_89<<((int32_t)24)))));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		NullCheck(L_91);
		Type_t* L_92;
		L_92 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_91);
		int32_t L_93 = V_6;
		RuntimeArray* L_94;
		L_94 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_92, L_93, NULL);
		V_7 = L_94;
		uint32_t L_95 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_95, ((int32_t)-527470699)))^((int32_t)-928851027)));
		goto IL_0014;
	}

IL_02bc:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_97 = p0;
		uint32_t L_98 = L_97;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_98, 1));
		NullCheck(L_96);
		uintptr_t L_99 = ((uintptr_t)L_98);
		uint8_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_102 = p0;
		uint32_t L_103 = L_102;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_103, 1));
		NullCheck(L_101);
		uintptr_t L_104 = ((uintptr_t)L_103);
		uint8_t L_105 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_107 = p0;
		uint32_t L_108 = L_107;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_108, 1));
		NullCheck(L_106);
		uintptr_t L_109 = ((uintptr_t)L_108);
		uint8_t L_110 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = ((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
		uint32_t L_112 = p0;
		uint32_t L_113 = L_112;
		p0 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_113, 1));
		NullCheck(L_111);
		uintptr_t L_114 = ((uintptr_t)L_113);
		uint8_t L_115 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_100|((int32_t)((int32_t)L_105<<8))))|((int32_t)((int32_t)L_110<<((int32_t)16)))))|((int32_t)((int32_t)L_115<<((int32_t)24)))));
		uint32_t L_116 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_116, ((int32_t)-1152471960)))^((int32_t)-121149576)));
		goto IL_0014;
	}

IL_030f:
	{
		il2cpp_codegen_memcpy(L_117, V_1, SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_117, SizeOf_U2D_t09E4406535D97F4EAD3D120A3BEDE5A71413E2C7);
		return;
	}
}
// T System.Activator::CreateInstance<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR int32_t Activator_CreateInstance_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2E0658E7FAF19B9ED6D30C9B4CB30D617C2D16C2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Activator_CreateInstance_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2E0658E7FAF19B9ED6D30C9B4CB30D617C2D16C2_RuntimeMethod_var)));
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// T System.Activator::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_RuntimeMethod_var)));
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T System.Activator::CreateInstance<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t7DFA7E7752C6CB82AD96769CC7307709CB5ACD3B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t7DFA7E7752C6CB82AD96769CC7307709CB5ACD3B);
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_RuntimeMethod_var)));
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->rgctx_data, 1), L_7);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))), SizeOf_T_t7DFA7E7752C6CB82AD96769CC7307709CB5ACD3B);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m5A5862F45F20C876D0E996E32E4F74463ED37883_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// if (descriptors == null)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("descriptors");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdaptivePerformanceLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m5A5862F45F20C876D0E996E32E4F74463ED37883_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemManager.GetSubsystemDescriptors<TDescriptor>(descriptors);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___descriptors0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		// if (descriptors.Count > 0)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = ___descriptors0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// foreach (var descriptor in descriptors)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = ___descriptors0;
		NullCheck(L_5);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_6;
		L_6 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), il2cpp_rgctx_method(method->rgctx_data, 11));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0026_1:
			{
				// foreach (var descriptor in descriptors)
				RuntimeObject* L_7;
				L_7 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
				V_1 = L_7;
				// ISubsystem subsys = null;
				V_2 = (RuntimeObject*)NULL;
				// if (String.Compare(descriptor.id, id, true) == 0)
				NullCheck((RuntimeObject*)(V_1));
				String_t* L_8;
				L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
				String_t* L_9 = ___id1;
				int32_t L_10;
				L_10 = String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14(L_8, L_9, (bool)1, NULL);
				if (L_10)
				{
					goto IL_0054_1;
				}
			}
			{
				// subsys = descriptor.Create();
				NullCheck((RuntimeObject*)(V_1));
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
				V_2 = L_11;
			}

IL_0054_1:
			{
				// if (subsys != null)
				RuntimeObject* L_12 = V_2;
				if (!L_12)
				{
					goto IL_006f_1;
				}
			}
			{
				// m_SubsystemInstanceMap[typeof(TSubsystem)] = subsys;
				Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_13 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 9)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
				RuntimeObject* L_16 = V_2;
				NullCheck(L_13);
				Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6(L_13, L_15, L_16, Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
				// break;
				goto IL_0088;
			}

IL_006f_1:
			{
				// foreach (var descriptor in descriptors)
				bool L_17;
				L_17 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), il2cpp_rgctx_method(method->rgctx_data, 10));
				if (L_17)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::CreateSubsystem<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_CreateSubsystem_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAA12C09B692C441F963CC25A33A9BFFEC01E4FD_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(System.Collections.Generic.List`1/Enumerator<TDescriptor>)
	const uint32_t SizeOf_Enumerator_tC8309896333FA6CE9A7D192F2723F7B604A86114 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(TDescriptor)
	const uint32_t SizeOf_TDescriptor_tAF3181C098CC62749B4FB434836EE2A10691666B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 4)));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 6)));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 6)));
	// TDescriptor
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TDescriptor_tAF3181C098CC62749B4FB434836EE2A10691666B);
	// System.Collections.Generic.List`1/Enumerator<TDescriptor>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_6 = alloca(SizeOf_Enumerator_tC8309896333FA6CE9A7D192F2723F7B604A86114);
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF V_0 = alloca(SizeOf_Enumerator_tC8309896333FA6CE9A7D192F2723F7B604A86114);
	memset(V_0, 0, SizeOf_Enumerator_tC8309896333FA6CE9A7D192F2723F7B604A86114);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TDescriptor_tAF3181C098CC62749B4FB434836EE2A10691666B);
	memset(V_1, 0, SizeOf_TDescriptor_tAF3181C098CC62749B4FB434836EE2A10691666B);
	RuntimeObject* V_2 = NULL;
	{
		// if (descriptors == null)
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___descriptors0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("descriptors");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdaptivePerformanceLoaderHelper_CreateSubsystem_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAA12C09B692C441F963CC25A33A9BFFEC01E4FD_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemManager.GetSubsystemDescriptors<TDescriptor>(descriptors);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___descriptors0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		InvokerActionInvoker1< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2);
		// if (descriptors.Count > 0)
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = ___descriptors0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// foreach (var descriptor in descriptors)
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = ___descriptors0;
		NullCheck(L_5);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_5, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_6);
		il2cpp_codegen_memcpy(V_0, L_6, SizeOf_Enumerator_tC8309896333FA6CE9A7D192F2723F7B604A86114);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->rgctx_data, 4), il2cpp_rgctx_method(method->rgctx_data, 11), L_7, (void*)(Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_0);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0026_1:
			{
				// foreach (var descriptor in descriptors)
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_0, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_memcpy(V_1, L_8, SizeOf_TDescriptor_tAF3181C098CC62749B4FB434836EE2A10691666B);
				// ISubsystem subsys = null;
				V_2 = (RuntimeObject*)NULL;
				// if (String.Compare(descriptor.id, id, true) == 0)
				String_t* L_10;
				L_10 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 6), il2cpp_rgctx_method(method->rgctx_data, 7), L_9, (void*)(Il2CppFullySharedGenericAny*)V_1);
				String_t* L_11 = ___id1;
				int32_t L_12;
				L_12 = String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14(L_10, L_11, (bool)1, NULL);
				if (L_12)
				{
					goto IL_0054_1;
				}
			}
			{
				// subsys = descriptor.Create();
				RuntimeObject* L_14;
				L_14 = ConstrainedFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 6), il2cpp_rgctx_method(method->rgctx_data, 8), L_13, (void*)(Il2CppFullySharedGenericAny*)V_1);
				V_2 = L_14;
			}

IL_0054_1:
			{
				// if (subsys != null)
				RuntimeObject* L_15 = V_2;
				if (!L_15)
				{
					goto IL_006f_1;
				}
			}
			{
				// m_SubsystemInstanceMap[typeof(TSubsystem)] = subsys;
				Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_16 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 9)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				RuntimeObject* L_19 = V_2;
				NullCheck(L_16);
				Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6(L_16, L_18, L_19, Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
				// break;
				goto IL_0088;
			}

IL_006f_1:
			{
				// foreach (var descriptor in descriptors)
				bool L_20;
				L_20 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)), il2cpp_rgctx_method(method->rgctx_data, 10), (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_0);
				if (L_20)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_DestroySubsystem_TisRuntimeObject_mEB494C898E29C9B3A0FFDC6502073D730D1DD21C_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// if (subsystem.running)
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.ISubsystem::get_running() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// subsystem.Stop();
		RuntimeObject* L_4 = V_0;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
	}

IL_0027:
	{
		// var subsystemType = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		V_1 = L_6;
		// if (m_SubsystemInstanceMap.ContainsKey(subsystemType))
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_7 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838(L_7, L_8, Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// m_SubsystemInstanceMap.Remove(subsystemType);
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_10 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533(L_10, L_11, Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
	}

IL_004d:
	{
		// subsystem.Destroy();
		RuntimeObject* L_13 = V_0;
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
	}

IL_0058:
	{
		// }
		return;
	}
}
// T UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdaptivePerformanceLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_m45A8D15F0E767FA6BF1485EA3608EA60BFE6BF67_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_2 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_5 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_StartSubsystem_TisRuntimeObject_mED46F7CFD33FB472255ECFB6FCC441D782DD8421_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Start();
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper_StopSubsystem_TisRuntimeObject_mFE5CC154546FE5C5FEA943ADDE6690D3C39A3A77_gshared (AdaptivePerformanceLoaderHelper_t43D3768280F68D5528D8DCF87E0FC143DCF9A14F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Stop();
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// T UnityEngine.AdaptivePerformance.AdaptivePerformanceManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdaptivePerformanceManagerSettings_ActiveLoaderAs_TisRuntimeObject_m626C306F88AA4B18D8CFFEA988B5D06D283C6604_gshared (AdaptivePerformanceManagerSettings_t825765630D775605D6E53BE60D90E50CCDDF30C2* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// return activeLoader as T;
		AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E* L_0;
		L_0 = AdaptivePerformanceManagerSettings_get_activeLoader_m437ADEEB204181146DAB13B27D6752C74CEACD6F_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// Remotion.Linq.Clauses.StreamedData.StreamedValue Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::ExecuteAggregateInMemory<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Remotion.Linq.Clauses.StreamedData.StreamedSequence)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2* AggregateFromSeedResultOperator_ExecuteAggregateInMemory_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4E9657193838563635E05BA7C652D9EB56E9A3A4_gshared (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* ___input0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TAggregate)
	const uint32_t SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// TAggregate
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
	const Il2CppFullySharedGenericAny L_18 = L_4;
	const Il2CppFullySharedGenericAny L_24 = L_4;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
	// TResult
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t43B8B0E3B8655EC8695E9969F41AFC7C3FEFADD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TResult_t43B8B0E3B8655EC8695E9969F41AFC7C3FEFADD1);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
	memset(V_0, 0, SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
	Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
	memset(V_2, 0, SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
	StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* V_3 = NULL;
	{
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_0 = ___input0;
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_1;
		L_1 = ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371(_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2, L_0, ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371_RuntimeMethod_var);
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_2 = ___input0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_5 = ___input0;
		NullCheck(L_5);
		StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* L_6;
		L_6 = StreamedSequence_get_DataInfo_mD796975440F367881014804A5A13FBC55AC5CB90_inline(L_5, NULL);
		NullCheck(L_6);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7;
		L_7 = StreamedSequenceInfo_get_ItemExpression_mB1816BFC065BAE1A5D1CCA9E106975D2A2E44663_inline(L_6, NULL);
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_8;
		L_8 = AggregateFromSeedResultOperator_get_Func_m933A0F71F80031BA5592AD21D040F65710A9983F_inline(__this, NULL);
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_9;
		L_9 = ReverseResolvingExpressionVisitor_ReverseResolveLambda_m299AFF2712D7C3235CFCC70E2DCFA484B61C6495(L_7, L_8, 1, NULL);
		NullCheck(L_9);
		Delegate_t* L_10;
		L_10 = LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7(L_9, NULL);
		V_1 = ((Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 4)));
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_12 = V_1;
		InvokerActionInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_11: *(void**)L_11), L_12, (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_memcpy(V_2, L_13, SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_14 = ___input0;
		NullCheck(L_14);
		StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* L_15;
		L_15 = StreamedSequence_get_DataInfo_mD796975440F367881014804A5A13FBC55AC5CB90_inline(L_14, NULL);
		StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* L_16;
		L_16 = AggregateFromSeedResultOperator_GetOutputDataInfo_m35FBA58992AF8EC1A49857CC0C93BE867D8CECD4(__this, L_15, NULL);
		V_3 = L_16;
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_17;
		L_17 = AggregateFromSeedResultOperator_get_OptionalResultSelector_m836241DBF2E335AC6317917ED00B4A23E9C1BF91_inline(__this, NULL);
		if (L_17)
		{
			goto IL_0065;
		}
	}
	{
		il2cpp_codegen_memcpy(L_18, V_2, SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), L_18);
		StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* L_20 = V_3;
		StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2* L_21 = (StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2*)il2cpp_codegen_object_new(StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		StreamedValue__ctor_m9FB2EC896898650EAA9BFE86F26BE25DF1F8E275(L_21, L_19, L_20, NULL);
		return L_21;
	}

IL_0065:
	{
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_22;
		L_22 = AggregateFromSeedResultOperator_get_OptionalResultSelector_m836241DBF2E335AC6317917ED00B4A23E9C1BF91_inline(__this, NULL);
		NullCheck(L_22);
		Delegate_t* L_23;
		L_23 = LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7(L_22, NULL);
		il2cpp_codegen_memcpy(L_24, V_2, SizeOf_TAggregate_t355EE4B2B92BA5084A7B572B14AEE75C476A48B2);
		NullCheck(((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 6))));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), ((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 6))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_24: *(void**)L_24), (Il2CppFullySharedGenericAny*)L_25);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data(method->rgctx_data, 8), L_25);
		StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* L_27 = V_3;
		StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2* L_28 = (StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2*)il2cpp_codegen_object_new(StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		StreamedValue__ctor_m9FB2EC896898650EAA9BFE86F26BE25DF1F8E275(L_28, L_26, L_27, NULL);
		return L_28;
	}
}
// Remotion.Linq.Clauses.StreamedData.StreamedValue Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::ExecuteInMemory<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Remotion.Linq.Clauses.StreamedData.StreamedSequence)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2* AggregateFromSeedResultOperator_ExecuteInMemory_TisIl2CppFullySharedGenericAny_mFCD08FE4979333B841975B372850D96C9CC1018B_gshared (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* ___input0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2);
		il2cpp_rgctx_method_init(method);
	}
	MethodInfo_t* V_0 = NULL;
	{
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_0 = ___input0;
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_1;
		L_1 = ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371(_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2, L_0, ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588_il2cpp_TypeInfo_var);
		MethodInfo_t* L_2 = ((AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588_StaticFields*)il2cpp_codegen_static_fields_for(AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588_il2cpp_TypeInfo_var))->___s_executeMethod_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_4;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_8;
		L_8 = AggregateFromSeedResultOperator_get_Seed_m310EBD5BBF50CF6EFA50F21CE59409F4CC61DF46_inline(__this, NULL);
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_9);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = L_7;
		Type_t* L_11;
		L_11 = AggregateFromSeedResultOperator_GetResultType_mE637CA667829561E1967C8888A354099F8BAD3E3(__this, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_11);
		NullCheck(L_2);
		MethodInfo_t* L_12;
		L_12 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(47 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_2, L_10);
		V_0 = L_12;
		MethodInfo_t* L_13 = V_0;
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_14 = ___input0;
		NullCheck((ResultOperatorBase_tF12E5C0C14644C21FCF2A946F9DC2BDCBB7771E7*)__this);
		RuntimeObject* L_15;
		L_15 = ResultOperatorBase_InvokeExecuteMethod_mC44408136C5D7013E7712100E6C78F1D1556A10A((ResultOperatorBase_tF12E5C0C14644C21FCF2A946F9DC2BDCBB7771E7*)__this, L_13, (RuntimeObject*)L_14, NULL);
		return ((StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2*)CastclassSealed((RuntimeObject*)L_15, StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2_il2cpp_TypeInfo_var));
	}
}
// T Remotion.Linq.Clauses.ResultOperators.AggregateFromSeedResultOperator::GetConstantSeed<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateFromSeedResultOperator_GetConstantSeed_TisIl2CppFullySharedGenericAny_mA2A2891E5B9CE61988CDD609C4B19AFAEAB7D4A8_gshared (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tD4C29B16407E3E5E09B0ACD8A0A060B8D1BFF481 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tD4C29B16407E3E5E09B0ACD8A0A060B8D1BFF481);
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0;
		L_0 = AggregateFromSeedResultOperator_get_Seed_m310EBD5BBF50CF6EFA50F21CE59409F4CC61DF46_inline(__this, NULL);
		NullCheck((ResultOperatorBase_tF12E5C0C14644C21FCF2A946F9DC2BDCBB7771E7*)__this);
		InvokerActionInvoker3< String_t*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), (ResultOperatorBase_tF12E5C0C14644C21FCF2A946F9DC2BDCBB7771E7*)__this, _stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tD4C29B16407E3E5E09B0ACD8A0A060B8D1BFF481);
		return;
	}
}
// Remotion.Linq.Clauses.StreamedData.StreamedValue Remotion.Linq.Clauses.ResultOperators.AggregateResultOperator::ExecuteInMemory<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Remotion.Linq.Clauses.StreamedData.StreamedSequence)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2* AggregateResultOperator_ExecuteInMemory_TisIl2CppFullySharedGenericAny_mD80C5E10F3F4906E200168A4B66C4F7086DB3847_gshared (AggregateResultOperator_t6F17C3EC0EC172B96B31A4210508090D6910D83E* __this, StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* ___input0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2);
		il2cpp_rgctx_method_init(method);
	}
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_t79FAA8E44FF7309F076E4FD07DC910BAB716192E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t79FAA8E44FF7309F076E4FD07DC910BAB716192E);
	Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* V_0 = NULL;
	{
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_0 = ___input0;
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_1;
		L_1 = ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371(_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2, L_0, ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371_RuntimeMethod_var);
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_2 = ___input0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_2);
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_4 = ___input0;
		NullCheck(L_4);
		StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* L_5;
		L_5 = StreamedSequence_get_DataInfo_mD796975440F367881014804A5A13FBC55AC5CB90_inline(L_4, NULL);
		NullCheck(L_5);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_6;
		L_6 = StreamedSequenceInfo_get_ItemExpression_mB1816BFC065BAE1A5D1CCA9E106975D2A2E44663_inline(L_5, NULL);
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_7;
		L_7 = AggregateResultOperator_get_Func_m42D0F0BE64610B581B2BAD01D42FF1841F37084D_inline(__this, NULL);
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_8;
		L_8 = ReverseResolvingExpressionVisitor_ReverseResolveLambda_m299AFF2712D7C3235CFCC70E2DCFA484B61C6495(L_6, L_7, 1, NULL);
		NullCheck(L_8);
		Delegate_t* L_9;
		L_9 = LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7(L_8, NULL);
		V_0 = ((Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_10 = V_0;
		InvokerActionInvoker3< RuntimeObject*, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_3, L_10, (Il2CppFullySharedGenericAny*)L_11);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), L_11);
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_13 = ___input0;
		NullCheck(L_13);
		StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* L_14;
		L_14 = StreamedSequence_get_DataInfo_mD796975440F367881014804A5A13FBC55AC5CB90_inline(L_13, NULL);
		StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* L_15;
		L_15 = AggregateResultOperator_GetOutputDataInfo_m58CE2DB29A4737076A642942716476EFED0677C7(__this, L_14, NULL);
		StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2* L_16 = (StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2*)il2cpp_codegen_object_new(StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		StreamedValue__ctor_m9FB2EC896898650EAA9BFE86F26BE25DF1F8E275(L_16, L_12, L_15, NULL);
		return L_16;
	}
}
// System.Void Unity.Burst.CompilerServices.Aliasing::ExpectAliased<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(A&,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aliasing_ExpectAliased_TisIl2CppFullySharedGenericStruct_m075C1120707047E87A0EBB3CE48284001FF0E74A_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___a0, void* ___b1, const RuntimeMethod* method) 
{
	{
		// public static unsafe void ExpectAliased<A>(in A a, void* b) where A : struct { }
		return;
	}
}
// System.Void Unity.Burst.CompilerServices.Aliasing::ExpectAliased<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,B&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aliasing_ExpectAliased_TisIl2CppFullySharedGenericStruct_m1E31A467DE8A0D3CCF016356604301A86EE72E17_gshared (void* ___a0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___b1, const RuntimeMethod* method) 
{
	{
		// public static unsafe void ExpectAliased<B>(void* a, in B b) where B : struct { }
		return;
	}
}
// System.Void Unity.Burst.CompilerServices.Aliasing::ExpectAliased<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(A&,B&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aliasing_ExpectAliased_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mB1A97E157AFDEDBCC1E577053EC3587AF5412AA6_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___a0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___b1, const RuntimeMethod* method) 
{
	{
		// public static void ExpectAliased<A, B>(in A a, in B b) where A : struct where B : struct { }
		return;
	}
}
// System.Void Unity.Burst.CompilerServices.Aliasing::ExpectNotAliased<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(A&,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aliasing_ExpectNotAliased_TisIl2CppFullySharedGenericStruct_m51216B1AF3D3593185A2A5CF457F03FC3472F486_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___a0, void* ___b1, const RuntimeMethod* method) 
{
	{
		// public static unsafe void ExpectNotAliased<A>(in A a, void* b) where A : struct { }
		return;
	}
}
// System.Void Unity.Burst.CompilerServices.Aliasing::ExpectNotAliased<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,B&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aliasing_ExpectNotAliased_TisIl2CppFullySharedGenericStruct_mCC84E3A701DBE4F24447CDF0711F2EE48D120C56_gshared (void* ___a0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___b1, const RuntimeMethod* method) 
{
	{
		// public static unsafe void ExpectNotAliased<B>(void* a, in B b) where B : struct { }
		return;
	}
}
// System.Void Unity.Burst.CompilerServices.Aliasing::ExpectNotAliased<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(A&,B&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aliasing_ExpectNotAliased_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m92EFBB87563B467A35B0F7DCCB5D29EBA64B989A_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___a0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___b1, const RuntimeMethod* method) 
{
	{
		// public static void ExpectNotAliased<A, B>(in A a, in B b) where A : struct where B : struct { }
		return;
	}
}
// Remotion.Linq.Clauses.StreamedData.StreamedValue Remotion.Linq.Clauses.ResultOperators.AllResultOperator::ExecuteInMemory<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Remotion.Linq.Clauses.StreamedData.StreamedSequence)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2* AllResultOperator_ExecuteInMemory_TisIl2CppFullySharedGenericAny_mCB4C6F096E9F78D625E15015FBA7647D84A93AB0_gshared (AllResultOperator_t65CDD249101BE553D69C2587B23F31A7AA617DF9* __this, StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* ___input0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2);
		il2cpp_rgctx_method_init(method);
	}
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* V_0 = NULL;
	{
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_0 = ___input0;
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_1;
		L_1 = ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371(_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2, L_0, ArgumentUtility_CheckNotNull_TisStreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25_m2989E1F333314249FD8C0E6FDB3FA42ECAE81371_RuntimeMethod_var);
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_2 = ___input0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_2);
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_4 = ___input0;
		NullCheck(L_4);
		StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* L_5;
		L_5 = StreamedSequence_get_DataInfo_mD796975440F367881014804A5A13FBC55AC5CB90_inline(L_4, NULL);
		NullCheck(L_5);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_6;
		L_6 = StreamedSequenceInfo_get_ItemExpression_mB1816BFC065BAE1A5D1CCA9E106975D2A2E44663_inline(L_5, NULL);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7;
		L_7 = AllResultOperator_get_Predicate_m4848687F3C47B77647A4257FA16385268E562D22_inline(__this, NULL);
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_8;
		L_8 = ReverseResolvingExpressionVisitor_ReverseResolve_mC0BC4EC2F8D45B41BC2F066A4E18A571B2E76F6E(L_6, L_7, NULL);
		NullCheck(L_8);
		Delegate_t* L_9;
		L_9 = LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7(L_8, NULL);
		V_0 = ((Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_10 = V_0;
		bool L_11;
		L_11 = InvokerFuncInvoker2< bool, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_3, L_10);
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* L_14 = ___input0;
		NullCheck(L_14);
		StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* L_15;
		L_15 = StreamedSequence_get_DataInfo_mD796975440F367881014804A5A13FBC55AC5CB90_inline(L_14, NULL);
		StreamedValueInfo_t319E418F472EDAE4946C45EBC083F09DF8FC314F* L_16;
		L_16 = AllResultOperator_GetOutputDataInfo_mFDCDF2CA07BDA90E220C9AF896D32AFE876472D7(__this, L_15, NULL);
		StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2* L_17 = (StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2*)il2cpp_codegen_object_new(StreamedValue_t1F48D697CC46F98A7A1D18BBD526E3F7CEC0C4C2_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		StreamedValue__ctor_m9FB2EC896898650EAA9BFE86F26BE25DF1F8E275(L_17, L_13, L_16, NULL);
		return L_17;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Boolean>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		intptr_t L_0 = ___array0;
		bool L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Char>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppChar V_0 = 0x0;
	{
		intptr_t L_0 = ___array0;
		Il2CppChar L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Il2CppChar L_2 = V_0;
		return L_2;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	double V_0 = 0.0;
	{
		intptr_t L_0 = ___array0;
		double L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		double L_2 = V_0;
		return L_2;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int16_t V_0 = 0;
	{
		intptr_t L_0 = ___array0;
		int16_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int16_t L_2 = V_0;
		return L_2;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___array0;
		int32_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		intptr_t L_0 = ___array0;
		int64_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		intptr_t L_0 = ___array0;
		RuntimeObject* L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t V_0 = 0x0;
	{
		intptr_t L_0 = ___array0;
		int8_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int8_t L_2 = V_0;
		return L_2;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	{
		intptr_t L_0 = ___array0;
		float L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// ArrayType UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mE2FE04F1AE05E31AFCB6C62A0D8015274310BBE7_gshared (intptr_t ___array0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(ArrayType)
	const uint32_t SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ArrayType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	memset(V_0, 0, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	{
		intptr_t L_0 = ___array0;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		return;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID<System.Int32>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		bool L_2 = ___isStatic2;
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisRuntimeObject_mC16A1C67F372B5B13E199ED9D7C170385740D4A0_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		bool L_2 = ___isStatic2;
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID<System.Single>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD609864F766F77FB093EC507721536574D38177_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		bool L_2 = ___isStatic2;
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m646B71E5782A91A5A247FFAEEA04D44FB31AA619(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_mD4DFA0128576804E9AE4FF17BD3D1398F2196069_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		bool L_2 = ___isStatic2;
		intptr_t L_3;
		L_3 = InvokerFuncInvoker3< intptr_t, intptr_t, String_t*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mEB124826B537513D20B0E11A265E04D0612E1CE8_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		bool L_3 = ___isStatic3;
		intptr_t L_4;
		L_4 = InvokerFuncInvoker4< intptr_t, intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.AndroidJNIHelper::GetSignature<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m4D04F21DE5CB13BC4E2A08505DA57AC729F3BA70_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		String_t* L_1;
		L_1 = InvokerFuncInvoker1< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		bool L_2;
		L_2 = AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Char>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppChar V_0 = 0x0;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		Il2CppChar L_2;
		L_2 = AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	double V_0 = 0.0;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		double L_2;
		L_2 = AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		double L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int16>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int16_t V_0 = 0;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		int16_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int16_t L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		int32_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		int64_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		RuntimeObject* L_2;
		L_2 = AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.SByte>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t V_0 = 0x0;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		int8_t L_2;
		L_2 = AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int8_t L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		float L_2;
		L_2 = AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ReturnType
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	memset(V_0, 0, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mF7CDE80510F82B3C335324838828B788E1F0FAD4_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___args1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A(__this, L_0, L_2, NULL);
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m584BD08D664D1371FF995E37EDD37FD6AA861406_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// ReturnType
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	memset(V_0, 0, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___args1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		bool L_2;
		L_2 = AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		int32_t L_2;
		L_2 = AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		RuntimeObject* L_2;
		L_2 = AndroidJavaObject__CallStatic_TisRuntimeObject_m866F29B108C5DB3A3A0C478915CB44EDEA5FD4E8(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ReturnType
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	const Il2CppFullySharedGenericAny L_3 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	memset(V_0, 0, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		goto IL_000c;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_mB35C0A4F3C829AF99001B27BC0E99CD64736EE1A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___args1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E(__this, L_0, L_2, NULL);
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9E8D43F22F21BB581F9478C8CF9B3A8059B3B8CD_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// ReturnType
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	memset(V_0, 0, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___args1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		goto IL_0015;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Boolean>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364_gshared (intptr_t ___jobject0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		intptr_t L_0 = ___jobject0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_4 = V_1;
		V_2 = L_4;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_5 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_6 = ___jobject0;
			bool L_7;
			L_7 = AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
			bool L_8 = L_7;
			RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_8);
			V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_9, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Char>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6069C54C9918EFBFD1D0EEA1FAF09666F183F925_gshared (intptr_t ___jobject0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	{
		intptr_t L_0 = ___jobject0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppChar));
		Il2CppChar L_4 = V_1;
		V_2 = L_4;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_5 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_6 = ___jobject0;
			Il2CppChar L_7;
			L_7 = AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
			Il2CppChar L_8 = L_7;
			RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_8);
			V_2 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_9, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		Il2CppChar L_10 = V_2;
		return L_10;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mDB40CA13303FDBBDB58268D7D77B4B04DE3E182E_gshared (intptr_t ___jobject0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		intptr_t L_0 = ___jobject0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(double));
		double L_4 = V_1;
		V_2 = L_4;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_5 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_6 = ___jobject0;
			double L_7;
			L_7 = AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
			double L_8 = L_7;
			RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_8);
			V_2 = ((*(double*)((double*)(double*)UnBox(L_9, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		double L_10 = V_2;
		return L_10;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m37AE925317BC8416FAF14FA6E8AB341EF2C1C804_gshared (intptr_t ___jobject0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int16_t V_1 = 0;
	int16_t V_2 = 0;
	{
		intptr_t L_0 = ___jobject0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int16_t));
		int16_t L_4 = V_1;
		V_2 = L_4;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_5 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_6 = ___jobject0;
			int16_t L_7;
			L_7 = AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
			int16_t L_8 = L_7;
			RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_8);
			V_2 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_9, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		int16_t L_10 = V_2;
		return L_10;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared (intptr_t ___jobject0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		intptr_t L_0 = ___jobject0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_4 = V_1;
		V_2 = L_4;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_5 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_6 = ___jobject0;
			int32_t L_7;
			L_7 = AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
			int32_t L_8 = L_7;
			RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_8);
			V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9_gshared (intptr_t ___jobject0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	{
		intptr_t L_0 = ___jobject0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int64_t));
		int64_t L_4 = V_1;
		V_2 = L_4;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_5 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_6 = ___jobject0;
			int64_t L_7;
			L_7 = AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
			int64_t L_8 = L_7;
			RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_8);
			V_2 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_9, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		int64_t L_10 = V_2;
		return L_10;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7_gshared (intptr_t ___jobject0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		intptr_t L_0 = ___jobject0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_1;
		V_2 = L_4;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_5 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_6 = ___jobject0;
			RuntimeObject* L_7;
			L_7 = AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_mB65315943EF80AF86334A1BFE6AF8E74BC9E4B89(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
			V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m502D18176A3EEDA2AF299069FA9247064B7D8D51_gshared (intptr_t ___jobject0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int8_t V_1 = 0x0;
	int8_t V_2 = 0x0;
	{
		intptr_t L_0 = ___jobject0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int8_t));
		int8_t L_4 = V_1;
		V_2 = L_4;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_5 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_6 = ___jobject0;
			int8_t L_7;
			L_7 = AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
			int8_t L_8 = L_7;
			RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_8);
			V_2 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_9, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		int8_t L_10 = V_2;
		return L_10;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6191F97DB89FB7E398F8A3DF9E448A9DCD5F07EA_gshared (intptr_t ___jobject0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		intptr_t L_0 = ___jobject0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(float));
		float L_4 = V_1;
		V_2 = L_4;
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_5 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_6 = ___jobject0;
			float L_7;
			L_7 = AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
			float L_8 = L_7;
			RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_8);
			V_2 = ((*(float*)((float*)(float*)UnBox(L_9, il2cpp_rgctx_data(method->rgctx_data, 0)))));
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		float L_10 = V_2;
		return L_10;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::FromJavaArrayDeleteLocalRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppFullySharedGenericAny_m5BC2B7B267EBFB3D33E1D15F5F5DFEF99AB48E84_gshared (intptr_t ___jobject0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// ReturnType
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	const Il2CppFullySharedGenericAny L_7 = L_4;
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	bool V_0 = false;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	memset(V_1, 0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	memset(V_2, 0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	{
		intptr_t L_0 = ___jobject0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		goto IL_003b;
	}

IL_001c:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_5 = ___jobject0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_6 = ___jobject0;
			InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_6, (Il2CppFullySharedGenericAny*)L_7);
			RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_7);
			void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(method->rgctx_data, 0), L_9);
			il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10))), SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		il2cpp_codegen_memcpy(L_11, V_2, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		return;
	}
}
// FieldType UnityEngine.AndroidJavaObject::Get<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___fieldName0;
		int32_t L_1;
		L_1 = AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// FieldType UnityEngine.AndroidJavaObject::Get<System.Single>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDA2BCB73A1D265234267CD05B1602089DA982C68_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___fieldName0;
		float L_1;
		L_1 = AndroidJavaObject__Get_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m599A48B8B43BD171290DD40A653B639B6F856D42(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// FieldType UnityEngine.AndroidJavaObject::Get<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Get_TisIl2CppFullySharedGenericAny_m390E9396B06E7DB37AB22F9F94EF31B456F01185_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// FieldType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	memset(V_0, 0, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	{
		String_t* L_0 = ___fieldName0;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		return;
	}
}
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___fieldName0;
		int32_t L_1;
		L_1 = AndroidJavaObject__GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4289B7D740963C5007AD93A07FF6A0A01857DD28(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___fieldName0;
		RuntimeObject* L_1;
		L_1 = AndroidJavaObject__GetStatic_TisRuntimeObject_mFD2921EBDC6092026493462946A3381D5C97FA86(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// FieldType UnityEngine.AndroidJavaObject::GetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// FieldType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	memset(V_0, 0, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	{
		String_t* L_0 = ___fieldName0;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		goto IL_000b;
	}

IL_000b:
	{
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::Set<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisIl2CppFullySharedGenericAny_m7286B3F15DA02D0B999CE939F20412740B22945E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___val1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// FieldType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
	{
		String_t* L_0 = ___fieldName0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___val1 : &___val1), SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
// System.Void UnityEngine.AndroidJavaObject::SetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_SetStatic_TisIl2CppFullySharedGenericAny_mF354DBF45CBF7D251BCCAB27BAB86047439CC292_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___val1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(FieldType)
	const uint32_t SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// FieldType
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
	{
		String_t* L_0 = ___fieldName0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___val1 : &___val1), SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool G_B29_0 = false;
	bool G_B34_0 = false;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4(L_4, L_5, L_6, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				bool L_33;
				L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_41, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				bool L_46;
				L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
				V_7 = L_46;
				bool L_47 = V_7;
				if (!L_47)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_48 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_49;
				L_49 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_48, NULL);
				intptr_t L_50 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_51 = V_1;
				int8_t L_52;
				L_52 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_49, L_50, L_51, NULL);
				uint8_t L_53 = ((uint8_t)((int32_t)(uint8_t)L_52));
				RuntimeObject* L_54 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_53);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_54, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_56;
				L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_58;
				L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
				bool L_59;
				L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
				V_8 = L_59;
				bool L_60 = V_8;
				if (!L_60)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_61, NULL);
				intptr_t L_63 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_1;
				int8_t L_65;
				L_65 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_62, L_63, L_64, NULL);
				int8_t L_66 = L_65;
				RuntimeObject* L_67 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_66);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_69;
				L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_71;
				L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
				bool L_72;
				L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_74 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_75;
				L_75 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_74, NULL);
				intptr_t L_76 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_77 = V_1;
				int16_t L_78;
				L_78 = AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC(L_75, L_76, L_77, NULL);
				int16_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_79);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_84;
				L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
				bool L_85;
				L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
				V_10 = L_85;
				bool L_86 = V_10;
				if (!L_86)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
				intptr_t L_89 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_90 = V_1;
				int64_t L_91;
				L_91 = AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525(L_88, L_89, L_90, NULL);
				int64_t L_92 = L_91;
				RuntimeObject* L_93 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_92);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_93, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_103 = V_1;
				float L_104;
				L_104 = AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504(L_101, L_102, L_103, NULL);
				float L_105 = L_104;
				RuntimeObject* L_106 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_105);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_106, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				bool L_111;
				L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
				V_12 = L_111;
				bool L_112 = V_12;
				if (!L_112)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_114;
				L_114 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_113, NULL);
				intptr_t L_115 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_116 = V_1;
				double L_117;
				L_117 = AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE(L_114, L_115, L_116, NULL);
				double L_118 = L_117;
				RuntimeObject* L_119 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_118);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_119, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
				bool L_124;
				L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
				V_13 = L_124;
				bool L_125 = V_13;
				if (!L_125)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_126 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_127;
				L_127 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_126, NULL);
				intptr_t L_128 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_129 = V_1;
				Il2CppChar L_130;
				L_130 = AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3(L_127, L_128, L_129, NULL);
				Il2CppChar L_131 = L_130;
				RuntimeObject* L_132 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_131);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_132, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_134;
				L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_136;
				L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
				bool L_137;
				L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
				V_14 = L_137;
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_139 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_140;
				L_140 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_139, NULL);
				intptr_t L_141 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_142 = V_1;
				String_t* L_143;
				L_143 = AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699(L_140, L_141, L_142, NULL);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_143, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_147;
				L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
				bool L_148;
				L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
				V_15 = L_148;
				bool L_149 = V_15;
				if (!L_149)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_151;
				L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
				intptr_t L_152 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_153 = V_1;
				intptr_t L_154;
				L_154 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_151, L_152, L_153, NULL);
				V_16 = L_154;
				intptr_t L_155 = V_16;
				intptr_t L_156 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_157;
				L_157 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_155, L_156, NULL);
				if (L_157)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_158 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_159;
				L_159 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_158, NULL);
				G_B29_0 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_159, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(bool));
				bool L_160 = V_17;
				G_B29_0 = L_160;
			}

IL_0340_1:
			{
				V_5 = G_B29_0;
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_162;
				L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				bool L_165;
				L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
				V_18 = L_165;
				bool L_166 = V_18;
				if (!L_166)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_168;
				L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
				intptr_t L_169 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_170 = V_1;
				intptr_t L_171;
				L_171 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_168, L_169, L_170, NULL);
				V_19 = L_171;
				intptr_t L_172 = V_19;
				intptr_t L_173 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_174;
				L_174 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_172, L_173, NULL);
				if (L_174)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_175 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_176;
				L_176 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_175, NULL);
				G_B34_0 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_176, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(bool));
				bool L_177 = V_17;
				G_B34_0 = L_177;
			}

IL_03a1_1:
			{
				V_5 = G_B34_0;
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_179, L_181, NULL);
				V_20 = L_182;
				bool L_183 = V_20;
				if (!L_183)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_184 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_185;
				L_185 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_184, NULL);
				intptr_t L_186 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_187 = V_1;
				intptr_t L_188;
				L_188 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_185, L_186, L_187, NULL);
				V_21 = L_188;
				intptr_t L_189 = V_21;
				bool L_190;
				L_190 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364(L_189, il2cpp_rgctx_method(method->rgctx_data, 3));
				V_5 = L_190;
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_192;
				L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
				Type_t* L_193 = L_192;
				G_B38_0 = L_193;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_193)
				{
					G_B39_0 = L_193;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_194;
				L_194 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_194;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_195;
				L_195 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_196 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_196);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_196, L_195, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_196, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(bool));
				bool L_197 = V_17;
				V_5 = L_197;
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		bool L_198 = V_5;
		return L_198;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Char>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Il2CppChar V_5 = 0x0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	Il2CppChar V_17 = 0x0;
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	Il2CppChar G_B29_0 = 0x0;
	Il2CppChar G_B34_0 = 0x0;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA(L_4, L_5, L_6, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				V_5 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				bool L_33;
				L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				V_5 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_41, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				bool L_46;
				L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
				V_7 = L_46;
				bool L_47 = V_7;
				if (!L_47)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_48 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_49;
				L_49 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_48, NULL);
				intptr_t L_50 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_51 = V_1;
				int8_t L_52;
				L_52 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_49, L_50, L_51, NULL);
				uint8_t L_53 = ((uint8_t)((int32_t)(uint8_t)L_52));
				RuntimeObject* L_54 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_53);
				V_5 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_54, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_56;
				L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_58;
				L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
				bool L_59;
				L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
				V_8 = L_59;
				bool L_60 = V_8;
				if (!L_60)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_61, NULL);
				intptr_t L_63 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_1;
				int8_t L_65;
				L_65 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_62, L_63, L_64, NULL);
				int8_t L_66 = L_65;
				RuntimeObject* L_67 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_66);
				V_5 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_69;
				L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_71;
				L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
				bool L_72;
				L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_74 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_75;
				L_75 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_74, NULL);
				intptr_t L_76 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_77 = V_1;
				int16_t L_78;
				L_78 = AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC(L_75, L_76, L_77, NULL);
				int16_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_79);
				V_5 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_84;
				L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
				bool L_85;
				L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
				V_10 = L_85;
				bool L_86 = V_10;
				if (!L_86)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
				intptr_t L_89 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_90 = V_1;
				int64_t L_91;
				L_91 = AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525(L_88, L_89, L_90, NULL);
				int64_t L_92 = L_91;
				RuntimeObject* L_93 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_92);
				V_5 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_93, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_103 = V_1;
				float L_104;
				L_104 = AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504(L_101, L_102, L_103, NULL);
				float L_105 = L_104;
				RuntimeObject* L_106 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_105);
				V_5 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_106, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				bool L_111;
				L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
				V_12 = L_111;
				bool L_112 = V_12;
				if (!L_112)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_114;
				L_114 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_113, NULL);
				intptr_t L_115 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_116 = V_1;
				double L_117;
				L_117 = AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE(L_114, L_115, L_116, NULL);
				double L_118 = L_117;
				RuntimeObject* L_119 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_118);
				V_5 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_119, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
				bool L_124;
				L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
				V_13 = L_124;
				bool L_125 = V_13;
				if (!L_125)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_126 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_127;
				L_127 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_126, NULL);
				intptr_t L_128 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_129 = V_1;
				Il2CppChar L_130;
				L_130 = AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3(L_127, L_128, L_129, NULL);
				Il2CppChar L_131 = L_130;
				RuntimeObject* L_132 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_131);
				V_5 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_132, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_134;
				L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_136;
				L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
				bool L_137;
				L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
				V_14 = L_137;
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_139 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_140;
				L_140 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_139, NULL);
				intptr_t L_141 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_142 = V_1;
				String_t* L_143;
				L_143 = AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699(L_140, L_141, L_142, NULL);
				V_5 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_143, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_147;
				L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
				bool L_148;
				L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
				V_15 = L_148;
				bool L_149 = V_15;
				if (!L_149)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_151;
				L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
				intptr_t L_152 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_153 = V_1;
				intptr_t L_154;
				L_154 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_151, L_152, L_153, NULL);
				V_16 = L_154;
				intptr_t L_155 = V_16;
				intptr_t L_156 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_157;
				L_157 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_155, L_156, NULL);
				if (L_157)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_158 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_159;
				L_159 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_158, NULL);
				G_B29_0 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_159, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(Il2CppChar));
				Il2CppChar L_160 = V_17;
				G_B29_0 = L_160;
			}

IL_0340_1:
			{
				V_5 = G_B29_0;
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_162;
				L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				bool L_165;
				L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
				V_18 = L_165;
				bool L_166 = V_18;
				if (!L_166)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_168;
				L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
				intptr_t L_169 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_170 = V_1;
				intptr_t L_171;
				L_171 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_168, L_169, L_170, NULL);
				V_19 = L_171;
				intptr_t L_172 = V_19;
				intptr_t L_173 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_174;
				L_174 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_172, L_173, NULL);
				if (L_174)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_175 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_176;
				L_176 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_175, NULL);
				G_B34_0 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_176, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(Il2CppChar));
				Il2CppChar L_177 = V_17;
				G_B34_0 = L_177;
			}

IL_03a1_1:
			{
				V_5 = G_B34_0;
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_179, L_181, NULL);
				V_20 = L_182;
				bool L_183 = V_20;
				if (!L_183)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_184 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_185;
				L_185 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_184, NULL);
				intptr_t L_186 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_187 = V_1;
				intptr_t L_188;
				L_188 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_185, L_186, L_187, NULL);
				V_21 = L_188;
				intptr_t L_189 = V_21;
				Il2CppChar L_190;
				L_190 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6069C54C9918EFBFD1D0EEA1FAF09666F183F925(L_189, il2cpp_rgctx_method(method->rgctx_data, 3));
				V_5 = L_190;
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_192;
				L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
				Type_t* L_193 = L_192;
				G_B38_0 = L_193;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_193)
				{
					G_B39_0 = L_193;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_194;
				L_194 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_194;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_195;
				L_195 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_196 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_196);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_196, L_195, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_196, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(Il2CppChar));
				Il2CppChar L_197 = V_17;
				V_5 = L_197;
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		Il2CppChar L_198 = V_5;
		return L_198;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Double>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	double V_5 = 0.0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	double V_17 = 0.0;
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	double G_B29_0 = 0.0;
	double G_B34_0 = 0.0;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3(L_4, L_5, L_6, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				V_5 = ((*(double*)((double*)(double*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				bool L_33;
				L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				V_5 = ((*(double*)((double*)(double*)UnBox(L_41, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				bool L_46;
				L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
				V_7 = L_46;
				bool L_47 = V_7;
				if (!L_47)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_48 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_49;
				L_49 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_48, NULL);
				intptr_t L_50 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_51 = V_1;
				int8_t L_52;
				L_52 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_49, L_50, L_51, NULL);
				uint8_t L_53 = ((uint8_t)((int32_t)(uint8_t)L_52));
				RuntimeObject* L_54 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_53);
				V_5 = ((*(double*)((double*)(double*)UnBox(L_54, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_56;
				L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_58;
				L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
				bool L_59;
				L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
				V_8 = L_59;
				bool L_60 = V_8;
				if (!L_60)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_61, NULL);
				intptr_t L_63 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_1;
				int8_t L_65;
				L_65 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_62, L_63, L_64, NULL);
				int8_t L_66 = L_65;
				RuntimeObject* L_67 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_66);
				V_5 = ((*(double*)((double*)(double*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_69;
				L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_71;
				L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
				bool L_72;
				L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_74 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_75;
				L_75 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_74, NULL);
				intptr_t L_76 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_77 = V_1;
				int16_t L_78;
				L_78 = AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC(L_75, L_76, L_77, NULL);
				int16_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_79);
				V_5 = ((*(double*)((double*)(double*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_84;
				L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
				bool L_85;
				L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
				V_10 = L_85;
				bool L_86 = V_10;
				if (!L_86)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
				intptr_t L_89 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_90 = V_1;
				int64_t L_91;
				L_91 = AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525(L_88, L_89, L_90, NULL);
				int64_t L_92 = L_91;
				RuntimeObject* L_93 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_92);
				V_5 = ((*(double*)((double*)(double*)UnBox(L_93, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_103 = V_1;
				float L_104;
				L_104 = AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504(L_101, L_102, L_103, NULL);
				float L_105 = L_104;
				RuntimeObject* L_106 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_105);
				V_5 = ((*(double*)((double*)(double*)UnBox(L_106, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				bool L_111;
				L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
				V_12 = L_111;
				bool L_112 = V_12;
				if (!L_112)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_114;
				L_114 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_113, NULL);
				intptr_t L_115 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_116 = V_1;
				double L_117;
				L_117 = AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE(L_114, L_115, L_116, NULL);
				double L_118 = L_117;
				RuntimeObject* L_119 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_118);
				V_5 = ((*(double*)((double*)(double*)UnBox(L_119, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
				bool L_124;
				L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
				V_13 = L_124;
				bool L_125 = V_13;
				if (!L_125)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_126 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_127;
				L_127 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_126, NULL);
				intptr_t L_128 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_129 = V_1;
				Il2CppChar L_130;
				L_130 = AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3(L_127, L_128, L_129, NULL);
				Il2CppChar L_131 = L_130;
				RuntimeObject* L_132 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_131);
				V_5 = ((*(double*)((double*)(double*)UnBox(L_132, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_134;
				L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_136;
				L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
				bool L_137;
				L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
				V_14 = L_137;
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_139 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_140;
				L_140 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_139, NULL);
				intptr_t L_141 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_142 = V_1;
				String_t* L_143;
				L_143 = AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699(L_140, L_141, L_142, NULL);
				V_5 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_143, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_147;
				L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
				bool L_148;
				L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
				V_15 = L_148;
				bool L_149 = V_15;
				if (!L_149)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_151;
				L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
				intptr_t L_152 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_153 = V_1;
				intptr_t L_154;
				L_154 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_151, L_152, L_153, NULL);
				V_16 = L_154;
				intptr_t L_155 = V_16;
				intptr_t L_156 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_157;
				L_157 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_155, L_156, NULL);
				if (L_157)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_158 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_159;
				L_159 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_158, NULL);
				G_B29_0 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_159, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(double));
				double L_160 = V_17;
				G_B29_0 = L_160;
			}

IL_0340_1:
			{
				V_5 = G_B29_0;
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_162;
				L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				bool L_165;
				L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
				V_18 = L_165;
				bool L_166 = V_18;
				if (!L_166)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_168;
				L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
				intptr_t L_169 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_170 = V_1;
				intptr_t L_171;
				L_171 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_168, L_169, L_170, NULL);
				V_19 = L_171;
				intptr_t L_172 = V_19;
				intptr_t L_173 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_174;
				L_174 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_172, L_173, NULL);
				if (L_174)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_175 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_176;
				L_176 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_175, NULL);
				G_B34_0 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_176, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(double));
				double L_177 = V_17;
				G_B34_0 = L_177;
			}

IL_03a1_1:
			{
				V_5 = G_B34_0;
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_179, L_181, NULL);
				V_20 = L_182;
				bool L_183 = V_20;
				if (!L_183)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_184 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_185;
				L_185 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_184, NULL);
				intptr_t L_186 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_187 = V_1;
				intptr_t L_188;
				L_188 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_185, L_186, L_187, NULL);
				V_21 = L_188;
				intptr_t L_189 = V_21;
				double L_190;
				L_190 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mDB40CA13303FDBBDB58268D7D77B4B04DE3E182E(L_189, il2cpp_rgctx_method(method->rgctx_data, 3));
				V_5 = L_190;
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_192;
				L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
				Type_t* L_193 = L_192;
				G_B38_0 = L_193;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_193)
				{
					G_B39_0 = L_193;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_194;
				L_194 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_194;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_195;
				L_195 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_196 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_196);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_196, L_195, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_196, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(double));
				double L_197 = V_17;
				V_5 = L_197;
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		double L_198 = V_5;
		return L_198;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Int16>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int16_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	int16_t V_17 = 0;
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	int16_t G_B29_0 = 0;
	int16_t G_B34_0 = 0;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3(L_4, L_5, L_6, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				V_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				bool L_33;
				L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				V_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_41, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				bool L_46;
				L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
				V_7 = L_46;
				bool L_47 = V_7;
				if (!L_47)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_48 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_49;
				L_49 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_48, NULL);
				intptr_t L_50 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_51 = V_1;
				int8_t L_52;
				L_52 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_49, L_50, L_51, NULL);
				uint8_t L_53 = ((uint8_t)((int32_t)(uint8_t)L_52));
				RuntimeObject* L_54 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_53);
				V_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_54, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_56;
				L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_58;
				L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
				bool L_59;
				L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
				V_8 = L_59;
				bool L_60 = V_8;
				if (!L_60)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_61, NULL);
				intptr_t L_63 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_1;
				int8_t L_65;
				L_65 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_62, L_63, L_64, NULL);
				int8_t L_66 = L_65;
				RuntimeObject* L_67 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_66);
				V_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_69;
				L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_71;
				L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
				bool L_72;
				L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_74 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_75;
				L_75 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_74, NULL);
				intptr_t L_76 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_77 = V_1;
				int16_t L_78;
				L_78 = AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC(L_75, L_76, L_77, NULL);
				int16_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_79);
				V_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_84;
				L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
				bool L_85;
				L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
				V_10 = L_85;
				bool L_86 = V_10;
				if (!L_86)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
				intptr_t L_89 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_90 = V_1;
				int64_t L_91;
				L_91 = AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525(L_88, L_89, L_90, NULL);
				int64_t L_92 = L_91;
				RuntimeObject* L_93 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_92);
				V_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_93, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_103 = V_1;
				float L_104;
				L_104 = AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504(L_101, L_102, L_103, NULL);
				float L_105 = L_104;
				RuntimeObject* L_106 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_105);
				V_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_106, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				bool L_111;
				L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
				V_12 = L_111;
				bool L_112 = V_12;
				if (!L_112)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_114;
				L_114 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_113, NULL);
				intptr_t L_115 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_116 = V_1;
				double L_117;
				L_117 = AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE(L_114, L_115, L_116, NULL);
				double L_118 = L_117;
				RuntimeObject* L_119 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_118);
				V_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_119, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
				bool L_124;
				L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
				V_13 = L_124;
				bool L_125 = V_13;
				if (!L_125)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_126 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_127;
				L_127 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_126, NULL);
				intptr_t L_128 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_129 = V_1;
				Il2CppChar L_130;
				L_130 = AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3(L_127, L_128, L_129, NULL);
				Il2CppChar L_131 = L_130;
				RuntimeObject* L_132 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_131);
				V_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_132, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_134;
				L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_136;
				L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
				bool L_137;
				L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
				V_14 = L_137;
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_139 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_140;
				L_140 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_139, NULL);
				intptr_t L_141 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_142 = V_1;
				String_t* L_143;
				L_143 = AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699(L_140, L_141, L_142, NULL);
				V_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_143, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_147;
				L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
				bool L_148;
				L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
				V_15 = L_148;
				bool L_149 = V_15;
				if (!L_149)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_151;
				L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
				intptr_t L_152 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_153 = V_1;
				intptr_t L_154;
				L_154 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_151, L_152, L_153, NULL);
				V_16 = L_154;
				intptr_t L_155 = V_16;
				intptr_t L_156 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_157;
				L_157 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_155, L_156, NULL);
				if (L_157)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_158 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_159;
				L_159 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_158, NULL);
				G_B29_0 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_159, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int16_t));
				int16_t L_160 = V_17;
				G_B29_0 = L_160;
			}

IL_0340_1:
			{
				V_5 = G_B29_0;
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_162;
				L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				bool L_165;
				L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
				V_18 = L_165;
				bool L_166 = V_18;
				if (!L_166)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_168;
				L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
				intptr_t L_169 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_170 = V_1;
				intptr_t L_171;
				L_171 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_168, L_169, L_170, NULL);
				V_19 = L_171;
				intptr_t L_172 = V_19;
				intptr_t L_173 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_174;
				L_174 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_172, L_173, NULL);
				if (L_174)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_175 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_176;
				L_176 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_175, NULL);
				G_B34_0 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_176, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int16_t));
				int16_t L_177 = V_17;
				G_B34_0 = L_177;
			}

IL_03a1_1:
			{
				V_5 = G_B34_0;
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_179, L_181, NULL);
				V_20 = L_182;
				bool L_183 = V_20;
				if (!L_183)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_184 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_185;
				L_185 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_184, NULL);
				intptr_t L_186 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_187 = V_1;
				intptr_t L_188;
				L_188 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_185, L_186, L_187, NULL);
				V_21 = L_188;
				intptr_t L_189 = V_21;
				int16_t L_190;
				L_190 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m37AE925317BC8416FAF14FA6E8AB341EF2C1C804(L_189, il2cpp_rgctx_method(method->rgctx_data, 3));
				V_5 = L_190;
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_192;
				L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
				Type_t* L_193 = L_192;
				G_B38_0 = L_193;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_193)
				{
					G_B39_0 = L_193;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_194;
				L_194 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_194;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_195;
				L_195 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_196 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_196);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_196, L_195, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_196, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int16_t));
				int16_t L_197 = V_17;
				V_5 = L_197;
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		int16_t L_198 = V_5;
		return L_198;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	int32_t G_B29_0 = 0;
	int32_t G_B34_0 = 0;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D(L_4, L_5, L_6, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				bool L_33;
				L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_41, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				bool L_46;
				L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
				V_7 = L_46;
				bool L_47 = V_7;
				if (!L_47)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_48 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_49;
				L_49 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_48, NULL);
				intptr_t L_50 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_51 = V_1;
				int8_t L_52;
				L_52 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_49, L_50, L_51, NULL);
				uint8_t L_53 = ((uint8_t)((int32_t)(uint8_t)L_52));
				RuntimeObject* L_54 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_53);
				V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_54, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_56;
				L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_58;
				L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
				bool L_59;
				L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
				V_8 = L_59;
				bool L_60 = V_8;
				if (!L_60)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_61, NULL);
				intptr_t L_63 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_1;
				int8_t L_65;
				L_65 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_62, L_63, L_64, NULL);
				int8_t L_66 = L_65;
				RuntimeObject* L_67 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_66);
				V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_69;
				L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_71;
				L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
				bool L_72;
				L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_74 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_75;
				L_75 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_74, NULL);
				intptr_t L_76 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_77 = V_1;
				int16_t L_78;
				L_78 = AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC(L_75, L_76, L_77, NULL);
				int16_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_79);
				V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_84;
				L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
				bool L_85;
				L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
				V_10 = L_85;
				bool L_86 = V_10;
				if (!L_86)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
				intptr_t L_89 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_90 = V_1;
				int64_t L_91;
				L_91 = AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525(L_88, L_89, L_90, NULL);
				int64_t L_92 = L_91;
				RuntimeObject* L_93 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_92);
				V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_93, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_103 = V_1;
				float L_104;
				L_104 = AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504(L_101, L_102, L_103, NULL);
				float L_105 = L_104;
				RuntimeObject* L_106 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_105);
				V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_106, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				bool L_111;
				L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
				V_12 = L_111;
				bool L_112 = V_12;
				if (!L_112)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_114;
				L_114 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_113, NULL);
				intptr_t L_115 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_116 = V_1;
				double L_117;
				L_117 = AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE(L_114, L_115, L_116, NULL);
				double L_118 = L_117;
				RuntimeObject* L_119 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_118);
				V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_119, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
				bool L_124;
				L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
				V_13 = L_124;
				bool L_125 = V_13;
				if (!L_125)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_126 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_127;
				L_127 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_126, NULL);
				intptr_t L_128 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_129 = V_1;
				Il2CppChar L_130;
				L_130 = AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3(L_127, L_128, L_129, NULL);
				Il2CppChar L_131 = L_130;
				RuntimeObject* L_132 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_131);
				V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_132, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_134;
				L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_136;
				L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
				bool L_137;
				L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
				V_14 = L_137;
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_139 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_140;
				L_140 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_139, NULL);
				intptr_t L_141 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_142 = V_1;
				String_t* L_143;
				L_143 = AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699(L_140, L_141, L_142, NULL);
				V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_143, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_147;
				L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
				bool L_148;
				L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
				V_15 = L_148;
				bool L_149 = V_15;
				if (!L_149)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_151;
				L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
				intptr_t L_152 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_153 = V_1;
				intptr_t L_154;
				L_154 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_151, L_152, L_153, NULL);
				V_16 = L_154;
				intptr_t L_155 = V_16;
				intptr_t L_156 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_157;
				L_157 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_155, L_156, NULL);
				if (L_157)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_158 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_159;
				L_159 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_158, NULL);
				G_B29_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_159, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int32_t));
				int32_t L_160 = V_17;
				G_B29_0 = L_160;
			}

IL_0340_1:
			{
				V_5 = G_B29_0;
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_162;
				L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				bool L_165;
				L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
				V_18 = L_165;
				bool L_166 = V_18;
				if (!L_166)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_168;
				L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
				intptr_t L_169 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_170 = V_1;
				intptr_t L_171;
				L_171 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_168, L_169, L_170, NULL);
				V_19 = L_171;
				intptr_t L_172 = V_19;
				intptr_t L_173 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_174;
				L_174 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_172, L_173, NULL);
				if (L_174)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_175 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_176;
				L_176 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_175, NULL);
				G_B34_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_176, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int32_t));
				int32_t L_177 = V_17;
				G_B34_0 = L_177;
			}

IL_03a1_1:
			{
				V_5 = G_B34_0;
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_179, L_181, NULL);
				V_20 = L_182;
				bool L_183 = V_20;
				if (!L_183)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_184 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_185;
				L_185 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_184, NULL);
				intptr_t L_186 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_187 = V_1;
				intptr_t L_188;
				L_188 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_185, L_186, L_187, NULL);
				V_21 = L_188;
				intptr_t L_189 = V_21;
				int32_t L_190;
				L_190 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256(L_189, il2cpp_rgctx_method(method->rgctx_data, 3));
				V_5 = L_190;
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_192;
				L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
				Type_t* L_193 = L_192;
				G_B38_0 = L_193;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_193)
				{
					G_B39_0 = L_193;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_194;
				L_194 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_194;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_195;
				L_195 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_196 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_196);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_196, L_195, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_196, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int32_t));
				int32_t L_197 = V_17;
				V_5 = L_197;
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		int32_t L_198 = V_5;
		return L_198;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int64_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	int64_t V_17 = 0;
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	int64_t G_B29_0 = 0;
	int64_t G_B34_0 = 0;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175(L_4, L_5, L_6, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				V_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				bool L_33;
				L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				V_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_41, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				bool L_46;
				L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
				V_7 = L_46;
				bool L_47 = V_7;
				if (!L_47)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_48 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_49;
				L_49 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_48, NULL);
				intptr_t L_50 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_51 = V_1;
				int8_t L_52;
				L_52 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_49, L_50, L_51, NULL);
				uint8_t L_53 = ((uint8_t)((int32_t)(uint8_t)L_52));
				RuntimeObject* L_54 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_53);
				V_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_54, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_56;
				L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_58;
				L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
				bool L_59;
				L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
				V_8 = L_59;
				bool L_60 = V_8;
				if (!L_60)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_61, NULL);
				intptr_t L_63 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_1;
				int8_t L_65;
				L_65 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_62, L_63, L_64, NULL);
				int8_t L_66 = L_65;
				RuntimeObject* L_67 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_66);
				V_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_69;
				L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_71;
				L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
				bool L_72;
				L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_74 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_75;
				L_75 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_74, NULL);
				intptr_t L_76 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_77 = V_1;
				int16_t L_78;
				L_78 = AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC(L_75, L_76, L_77, NULL);
				int16_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_79);
				V_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_84;
				L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
				bool L_85;
				L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
				V_10 = L_85;
				bool L_86 = V_10;
				if (!L_86)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
				intptr_t L_89 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_90 = V_1;
				int64_t L_91;
				L_91 = AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525(L_88, L_89, L_90, NULL);
				int64_t L_92 = L_91;
				RuntimeObject* L_93 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_92);
				V_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_93, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_103 = V_1;
				float L_104;
				L_104 = AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504(L_101, L_102, L_103, NULL);
				float L_105 = L_104;
				RuntimeObject* L_106 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_105);
				V_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_106, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				bool L_111;
				L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
				V_12 = L_111;
				bool L_112 = V_12;
				if (!L_112)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_114;
				L_114 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_113, NULL);
				intptr_t L_115 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_116 = V_1;
				double L_117;
				L_117 = AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE(L_114, L_115, L_116, NULL);
				double L_118 = L_117;
				RuntimeObject* L_119 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_118);
				V_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_119, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
				bool L_124;
				L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
				V_13 = L_124;
				bool L_125 = V_13;
				if (!L_125)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_126 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_127;
				L_127 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_126, NULL);
				intptr_t L_128 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_129 = V_1;
				Il2CppChar L_130;
				L_130 = AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3(L_127, L_128, L_129, NULL);
				Il2CppChar L_131 = L_130;
				RuntimeObject* L_132 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_131);
				V_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_132, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_134;
				L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_136;
				L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
				bool L_137;
				L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
				V_14 = L_137;
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_139 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_140;
				L_140 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_139, NULL);
				intptr_t L_141 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_142 = V_1;
				String_t* L_143;
				L_143 = AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699(L_140, L_141, L_142, NULL);
				V_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_143, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_147;
				L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
				bool L_148;
				L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
				V_15 = L_148;
				bool L_149 = V_15;
				if (!L_149)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_151;
				L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
				intptr_t L_152 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_153 = V_1;
				intptr_t L_154;
				L_154 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_151, L_152, L_153, NULL);
				V_16 = L_154;
				intptr_t L_155 = V_16;
				intptr_t L_156 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_157;
				L_157 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_155, L_156, NULL);
				if (L_157)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_158 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_159;
				L_159 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_158, NULL);
				G_B29_0 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_159, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int64_t));
				int64_t L_160 = V_17;
				G_B29_0 = L_160;
			}

IL_0340_1:
			{
				V_5 = G_B29_0;
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_162;
				L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				bool L_165;
				L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
				V_18 = L_165;
				bool L_166 = V_18;
				if (!L_166)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_168;
				L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
				intptr_t L_169 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_170 = V_1;
				intptr_t L_171;
				L_171 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_168, L_169, L_170, NULL);
				V_19 = L_171;
				intptr_t L_172 = V_19;
				intptr_t L_173 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_174;
				L_174 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_172, L_173, NULL);
				if (L_174)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_175 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_176;
				L_176 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_175, NULL);
				G_B34_0 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_176, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int64_t));
				int64_t L_177 = V_17;
				G_B34_0 = L_177;
			}

IL_03a1_1:
			{
				V_5 = G_B34_0;
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_179, L_181, NULL);
				V_20 = L_182;
				bool L_183 = V_20;
				if (!L_183)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_184 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_185;
				L_185 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_184, NULL);
				intptr_t L_186 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_187 = V_1;
				intptr_t L_188;
				L_188 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_185, L_186, L_187, NULL);
				V_21 = L_188;
				intptr_t L_189 = V_21;
				int64_t L_190;
				L_190 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9(L_189, il2cpp_rgctx_method(method->rgctx_data, 3));
				V_5 = L_190;
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_192;
				L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
				Type_t* L_193 = L_192;
				G_B38_0 = L_193;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_193)
				{
					G_B39_0 = L_193;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_194;
				L_194 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_194;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_195;
				L_195 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_196 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_196);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_196, L_195, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_196, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int64_t));
				int64_t L_197 = V_17;
				V_5 = L_197;
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		int64_t L_198 = V_5;
		return L_198;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	RuntimeObject* V_17 = NULL;
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	RuntimeObject* G_B29_0 = NULL;
	RuntimeObject* G_B34_0 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_TisRuntimeObject_mB679693A70166CF53F085DA2B8A9D69CCD0E4F83(L_4, L_5, L_6, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				bool L_33;
				L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				bool L_46;
				L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
				V_7 = L_46;
				bool L_47 = V_7;
				if (!L_47)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_48 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_49;
				L_49 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_48, NULL);
				intptr_t L_50 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_51 = V_1;
				int8_t L_52;
				L_52 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_49, L_50, L_51, NULL);
				uint8_t L_53 = ((uint8_t)((int32_t)(uint8_t)L_52));
				RuntimeObject* L_54 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_53);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_54, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_56;
				L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_58;
				L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
				bool L_59;
				L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
				V_8 = L_59;
				bool L_60 = V_8;
				if (!L_60)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_61, NULL);
				intptr_t L_63 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_1;
				int8_t L_65;
				L_65 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_62, L_63, L_64, NULL);
				int8_t L_66 = L_65;
				RuntimeObject* L_67 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_66);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_69;
				L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_71;
				L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
				bool L_72;
				L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_74 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_75;
				L_75 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_74, NULL);
				intptr_t L_76 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_77 = V_1;
				int16_t L_78;
				L_78 = AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC(L_75, L_76, L_77, NULL);
				int16_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_79);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_84;
				L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
				bool L_85;
				L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
				V_10 = L_85;
				bool L_86 = V_10;
				if (!L_86)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
				intptr_t L_89 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_90 = V_1;
				int64_t L_91;
				L_91 = AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525(L_88, L_89, L_90, NULL);
				int64_t L_92 = L_91;
				RuntimeObject* L_93 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_92);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_93, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_103 = V_1;
				float L_104;
				L_104 = AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504(L_101, L_102, L_103, NULL);
				float L_105 = L_104;
				RuntimeObject* L_106 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_105);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_106, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				bool L_111;
				L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
				V_12 = L_111;
				bool L_112 = V_12;
				if (!L_112)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_114;
				L_114 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_113, NULL);
				intptr_t L_115 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_116 = V_1;
				double L_117;
				L_117 = AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE(L_114, L_115, L_116, NULL);
				double L_118 = L_117;
				RuntimeObject* L_119 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_118);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_119, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
				bool L_124;
				L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
				V_13 = L_124;
				bool L_125 = V_13;
				if (!L_125)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_126 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_127;
				L_127 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_126, NULL);
				intptr_t L_128 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_129 = V_1;
				Il2CppChar L_130;
				L_130 = AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3(L_127, L_128, L_129, NULL);
				Il2CppChar L_131 = L_130;
				RuntimeObject* L_132 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_131);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_132, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_134;
				L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_136;
				L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
				bool L_137;
				L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
				V_14 = L_137;
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_139 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_140;
				L_140 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_139, NULL);
				intptr_t L_141 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_142 = V_1;
				String_t* L_143;
				L_143 = AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699(L_140, L_141, L_142, NULL);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_143, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_147;
				L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
				bool L_148;
				L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
				V_15 = L_148;
				bool L_149 = V_15;
				if (!L_149)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_151;
				L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
				intptr_t L_152 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_153 = V_1;
				intptr_t L_154;
				L_154 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_151, L_152, L_153, NULL);
				V_16 = L_154;
				intptr_t L_155 = V_16;
				intptr_t L_156 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_157;
				L_157 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_155, L_156, NULL);
				if (L_157)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_158 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_159;
				L_159 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_158, NULL);
				G_B29_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_159, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(RuntimeObject*));
				RuntimeObject* L_160 = V_17;
				G_B29_0 = L_160;
			}

IL_0340_1:
			{
				V_5 = G_B29_0;
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_162;
				L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				bool L_165;
				L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
				V_18 = L_165;
				bool L_166 = V_18;
				if (!L_166)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_168;
				L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
				intptr_t L_169 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_170 = V_1;
				intptr_t L_171;
				L_171 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_168, L_169, L_170, NULL);
				V_19 = L_171;
				intptr_t L_172 = V_19;
				intptr_t L_173 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_174;
				L_174 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_172, L_173, NULL);
				if (L_174)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_175 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_176;
				L_176 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_175, NULL);
				G_B34_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_176, il2cpp_rgctx_data(method->rgctx_data, 2)));
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(RuntimeObject*));
				RuntimeObject* L_177 = V_17;
				G_B34_0 = L_177;
			}

IL_03a1_1:
			{
				V_5 = G_B34_0;
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_179, L_181, NULL);
				V_20 = L_182;
				bool L_183 = V_20;
				if (!L_183)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_184 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_185;
				L_185 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_184, NULL);
				intptr_t L_186 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_187 = V_1;
				intptr_t L_188;
				L_188 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_185, L_186, L_187, NULL);
				V_21 = L_188;
				intptr_t L_189 = V_21;
				RuntimeObject* L_190;
				L_190 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisRuntimeObject_m386BB855E09997335F74DDECCD92385FC16E4EB7(L_189, il2cpp_rgctx_method(method->rgctx_data, 3));
				V_5 = L_190;
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_192;
				L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
				Type_t* L_193 = L_192;
				G_B38_0 = L_193;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_193)
				{
					G_B39_0 = L_193;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_194;
				L_194 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_194;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_195;
				L_195 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_196 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_196);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_196, L_195, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_196, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisRuntimeObject_m6B809BA99521C27E9641C9A6C5C46A3385ED7B14_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(RuntimeObject*));
				RuntimeObject* L_197 = V_17;
				V_5 = L_197;
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		RuntimeObject* L_198 = V_5;
		return L_198;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.SByte>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int8_t V_5 = 0x0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	int8_t V_17 = 0x0;
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	int8_t G_B29_0 = 0x0;
	int8_t G_B34_0 = 0x0;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB(L_4, L_5, L_6, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				V_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				bool L_33;
				L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				V_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_41, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				bool L_46;
				L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
				V_7 = L_46;
				bool L_47 = V_7;
				if (!L_47)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_48 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_49;
				L_49 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_48, NULL);
				intptr_t L_50 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_51 = V_1;
				int8_t L_52;
				L_52 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_49, L_50, L_51, NULL);
				uint8_t L_53 = ((uint8_t)((int32_t)(uint8_t)L_52));
				RuntimeObject* L_54 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_53);
				V_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_54, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_56;
				L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_58;
				L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
				bool L_59;
				L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
				V_8 = L_59;
				bool L_60 = V_8;
				if (!L_60)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_61, NULL);
				intptr_t L_63 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_1;
				int8_t L_65;
				L_65 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_62, L_63, L_64, NULL);
				int8_t L_66 = L_65;
				RuntimeObject* L_67 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_66);
				V_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_69;
				L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_71;
				L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
				bool L_72;
				L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_74 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_75;
				L_75 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_74, NULL);
				intptr_t L_76 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_77 = V_1;
				int16_t L_78;
				L_78 = AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC(L_75, L_76, L_77, NULL);
				int16_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_79);
				V_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_84;
				L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
				bool L_85;
				L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
				V_10 = L_85;
				bool L_86 = V_10;
				if (!L_86)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
				intptr_t L_89 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_90 = V_1;
				int64_t L_91;
				L_91 = AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525(L_88, L_89, L_90, NULL);
				int64_t L_92 = L_91;
				RuntimeObject* L_93 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_92);
				V_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_93, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_103 = V_1;
				float L_104;
				L_104 = AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504(L_101, L_102, L_103, NULL);
				float L_105 = L_104;
				RuntimeObject* L_106 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_105);
				V_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_106, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				bool L_111;
				L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
				V_12 = L_111;
				bool L_112 = V_12;
				if (!L_112)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_114;
				L_114 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_113, NULL);
				intptr_t L_115 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_116 = V_1;
				double L_117;
				L_117 = AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE(L_114, L_115, L_116, NULL);
				double L_118 = L_117;
				RuntimeObject* L_119 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_118);
				V_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_119, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
				bool L_124;
				L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
				V_13 = L_124;
				bool L_125 = V_13;
				if (!L_125)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_126 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_127;
				L_127 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_126, NULL);
				intptr_t L_128 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_129 = V_1;
				Il2CppChar L_130;
				L_130 = AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3(L_127, L_128, L_129, NULL);
				Il2CppChar L_131 = L_130;
				RuntimeObject* L_132 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_131);
				V_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_132, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_134;
				L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_136;
				L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
				bool L_137;
				L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
				V_14 = L_137;
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_139 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_140;
				L_140 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_139, NULL);
				intptr_t L_141 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_142 = V_1;
				String_t* L_143;
				L_143 = AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699(L_140, L_141, L_142, NULL);
				V_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_143, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_147;
				L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
				bool L_148;
				L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
				V_15 = L_148;
				bool L_149 = V_15;
				if (!L_149)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_151;
				L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
				intptr_t L_152 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_153 = V_1;
				intptr_t L_154;
				L_154 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_151, L_152, L_153, NULL);
				V_16 = L_154;
				intptr_t L_155 = V_16;
				intptr_t L_156 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_157;
				L_157 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_155, L_156, NULL);
				if (L_157)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_158 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_159;
				L_159 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_158, NULL);
				G_B29_0 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_159, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int8_t));
				int8_t L_160 = V_17;
				G_B29_0 = L_160;
			}

IL_0340_1:
			{
				V_5 = G_B29_0;
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_162;
				L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				bool L_165;
				L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
				V_18 = L_165;
				bool L_166 = V_18;
				if (!L_166)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_168;
				L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
				intptr_t L_169 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_170 = V_1;
				intptr_t L_171;
				L_171 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_168, L_169, L_170, NULL);
				V_19 = L_171;
				intptr_t L_172 = V_19;
				intptr_t L_173 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_174;
				L_174 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_172, L_173, NULL);
				if (L_174)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_175 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_176;
				L_176 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_175, NULL);
				G_B34_0 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_176, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int8_t));
				int8_t L_177 = V_17;
				G_B34_0 = L_177;
			}

IL_03a1_1:
			{
				V_5 = G_B34_0;
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_179, L_181, NULL);
				V_20 = L_182;
				bool L_183 = V_20;
				if (!L_183)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_184 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_185;
				L_185 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_184, NULL);
				intptr_t L_186 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_187 = V_1;
				intptr_t L_188;
				L_188 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_185, L_186, L_187, NULL);
				V_21 = L_188;
				intptr_t L_189 = V_21;
				int8_t L_190;
				L_190 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m502D18176A3EEDA2AF299069FA9247064B7D8D51(L_189, il2cpp_rgctx_method(method->rgctx_data, 3));
				V_5 = L_190;
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_192;
				L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
				Type_t* L_193 = L_192;
				G_B38_0 = L_193;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_193)
				{
					G_B39_0 = L_193;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_194;
				L_194 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_194;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_195;
				L_195 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_196 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_196);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_196, L_195, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_196, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(int8_t));
				int8_t L_197 = V_17;
				V_5 = L_197;
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		int8_t L_198 = V_5;
		return L_198;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	float V_17 = 0.0f;
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	float G_B29_0 = 0.0f;
	float G_B34_0 = 0.0f;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C(L_4, L_5, L_6, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				V_5 = ((*(float*)((float*)(float*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				bool L_33;
				L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				V_5 = ((*(float*)((float*)(float*)UnBox(L_41, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				bool L_46;
				L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
				V_7 = L_46;
				bool L_47 = V_7;
				if (!L_47)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_48 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_49;
				L_49 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_48, NULL);
				intptr_t L_50 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_51 = V_1;
				int8_t L_52;
				L_52 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_49, L_50, L_51, NULL);
				uint8_t L_53 = ((uint8_t)((int32_t)(uint8_t)L_52));
				RuntimeObject* L_54 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_53);
				V_5 = ((*(float*)((float*)(float*)UnBox(L_54, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_56;
				L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_58;
				L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
				bool L_59;
				L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
				V_8 = L_59;
				bool L_60 = V_8;
				if (!L_60)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_61, NULL);
				intptr_t L_63 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_1;
				int8_t L_65;
				L_65 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_62, L_63, L_64, NULL);
				int8_t L_66 = L_65;
				RuntimeObject* L_67 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_66);
				V_5 = ((*(float*)((float*)(float*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_69;
				L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_71;
				L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
				bool L_72;
				L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_74 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_75;
				L_75 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_74, NULL);
				intptr_t L_76 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_77 = V_1;
				int16_t L_78;
				L_78 = AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC(L_75, L_76, L_77, NULL);
				int16_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_79);
				V_5 = ((*(float*)((float*)(float*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_84;
				L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
				bool L_85;
				L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
				V_10 = L_85;
				bool L_86 = V_10;
				if (!L_86)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
				intptr_t L_89 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_90 = V_1;
				int64_t L_91;
				L_91 = AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525(L_88, L_89, L_90, NULL);
				int64_t L_92 = L_91;
				RuntimeObject* L_93 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_92);
				V_5 = ((*(float*)((float*)(float*)UnBox(L_93, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_103 = V_1;
				float L_104;
				L_104 = AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504(L_101, L_102, L_103, NULL);
				float L_105 = L_104;
				RuntimeObject* L_106 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_105);
				V_5 = ((*(float*)((float*)(float*)UnBox(L_106, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				bool L_111;
				L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
				V_12 = L_111;
				bool L_112 = V_12;
				if (!L_112)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_114;
				L_114 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_113, NULL);
				intptr_t L_115 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_116 = V_1;
				double L_117;
				L_117 = AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE(L_114, L_115, L_116, NULL);
				double L_118 = L_117;
				RuntimeObject* L_119 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_118);
				V_5 = ((*(float*)((float*)(float*)UnBox(L_119, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
				bool L_124;
				L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
				V_13 = L_124;
				bool L_125 = V_13;
				if (!L_125)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_126 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_127;
				L_127 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_126, NULL);
				intptr_t L_128 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_129 = V_1;
				Il2CppChar L_130;
				L_130 = AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3(L_127, L_128, L_129, NULL);
				Il2CppChar L_131 = L_130;
				RuntimeObject* L_132 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_131);
				V_5 = ((*(float*)((float*)(float*)UnBox(L_132, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_134;
				L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_136;
				L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
				bool L_137;
				L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
				V_14 = L_137;
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_139 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_140;
				L_140 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_139, NULL);
				intptr_t L_141 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_142 = V_1;
				String_t* L_143;
				L_143 = AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699(L_140, L_141, L_142, NULL);
				V_5 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_143, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_147;
				L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
				bool L_148;
				L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
				V_15 = L_148;
				bool L_149 = V_15;
				if (!L_149)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_151;
				L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
				intptr_t L_152 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_153 = V_1;
				intptr_t L_154;
				L_154 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_151, L_152, L_153, NULL);
				V_16 = L_154;
				intptr_t L_155 = V_16;
				intptr_t L_156 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_157;
				L_157 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_155, L_156, NULL);
				if (L_157)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_158 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_159;
				L_159 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_158, NULL);
				G_B29_0 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_159, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(float));
				float L_160 = V_17;
				G_B29_0 = L_160;
			}

IL_0340_1:
			{
				V_5 = G_B29_0;
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_162;
				L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				bool L_165;
				L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
				V_18 = L_165;
				bool L_166 = V_18;
				if (!L_166)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_168;
				L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
				intptr_t L_169 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_170 = V_1;
				intptr_t L_171;
				L_171 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_168, L_169, L_170, NULL);
				V_19 = L_171;
				intptr_t L_172 = V_19;
				intptr_t L_173 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_174;
				L_174 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_172, L_173, NULL);
				if (L_174)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_175 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_176;
				L_176 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_175, NULL);
				G_B34_0 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_176, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(float));
				float L_177 = V_17;
				G_B34_0 = L_177;
			}

IL_03a1_1:
			{
				V_5 = G_B34_0;
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_179, L_181, NULL);
				V_20 = L_182;
				bool L_183 = V_20;
				if (!L_183)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_184 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_185;
				L_185 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_184, NULL);
				intptr_t L_186 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_187 = V_1;
				intptr_t L_188;
				L_188 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_185, L_186, L_187, NULL);
				V_21 = L_188;
				intptr_t L_189 = V_21;
				float L_190;
				L_190 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6191F97DB89FB7E398F8A3DF9E448A9DCD5F07EA(L_189, il2cpp_rgctx_method(method->rgctx_data, 3));
				V_5 = L_190;
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_192;
				L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
				Type_t* L_193 = L_192;
				G_B38_0 = L_193;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_193)
				{
					G_B39_0 = L_193;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_194;
				L_194 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_194;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_195;
				L_195 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_196 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_196);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_196, L_195, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_196, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(float));
				float L_197 = V_17;
				V_5 = L_197;
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		float L_198 = V_5;
		return L_198;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_mA1A866611778FF72A2067F7E30B32913C4EB4904_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ReturnType)
	const uint32_t SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// ReturnType
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	const Il2CppFullySharedGenericAny L_44 = L_29;
	const Il2CppFullySharedGenericAny L_59 = L_29;
	const Il2CppFullySharedGenericAny L_74 = L_29;
	const Il2CppFullySharedGenericAny L_89 = L_29;
	const Il2CppFullySharedGenericAny L_104 = L_29;
	const Il2CppFullySharedGenericAny L_119 = L_29;
	const Il2CppFullySharedGenericAny L_134 = L_29;
	const Il2CppFullySharedGenericAny L_149 = L_29;
	const Il2CppFullySharedGenericAny L_162 = L_29;
	const Il2CppFullySharedGenericAny L_180 = L_29;
	const Il2CppFullySharedGenericAny L_182 = L_29;
	const Il2CppFullySharedGenericAny L_199 = L_29;
	const Il2CppFullySharedGenericAny L_201 = L_29;
	const Il2CppFullySharedGenericAny L_214 = L_29;
	const Il2CppFullySharedGenericAny L_221 = L_29;
	const Il2CppFullySharedGenericAny L_222 = L_29;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	memset(V_5, 0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	Il2CppFullySharedGenericAny V_17 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	memset(V_17, 0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	Il2CppFullySharedGenericAny G_B29_0 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	memset(G_B29_0, 0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	Il2CppFullySharedGenericAny G_B34_0 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	memset(G_B34_0, 0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = InvokerFuncInvoker4< intptr_t, intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_4, L_5, L_6, (bool)0);
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallIntMethod_m88ECF62449F26B13AE4C2B7E8B3C0E503970782B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				void* L_30 = UnBox_Any(L_28, il2cpp_rgctx_data(method->rgctx_data, 2), L_29);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_30))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				bool L_35;
				L_35 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_32, L_34, NULL);
				V_6 = L_35;
				bool L_36 = V_6;
				if (!L_36)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_37 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_38;
				L_38 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_37, NULL);
				intptr_t L_39 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_40 = V_1;
				bool L_41;
				L_41 = AndroidJNISafe_CallBooleanMethod_m0C8E5B12826ACB3AA868FF52B22C57BA107A1DF5(L_38, L_39, L_40, NULL);
				bool L_42 = L_41;
				RuntimeObject* L_43 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_42);
				void* L_45 = UnBox_Any(L_43, il2cpp_rgctx_data(method->rgctx_data, 2), L_44);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_45))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_47;
				L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_49;
				L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
				bool L_50;
				L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
				V_7 = L_50;
				bool L_51 = V_7;
				if (!L_51)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_52 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_53;
				L_53 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_52, NULL);
				intptr_t L_54 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_55 = V_1;
				int8_t L_56;
				L_56 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_53, L_54, L_55, NULL);
				uint8_t L_57 = ((uint8_t)((int32_t)(uint8_t)L_56));
				RuntimeObject* L_58 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_57);
				void* L_60 = UnBox_Any(L_58, il2cpp_rgctx_data(method->rgctx_data, 2), L_59);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_60))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_62;
				L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_64;
				L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
				bool L_65;
				L_65 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_62, L_64, NULL);
				V_8 = L_65;
				bool L_66 = V_8;
				if (!L_66)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_67 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_68;
				L_68 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_67, NULL);
				intptr_t L_69 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_70 = V_1;
				int8_t L_71;
				L_71 = AndroidJNISafe_CallSByteMethod_m15A10302255F3A4207B663C0A97878C433233DDA(L_68, L_69, L_70, NULL);
				int8_t L_72 = L_71;
				RuntimeObject* L_73 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_72);
				void* L_75 = UnBox_Any(L_73, il2cpp_rgctx_data(method->rgctx_data, 2), L_74);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_75))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_77;
				L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_79;
				L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
				bool L_80;
				L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
				V_9 = L_80;
				bool L_81 = V_9;
				if (!L_81)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_82, NULL);
				intptr_t L_84 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_85 = V_1;
				int16_t L_86;
				L_86 = AndroidJNISafe_CallShortMethod_mB007DECD38E377B824B170DE90CDD9F65FDF8DFC(L_83, L_84, L_85, NULL);
				int16_t L_87 = L_86;
				RuntimeObject* L_88 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_87);
				void* L_90 = UnBox_Any(L_88, il2cpp_rgctx_data(method->rgctx_data, 2), L_89);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_90))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_92;
				L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_93 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_94;
				L_94 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_93, NULL);
				bool L_95;
				L_95 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_92, L_94, NULL);
				V_10 = L_95;
				bool L_96 = V_10;
				if (!L_96)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_97, NULL);
				intptr_t L_99 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_100 = V_1;
				int64_t L_101;
				L_101 = AndroidJNISafe_CallLongMethod_mE101DBF4C4E8832E2BB28F0471EA9A824CC10525(L_98, L_99, L_100, NULL);
				int64_t L_102 = L_101;
				RuntimeObject* L_103 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_102);
				void* L_105 = UnBox_Any(L_103, il2cpp_rgctx_data(method->rgctx_data, 2), L_104);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_105))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_107;
				L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_109;
				L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
				bool L_110;
				L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
				V_11 = L_110;
				bool L_111 = V_11;
				if (!L_111)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_112, NULL);
				intptr_t L_114 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_115 = V_1;
				float L_116;
				L_116 = AndroidJNISafe_CallFloatMethod_m1DFC594E3141D409B0F7341455FEE45E5C141504(L_113, L_114, L_115, NULL);
				float L_117 = L_116;
				RuntimeObject* L_118 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_117);
				void* L_120 = UnBox_Any(L_118, il2cpp_rgctx_data(method->rgctx_data, 2), L_119);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_120))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_122;
				L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				bool L_125;
				L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
				V_12 = L_125;
				bool L_126 = V_12;
				if (!L_126)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_127 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_128;
				L_128 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_127, NULL);
				intptr_t L_129 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_130 = V_1;
				double L_131;
				L_131 = AndroidJNISafe_CallDoubleMethod_mE26233E7C97901A772CAA39C02CDA51AEF0DFCFE(L_128, L_129, L_130, NULL);
				double L_132 = L_131;
				RuntimeObject* L_133 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_132);
				void* L_135 = UnBox_Any(L_133, il2cpp_rgctx_data(method->rgctx_data, 2), L_134);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_135))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				bool L_140;
				L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
				V_13 = L_140;
				bool L_141 = V_13;
				if (!L_141)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_142 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_143;
				L_143 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_142, NULL);
				intptr_t L_144 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_145 = V_1;
				Il2CppChar L_146;
				L_146 = AndroidJNISafe_CallCharMethod_mAA4D432267ED412D5F5D804B9038BC7D9B2DCDE3(L_143, L_144, L_145, NULL);
				Il2CppChar L_147 = L_146;
				RuntimeObject* L_148 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_147);
				void* L_150 = UnBox_Any(L_148, il2cpp_rgctx_data(method->rgctx_data, 2), L_149);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_150))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_152;
				L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_153 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_154;
				L_154 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_153, NULL);
				bool L_155;
				L_155 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_152, L_154, NULL);
				V_14 = L_155;
				bool L_156 = V_14;
				if (!L_156)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_157 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_158;
				L_158 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_157, NULL);
				intptr_t L_159 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_160 = V_1;
				String_t* L_161;
				L_161 = AndroidJNISafe_CallStringMethod_mF2975892926478EF6ACB9D62CCC0829A8BDD2699(L_158, L_159, L_160, NULL);
				void* L_163 = UnBox_Any((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 2), L_162);
				il2cpp_codegen_memcpy(V_5, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_163))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_167;
				L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
				bool L_168;
				L_168 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_165, L_167, NULL);
				V_15 = L_168;
				bool L_169 = V_15;
				if (!L_169)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_170 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_171;
				L_171 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_170, NULL);
				intptr_t L_172 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_173 = V_1;
				intptr_t L_174;
				L_174 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_171, L_172, L_173, NULL);
				V_16 = L_174;
				intptr_t L_175 = V_16;
				intptr_t L_176 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_177;
				L_177 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_175, L_176, NULL);
				if (L_177)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_178 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_179;
				L_179 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_178, NULL);
				void* L_181 = UnBox_Any((RuntimeObject*)L_179, il2cpp_rgctx_data(method->rgctx_data, 2), L_180);
				il2cpp_codegen_memcpy(G_B29_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_181))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(L_182, V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(G_B29_0, L_182, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
			}

IL_0340_1:
			{
				il2cpp_codegen_memcpy(V_5, G_B29_0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_184;
				L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_185 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_186;
				L_186 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_185, NULL);
				bool L_187;
				L_187 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_184, L_186, NULL);
				V_18 = L_187;
				bool L_188 = V_18;
				if (!L_188)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_189 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_190;
				L_190 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_189, NULL);
				intptr_t L_191 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_192 = V_1;
				intptr_t L_193;
				L_193 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_190, L_191, L_192, NULL);
				V_19 = L_193;
				intptr_t L_194 = V_19;
				intptr_t L_195 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_196;
				L_196 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_194, L_195, NULL);
				if (L_196)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_197 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_198;
				L_198 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_197, NULL);
				void* L_200 = UnBox_Any((RuntimeObject*)L_198, il2cpp_rgctx_data(method->rgctx_data, 2), L_199);
				il2cpp_codegen_memcpy(G_B34_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_200))), SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(L_201, V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(G_B34_0, L_201, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
			}

IL_03a1_1:
			{
				il2cpp_codegen_memcpy(V_5, G_B34_0, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_202 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_203;
				L_203 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_202, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_204 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_205;
				L_205 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_204, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_206;
				L_206 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_203, L_205, NULL);
				V_20 = L_206;
				bool L_207 = V_20;
				if (!L_207)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_208 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jobject_1;
				intptr_t L_209;
				L_209 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_208, NULL);
				intptr_t L_210 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_211 = V_1;
				intptr_t L_212;
				L_212 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_209, L_210, L_211, NULL);
				V_21 = L_212;
				intptr_t L_213 = V_21;
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_213, (Il2CppFullySharedGenericAny*)L_214);
				il2cpp_codegen_memcpy(V_5, L_214, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_215 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_216;
				L_216 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_215, NULL);
				Type_t* L_217 = L_216;
				G_B38_0 = L_217;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_217)
				{
					G_B39_0 = L_217;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_218;
				L_218 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_218;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_219;
				L_219 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_220 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_220);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_220, L_219, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_220, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_mA1A866611778FF72A2067F7E30B32913C4EB4904_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(L_221, V_17, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				il2cpp_codegen_memcpy(V_5, L_221, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		il2cpp_codegen_memcpy(L_222, V_5, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_222, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		return;
	}
}
// ReturnType UnityEngine.AndroidJavaObject::_CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	intptr_t V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	intptr_t V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool G_B29_0 = false;
	bool G_B34_0 = false;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		V_2 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___args1 = L_2;
	}

IL_0011:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		String_t* L_5 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args1;
		intptr_t L_7;
		L_7 = AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4(L_4, L_5, L_6, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9;
		L_9 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0421:
			{// begin finally (depth: 1)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_10, L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_13, NULL);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_02a9_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_17;
				L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				bool L_20;
				L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
				V_4 = L_20;
				bool L_21 = V_4;
				if (!L_21)
				{
					goto IL_0086_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_22 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_23;
				L_23 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_22, NULL);
				intptr_t L_24 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_25 = V_1;
				int32_t L_26;
				L_26 = AndroidJNISafe_CallStaticIntMethod_m558318BA8E7A0A7526E48FF7218876FB987F397B(L_23, L_24, L_25, NULL);
				int32_t L_27 = L_26;
				RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_28, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0086_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				bool L_33;
				L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
				V_6 = L_33;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00c8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_36;
				L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_35, NULL);
				intptr_t L_37 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_38 = V_1;
				bool L_39;
				L_39 = AndroidJNISafe_CallStaticBooleanMethod_mA65977CB0FC4E3759938FCBD7BA43330317E8A3D(L_36, L_37, L_38, NULL);
				bool L_40 = L_39;
				RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_41, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_00c8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				bool L_46;
				L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
				V_7 = L_46;
				bool L_47 = V_7;
				if (!L_47)
				{
					goto IL_0117_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_48 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_49;
				L_49 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_48, NULL);
				intptr_t L_50 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_51 = V_1;
				int8_t L_52;
				L_52 = AndroidJNISafe_CallStaticSByteMethod_m68A45FE3EEE495648B36902B51ECDB76385EE736(L_49, L_50, L_51, NULL);
				uint8_t L_53 = ((uint8_t)((int32_t)(uint8_t)L_52));
				RuntimeObject* L_54 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_53);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_54, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0117_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_56;
				L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				Type_t* L_58;
				L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
				bool L_59;
				L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
				V_8 = L_59;
				bool L_60 = V_8;
				if (!L_60)
				{
					goto IL_0159_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_61, NULL);
				intptr_t L_63 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_64 = V_1;
				int8_t L_65;
				L_65 = AndroidJNISafe_CallStaticSByteMethod_m68A45FE3EEE495648B36902B51ECDB76385EE736(L_62, L_63, L_64, NULL);
				int8_t L_66 = L_65;
				RuntimeObject* L_67 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_66);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0159_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_69;
				L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				Type_t* L_71;
				L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
				bool L_72;
				L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_019b_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_74 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_75;
				L_75 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_74, NULL);
				intptr_t L_76 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_77 = V_1;
				int16_t L_78;
				L_78 = AndroidJNISafe_CallStaticShortMethod_m47EFDF3473E6C4D6F61956725E6595A0B919589D(L_75, L_76, L_77, NULL);
				int16_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_79);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_80, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_019b_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_82;
				L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				Type_t* L_84;
				L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
				bool L_85;
				L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
				V_10 = L_85;
				bool L_86 = V_10;
				if (!L_86)
				{
					goto IL_01dd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_87, NULL);
				intptr_t L_89 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_90 = V_1;
				int64_t L_91;
				L_91 = AndroidJNISafe_CallStaticLongMethod_mE3487C989E9D5EFA0FB2356408B7FF40E61DBD12(L_88, L_89, L_90, NULL);
				int64_t L_92 = L_91;
				RuntimeObject* L_93 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_92);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_93, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_01dd_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_95;
				L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				Type_t* L_97;
				L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
				bool L_98;
				L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
				V_11 = L_98;
				bool L_99 = V_11;
				if (!L_99)
				{
					goto IL_021f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_100 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_101;
				L_101 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_100, NULL);
				intptr_t L_102 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_103 = V_1;
				float L_104;
				L_104 = AndroidJNISafe_CallStaticFloatMethod_m46EE9FEEEFCF68FA1A014C2E417454BA55206945(L_101, L_102, L_103, NULL);
				float L_105 = L_104;
				RuntimeObject* L_106 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_105);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_106, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_021f_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				bool L_111;
				L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
				V_12 = L_111;
				bool L_112 = V_12;
				if (!L_112)
				{
					goto IL_0261_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_113 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_114;
				L_114 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_113, NULL);
				intptr_t L_115 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_116 = V_1;
				double L_117;
				L_117 = AndroidJNISafe_CallStaticDoubleMethod_m0510A1F18E0ED9CE8CFA82C6B2A56DCD89814247(L_114, L_115, L_116, NULL);
				double L_118 = L_117;
				RuntimeObject* L_119 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_118);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_119, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_0261_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
				bool L_124;
				L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
				V_13 = L_124;
				bool L_125 = V_13;
				if (!L_125)
				{
					goto IL_02a3_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_126 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_127;
				L_127 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_126, NULL);
				intptr_t L_128 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_129 = V_1;
				Il2CppChar L_130;
				L_130 = AndroidJNISafe_CallStaticCharMethod_m12390A6D01F33879740A94195E445D7B3D4CD652(L_127, L_128, L_129, NULL);
				Il2CppChar L_131 = L_130;
				RuntimeObject* L_132 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_131);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox(L_132, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02a3_1:
			{
				goto IL_0413_1;
			}

IL_02a9_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_134;
				L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				Type_t* L_136;
				L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
				bool L_137;
				L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
				V_14 = L_137;
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_02e6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_139 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_140;
				L_140 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_139, NULL);
				intptr_t L_141 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_142 = V_1;
				String_t* L_143;
				L_143 = AndroidJNISafe_CallStaticStringMethod_m8BD92117111558CC00540B45437B4A90222B89BE(L_140, L_141, L_142, NULL);
				V_5 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_143, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_042c;
			}

IL_02e6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_145;
				L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
				Type_t* L_147;
				L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
				bool L_148;
				L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
				V_15 = L_148;
				bool L_149 = V_15;
				if (!L_149)
				{
					goto IL_0347_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_150 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_151;
				L_151 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_150, NULL);
				intptr_t L_152 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_153 = V_1;
				intptr_t L_154;
				L_154 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_151, L_152, L_153, NULL);
				V_16 = L_154;
				intptr_t L_155 = V_16;
				intptr_t L_156 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_157;
				L_157 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_155, L_156, NULL);
				if (L_157)
				{
					goto IL_0336_1;
				}
			}
			{
				intptr_t L_158 = V_16;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_159;
				L_159 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_158, NULL);
				G_B29_0 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_159, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_0340_1;
			}

IL_0336_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(bool));
				bool L_160 = V_17;
				G_B29_0 = L_160;
			}

IL_0340_1:
			{
				V_5 = G_B29_0;
				goto IL_042c;
			}

IL_0347_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_162;
				L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
				Type_t* L_164;
				L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
				bool L_165;
				L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
				V_18 = L_165;
				bool L_166 = V_18;
				if (!L_166)
				{
					goto IL_03a8_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_167 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_168;
				L_168 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_167, NULL);
				intptr_t L_169 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_170 = V_1;
				intptr_t L_171;
				L_171 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_168, L_169, L_170, NULL);
				V_19 = L_171;
				intptr_t L_172 = V_19;
				intptr_t L_173 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_174;
				L_174 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_172, L_173, NULL);
				if (L_174)
				{
					goto IL_0397_1;
				}
			}
			{
				intptr_t L_175 = V_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_176;
				L_176 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_175, NULL);
				G_B34_0 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_176, il2cpp_rgctx_data(method->rgctx_data, 2)))));
				goto IL_03a1_1;
			}

IL_0397_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(bool));
				bool L_177 = V_17;
				G_B34_0 = L_177;
			}

IL_03a1_1:
			{
				V_5 = G_B34_0;
				goto IL_042c;
			}

IL_03a8_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				Type_t* L_181;
				L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_179, L_181, NULL);
				V_20 = L_182;
				bool L_183 = V_20;
				if (!L_183)
				{
					goto IL_03e7_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_184 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)__this->___m_jclass_2;
				intptr_t L_185;
				L_185 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_184, NULL);
				intptr_t L_186 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_187 = V_1;
				intptr_t L_188;
				L_188 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_185, L_186, L_187, NULL);
				V_21 = L_188;
				intptr_t L_189 = V_21;
				bool L_190;
				L_190 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC408C8B80896737BA7DE6C18A904D2157E5FD364(L_189, il2cpp_rgctx_method(method->rgctx_data, 3));
				V_5 = L_190;
				goto IL_042c;
			}

IL_03e7_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_192;
				L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
				Type_t* L_193 = L_192;
				G_B38_0 = L_193;
				G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
				if (L_193)
				{
					G_B39_0 = L_193;
					G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03fe_1;
				}
			}
			{
				G_B40_0 = ((String_t*)(NULL));
				G_B40_1 = G_B38_1;
				goto IL_0403_1;
			}

IL_03fe_1:
			{
				NullCheck((RuntimeObject*)G_B39_0);
				String_t* L_194;
				L_194 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B39_0);
				G_B40_0 = L_194;
				G_B40_1 = G_B39_1;
			}

IL_0403_1:
			{
				String_t* L_195;
				L_195 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_196 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_196);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_196, L_195, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_196, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_RuntimeMethod_var)));
			}

IL_0413_1:
			{
				il2cpp_codegen_initobj((&V_17), sizeof(bool));
				bool L_197 = V_17;
				V_5 = L_197;
				goto IL_042c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_042c:
	{
		bool L_198 = V_5;
		return L_198;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E* AdaptivePerformanceManagerSettings_get_activeLoader_m437ADEEB204181146DAB13B27D6752C74CEACD6F_inline (AdaptivePerformanceManagerSettings_t825765630D775605D6E53BE60D90E50CCDDF30C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptivePerformanceManagerSettings_t825765630D775605D6E53BE60D90E50CCDDF30C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdaptivePerformanceLoader activeLoader { get { return s_ActiveLoader; } private set { s_ActiveLoader = value; } }
		AdaptivePerformanceLoader_tF12F9ABBB7711A0FDE47852B1F358EAD7664F54E* L_0 = ((AdaptivePerformanceManagerSettings_t825765630D775605D6E53BE60D90E50CCDDF30C2_StaticFields*)il2cpp_codegen_static_fields_for(AdaptivePerformanceManagerSettings_t825765630D775605D6E53BE60D90E50CCDDF30C2_il2cpp_TypeInfo_var))->___s_ActiveLoader_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* StreamedSequence_get_DataInfo_mD796975440F367881014804A5A13FBC55AC5CB90_inline (StreamedSequence_tA844313208643A44D9B474CD25498B05AFE56E25* __this, const RuntimeMethod* method) 
{
	{
		StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* L_0 = __this->___U3CDataInfoU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* StreamedSequenceInfo_get_ItemExpression_mB1816BFC065BAE1A5D1CCA9E106975D2A2E44663_inline (StreamedSequenceInfo_t96C25DD5337F04E0D61AE0DEB62F02280EB33378* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->___U3CItemExpressionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* AggregateFromSeedResultOperator_get_Func_m933A0F71F80031BA5592AD21D040F65710A9983F_inline (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, const RuntimeMethod* method) 
{
	{
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_0 = __this->____func_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* AggregateFromSeedResultOperator_get_OptionalResultSelector_m836241DBF2E335AC6317917ED00B4A23E9C1BF91_inline (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, const RuntimeMethod* method) 
{
	{
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_0 = __this->____resultSelector_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* AggregateFromSeedResultOperator_get_Seed_m310EBD5BBF50CF6EFA50F21CE59409F4CC61DF46_inline (AggregateFromSeedResultOperator_t5AEC3614A1C97B36D498F6AE1206690AECDEA588* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____seed_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* AggregateResultOperator_get_Func_m42D0F0BE64610B581B2BAD01D42FF1841F37084D_inline (AggregateResultOperator_t6F17C3EC0EC172B96B31A4210508090D6910D83E* __this, const RuntimeMethod* method) 
{
	{
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_0 = __this->____func_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* AllResultOperator_get_Predicate_m4848687F3C47B77647A4257FA16385268E562D22_inline (AllResultOperator_t65CDD249101BE553D69C2587B23F31A7AA617DF9* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____predicate_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
