﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>[]
struct EntryU5BU5D_t366284FEBCEA6B94DF56118C1904C4A8D963A770;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyCollection_t55AD67378C6CDA23EDE1113C33E4D879B949397D;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct ValueCollection_t3B653CB27091E18D7CF6A6CDF74B84D5ED7D987F;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_tE540F1E6B5100CCADA7BF84DA372569F7A0FB950;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct IEqualityComparer_1_t1F65F81D43D9715FABDFCA1C70B74FAB7EF7FF0E;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t358A375827DE759C632FEC77C83FEE87CCE55529;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Subsystem
struct Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF;
// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E;
// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13;
// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9;
// UnityEngine.XR.ARSubsystems.Promise`1/ImmediatePromise<System.Int32Enum>
struct ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF;
// UnityEngine.XR.ARSubsystems.Promise`1/ImmediatePromise<System.Object>
struct ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Object>
struct Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t2574091AF57F902BF504098AB113416E8D15186A;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3342B21D08DB470F1A14F4B1318C15B43E9B7D64;
IL2CPP_EXTERN_C String_t* _stringLiteral82A90AF1B031C38ED3A670A840145127A9847AC4;
IL2CPP_EXTERN_C String_t* _stringLiteral830CB8C252B57EFF127DE755CBF5A089999CEF61;
IL2CPP_EXTERN_C String_t* _stringLiteral86EB3EF4A80C553E3CF57C02680D2F68C1D5641F;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Awake_mC7D5B2CA8D1E90C5214A03C8F372C2F045A287DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Awake_mD4E9BB4AB7CCFB56C4B1B0529475C7F6C90839E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Awake_mE74D7D15F5EE5CB93D096FE4CA47D8C541C96454_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateGameObject_m0BB9D3FB8FBC3EF6EDDCDC383A3668A9C7E95E64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateGameObject_m35CEEE7E63CF3FF55EBACE3EC2A3176DC3751ABD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateGameObject_m681DD342079D292AAD9D7498ACD009D2BDB24EEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateTrackable_m784C3D792EBD41DF3A35B8F9808D9C1EB1EB77D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateTrackable_mE90729B6B4E8DCE72ED40B186473996AD6A4A786_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_CreateTrackable_mF294EF88541A9EDB3324257B3AB97081E3AF9577_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_DestroyTrackable_m5C77DDD122C825943130C2C446F6544082A075F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_DestroyTrackable_mA6474494ED47CBFE2012D28208C70CD244C3C3AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_DestroyTrackable_mD72CF9F11D33C1A4D448457C0C5B5C409F6C1DFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_GetTrackableName_m3A729E918B8EE0054C786CDE02ECF256277A5D6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_GetTrackableName_m80A43841E26C94988E274207DD5A22031B949BD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_GetTrackableName_mFC0AAEA10C78E5DE6AEE2F0D7C43FD71C7E975BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Update_m607CD536A884309BBDA0DFE3FAA1CA05F9CA7659_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Update_mCAA957D4837B34BC150341165DAEDBBAD2AF33EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackableManager_4_Update_mFCCE7C2A3D4569CD1E50995E00066A9A603D706E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemLifecycleManager_2_CreateSubsystem_m40BC7594101BBED8B07F752B1B0A3AD7F2971F13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemLifecycleManager_2_GetActiveSubsystemInstance_m111564030E10E4CDB60F6EEE4B42D93189398028_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47Generics11_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t366284FEBCEA6B94DF56118C1904C4A8D963A770* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t55AD67378C6CDA23EDE1113C33E4D879B949397D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3B653CB27091E18D7CF6A6CDF74B84D5ED7D987F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE, ___entries_1)); }
	inline EntryU5BU5D_t366284FEBCEA6B94DF56118C1904C4A8D963A770* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t366284FEBCEA6B94DF56118C1904C4A8D963A770** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t366284FEBCEA6B94DF56118C1904C4A8D963A770* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE, ___keys_7)); }
	inline KeyCollection_t55AD67378C6CDA23EDE1113C33E4D879B949397D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t55AD67378C6CDA23EDE1113C33E4D879B949397D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t55AD67378C6CDA23EDE1113C33E4D879B949397D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE, ___values_8)); }
	inline ValueCollection_t3B653CB27091E18D7CF6A6CDF74B84D5ED7D987F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3B653CB27091E18D7CF6A6CDF74B84D5ED7D987F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3B653CB27091E18D7CF6A6CDF74B84D5ED7D987F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Subsystem
struct  Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct  SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SubsystemDescriptor`1<System.Object>
struct  SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2  : public SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA
{
public:

public:
};


// UnityEngine.Subsystem`1<System.Object>
struct  Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>
struct  TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___m_Trackables_0;

public:
	inline static int32_t get_offset_of_m_Trackables_0() { return static_cast<int32_t>(offsetof(TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608, ___m_Trackables_0)); }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * get_m_Trackables_0() const { return ___m_Trackables_0; }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE ** get_address_of_m_Trackables_0() { return &___m_Trackables_0; }
	inline void set_m_Trackables_0(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * value)
	{
		___m_Trackables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<System.Object>
struct  Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	RuntimeObject * ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4, ___U3CresultU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA, ___key_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_key_0() const { return ___key_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>
struct  ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1  : public Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct  TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C  : public Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct  TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909  : public Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct  TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB  : public Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1  : public Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851  : public Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct  TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00  : public Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565, ___dictionary_0)); }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565, ___current_3)); }
	inline KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>
struct  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_SubsumedById_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Center_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_SubsumedById_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_SubsumedById_1() const { return ___m_SubsumedById_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_SubsumedById_1() { return &___m_SubsumedById_1; }
	inline void set_m_SubsumedById_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_SubsumedById_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Center_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Pose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Size_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Alignment_5)); }
	inline int32_t get_m_Alignment_5() const { return ___m_Alignment_5; }
	inline int32_t* get_address_of_m_Alignment_5() { return &___m_Alignment_5; }
	inline void set_m_Alignment_5(int32_t value)
	{
		___m_Alignment_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct  Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFace
struct  XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct  XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct  XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_3;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_4;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_5;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_SourceImageId_1)); }
	inline Guid_t  get_m_SourceImageId_1() const { return ___m_SourceImageId_1; }
	inline Guid_t * get_address_of_m_SourceImageId_1() { return &___m_SourceImageId_1; }
	inline void set_m_SourceImageId_1(Guid_t  value)
	{
		___m_SourceImageId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Size_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Size_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_3() const { return ___m_Size_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_3() { return &___m_Size_3; }
	inline void set_m_Size_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_3 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_TrackingState_4)); }
	inline int32_t get_m_TrackingState_4() const { return ___m_TrackingState_4; }
	inline int32_t* get_address_of_m_TrackingState_4() { return &___m_TrackingState_4; }
	inline void set_m_TrackingState_4(int32_t value)
	{
		___m_TrackingState_4 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_NativePtr_5)); }
	inline intptr_t get_m_NativePtr_5() const { return ___m_NativePtr_5; }
	inline intptr_t* get_address_of_m_NativePtr_5() { return &___m_NativePtr_5; }
	inline void set_m_NativePtr_5(intptr_t value)
	{
		___m_NativePtr_5 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>
struct  Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A, ___m_Array_0)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD, ___m_Array_0)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E, ___m_Array_0)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76, ___m_Array_0)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>
struct  Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED 
{
public:
	// System.Collections.Generic.Dictionary`2_Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator::m_Enumerator
	Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED, ___m_Enumerator_0)); }
	inline Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565  value)
	{
		___m_Enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Enumerator_0))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>
struct  ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF  : public Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Added_1)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Updated_2)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Added_1)); }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Updated_2)); }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>
struct  TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6, ___m_Added_1)); }
	inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6, ___m_Updated_2)); }
	inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Added_1)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Updated_2)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Added_1)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Updated_2)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Added_1)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Updated_2)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct  XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Scale_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Size_3;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___m_TextureDescriptor_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Scale_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Scale_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Scale_1() const { return ___m_Scale_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Scale_1() { return &___m_Scale_1; }
	inline void set_m_Scale_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Scale_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Size_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Size_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Size_3() const { return ___m_Size_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Size_3() { return &___m_Size_3; }
	inline void set_m_Size_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Size_3 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TextureDescriptor_4)); }
	inline XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  get_m_TextureDescriptor_4() const { return ___m_TextureDescriptor_4; }
	inline XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * get_address_of_m_TextureDescriptor_4() { return &___m_TextureDescriptor_4; }
	inline void set_m_TextureDescriptor_4(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  value)
	{
		___m_TextureDescriptor_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};


// UnityEngine.XR.Management.XRGeneralSettings
struct  XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_XRManager_8)); }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};

struct XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct  XRLoader_t2574091AF57F902BF504098AB113416E8D15186A  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct  XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_tE540F1E6B5100CCADA7BF84DA372569F7A0FB950 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_Loaders_8)); }
	inline List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_tE540F1E6B5100CCADA7BF84DA372569F7A0FB950 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_tE540F1E6B5100CCADA7BF84DA372569F7A0FB950 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_tE540F1E6B5100CCADA7BF84DA372569F7A0FB950 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_t2574091AF57F902BF504098AB113416E8D15186A ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CtrackablesParentU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_ContentOffsetGameObject_6;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF, ___m_Camera_4)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackablesParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF, ___U3CtrackablesParentU3Ek__BackingField_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CtrackablesParentU3Ek__BackingField_5() const { return ___U3CtrackablesParentU3Ek__BackingField_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CtrackablesParentU3Ek__BackingField_5() { return &___U3CtrackablesParentU3Ek__BackingField_5; }
	inline void set_U3CtrackablesParentU3Ek__BackingField_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CtrackablesParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackablesParentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentOffsetGameObject_6() { return static_cast<int32_t>(offsetof(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF, ___m_ContentOffsetGameObject_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_ContentOffsetGameObject_6() const { return ___m_ContentOffsetGameObject_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_ContentOffsetGameObject_6() { return &___m_ContentOffsetGameObject_6; }
	inline void set_m_ContentOffsetGameObject_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_ContentOffsetGameObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContentOffsetGameObject_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct  ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct  ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct  ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct  ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct  SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::m_CleanupSubsystemOnDestroy
	bool ___m_CleanupSubsystemOnDestroy_5;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CleanupSubsystemOnDestroy_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9, ___m_CleanupSubsystemOnDestroy_5)); }
	inline bool get_m_CleanupSubsystemOnDestroy_5() const { return ___m_CleanupSubsystemOnDestroy_5; }
	inline bool* get_address_of_m_CleanupSubsystemOnDestroy_5() { return &___m_CleanupSubsystemOnDestroy_5; }
	inline void set_m_CleanupSubsystemOnDestroy_5(bool value)
	{
		___m_CleanupSubsystemOnDestroy_5 = value;
	}
};

struct SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemDescriptors
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_SubsystemDescriptors_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields, ___s_SubsystemDescriptors_6)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_SubsystemDescriptors_6() const { return ___s_SubsystemDescriptors_6; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_SubsystemDescriptors_6() { return &___s_SubsystemDescriptors_6; }
	inline void set_s_SubsystemDescriptors_6(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_SubsystemDescriptors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E  : public SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4::<sessionOrigin>k__BackingField
	ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___U3CsessionOriginU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_Trackables
	Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___m_Trackables_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_PendingAdds
	Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___m_PendingAdds_9;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E, ___U3CsessionOriginU3Ek__BackingField_7)); }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * get_U3CsessionOriginU3Ek__BackingField_7() const { return ___U3CsessionOriginU3Ek__BackingField_7; }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF ** get_address_of_U3CsessionOriginU3Ek__BackingField_7() { return &___U3CsessionOriginU3Ek__BackingField_7; }
	inline void set_U3CsessionOriginU3Ek__BackingField_7(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * value)
	{
		___U3CsessionOriginU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E, ___m_Trackables_8)); }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * get_m_Trackables_8() const { return ___m_Trackables_8; }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE ** get_address_of_m_Trackables_8() { return &___m_Trackables_8; }
	inline void set_m_Trackables_8(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * value)
	{
		___m_Trackables_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E, ___m_PendingAdds_9)); }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * get_m_PendingAdds_9() const { return ___m_PendingAdds_9; }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE ** get_address_of_m_PendingAdds_9() { return &___m_PendingAdds_9; }
	inline void set_m_PendingAdds_9(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * value)
	{
		___m_PendingAdds_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_9), (void*)value);
	}
};

struct ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields
{
public:
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Added
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Added_10;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Updated
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Updated_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Removed
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Removed_12;

public:
	inline static int32_t get_offset_of_s_Added_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields, ___s_Added_10)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Added_10() const { return ___s_Added_10; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Added_10() { return &___s_Added_10; }
	inline void set_s_Added_10(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Added_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields, ___s_Updated_11)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Updated_11() const { return ___s_Updated_11; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Updated_11() { return &___s_Updated_11; }
	inline void set_s_Updated_11(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Updated_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields, ___s_Removed_12)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Removed_12() const { return ___s_Removed_12; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Removed_12() { return &___s_Removed_12; }
	inline void set_s_Removed_12(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Removed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_12), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13  : public SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4::<sessionOrigin>k__BackingField
	ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___U3CsessionOriginU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_Trackables
	Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___m_Trackables_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_PendingAdds
	Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___m_PendingAdds_9;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13, ___U3CsessionOriginU3Ek__BackingField_7)); }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * get_U3CsessionOriginU3Ek__BackingField_7() const { return ___U3CsessionOriginU3Ek__BackingField_7; }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF ** get_address_of_U3CsessionOriginU3Ek__BackingField_7() { return &___U3CsessionOriginU3Ek__BackingField_7; }
	inline void set_U3CsessionOriginU3Ek__BackingField_7(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * value)
	{
		___U3CsessionOriginU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13, ___m_Trackables_8)); }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * get_m_Trackables_8() const { return ___m_Trackables_8; }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE ** get_address_of_m_Trackables_8() { return &___m_Trackables_8; }
	inline void set_m_Trackables_8(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * value)
	{
		___m_Trackables_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13, ___m_PendingAdds_9)); }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * get_m_PendingAdds_9() const { return ___m_PendingAdds_9; }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE ** get_address_of_m_PendingAdds_9() { return &___m_PendingAdds_9; }
	inline void set_m_PendingAdds_9(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * value)
	{
		___m_PendingAdds_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_9), (void*)value);
	}
};

struct ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields
{
public:
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Added
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Added_10;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Updated
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Updated_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Removed
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Removed_12;

public:
	inline static int32_t get_offset_of_s_Added_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields, ___s_Added_10)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Added_10() const { return ___s_Added_10; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Added_10() { return &___s_Added_10; }
	inline void set_s_Added_10(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Added_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields, ___s_Updated_11)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Updated_11() const { return ___s_Updated_11; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Updated_11() { return &___s_Updated_11; }
	inline void set_s_Updated_11(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Updated_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields, ___s_Removed_12)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Removed_12() const { return ___s_Removed_12; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Removed_12() { return &___s_Removed_12; }
	inline void set_s_Removed_12(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Removed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_12), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct  ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436  : public SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4::<sessionOrigin>k__BackingField
	ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___U3CsessionOriginU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_Trackables
	Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___m_Trackables_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_PendingAdds
	Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___m_PendingAdds_9;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436, ___U3CsessionOriginU3Ek__BackingField_7)); }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * get_U3CsessionOriginU3Ek__BackingField_7() const { return ___U3CsessionOriginU3Ek__BackingField_7; }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF ** get_address_of_U3CsessionOriginU3Ek__BackingField_7() { return &___U3CsessionOriginU3Ek__BackingField_7; }
	inline void set_U3CsessionOriginU3Ek__BackingField_7(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * value)
	{
		___U3CsessionOriginU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436, ___m_Trackables_8)); }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * get_m_Trackables_8() const { return ___m_Trackables_8; }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE ** get_address_of_m_Trackables_8() { return &___m_Trackables_8; }
	inline void set_m_Trackables_8(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * value)
	{
		___m_Trackables_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436, ___m_PendingAdds_9)); }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * get_m_PendingAdds_9() const { return ___m_PendingAdds_9; }
	inline Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE ** get_address_of_m_PendingAdds_9() { return &___m_PendingAdds_9; }
	inline void set_m_PendingAdds_9(Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * value)
	{
		___m_PendingAdds_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_9), (void*)value);
	}
};

struct ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields
{
public:
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Added
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Added_10;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Updated
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Updated_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Removed
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_Removed_12;

public:
	inline static int32_t get_offset_of_s_Added_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields, ___s_Added_10)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Added_10() const { return ___s_Added_10; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Added_10() { return &___s_Added_10; }
	inline void set_s_Added_10(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Added_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields, ___s_Updated_11)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Updated_11() const { return ___s_Updated_11; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Updated_11() { return &___s_Updated_11; }
	inline void set_s_Updated_11(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Updated_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields, ___s_Removed_12)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_Removed_12() const { return ___s_Removed_12; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_Removed_12() { return &___s_Removed_12; }
	inline void set_s_Removed_12(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_Removed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_12), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___trackables0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  NativeArray_1_GetEnumerator_m2C26DDBD2232F1DC6F216C47B66A5CCEC71C8292_gshared (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  Enumerator_get_Current_mAAA11BD869C8818266133A03BEC94087AB76BB57_gshared (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPointCloud>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD818C7168685197B0033FF034038DE1441498637_gshared (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_gshared (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_gshared (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  NativeArray_1_GetEnumerator_m0AE193D90C66BD2CB22C49D77323F1BD7775FBF9_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  Enumerator_get_Current_m1E16327F75D3A7E6496D252BD730CE3B55858FE7_gshared (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferencePoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m345699420F154E8E5508CE0A44444F14EFD566B2_gshared (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76  NativeArray_1_GetEnumerator_m10A5016AB48E4AE47C995EA8FC33A4152C105F61_gshared (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  Enumerator_get_Current_mDA485C1222EA6776DA7CB0BFF0DD169DB5CB8E21_gshared (Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRTrackedImage>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7A49AD4924ECF5F29DAB0298CCBB8171B5CB43DE_gshared (Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___trackables0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m890B8F901F145198465113DD42AE25E14C70CDCE_gshared (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA  Enumerator_get_Current_m38C9C9D29140B117ED566DED6347FB094D64B8DC_gshared_inline (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m50EBF22326CE6515205823F99977C50D1FCD0A19_gshared_inline (KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA * __this, const RuntimeMethod* method);
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mDD09D00434936641131DA87032FE91597056CE77_gshared (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method);
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.TrackableId>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___nativeArray0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762_gshared (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mB40809DC629860F868E59D49C1A217628077DED5_gshared (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m343FC4D068AE0BA3141FDF70567F8BD2A752FF2D_gshared (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B_gshared (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A_gshared (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
inline void TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___trackables0, const RuntimeMethod* method)
{
	((  void (*) (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *, Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, const RuntimeMethod*))TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_gshared)(__this, ___trackables0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::GetEnumerator()
inline Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  NativeArray_1_GetEnumerator_m2C26DDBD2232F1DC6F216C47B66A5CCEC71C8292 (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m2C26DDBD2232F1DC6F216C47B66A5CCEC71C8292_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_Current()
inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  Enumerator_get_Current_mAAA11BD869C8818266133A03BEC94087AB76BB57 (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD * __this, const RuntimeMethod* method)
{
	return ((  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  (*) (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *, const RuntimeMethod*))Enumerator_get_Current_mAAA11BD869C8818266133A03BEC94087AB76BB57_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRPointCloud>::MoveNext()
inline bool Enumerator_MoveNext_mD818C7168685197B0033FF034038DE1441498637 (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *, const RuntimeMethod*))Enumerator_MoveNext_mD818C7168685197B0033FF034038DE1441498637_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::GetEnumerator()
inline Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::get_Current()
inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A * __this, const RuntimeMethod* method)
{
	return ((  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  (*) (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *, const RuntimeMethod*))Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::MoveNext()
inline bool Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *, const RuntimeMethod*))Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34 (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::get_trackableId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRPointCloud_get_trackableId_mA394197EAD026665FC02A1118CBBB46FF6873EF1_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::GetEnumerator()
inline Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  NativeArray_1_GetEnumerator_m0AE193D90C66BD2CB22C49D77323F1BD7775FBF9 (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m0AE193D90C66BD2CB22C49D77323F1BD7775FBF9_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_Current()
inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  Enumerator_get_Current_m1E16327F75D3A7E6496D252BD730CE3B55858FE7 (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E * __this, const RuntimeMethod* method)
{
	return ((  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  (*) (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *, const RuntimeMethod*))Enumerator_get_Current_m1E16327F75D3A7E6496D252BD730CE3B55858FE7_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferencePoint>::MoveNext()
inline bool Enumerator_MoveNext_m345699420F154E8E5508CE0A44444F14EFD566B2 (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *, const RuntimeMethod*))Enumerator_MoveNext_m345699420F154E8E5508CE0A44444F14EFD566B2_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::get_trackableId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::GetEnumerator()
inline Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76  NativeArray_1_GetEnumerator_m10A5016AB48E4AE47C995EA8FC33A4152C105F61 (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76  (*) (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m10A5016AB48E4AE47C995EA8FC33A4152C105F61_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_Current()
inline XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  Enumerator_get_Current_mDA485C1222EA6776DA7CB0BFF0DD169DB5CB8E21 (Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 * __this, const RuntimeMethod* method)
{
	return ((  XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  (*) (Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 *, const RuntimeMethod*))Enumerator_get_Current_mDA485C1222EA6776DA7CB0BFF0DD169DB5CB8E21_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRTrackedImage>::MoveNext()
inline bool Enumerator_MoveNext_m7A49AD4924ECF5F29DAB0298CCBB8171B5CB43DE (Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 *, const RuntimeMethod*))Enumerator_MoveNext_m7A49AD4924ECF5F29DAB0298CCBB8171B5CB43DE_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<!0> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::get_trackableId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRTrackedImage_get_trackableId_m6EB6DBACC95E5EE2AFEE3CE421F4C123F32E9CB8_inline (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::get_trackableId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XREnvironmentProbe_get_trackableId_m2F7F8DCE954C099E60807742B6A4B27DA2F30085_inline (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::get_trackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XREnvironmentProbe_get_trackingState_m48BAAE58BF028382D00D5F49BA1F6023E53B0AF9_inline (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XREnvironmentProbe_get_pose_m2CF6BF7E554B1225E99947B620D2C029499E7996_inline (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::get_trackableId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRFace_get_trackableId_mC7AA3B622C6B16A9E8B5A3BEA524C7ED54A6188D_inline (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::get_trackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRFace_get_trackingState_m29CA0D89354ACC65EF8A18C09201BCBB3F732E3B_inline (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRFace_get_pose_m3792AF11CBB24361529B7291ED46B9DD2970AC54_inline (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::get_trackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRPointCloud_get_trackingState_m0CE633649849B59E4AEA7875F62F0B34CA61FC96_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRPointCloud_get_pose_m09C2DF1AD7F1220B547BD2EBCCA6E35F85A87EB0_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::get_trackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRReferencePoint_get_trackingState_mBA0DB4050B734039D22D0ECF69CD6E8896DF52B8_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::get_trackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRTrackedImage_get_trackingState_mA7177B042E8F9F9B584582970BC5FF0377CE94DB_inline (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::get_pose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRTrackedImage_get_pose_m0566E087CA2DC99DF749E80277510C61DCF13186_inline (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String UnityEngine.SubsystemDescriptor::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SubsystemDescriptor_get_id_m3C86DB10ED367BA8CCDEB1B82EA6259712BF3F4B_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline (XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_Destroy_m1D65C2E3B540A9EC80E14BF0C7A2BE8CDCF887A4 (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
inline void Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___trackables0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *, Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, const RuntimeMethod*))Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_gshared)(__this, ___trackables0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m890B8F901F145198465113DD42AE25E14C70CDCE (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *, const RuntimeMethod*))Enumerator_MoveNext_m890B8F901F145198465113DD42AE25E14C70CDCE_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *, const RuntimeMethod*))Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Current()
inline KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA  Enumerator_get_Current_m38C9C9D29140B117ED566DED6347FB094D64B8DC_inline (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA  (*) (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *, const RuntimeMethod*))Enumerator_get_Current_m38C9C9D29140B117ED566DED6347FB094D64B8DC_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m50EBF22326CE6515205823F99977C50D1FCD0A19_inline (KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA *, const RuntimeMethod*))KeyValuePair_2_get_Value_m50EBF22326CE6515205823F99977C50D1FCD0A19_gshared_inline)(__this, method);
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *, const RuntimeMethod*))Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Dispose()
inline void Enumerator_Dispose_mDD09D00434936641131DA87032FE91597056CE77 (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *, const RuntimeMethod*))Enumerator_Dispose_mDD09D00434936641131DA87032FE91597056CE77_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1 (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *, const RuntimeMethod*))Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
inline Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02 (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  (*) (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *, const RuntimeMethod*))TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
inline int32_t TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *, const RuntimeMethod*))TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m62266FD7195B82ED3C3005991CDDA4C0C655F48C (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
inline RuntimeObject * TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667 (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_gshared)(__this, ___trackableId0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
inline bool TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1 (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_gshared)(__this, ___trackableId0, ___trackable1, method);
}
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5 (CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.TrackableId>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C_gshared)(___nativeArray0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202 (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, void*, int32_t, void*, int32_t, void*, int32_t, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
inline void NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762 (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *, const RuntimeMethod*))NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
inline void NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, const RuntimeMethod*))NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
inline void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_added()
inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, const RuntimeMethod*))TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_updated()
inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, const RuntimeMethod*))TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, void*, int32_t, void*, int32_t, void*, int32_t, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
inline void NativeArray_1_Dispose_mB40809DC629860F868E59D49C1A217628077DED5 (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *, const RuntimeMethod*))NativeArray_1_Dispose_mB40809DC629860F868E59D49C1A217628077DED5_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
inline void TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, const RuntimeMethod*))TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
inline NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, const RuntimeMethod*))TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, void*, int32_t, void*, int32_t, void*, int32_t, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
inline void NativeArray_1_Dispose_m343FC4D068AE0BA3141FDF70567F8BD2A752FF2D (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *, const RuntimeMethod*))NativeArray_1_Dispose_m343FC4D068AE0BA3141FDF70567F8BD2A752FF2D_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
inline void TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6 (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90 (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, void*, int32_t, void*, int32_t, void*, int32_t, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
inline void NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *, const RuntimeMethod*))NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
inline void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834 (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, void*, int32_t, void*, int32_t, void*, int32_t, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *, const RuntimeMethod*))NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631 (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, void*, int32_t, void*, int32_t, void*, int32_t, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
inline void NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *, const RuntimeMethod*))NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
inline void TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702 (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  ARTrackableManager_4_get_trackables_mEBE20ABFD56D97C275BF603BDDD66CBBF7BAA874_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	{
		// return new TrackableCollection<TTrackable>(m_Trackables);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF((&L_1), (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 )L_1;
	}
}
// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_sessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ARTrackableManager_4_get_sessionOrigin_m892201565A27DF3560D50CE75D03430240ADB5B5_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	{
		// protected ARSessionOrigin sessionOrigin { get; private set; }
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)__this->get_U3CsessionOriginU3Ek__BackingField_7();
		return (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::set_sessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_set_sessionOrigin_m9B5A1BA5BEC958947F00B0EEFBDC2F8C1D4CB36D_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___value0, const RuntimeMethod* method)
{
	{
		// protected ARSessionOrigin sessionOrigin { get; private set; }
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = ___value0;
		__this->set_U3CsessionOriginU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::GetPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_GetPrefab_m2AF25399D2CC10D0046342A934C2176D74D3A0A1_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Awake_mD4E9BB4AB7CCFB56C4B1B0529475C7F6C90839E1_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Awake_mD4E9BB4AB7CCFB56C4B1B0529475C7F6C90839E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Trackables = new Dictionary<TrackableId, TTrackable>();
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Trackables_8(L_0);
		// m_PendingAdds = new Dictionary<TrackableId, TTrackable>();
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_1 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_PendingAdds_9(L_1);
		// sessionOrigin = GetComponent<ARSessionOrigin>();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_2 = Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17_RuntimeMethod_var);
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		((  void (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Update_mCAA957D4837B34BC150341165DAEDBBAD2AF33EB_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Update_mCAA957D4837B34BC150341165DAEDBBAD2AF33EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject * V_8 = NULL;
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (subsystem == null)
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// using (var changes = subsystem.GetChanges(Allocator.Temp))
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1 *)L_1);
		TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  L_2 = VirtFuncInvoker1< TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB , int32_t >::Invoke(9 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::GetChanges(Unity.Collections.Allocator) */, (TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1 *)L_1, (int32_t)2);
		V_0 = (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB )L_2;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			// ClearAndSetCapacity(s_Added, changes.added.Length);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
			NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_4 = TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_4;
			int32_t L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			// foreach (var added in changes.added)
			NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_6 = TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_6;
			Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  L_7 = NativeArray_1_GetEnumerator_m2C26DDBD2232F1DC6F216C47B66A5CCEC71C8292((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD )L_7;
		}

IL_0049:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0064;
			}

IL_004b:
			{
				// foreach (var added in changes.added)
				XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_8 = Enumerator_get_Current_mAAA11BD869C8818266133A03BEC94087AB76BB57((Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_3 = (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_8;
				// s_Added.Add(CreateOrUpdateTrackable(added));
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
				XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_10 = V_3;
				NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
				RuntimeObject * L_11 = ((  RuntimeObject * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_0064:
			{
				// foreach (var added in changes.added)
				bool L_12 = Enumerator_MoveNext_mD818C7168685197B0033FF034038DE1441498637((Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_12)
				{
					goto IL_004b;
				}
			}

IL_006d:
			{
				IL2CPP_LEAVE(0x7D, FINALLY_006f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006f;
		}

FINALLY_006f:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD > L_13(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__119 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__119.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__119.method);
			V_2 = L_13.m_Value;
			IL2CPP_END_FINALLY(111)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(111)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x7D, IL_007d)
		}

IL_007d:
		{
			// ClearAndSetCapacity(s_Updated, changes.updated.Length);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
			NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_15 = TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_15;
			int32_t L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			// foreach (var updated in changes.updated)
			NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_17 = TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_17;
			Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD  L_18 = NativeArray_1_GetEnumerator_m2C26DDBD2232F1DC6F216C47B66A5CCEC71C8292((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD )L_18;
		}

IL_00a6:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00c3;
			}

IL_00a8:
			{
				// foreach (var updated in changes.updated)
				XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_19 = Enumerator_get_Current_mAAA11BD869C8818266133A03BEC94087AB76BB57((Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_4 = (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_19;
				// s_Updated.Add(CreateOrUpdateTrackable(updated));
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_20 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
				XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_21 = V_4;
				NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
				RuntimeObject * L_22 = ((  RuntimeObject * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20, (RuntimeObject *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_00c3:
			{
				// foreach (var updated in changes.updated)
				bool L_23 = Enumerator_MoveNext_mD818C7168685197B0033FF034038DE1441498637((Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_23)
				{
					goto IL_00a8;
				}
			}

IL_00cc:
			{
				IL2CPP_LEAVE(0xDC, FINALLY_00ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ce;
		}

FINALLY_00ce:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t1B7E0D23EF4C33682EFE99D8F58153FDA8CB6ACD > L_24(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__214 = il2cpp_codegen_get_interface_invoke_data(0, (&L_24), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__214.methodPtr)((RuntimeObject*)(&L_24), /*hidden argument*/il2cpp_virtual_invoke_data__214.method);
			V_2 = L_24.m_Value;
			IL2CPP_END_FINALLY(206)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(206)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xDC, IL_00dc)
		}

IL_00dc:
		{
			// ClearAndSetCapacity(s_Removed, changes.removed.Length);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_25 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_26 = TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_26;
			int32_t L_27 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_25, (int32_t)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			// foreach (var trackableId in changes.removed)
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_28 = TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_28;
			Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  L_29 = NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5), /*hidden argument*/NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_RuntimeMethod_var);
			V_6 = (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A )L_29;
		}

IL_0108:
		try
		{ // begin try (depth: 2)
			{
				goto IL_013e;
			}

IL_010a:
			{
				// foreach (var trackableId in changes.removed)
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_30 = Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_RuntimeMethod_var);
				V_7 = (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_30;
				// if (m_Trackables.TryGetValue(trackableId, out trackable))
				Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_31 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_32 = V_7;
				NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_31);
				bool L_33 = ((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_31, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_32, (RuntimeObject **)(RuntimeObject **)(&V_8), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
				if (!L_33)
				{
					goto IL_013e;
				}
			}

IL_0124:
			{
				// m_Trackables.Remove(trackableId);
				Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_34 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_35 = V_7;
				NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_34);
				((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_34, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_35, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
				// s_Removed.Add(trackable);
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_36 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
				RuntimeObject * L_37 = V_8;
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36, (RuntimeObject *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_013e:
			{
				// foreach (var trackableId in changes.removed)
				bool L_38 = Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_010a;
				}
			}

IL_0147:
			{
				IL2CPP_LEAVE(0x165, FINALLY_0149);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0149;
		}

FINALLY_0149:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A > L_39(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A_il2cpp_TypeInfo_var, (&V_6));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__337 = il2cpp_codegen_get_interface_invoke_data(0, (&L_39), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__337.methodPtr)((RuntimeObject*)(&L_39), /*hidden argument*/il2cpp_virtual_invoke_data__337.method);
			V_6 = L_39.m_Value;
			IL2CPP_END_FINALLY(329)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(329)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x165, FINALLY_0157);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0157;
	}

FINALLY_0157:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB > L_40(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 23), (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__351 = il2cpp_codegen_get_interface_invoke_data(0, (&L_40), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__351.methodPtr)((RuntimeObject*)(&L_40), /*hidden argument*/il2cpp_virtual_invoke_data__351.method);
		V_0 = L_40.m_Value;
		IL2CPP_END_FINALLY(343)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(343)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x165, IL_0165)
	}

IL_0165:
	{
	}

IL_0166:
	try
	{ // begin try (depth: 1)
		{
			// if ((s_Added.Count) > 0 ||
			//     (s_Updated.Count) > 0 ||
			//     (s_Removed.Count) > 0)
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_41 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_41);
			int32_t L_42 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
			if ((((int32_t)L_42) > ((int32_t)0)))
			{
				goto IL_018d;
			}
		}

IL_0173:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_43 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_43);
			int32_t L_44 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_43, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
			if ((((int32_t)L_44) > ((int32_t)0)))
			{
				goto IL_018d;
			}
		}

IL_0180:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_45 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_45);
			int32_t L_46 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_45, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
			if ((((int32_t)L_46) <= ((int32_t)0)))
			{
				goto IL_01a2;
			}
		}

IL_018d:
		{
			// OnTrackablesChanged(s_Added, s_Updated, s_Removed);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_47 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_48 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_49 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
			VirtActionInvoker3< List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * >::Invoke(14 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>) */, (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_47, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_48, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_49);
		}

IL_01a2:
		{
			// }
			IL2CPP_LEAVE(0x1DD, FINALLY_01a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01a4;
	}

FINALLY_01a4:
	{ // begin finally (depth: 1)
		{
			// foreach (var removed in s_Removed)
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_50 = ((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_50);
			Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_51 = ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
			V_9 = (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD )L_51;
		}

IL_01b0:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01c3;
			}

IL_01b2:
			{
				// foreach (var removed in s_Removed)
				RuntimeObject * L_52 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
				V_10 = (RuntimeObject *)L_52;
				// DestroyTrackable(removed);
				RuntimeObject * L_53 = V_10;
				NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
				((  void (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (RuntimeObject *)L_53, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
			}

IL_01c3:
			{
				// foreach (var removed in s_Removed)
				bool L_54 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
				if (L_54)
				{
					goto IL_01b2;
				}
			}

IL_01cc:
			{
				IL2CPP_LEAVE(0x1DC, FINALLY_01ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01ce;
		}

FINALLY_01ce:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD > L_55(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 30), (&V_9));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__470 = il2cpp_codegen_get_interface_invoke_data(0, (&L_55), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__470.methodPtr)((RuntimeObject*)(&L_55), /*hidden argument*/il2cpp_virtual_invoke_data__470.method);
			V_9 = L_55.m_Value;
			IL2CPP_END_FINALLY(462)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(462)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x1DC, IL_01dc)
		}

IL_01dc:
		{
			// }
			IL2CPP_END_FINALLY(420)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(420)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1DD, IL_01dd)
	}

IL_01dd:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnTrackablesChanged_m34033A9D69C3705FDF08CFA840279230CF33161E_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___added0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___updated1, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___removed2, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnCreateTrackable(TTrackable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnCreateTrackable_m3002ED4DB1FE73EEE114CEC27C621E8D052DC2B6_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, RuntimeObject * ___trackable0, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnAfterSetSessionRelativeData_m38E25115F46983A9A0D31957B64C46C1F5DF73D7_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, RuntimeObject * ___trackable0, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___sessionRelativeData1, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateTrackableImmediate(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackableImmediate_mCA36D9E90162DEF068DFB7D88477A2E759B54667_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___sessionRelativeData0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// var trackable = CreateOrUpdateTrackable(sessionRelativeData);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_0 = (RuntimeObject *)L_1;
		// trackable.pending = true;
		RuntimeObject * L_2 = V_0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_2);
		((  void (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_2, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		// m_PendingAdds.Add(trackable.trackableId, trackable);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_3 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		RuntimeObject * L_4 = V_0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_4);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = ((  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 33)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 33));
		RuntimeObject * L_6 = V_0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3);
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34));
		// return trackable;
		RuntimeObject * L_7 = V_0;
		return (RuntimeObject *)L_7;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::DestroyPendingTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackableManager_4_DestroyPendingTrackable_mB88D4ABB39893E76847DDE6CDEA885F977C554DB_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// if (m_PendingAdds.TryGetValue(trackableId, out trackable))
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___trackableId0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_0, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// m_PendingAdds.Remove(trackableId);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_3 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___trackableId0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3);
		((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		// m_Trackables.Remove(trackableId);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_5 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = ___trackableId0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_5);
		((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_5, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		// DestroyTrackable(trackable);
		RuntimeObject * L_7 = V_0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		((  void (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
		// return true;
		return (bool)1;
	}

IL_0033:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::ClearAndSetCapacity(System.Collections.Generic.List`1<TTrackable>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_ClearAndSetCapacity_mC67D963FB26EFC585804556D424D414F0F149AE7_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list0, int32_t ___capacity1, const RuntimeMethod* method)
{
	{
		// list.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		// if (list.Capacity < capacity)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 36)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		int32_t L_3 = ___capacity1;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		// list.Capacity = capacity;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = ___list0;
		int32_t L_5 = ___capacity1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 37)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 37));
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::GetTrackableName(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackableManager_4_GetTrackableName_m80A43841E26C94988E274207DD5A22031B949BD2_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_GetTrackableName_m80A43841E26C94988E274207DD5A22031B949BD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObjectName + " " + trackableId.ToString();
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_gameObjectName() */, (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		String_t* L_1 = TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(&___trackableId0), /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923((String_t*)L_0, (String_t*)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, (String_t*)L_1, /*hidden argument*/NULL);
		return (String_t*)L_2;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_m0BB9D3FB8FBC3EF6EDDCDC383A3668A9C7E95E64_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateGameObject_m0BB9D3FB8FBC3EF6EDDCDC383A3668A9C7E95E64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// var prefab = GetPrefab();
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(11 /* UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::GetPrefab() */, (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		// if (prefab == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// var go = new GameObject();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_3, /*hidden argument*/NULL);
		// go.transform.parent = sessionOrigin.trackablesParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4, /*hidden argument*/NULL);
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_6 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6, /*hidden argument*/NULL);
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_7, /*hidden argument*/NULL);
		// return go;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4;
	}

IL_002c:
	{
		// return Instantiate(prefab, sessionOrigin.trackablesParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_9 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_mF55FDACB92066B6E097F1B817672EFDCF1032778_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// var go = CreateGameObject();
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41));
		// go.name = name;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		String_t* L_2 = ___name0;
		NullCheck((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		// return go;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_1;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateGameObject(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_mDADD5ADF43002AF26784F9C6485CB0221DE3B8D9_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	{
		// return CreateGameObject(GetTrackableName(trackableId));
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		String_t* L_1 = ((  String_t* (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42));
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43));
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackable_m784C3D792EBD41DF3A35B8F9808D9C1EB1EB77D6_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateTrackable_m784C3D792EBD41DF3A35B8F9808D9C1EB1EB77D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// var go = CreateGameObject(trackableId);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44));
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_1;
		// var trackable = go.GetComponent<TTrackable>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45));
		V_1 = (RuntimeObject *)L_3;
		// if (trackable == null)
		RuntimeObject * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// trackable = go.AddComponent<TTrackable>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6);
		RuntimeObject * L_7 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 46)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 46));
		V_1 = (RuntimeObject *)L_7;
	}

IL_0024:
	{
		// return trackable;
		RuntimeObject * L_8 = V_1;
		return (RuntimeObject *)L_8;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::CreateOrUpdateTrackable(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateOrUpdateTrackable_m4BBD5964487FF41BF86C544D43BD32BD50F502D5_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___sessionRelativeData0, const RuntimeMethod* method)
{
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		// var trackableId = sessionRelativeData.trackableId;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = XRPointCloud_get_trackableId_mA394197EAD026665FC02A1118CBBB46FF6873EF1_inline((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		V_0 = (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0;
		// if (m_Trackables.TryGetValue(trackableId, out trackable))
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_1 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = V_0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_1);
		bool L_3 = ((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_1, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_2, (RuntimeObject **)(RuntimeObject **)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// m_PendingAdds.Remove(trackableId);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_4 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = V_0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_4);
		((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_4, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		// trackable.pending = false;
		RuntimeObject * L_6 = V_1;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_6);
		((  void (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_6, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		// trackable.SetSessionRelativeData(sessionRelativeData);
		RuntimeObject * L_7 = V_1;
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_8 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_7);
		((  void (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_7, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48));
		// }
		goto IL_006d;
	}

IL_0045:
	{
		// trackable = CreateTrackable(trackableId);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_9 = V_0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49)->methodPointer)((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49));
		V_1 = (RuntimeObject *)L_10;
		// m_Trackables.Add(trackableId, trackable);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_11 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_12 = V_0;
		RuntimeObject * L_13 = V_1;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_11);
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_11, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_12, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34));
		// trackable.SetSessionRelativeData(sessionRelativeData);
		RuntimeObject * L_14 = V_1;
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_15 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_14);
		((  void (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_14, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48));
		// OnCreateTrackable(trackable);
		RuntimeObject * L_16 = V_1;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		VirtActionInvoker1< RuntimeObject * >::Invoke(15 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnCreateTrackable(TTrackable) */, (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (RuntimeObject *)L_16);
	}

IL_006d:
	{
		// OnAfterSetSessionRelativeData(trackable, sessionRelativeData);
		RuntimeObject * L_17 = V_1;
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_18 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this);
		VirtActionInvoker2< RuntimeObject *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  >::Invoke(16 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData) */, (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E *)__this, (RuntimeObject *)L_17, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_18);
		// trackable.OnAfterSetSessionRelativeData();
		RuntimeObject * L_19 = V_1;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_19);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnAfterSetSessionRelativeData() */, (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_19);
		// return trackable;
		RuntimeObject * L_20 = V_1;
		return (RuntimeObject *)L_20;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::DestroyTrackable(TTrackable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_DestroyTrackable_m5C77DDD122C825943130C2C446F6544082A075F0_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, RuntimeObject * ___trackable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_DestroyTrackable_m5C77DDD122C825943130C2C446F6544082A075F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackable.destroyOnRemoval)
		RuntimeObject * L_0 = ___trackable0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_0);
		bool L_1 = ((  bool (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 53)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 53));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(trackable.gameObject);
		RuntimeObject * L_2 = ___trackable0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__ctor_m8614FAC9615C64E6CCB0A0C83C9567D69DB04794_gshared (ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 54)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 54));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__cctor_mF634280B75354D207BA476C0A356D928CADB0BFD_gshared (const RuntimeMethod* method)
{
	{
		// static List<TTrackable> s_Added = new List<TTrackable>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Added_10(L_0);
		// static List<TTrackable> s_Updated = new List<TTrackable>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Updated_11(L_1);
		// static List<TTrackable> s_Removed = new List<TTrackable>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		((ARTrackableManager_4_tD292080F1B580A94C9A31C8B1B976FA9F51B8E2E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Removed_12(L_2);
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
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  ARTrackableManager_4_get_trackables_m6CE4280BC89E0B96C1B6EDB67FDAE107FFB748DE_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	{
		// return new TrackableCollection<TTrackable>(m_Trackables);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF((&L_1), (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 )L_1;
	}
}
// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_sessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ARTrackableManager_4_get_sessionOrigin_m39BF6390C2FAD618E1A7A5452B5F6CD3BE7A7D87_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	{
		// protected ARSessionOrigin sessionOrigin { get; private set; }
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)__this->get_U3CsessionOriginU3Ek__BackingField_7();
		return (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::set_sessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_set_sessionOrigin_m189DBA06B0D6D01E951CF0674C2054A0EB5D3B99_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___value0, const RuntimeMethod* method)
{
	{
		// protected ARSessionOrigin sessionOrigin { get; private set; }
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = ___value0;
		__this->set_U3CsessionOriginU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::GetPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_GetPrefab_mE7E2DCC7682486B1E3658018B205D6CCB78F8F18_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Awake_mE74D7D15F5EE5CB93D096FE4CA47D8C541C96454_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Awake_mE74D7D15F5EE5CB93D096FE4CA47D8C541C96454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Trackables = new Dictionary<TrackableId, TTrackable>();
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Trackables_8(L_0);
		// m_PendingAdds = new Dictionary<TrackableId, TTrackable>();
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_1 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_PendingAdds_9(L_1);
		// sessionOrigin = GetComponent<ARSessionOrigin>();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_2 = Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17_RuntimeMethod_var);
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		((  void (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Update_mFCCE7C2A3D4569CD1E50995E00066A9A603D706E_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Update_mFCCE7C2A3D4569CD1E50995E00066A9A603D706E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject * V_8 = NULL;
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (subsystem == null)
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// using (var changes = subsystem.GetChanges(Allocator.Temp))
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 *)L_1);
		TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  L_2 = VirtFuncInvoker1< TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF , int32_t >::Invoke(9 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::GetChanges(Unity.Collections.Allocator) */, (TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 *)L_1, (int32_t)2);
		V_0 = (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF )L_2;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			// ClearAndSetCapacity(s_Added, changes.added.Length);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
			NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_4 = TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_4;
			int32_t L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			// foreach (var added in changes.added)
			NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_6 = TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_6;
			Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  L_7 = NativeArray_1_GetEnumerator_m0AE193D90C66BD2CB22C49D77323F1BD7775FBF9((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E )L_7;
		}

IL_0049:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0064;
			}

IL_004b:
			{
				// foreach (var added in changes.added)
				XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_8 = Enumerator_get_Current_m1E16327F75D3A7E6496D252BD730CE3B55858FE7((Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_3 = (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_8;
				// s_Added.Add(CreateOrUpdateTrackable(added));
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
				XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_10 = V_3;
				NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
				RuntimeObject * L_11 = ((  RuntimeObject * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_0064:
			{
				// foreach (var added in changes.added)
				bool L_12 = Enumerator_MoveNext_m345699420F154E8E5508CE0A44444F14EFD566B2((Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_12)
				{
					goto IL_004b;
				}
			}

IL_006d:
			{
				IL2CPP_LEAVE(0x7D, FINALLY_006f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006f;
		}

FINALLY_006f:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E > L_13(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__119 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__119.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__119.method);
			V_2 = L_13.m_Value;
			IL2CPP_END_FINALLY(111)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(111)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x7D, IL_007d)
		}

IL_007d:
		{
			// ClearAndSetCapacity(s_Updated, changes.updated.Length);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
			NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_15 = TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_15;
			int32_t L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			// foreach (var updated in changes.updated)
			NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_17 = TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_17;
			Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E  L_18 = NativeArray_1_GetEnumerator_m0AE193D90C66BD2CB22C49D77323F1BD7775FBF9((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E )L_18;
		}

IL_00a6:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00c3;
			}

IL_00a8:
			{
				// foreach (var updated in changes.updated)
				XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_19 = Enumerator_get_Current_m1E16327F75D3A7E6496D252BD730CE3B55858FE7((Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_4 = (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_19;
				// s_Updated.Add(CreateOrUpdateTrackable(updated));
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_20 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
				XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_21 = V_4;
				NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
				RuntimeObject * L_22 = ((  RuntimeObject * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20, (RuntimeObject *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_00c3:
			{
				// foreach (var updated in changes.updated)
				bool L_23 = Enumerator_MoveNext_m345699420F154E8E5508CE0A44444F14EFD566B2((Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_23)
				{
					goto IL_00a8;
				}
			}

IL_00cc:
			{
				IL2CPP_LEAVE(0xDC, FINALLY_00ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ce;
		}

FINALLY_00ce:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t533CE786298995A804A1B61701D6400CF4483B1E > L_24(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__214 = il2cpp_codegen_get_interface_invoke_data(0, (&L_24), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__214.methodPtr)((RuntimeObject*)(&L_24), /*hidden argument*/il2cpp_virtual_invoke_data__214.method);
			V_2 = L_24.m_Value;
			IL2CPP_END_FINALLY(206)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(206)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xDC, IL_00dc)
		}

IL_00dc:
		{
			// ClearAndSetCapacity(s_Removed, changes.removed.Length);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_25 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_26 = TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_26;
			int32_t L_27 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_25, (int32_t)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			// foreach (var trackableId in changes.removed)
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_28 = TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_28;
			Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  L_29 = NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5), /*hidden argument*/NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_RuntimeMethod_var);
			V_6 = (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A )L_29;
		}

IL_0108:
		try
		{ // begin try (depth: 2)
			{
				goto IL_013e;
			}

IL_010a:
			{
				// foreach (var trackableId in changes.removed)
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_30 = Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_RuntimeMethod_var);
				V_7 = (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_30;
				// if (m_Trackables.TryGetValue(trackableId, out trackable))
				Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_31 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_32 = V_7;
				NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_31);
				bool L_33 = ((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_31, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_32, (RuntimeObject **)(RuntimeObject **)(&V_8), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
				if (!L_33)
				{
					goto IL_013e;
				}
			}

IL_0124:
			{
				// m_Trackables.Remove(trackableId);
				Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_34 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_35 = V_7;
				NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_34);
				((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_34, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_35, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
				// s_Removed.Add(trackable);
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_36 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
				RuntimeObject * L_37 = V_8;
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36, (RuntimeObject *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_013e:
			{
				// foreach (var trackableId in changes.removed)
				bool L_38 = Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_010a;
				}
			}

IL_0147:
			{
				IL2CPP_LEAVE(0x165, FINALLY_0149);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0149;
		}

FINALLY_0149:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A > L_39(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A_il2cpp_TypeInfo_var, (&V_6));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__337 = il2cpp_codegen_get_interface_invoke_data(0, (&L_39), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__337.methodPtr)((RuntimeObject*)(&L_39), /*hidden argument*/il2cpp_virtual_invoke_data__337.method);
			V_6 = L_39.m_Value;
			IL2CPP_END_FINALLY(329)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(329)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x165, FINALLY_0157);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0157;
	}

FINALLY_0157:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF > L_40(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 23), (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__351 = il2cpp_codegen_get_interface_invoke_data(0, (&L_40), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__351.methodPtr)((RuntimeObject*)(&L_40), /*hidden argument*/il2cpp_virtual_invoke_data__351.method);
		V_0 = L_40.m_Value;
		IL2CPP_END_FINALLY(343)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(343)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x165, IL_0165)
	}

IL_0165:
	{
	}

IL_0166:
	try
	{ // begin try (depth: 1)
		{
			// if ((s_Added.Count) > 0 ||
			//     (s_Updated.Count) > 0 ||
			//     (s_Removed.Count) > 0)
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_41 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_41);
			int32_t L_42 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
			if ((((int32_t)L_42) > ((int32_t)0)))
			{
				goto IL_018d;
			}
		}

IL_0173:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_43 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_43);
			int32_t L_44 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_43, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
			if ((((int32_t)L_44) > ((int32_t)0)))
			{
				goto IL_018d;
			}
		}

IL_0180:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_45 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_45);
			int32_t L_46 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_45, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
			if ((((int32_t)L_46) <= ((int32_t)0)))
			{
				goto IL_01a2;
			}
		}

IL_018d:
		{
			// OnTrackablesChanged(s_Added, s_Updated, s_Removed);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_47 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_48 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_49 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
			VirtActionInvoker3< List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * >::Invoke(14 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>) */, (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_47, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_48, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_49);
		}

IL_01a2:
		{
			// }
			IL2CPP_LEAVE(0x1DD, FINALLY_01a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01a4;
	}

FINALLY_01a4:
	{ // begin finally (depth: 1)
		{
			// foreach (var removed in s_Removed)
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_50 = ((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_50);
			Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_51 = ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
			V_9 = (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD )L_51;
		}

IL_01b0:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01c3;
			}

IL_01b2:
			{
				// foreach (var removed in s_Removed)
				RuntimeObject * L_52 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
				V_10 = (RuntimeObject *)L_52;
				// DestroyTrackable(removed);
				RuntimeObject * L_53 = V_10;
				NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
				((  void (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (RuntimeObject *)L_53, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
			}

IL_01c3:
			{
				// foreach (var removed in s_Removed)
				bool L_54 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
				if (L_54)
				{
					goto IL_01b2;
				}
			}

IL_01cc:
			{
				IL2CPP_LEAVE(0x1DC, FINALLY_01ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01ce;
		}

FINALLY_01ce:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD > L_55(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 30), (&V_9));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__470 = il2cpp_codegen_get_interface_invoke_data(0, (&L_55), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__470.methodPtr)((RuntimeObject*)(&L_55), /*hidden argument*/il2cpp_virtual_invoke_data__470.method);
			V_9 = L_55.m_Value;
			IL2CPP_END_FINALLY(462)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(462)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x1DC, IL_01dc)
		}

IL_01dc:
		{
			// }
			IL2CPP_END_FINALLY(420)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(420)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1DD, IL_01dd)
	}

IL_01dd:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnTrackablesChanged_mEE77BD11633108F80C07BECBB0F8FADDA12C03C8_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___added0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___updated1, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___removed2, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnCreateTrackable(TTrackable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnCreateTrackable_m3557A610975DF0EBC4D059073039A0E9EDB37DAC_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, RuntimeObject * ___trackable0, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnAfterSetSessionRelativeData_m4FA9343E6D237386B87C185EB9197BB0FFADD3EA_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, RuntimeObject * ___trackable0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___sessionRelativeData1, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateTrackableImmediate(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackableImmediate_m11F02086CC33E98CDF78DD77A0E62C9A8FFB6339_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___sessionRelativeData0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// var trackable = CreateOrUpdateTrackable(sessionRelativeData);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_0 = (RuntimeObject *)L_1;
		// trackable.pending = true;
		RuntimeObject * L_2 = V_0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_2);
		((  void (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_2, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		// m_PendingAdds.Add(trackable.trackableId, trackable);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_3 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		RuntimeObject * L_4 = V_0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_4);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = ((  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 33)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 33));
		RuntimeObject * L_6 = V_0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3);
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34));
		// return trackable;
		RuntimeObject * L_7 = V_0;
		return (RuntimeObject *)L_7;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::DestroyPendingTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackableManager_4_DestroyPendingTrackable_m654D1A0BD40A323AFA8DA8E44CAB579207C8F027_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// if (m_PendingAdds.TryGetValue(trackableId, out trackable))
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___trackableId0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_0, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// m_PendingAdds.Remove(trackableId);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_3 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___trackableId0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3);
		((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		// m_Trackables.Remove(trackableId);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_5 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = ___trackableId0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_5);
		((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_5, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		// DestroyTrackable(trackable);
		RuntimeObject * L_7 = V_0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		((  void (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
		// return true;
		return (bool)1;
	}

IL_0033:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::ClearAndSetCapacity(System.Collections.Generic.List`1<TTrackable>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_ClearAndSetCapacity_mC8ADC7FCBB09C3F5639249F689AEA8BC1E587087_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list0, int32_t ___capacity1, const RuntimeMethod* method)
{
	{
		// list.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		// if (list.Capacity < capacity)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 36)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		int32_t L_3 = ___capacity1;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		// list.Capacity = capacity;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = ___list0;
		int32_t L_5 = ___capacity1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 37)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 37));
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::GetTrackableName(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackableManager_4_GetTrackableName_m3A729E918B8EE0054C786CDE02ECF256277A5D6D_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_GetTrackableName_m3A729E918B8EE0054C786CDE02ECF256277A5D6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObjectName + " " + trackableId.ToString();
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_gameObjectName() */, (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		String_t* L_1 = TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(&___trackableId0), /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923((String_t*)L_0, (String_t*)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, (String_t*)L_1, /*hidden argument*/NULL);
		return (String_t*)L_2;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_m35CEEE7E63CF3FF55EBACE3EC2A3176DC3751ABD_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateGameObject_m35CEEE7E63CF3FF55EBACE3EC2A3176DC3751ABD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// var prefab = GetPrefab();
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(11 /* UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::GetPrefab() */, (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		// if (prefab == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// var go = new GameObject();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_3, /*hidden argument*/NULL);
		// go.transform.parent = sessionOrigin.trackablesParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4, /*hidden argument*/NULL);
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_6 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6, /*hidden argument*/NULL);
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_7, /*hidden argument*/NULL);
		// return go;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4;
	}

IL_002c:
	{
		// return Instantiate(prefab, sessionOrigin.trackablesParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_9 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_mF0B085C646AE5F5F93D4AAEB69C1A4E4B32881EF_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// var go = CreateGameObject();
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41));
		// go.name = name;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		String_t* L_2 = ___name0;
		NullCheck((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		// return go;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_1;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateGameObject(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_m235D391A6EF80B8CD7A14829479EB8D0A7ED873A_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	{
		// return CreateGameObject(GetTrackableName(trackableId));
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		String_t* L_1 = ((  String_t* (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42));
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43));
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackable_mF294EF88541A9EDB3324257B3AB97081E3AF9577_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateTrackable_mF294EF88541A9EDB3324257B3AB97081E3AF9577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// var go = CreateGameObject(trackableId);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44));
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_1;
		// var trackable = go.GetComponent<TTrackable>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45));
		V_1 = (RuntimeObject *)L_3;
		// if (trackable == null)
		RuntimeObject * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// trackable = go.AddComponent<TTrackable>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6);
		RuntimeObject * L_7 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 46)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 46));
		V_1 = (RuntimeObject *)L_7;
	}

IL_0024:
	{
		// return trackable;
		RuntimeObject * L_8 = V_1;
		return (RuntimeObject *)L_8;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::CreateOrUpdateTrackable(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateOrUpdateTrackable_m7CA67CD541A3A99C2EA242B24217B4E933923459_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___sessionRelativeData0, const RuntimeMethod* method)
{
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		// var trackableId = sessionRelativeData.trackableId;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88_inline((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		V_0 = (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0;
		// if (m_Trackables.TryGetValue(trackableId, out trackable))
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_1 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = V_0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_1);
		bool L_3 = ((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_1, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_2, (RuntimeObject **)(RuntimeObject **)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// m_PendingAdds.Remove(trackableId);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_4 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = V_0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_4);
		((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_4, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		// trackable.pending = false;
		RuntimeObject * L_6 = V_1;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_6);
		((  void (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_6, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		// trackable.SetSessionRelativeData(sessionRelativeData);
		RuntimeObject * L_7 = V_1;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_8 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_7);
		((  void (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_7, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48));
		// }
		goto IL_006d;
	}

IL_0045:
	{
		// trackable = CreateTrackable(trackableId);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_9 = V_0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49)->methodPointer)((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49));
		V_1 = (RuntimeObject *)L_10;
		// m_Trackables.Add(trackableId, trackable);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_11 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_12 = V_0;
		RuntimeObject * L_13 = V_1;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_11);
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_11, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_12, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34));
		// trackable.SetSessionRelativeData(sessionRelativeData);
		RuntimeObject * L_14 = V_1;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_15 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_14);
		((  void (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_14, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48));
		// OnCreateTrackable(trackable);
		RuntimeObject * L_16 = V_1;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		VirtActionInvoker1< RuntimeObject * >::Invoke(15 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnCreateTrackable(TTrackable) */, (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (RuntimeObject *)L_16);
	}

IL_006d:
	{
		// OnAfterSetSessionRelativeData(trackable, sessionRelativeData);
		RuntimeObject * L_17 = V_1;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_18 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this);
		VirtActionInvoker2< RuntimeObject *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  >::Invoke(16 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData) */, (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 *)__this, (RuntimeObject *)L_17, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_18);
		// trackable.OnAfterSetSessionRelativeData();
		RuntimeObject * L_19 = V_1;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_19);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnAfterSetSessionRelativeData() */, (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_19);
		// return trackable;
		RuntimeObject * L_20 = V_1;
		return (RuntimeObject *)L_20;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::DestroyTrackable(TTrackable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_DestroyTrackable_mA6474494ED47CBFE2012D28208C70CD244C3C3AD_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, RuntimeObject * ___trackable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_DestroyTrackable_mA6474494ED47CBFE2012D28208C70CD244C3C3AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackable.destroyOnRemoval)
		RuntimeObject * L_0 = ___trackable0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_0);
		bool L_1 = ((  bool (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 53)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 53));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(trackable.gameObject);
		RuntimeObject * L_2 = ___trackable0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__ctor_mDCE43C733D585FF120193156AC2D620707EBFD86_gshared (ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 54)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 54));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__cctor_m9BB2F81F00E707AE117C25D0B5DC2C4AF577A113_gshared (const RuntimeMethod* method)
{
	{
		// static List<TTrackable> s_Added = new List<TTrackable>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Added_10(L_0);
		// static List<TTrackable> s_Updated = new List<TTrackable>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Updated_11(L_1);
		// static List<TTrackable> s_Removed = new List<TTrackable>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		((ARTrackableManager_4_t3F7454DAB341B63418D48A8B61002625B021BF13_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Removed_12(L_2);
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
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  ARTrackableManager_4_get_trackables_mEF8C2818150FC35541B76B6C1F971387ECA91C3E_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, const RuntimeMethod* method)
{
	{
		// return new TrackableCollection<TTrackable>(m_Trackables);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF((&L_1), (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 )L_1;
	}
}
// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_sessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ARTrackableManager_4_get_sessionOrigin_m3A85DABB41E0256286B347FEA5A1B2F25C2087B6_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, const RuntimeMethod* method)
{
	{
		// protected ARSessionOrigin sessionOrigin { get; private set; }
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)__this->get_U3CsessionOriginU3Ek__BackingField_7();
		return (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::set_sessionOrigin(UnityEngine.XR.ARFoundation.ARSessionOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_set_sessionOrigin_mB7194DE30294FDC359CFC91BFDD64EEE77D4CA59_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___value0, const RuntimeMethod* method)
{
	{
		// protected ARSessionOrigin sessionOrigin { get; private set; }
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_0 = ___value0;
		__this->set_U3CsessionOriginU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::GetPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_GetPrefab_mC7FF80006E952B45C9A7740DCAB7C096DE969529_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Awake_mC7D5B2CA8D1E90C5214A03C8F372C2F045A287DF_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Awake_mC7D5B2CA8D1E90C5214A03C8F372C2F045A287DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Trackables = new Dictionary<TrackableId, TTrackable>();
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Trackables_8(L_0);
		// m_PendingAdds = new Dictionary<TrackableId, TTrackable>();
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_1 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_PendingAdds_9(L_1);
		// sessionOrigin = GetComponent<ARSessionOrigin>();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_2 = Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/Component_GetComponent_TisARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF_m25BC8791B994BAE33BF9003FFC85124F480EFB17_RuntimeMethod_var);
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		((  void (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_Update_m607CD536A884309BBDA0DFE3FAA1CA05F9CA7659_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_Update_m607CD536A884309BBDA0DFE3FAA1CA05F9CA7659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76  V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  V_3;
	memset((&V_3), 0, sizeof(V_3));
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject * V_8 = NULL;
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (subsystem == null)
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// using (var changes = subsystem.GetChanges(Allocator.Temp))
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00 *)L_1);
		TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F  L_2 = VirtFuncInvoker1< TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F , int32_t >::Invoke(9 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<!0> UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::GetChanges(Unity.Collections.Allocator) */, (TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00 *)L_1, (int32_t)2);
		V_0 = (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F )L_2;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			// ClearAndSetCapacity(s_Added, changes.added.Length);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
			NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_4 = TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_4;
			int32_t L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			// foreach (var added in changes.added)
			NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_6 = TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
			V_1 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_6;
			Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76  L_7 = NativeArray_1_GetEnumerator_m10A5016AB48E4AE47C995EA8FC33A4152C105F61((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 )L_7;
		}

IL_0049:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0064;
			}

IL_004b:
			{
				// foreach (var added in changes.added)
				XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_8 = Enumerator_get_Current_mDA485C1222EA6776DA7CB0BFF0DD169DB5CB8E21((Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 *)(Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_3 = (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_8;
				// s_Added.Add(CreateOrUpdateTrackable(added));
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
				XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_10 = V_3;
				NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
				RuntimeObject * L_11 = ((  RuntimeObject * (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_0064:
			{
				// foreach (var added in changes.added)
				bool L_12 = Enumerator_MoveNext_m7A49AD4924ECF5F29DAB0298CCBB8171B5CB43DE((Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 *)(Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_12)
				{
					goto IL_004b;
				}
			}

IL_006d:
			{
				IL2CPP_LEAVE(0x7D, FINALLY_006f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006f;
		}

FINALLY_006f:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 > L_13(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__119 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__119.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__119.method);
			V_2 = L_13.m_Value;
			IL2CPP_END_FINALLY(111)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(111)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x7D, IL_007d)
		}

IL_007d:
		{
			// ClearAndSetCapacity(s_Updated, changes.updated.Length);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
			NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_15 = TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_15;
			int32_t L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(&V_1))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			// foreach (var updated in changes.updated)
			NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_17 = TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
			V_1 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_17;
			Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76  L_18 = NativeArray_1_GetEnumerator_m10A5016AB48E4AE47C995EA8FC33A4152C105F61((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
			V_2 = (Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 )L_18;
		}

IL_00a6:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00c3;
			}

IL_00a8:
			{
				// foreach (var updated in changes.updated)
				XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_19 = Enumerator_get_Current_mDA485C1222EA6776DA7CB0BFF0DD169DB5CB8E21((Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 *)(Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
				V_4 = (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_19;
				// s_Updated.Add(CreateOrUpdateTrackable(updated));
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_20 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
				XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_21 = V_4;
				NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
				RuntimeObject * L_22 = ((  RuntimeObject * (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20, (RuntimeObject *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_00c3:
			{
				// foreach (var updated in changes.updated)
				bool L_23 = Enumerator_MoveNext_m7A49AD4924ECF5F29DAB0298CCBB8171B5CB43DE((Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 *)(Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
				if (L_23)
				{
					goto IL_00a8;
				}
			}

IL_00cc:
			{
				IL2CPP_LEAVE(0xDC, FINALLY_00ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ce;
		}

FINALLY_00ce:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t24763C293EE3A5FF95D00AB6752E91A2F7940B76 > L_24(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (&V_2));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__214 = il2cpp_codegen_get_interface_invoke_data(0, (&L_24), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__214.methodPtr)((RuntimeObject*)(&L_24), /*hidden argument*/il2cpp_virtual_invoke_data__214.method);
			V_2 = L_24.m_Value;
			IL2CPP_END_FINALLY(206)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(206)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xDC, IL_00dc)
		}

IL_00dc:
		{
			// ClearAndSetCapacity(s_Removed, changes.removed.Length);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_25 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_26 = TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_26;
			int32_t L_27 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5))->___m_Length_1);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_25, (int32_t)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
			// foreach (var trackableId in changes.removed)
			NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_28 = TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
			V_5 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_28;
			Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A  L_29 = NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_5), /*hidden argument*/NativeArray_1_GetEnumerator_m3B6CA1981A8CE62A1C67FCEEBE1887CD32906DA2_RuntimeMethod_var);
			V_6 = (Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A )L_29;
		}

IL_0108:
		try
		{ // begin try (depth: 2)
			{
				goto IL_013e;
			}

IL_010a:
			{
				// foreach (var trackableId in changes.removed)
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_30 = Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_get_Current_m913D10AD892E19937C638773D208459E9862248D_RuntimeMethod_var);
				V_7 = (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_30;
				// if (m_Trackables.TryGetValue(trackableId, out trackable))
				Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_31 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_32 = V_7;
				NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_31);
				bool L_33 = ((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_31, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_32, (RuntimeObject **)(RuntimeObject **)(&V_8), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
				if (!L_33)
				{
					goto IL_013e;
				}
			}

IL_0124:
			{
				// m_Trackables.Remove(trackableId);
				Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_34 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
				TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_35 = V_7;
				NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_34);
				((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_34, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_35, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
				// s_Removed.Add(trackable);
				IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
				List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_36 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
				RuntimeObject * L_37 = V_8;
				NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36);
				((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_36, (RuntimeObject *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
			}

IL_013e:
			{
				// foreach (var trackableId in changes.removed)
				bool L_38 = Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA((Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m3C4C0B0B1AE71E65EF8255E6FC671DDBC829B6AA_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_010a;
				}
			}

IL_0147:
			{
				IL2CPP_LEAVE(0x165, FINALLY_0149);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0149;
		}

FINALLY_0149:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A > L_39(Enumerator_tDB12EE5618B415F0FB5AEEE49E6F2F41DFB2FD0A_il2cpp_TypeInfo_var, (&V_6));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__337 = il2cpp_codegen_get_interface_invoke_data(0, (&L_39), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__337.methodPtr)((RuntimeObject*)(&L_39), /*hidden argument*/il2cpp_virtual_invoke_data__337.method);
			V_6 = L_39.m_Value;
			IL2CPP_END_FINALLY(329)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(329)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x165, FINALLY_0157);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0157;
	}

FINALLY_0157:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F > L_40(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 23), (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__351 = il2cpp_codegen_get_interface_invoke_data(0, (&L_40), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__351.methodPtr)((RuntimeObject*)(&L_40), /*hidden argument*/il2cpp_virtual_invoke_data__351.method);
		V_0 = L_40.m_Value;
		IL2CPP_END_FINALLY(343)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(343)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x165, IL_0165)
	}

IL_0165:
	{
	}

IL_0166:
	try
	{ // begin try (depth: 1)
		{
			// if ((s_Added.Count) > 0 ||
			//     (s_Updated.Count) > 0 ||
			//     (s_Removed.Count) > 0)
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_41 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_41);
			int32_t L_42 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
			if ((((int32_t)L_42) > ((int32_t)0)))
			{
				goto IL_018d;
			}
		}

IL_0173:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_43 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_43);
			int32_t L_44 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_43, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
			if ((((int32_t)L_44) > ((int32_t)0)))
			{
				goto IL_018d;
			}
		}

IL_0180:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_45 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_45);
			int32_t L_46 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_45, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
			if ((((int32_t)L_46) <= ((int32_t)0)))
			{
				goto IL_01a2;
			}
		}

IL_018d:
		{
			// OnTrackablesChanged(s_Added, s_Updated, s_Removed);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_47 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Added_10();
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_48 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Updated_11();
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_49 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
			VirtActionInvoker3< List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * >::Invoke(14 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>) */, (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_47, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_48, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_49);
		}

IL_01a2:
		{
			// }
			IL2CPP_LEAVE(0x1DD, FINALLY_01a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01a4;
	}

FINALLY_01a4:
	{ // begin finally (depth: 1)
		{
			// foreach (var removed in s_Removed)
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_50 = ((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8)))->get_s_Removed_12();
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_50);
			Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_51 = ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
			V_9 = (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD )L_51;
		}

IL_01b0:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01c3;
			}

IL_01b2:
			{
				// foreach (var removed in s_Removed)
				RuntimeObject * L_52 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
				V_10 = (RuntimeObject *)L_52;
				// DestroyTrackable(removed);
				RuntimeObject * L_53 = V_10;
				NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
				((  void (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (RuntimeObject *)L_53, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
			}

IL_01c3:
			{
				// foreach (var removed in s_Removed)
				bool L_54 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_9), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
				if (L_54)
				{
					goto IL_01b2;
				}
			}

IL_01cc:
			{
				IL2CPP_LEAVE(0x1DC, FINALLY_01ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01ce;
		}

FINALLY_01ce:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD > L_55(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 30), (&V_9));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__470 = il2cpp_codegen_get_interface_invoke_data(0, (&L_55), IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__470.methodPtr)((RuntimeObject*)(&L_55), /*hidden argument*/il2cpp_virtual_invoke_data__470.method);
			V_9 = L_55.m_Value;
			IL2CPP_END_FINALLY(462)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(462)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x1DC, IL_01dc)
		}

IL_01dc:
		{
			// }
			IL2CPP_END_FINALLY(420)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(420)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1DD, IL_01dd)
	}

IL_01dd:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::OnTrackablesChanged(System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>,System.Collections.Generic.List`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnTrackablesChanged_mF4167CC6877CE6593FE0226FD35FA329D69B7C5E_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___added0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___updated1, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___removed2, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::OnCreateTrackable(TTrackable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnCreateTrackable_mBBCD16128EB772E70A0A4EA19E8BF082DC3C0EF5_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, RuntimeObject * ___trackable0, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_OnAfterSetSessionRelativeData_m5969A332A1FDA7438B94F3D9EE8E054C9BFCF1B7_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, RuntimeObject * ___trackable0, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___sessionRelativeData1, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::CreateTrackableImmediate(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackableImmediate_m8A59DB23BA07E708F0ED2094EEFFF7728235AA5D_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___sessionRelativeData0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// var trackable = CreateOrUpdateTrackable(sessionRelativeData);
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_0 = (RuntimeObject *)L_1;
		// trackable.pending = true;
		RuntimeObject * L_2 = V_0;
		NullCheck((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_2);
		((  void (*) (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_2, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		// m_PendingAdds.Add(trackable.trackableId, trackable);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_3 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		RuntimeObject * L_4 = V_0;
		NullCheck((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_4);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = ((  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  (*) (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 33)->methodPointer)((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 33));
		RuntimeObject * L_6 = V_0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3);
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34));
		// return trackable;
		RuntimeObject * L_7 = V_0;
		return (RuntimeObject *)L_7;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::DestroyPendingTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackableManager_4_DestroyPendingTrackable_m1381BD11B2CCA30E14282A8BD9A16EC989FE4B14_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// if (m_PendingAdds.TryGetValue(trackableId, out trackable))
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___trackableId0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_0, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// m_PendingAdds.Remove(trackableId);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_3 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = ___trackableId0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3);
		((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_3, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		// m_Trackables.Remove(trackableId);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_5 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = ___trackableId0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_5);
		((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_5, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		// DestroyTrackable(trackable);
		RuntimeObject * L_7 = V_0;
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		((  void (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
		// return true;
		return (bool)1;
	}

IL_0033:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::ClearAndSetCapacity(System.Collections.Generic.List`1<TTrackable>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_ClearAndSetCapacity_mFF831F2818957079979773CA65B2EF16534B1168_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list0, int32_t ___capacity1, const RuntimeMethod* method)
{
	{
		// list.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		// if (list.Capacity < capacity)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 36)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		int32_t L_3 = ___capacity1;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		// list.Capacity = capacity;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = ___list0;
		int32_t L_5 = ___capacity1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 37)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 37));
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::GetTrackableName(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackableManager_4_GetTrackableName_mFC0AAEA10C78E5DE6AEE2F0D7C43FD71C7E975BD_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_GetTrackableName_mFC0AAEA10C78E5DE6AEE2F0D7C43FD71C7E975BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObjectName + " " + trackableId.ToString();
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_gameObjectName() */, (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		String_t* L_1 = TrackableId_ToString_mBA49191865E57697F4279D2781B182590726A215((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)(&___trackableId0), /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923((String_t*)L_0, (String_t*)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, (String_t*)L_1, /*hidden argument*/NULL);
		return (String_t*)L_2;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::CreateGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_m681DD342079D292AAD9D7498ACD009D2BDB24EEF_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateGameObject_m681DD342079D292AAD9D7498ACD009D2BDB24EEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// var prefab = GetPrefab();
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(11 /* UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::GetPrefab() */, (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		// if (prefab == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// var go = new GameObject();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_3, /*hidden argument*/NULL);
		// go.transform.parent = sessionOrigin.trackablesParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4, /*hidden argument*/NULL);
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_6 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_6, /*hidden argument*/NULL);
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_5, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_7, /*hidden argument*/NULL);
		// return go;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_4;
	}

IL_002c:
	{
		// return Instantiate(prefab, sessionOrigin.trackablesParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * L_9 = ((  ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		NullCheck((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline((ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::CreateGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_mECE465D385F71421B32F07927B0AFCEF107D69A0_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// var go = CreateGameObject();
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41));
		// go.name = name;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0;
		String_t* L_2 = ___name0;
		NullCheck((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		// return go;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_1;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::CreateGameObject(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ARTrackableManager_4_CreateGameObject_m75F459D4884378584581327FB11EB1758867B850_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	{
		// return CreateGameObject(GetTrackableName(trackableId));
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		String_t* L_1 = ((  String_t* (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42));
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43));
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::CreateTrackable(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateTrackable_mE90729B6B4E8DCE72ED40B186473996AD6A4A786_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_CreateTrackable_mE90729B6B4E8DCE72ED40B186473996AD6A4A786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// var go = CreateGameObject(trackableId);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44));
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_1;
		// var trackable = go.GetComponent<TTrackable>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45));
		V_1 = (RuntimeObject *)L_3;
		// if (trackable == null)
		RuntimeObject * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// trackable = go.AddComponent<TTrackable>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6);
		RuntimeObject * L_7 = ((  RuntimeObject * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 46)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 46));
		V_1 = (RuntimeObject *)L_7;
	}

IL_0024:
	{
		// return trackable;
		RuntimeObject * L_8 = V_1;
		return (RuntimeObject *)L_8;
	}
}
// TTrackable UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::CreateOrUpdateTrackable(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ARTrackableManager_4_CreateOrUpdateTrackable_mB9B59BF4255973AC89471718C0E88B7CE6BD9F77_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___sessionRelativeData0, const RuntimeMethod* method)
{
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		// var trackableId = sessionRelativeData.trackableId;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = XRTrackedImage_get_trackableId_m6EB6DBACC95E5EE2AFEE3CE421F4C123F32E9CB8_inline((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		V_0 = (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_0;
		// if (m_Trackables.TryGetValue(trackableId, out trackable))
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_1 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = V_0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_1);
		bool L_3 = ((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_1, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_2, (RuntimeObject **)(RuntimeObject **)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// m_PendingAdds.Remove(trackableId);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_4 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_PendingAdds_9();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = V_0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_4);
		((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_4, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		// trackable.pending = false;
		RuntimeObject * L_6 = V_1;
		NullCheck((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_6);
		((  void (*) (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_6, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		// trackable.SetSessionRelativeData(sessionRelativeData);
		RuntimeObject * L_7 = V_1;
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_8 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_7);
		((  void (*) (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48)->methodPointer)((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_7, (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48));
		// }
		goto IL_006d;
	}

IL_0045:
	{
		// trackable = CreateTrackable(trackableId);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_9 = V_0;
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49)->methodPointer)((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49));
		V_1 = (RuntimeObject *)L_10;
		// m_Trackables.Add(trackableId, trackable);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_11 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_8();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_12 = V_0;
		RuntimeObject * L_13 = V_1;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_11);
		((  void (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_11, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_12, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34));
		// trackable.SetSessionRelativeData(sessionRelativeData);
		RuntimeObject * L_14 = V_1;
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_15 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_14);
		((  void (*) (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48)->methodPointer)((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_14, (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48));
		// OnCreateTrackable(trackable);
		RuntimeObject * L_16 = V_1;
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		VirtActionInvoker1< RuntimeObject * >::Invoke(15 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::OnCreateTrackable(TTrackable) */, (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (RuntimeObject *)L_16);
	}

IL_006d:
	{
		// OnAfterSetSessionRelativeData(trackable, sessionRelativeData);
		RuntimeObject * L_17 = V_1;
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_18 = ___sessionRelativeData0;
		NullCheck((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this);
		VirtActionInvoker2< RuntimeObject *, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  >::Invoke(16 /* System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::OnAfterSetSessionRelativeData(TTrackable,TSessionRelativeData) */, (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 *)__this, (RuntimeObject *)L_17, (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_18);
		// trackable.OnAfterSetSessionRelativeData();
		RuntimeObject * L_19 = V_1;
		NullCheck((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_19);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::OnAfterSetSessionRelativeData() */, (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_19);
		// return trackable;
		RuntimeObject * L_20 = V_1;
		return (RuntimeObject *)L_20;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::DestroyTrackable(TTrackable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4_DestroyTrackable_mD72CF9F11D33C1A4D448457C0C5B5C409F6C1DFA_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, RuntimeObject * ___trackable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackableManager_4_DestroyTrackable_mD72CF9F11D33C1A4D448457C0C5B5C409F6C1DFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackable.destroyOnRemoval)
		RuntimeObject * L_0 = ___trackable0;
		NullCheck((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_0);
		bool L_1 = ((  bool (*) (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 53)->methodPointer)((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 53));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(trackable.gameObject);
		RuntimeObject * L_2 = ___trackable0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__ctor_m3F8201E207E67BFC577634976C51351297FDF1FB_gshared (ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 54)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 54));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_4__cctor_mAD24345ECB6F4B9733987879043EE3E819C79094_gshared (const RuntimeMethod* method)
{
	{
		// static List<TTrackable> s_Added = new List<TTrackable>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Added_10(L_0);
		// static List<TTrackable> s_Updated = new List<TTrackable>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Updated_11(L_1);
		// static List<TTrackable> s_Removed = new List<TTrackable>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		((ARTrackableManager_4_tFB4E4D902668BAA772D1AC6F223F5E1A761D7436_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 8)))->set_s_Removed_12(L_2);
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
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_destroyOnRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_destroyOnRemoval_m240C0563C87E1FF691989A8CE61CB3BEEA7237A5_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_DestroyOnRemoval; }
		bool L_0 = (bool)__this->get_m_DestroyOnRemoval_4();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::set_destroyOnRemoval(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_destroyOnRemoval_m616C98B07DC47EAB910998F60A7D651C7CFAD550_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_DestroyOnRemoval = value; }
		bool L_0 = ___value0;
		__this->set_m_DestroyOnRemoval_4(L_0);
		// set { m_DestroyOnRemoval = value; }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ARTrackable_2_get_trackableId_m3EDA2FA0A4FE8D9E144C84539D8271369C9F1194_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackableId; }
		NullCheck((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ((  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  (*) (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(&V_0), /*hidden argument*/NULL);
		return (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m8DDA904451BEE31E04C5D68271338034F142501E_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackingState; }
		NullCheck((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ((  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  (*) (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0;
		int32_t L_1 = BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_pending_mE695428ADD6ABB46C0E92FA62D0ABB298B626246_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = (bool)__this->get_U3CpendingU3Ek__BackingField_5();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::set_pending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_pending_mCF176D3A1863B872FF1B3EC1C5A2BADC46A89219_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = ___value0;
		__this->set_U3CpendingU3Ek__BackingField_5(L_0);
		return;
	}
}
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_sessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ARTrackable_2_get_sessionRelativeData_mFE48024B4CEE3C171C6A4F39A8B56E9FE102FF44_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )__this->get_U3CsessionRelativeDataU3Ek__BackingField_6();
		return (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::set_sessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_sessionRelativeData_mBD6C92E155183720E5EBB39F2115AA368E15B390_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___value0, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___value0;
		__this->set_U3CsessionRelativeDataU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::OnAfterSetSessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_OnAfterSetSessionRelativeData_mFF22CB848681F14A580185B0788D954384122C99_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::SetSessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_SetSessionRelativeData_m2080F3BBE132623AAC60340CF5D614180851BFF1_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___sessionRelativeData0, const RuntimeMethod* method)
{
	{
		// this.sessionRelativeData = sessionRelativeData;
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this);
		((  void (*) (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 *)__this, (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// transform.localPosition = sessionRelativeData.pose.position;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2.get_position_0();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/NULL);
		// transform.localRotation = sessionRelativeData.pose.rotation;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_5.get_rotation_1();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2__ctor_m62CDC50041B0E9D6D909F7B22EA19E4DC8430065_gshared (ARTrackable_2_t20DDFF842A33D6D4B1F1F5C17DEB3CC5032765F5 * __this, const RuntimeMethod* method)
{
	{
		// bool m_DestroyOnRemoval = true;
		__this->set_m_DestroyOnRemoval_4((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::get_destroyOnRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_destroyOnRemoval_m1170EA90673CED3C8214571039E8615C26A2FB1A_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_DestroyOnRemoval; }
		bool L_0 = (bool)__this->get_m_DestroyOnRemoval_4();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::set_destroyOnRemoval(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_destroyOnRemoval_mF740ADD1CAC0DA4765484C1EB432EBB8F231C145_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_DestroyOnRemoval = value; }
		bool L_0 = ___value0;
		__this->set_m_DestroyOnRemoval_4(L_0);
		// set { m_DestroyOnRemoval = value; }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ARTrackable_2_get_trackableId_m2C934C68AD2857DBBC724837836CEEB371210417_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, const RuntimeMethod* method)
{
	XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackableId; }
		NullCheck((ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 *)__this);
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_0 = ((  XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  (*) (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = XREnvironmentProbe_get_trackableId_m2F7F8DCE954C099E60807742B6A4B27DA2F30085_inline((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)(&V_0), /*hidden argument*/NULL);
		return (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m923D5143F86AA96A6DF2C6A705736D33EC1D09E2_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, const RuntimeMethod* method)
{
	XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackingState; }
		NullCheck((ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 *)__this);
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_0 = ((  XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  (*) (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_0;
		int32_t L_1 = XREnvironmentProbe_get_trackingState_m48BAAE58BF028382D00D5F49BA1F6023E53B0AF9_inline((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::get_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_pending_m79EBD30771613B5B06D6A32A24F81A90969A8140_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = (bool)__this->get_U3CpendingU3Ek__BackingField_5();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::set_pending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_pending_m4F9FA1013010AF300D0304C11F217F3CDCDB7A32_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = ___value0;
		__this->set_U3CpendingU3Ek__BackingField_5(L_0);
		return;
	}
}
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::get_sessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ARTrackable_2_get_sessionRelativeData_m6AA11ECAD21FA700EFB1CA0AA5930AC4847EFB97_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_0 = (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )__this->get_U3CsessionRelativeDataU3Ek__BackingField_6();
		return (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::set_sessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_sessionRelativeData_m331788B8E7504FBF67A42AACB74D62AFA20B1106_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___value0, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_0 = ___value0;
		__this->set_U3CsessionRelativeDataU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::OnAfterSetSessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_OnAfterSetSessionRelativeData_mE2B5E8A4B47DD8F29F91957F5549A4592E0281F2_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::SetSessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_SetSessionRelativeData_m5681905A574592B763317D2F6C8D3E25058AD98A_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___sessionRelativeData0, const RuntimeMethod* method)
{
	{
		// this.sessionRelativeData = sessionRelativeData;
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 *)__this);
		((  void (*) (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 *, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 *)__this, (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// transform.localPosition = sessionRelativeData.pose.position;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = XREnvironmentProbe_get_pose_m2CF6BF7E554B1225E99947B620D2C029499E7996_inline((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2.get_position_0();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/NULL);
		// transform.localRotation = sessionRelativeData.pose.rotation;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = XREnvironmentProbe_get_pose_m2CF6BF7E554B1225E99947B620D2C029499E7996_inline((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_5.get_rotation_1();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2__ctor_m9336CDE5641FF5A7C16E1F019B03EFA0E48CF867_gshared (ARTrackable_2_tFB5BC23D5FD3AB51B17B8063892C2549AEA887D2 * __this, const RuntimeMethod* method)
{
	{
		// bool m_DestroyOnRemoval = true;
		__this->set_m_DestroyOnRemoval_4((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_destroyOnRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_destroyOnRemoval_m5AD24E092994618D3CADD1A7D96B456F4105219A_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_DestroyOnRemoval; }
		bool L_0 = (bool)__this->get_m_DestroyOnRemoval_4();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::set_destroyOnRemoval(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_destroyOnRemoval_m6167853F28BAB9094166440BD513F886440E9EF8_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_DestroyOnRemoval = value; }
		bool L_0 = ___value0;
		__this->set_m_DestroyOnRemoval_4(L_0);
		// set { m_DestroyOnRemoval = value; }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ARTrackable_2_get_trackableId_mF13AABF6C72E2D4A3803F4371A1D671FCCE85CC7_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, const RuntimeMethod* method)
{
	XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackableId; }
		NullCheck((ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 *)__this);
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_0 = ((  XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  (*) (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )L_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = XRFace_get_trackableId_mC7AA3B622C6B16A9E8B5A3BEA524C7ED54A6188D_inline((XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 *)(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 *)(&V_0), /*hidden argument*/NULL);
		return (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_mB73A5B0361509D6414BF95205720C02D3FFDAD60_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, const RuntimeMethod* method)
{
	XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackingState; }
		NullCheck((ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 *)__this);
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_0 = ((  XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  (*) (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )L_0;
		int32_t L_1 = XRFace_get_trackingState_m29CA0D89354ACC65EF8A18C09201BCBB3F732E3B_inline((XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 *)(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_pending_mD8B9CB36781893663CF47A954EC5449ECBE0956F_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = (bool)__this->get_U3CpendingU3Ek__BackingField_5();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::set_pending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_pending_m7CA7B049892DA309A363C3235035450E1078D20F_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = ___value0;
		__this->set_U3CpendingU3Ek__BackingField_5(L_0);
		return;
	}
}
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_sessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ARTrackable_2_get_sessionRelativeData_m86D00AFA1F192983361240A9860FA46E4A65FD68_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_0 = (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )__this->get_U3CsessionRelativeDataU3Ek__BackingField_6();
		return (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::set_sessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_sessionRelativeData_mEE6C947C161A4FFB1CA66CB7A8C971DC979C0AEF_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___value0, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_0 = ___value0;
		__this->set_U3CsessionRelativeDataU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::OnAfterSetSessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_OnAfterSetSessionRelativeData_m3422E9F43237A05BA471CA275B3518AEDC4EF1CF_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::SetSessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_SetSessionRelativeData_mA8699A67076E8CDDA13D05016016A16E4564B0D4_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___sessionRelativeData0, const RuntimeMethod* method)
{
	{
		// this.sessionRelativeData = sessionRelativeData;
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 *)__this);
		((  void (*) (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 *, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 *)__this, (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// transform.localPosition = sessionRelativeData.pose.position;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = XRFace_get_pose_m3792AF11CBB24361529B7291ED46B9DD2970AC54_inline((XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 *)(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2.get_position_0();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/NULL);
		// transform.localRotation = sessionRelativeData.pose.rotation;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = XRFace_get_pose_m3792AF11CBB24361529B7291ED46B9DD2970AC54_inline((XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 *)(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_5.get_rotation_1();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2__ctor_mF397304E78D4262A5B673EDD733892DC2DD5CBF6_gshared (ARTrackable_2_tE4558CCBC5B711FE0CBCCC2E4DC1D9F0CA94E421 * __this, const RuntimeMethod* method)
{
	{
		// bool m_DestroyOnRemoval = true;
		__this->set_m_DestroyOnRemoval_4((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_destroyOnRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_destroyOnRemoval_mD9F886D802355DAEE28976311036A3C72743C4D5_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	{
		// get { return m_DestroyOnRemoval; }
		bool L_0 = (bool)__this->get_m_DestroyOnRemoval_4();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::set_destroyOnRemoval(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_destroyOnRemoval_m4222856469C4BF285B1D44AF1D49D5FB9D3C2CC4_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_DestroyOnRemoval = value; }
		bool L_0 = ___value0;
		__this->set_m_DestroyOnRemoval_4(L_0);
		// set { m_DestroyOnRemoval = value; }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ARTrackable_2_get_trackableId_mA1E01E7BE01E2155DA45D23208B94CB572AAB76F_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackableId; }
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ((  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = XRPointCloud_get_trackableId_mA394197EAD026665FC02A1118CBBB46FF6873EF1_inline((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&V_0), /*hidden argument*/NULL);
		return (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m13CF38343AF5B2EAA702BA43F9ABB23507FD4BD6_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackingState; }
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ((  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0;
		int32_t L_1 = XRPointCloud_get_trackingState_m0CE633649849B59E4AEA7875F62F0B34CA61FC96_inline((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_pending_mD5A90E670DC669155FA4AC5835BC49158D78D68C_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = (bool)__this->get_U3CpendingU3Ek__BackingField_5();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::set_pending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_pending_mE9E84C80F8B968A306041E6F072479B2B27A79A9_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = ___value0;
		__this->set_U3CpendingU3Ek__BackingField_5(L_0);
		return;
	}
}
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_sessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ARTrackable_2_get_sessionRelativeData_m4EA0DBAAFC4DC04A808A07DBD37FC6B1BD8343FC_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )__this->get_U3CsessionRelativeDataU3Ek__BackingField_6();
		return (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::set_sessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_sessionRelativeData_mD951215242833F2222881EB83FBC58E32BE39CBB_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___value0, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___value0;
		__this->set_U3CsessionRelativeDataU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::OnAfterSetSessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_OnAfterSetSessionRelativeData_m67EBF1170DC92D14AEA87D171BD2C5A666EED28B_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::SetSessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_SetSessionRelativeData_mD6656DBF8768A501367CEB6622D0E292873612D6_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___sessionRelativeData0, const RuntimeMethod* method)
{
	{
		// this.sessionRelativeData = sessionRelativeData;
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this);
		((  void (*) (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD *)__this, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// transform.localPosition = sessionRelativeData.pose.position;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = XRPointCloud_get_pose_m09C2DF1AD7F1220B547BD2EBCCA6E35F85A87EB0_inline((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2.get_position_0();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/NULL);
		// transform.localRotation = sessionRelativeData.pose.rotation;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = XRPointCloud_get_pose_m09C2DF1AD7F1220B547BD2EBCCA6E35F85A87EB0_inline((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_5.get_rotation_1();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2__ctor_m994EC29DC345835D5C7918E04503A3F38299DB3D_gshared (ARTrackable_2_tFF59B3769C01557C3557231CD2A26810E2867CCD * __this, const RuntimeMethod* method)
{
	{
		// bool m_DestroyOnRemoval = true;
		__this->set_m_DestroyOnRemoval_4((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_destroyOnRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_destroyOnRemoval_m3120AD348244253488BF717C98EA97B42314C138_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_DestroyOnRemoval; }
		bool L_0 = (bool)__this->get_m_DestroyOnRemoval_4();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::set_destroyOnRemoval(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_destroyOnRemoval_mBCD09F129423F0AB9636411A705CEA5A36E67B63_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_DestroyOnRemoval = value; }
		bool L_0 = ___value0;
		__this->set_m_DestroyOnRemoval_4(L_0);
		// set { m_DestroyOnRemoval = value; }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ARTrackable_2_get_trackableId_mFFA7DEA93924AC58597EEDE5219D83A64385BFC3_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackableId; }
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ((  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88_inline((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&V_0), /*hidden argument*/NULL);
		return (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_mDE18E4B73BA53CE50D30D09D2AF0FAA01830E012_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackingState; }
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ((  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0;
		int32_t L_1 = XRReferencePoint_get_trackingState_mBA0DB4050B734039D22D0ECF69CD6E8896DF52B8_inline((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_pending_mF8376324EEDEAD0720E15AE3ADD3658BDB8E1CCE_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = (bool)__this->get_U3CpendingU3Ek__BackingField_5();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::set_pending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_pending_m0BA69510AF3C1D159B894BC7219F65B2B5E874AA_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = ___value0;
		__this->set_U3CpendingU3Ek__BackingField_5(L_0);
		return;
	}
}
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_sessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ARTrackable_2_get_sessionRelativeData_mCEED169A398107E8AA21E58F63A85787D616E557_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )__this->get_U3CsessionRelativeDataU3Ek__BackingField_6();
		return (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::set_sessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_sessionRelativeData_m20215D9670CEFB6620172D1CDB2CB604086600FE_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___value0, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___value0;
		__this->set_U3CsessionRelativeDataU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::OnAfterSetSessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_OnAfterSetSessionRelativeData_m26499AAB3C277CD7490120B71C17DA2CF822B1AB_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::SetSessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_SetSessionRelativeData_m85B1EE2AB4E67ECAC5090120CACCEA139F87B961_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___sessionRelativeData0, const RuntimeMethod* method)
{
	{
		// this.sessionRelativeData = sessionRelativeData;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this);
		((  void (*) (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 *)__this, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// transform.localPosition = sessionRelativeData.pose.position;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C_inline((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2.get_position_0();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/NULL);
		// transform.localRotation = sessionRelativeData.pose.rotation;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C_inline((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_5.get_rotation_1();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2__ctor_mC178868B7A221F65AAA2B8BD8ADB5E8066EA3B33_gshared (ARTrackable_2_t88913A417566AF8EAF80C0FF131EC194E7A0E7B4 * __this, const RuntimeMethod* method)
{
	{
		// bool m_DestroyOnRemoval = true;
		__this->set_m_DestroyOnRemoval_4((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_destroyOnRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_destroyOnRemoval_mAC47D887C2EBB200EAF08C1F3CD3A3C3BF46BD40_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, const RuntimeMethod* method)
{
	{
		// get { return m_DestroyOnRemoval; }
		bool L_0 = (bool)__this->get_m_DestroyOnRemoval_4();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::set_destroyOnRemoval(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_destroyOnRemoval_mE7B9002760527AFD89321FDA6001BEDD401C5258_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_DestroyOnRemoval = value; }
		bool L_0 = ___value0;
		__this->set_m_DestroyOnRemoval_4(L_0);
		// set { m_DestroyOnRemoval = value; }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ARTrackable_2_get_trackableId_m4E36FF3339674AB991E5DDB845DA55E74CBA9BAB_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackableId; }
		NullCheck((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)__this);
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ((  XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  (*) (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = XRTrackedImage_get_trackableId_m6EB6DBACC95E5EE2AFEE3CE421F4C123F32E9CB8_inline((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(&V_0), /*hidden argument*/NULL);
		return (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m9663AF3C3BE3CDDE19D5E9F073FF39D076031190_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.trackingState; }
		NullCheck((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)__this);
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ((  XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  (*) (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_0;
		int32_t L_1 = XRTrackedImage_get_trackingState_mA7177B042E8F9F9B584582970BC5FF0377CE94DB_inline((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(&V_0), /*hidden argument*/NULL);
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackable_2_get_pending_m15D7B5C82C7AFCD0EFEF8C5AC2F6695C6848A228_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = (bool)__this->get_U3CpendingU3Ek__BackingField_5();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::set_pending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_pending_m66B6743C3D6A35D72071F1B121D01A43ED80D3DA_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool pending { get; internal set; }
		bool L_0 = ___value0;
		__this->set_U3CpendingU3Ek__BackingField_5(L_0);
		return;
	}
}
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_sessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ARTrackable_2_get_sessionRelativeData_mA454C5DD43D32A64A6526FC1B12B3D6DD698AB44_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )__this->get_U3CsessionRelativeDataU3Ek__BackingField_6();
		return (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::set_sessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_set_sessionRelativeData_mA8EB9D822C738206310CE4C8F25C68710D7A44C0_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___value0, const RuntimeMethod* method)
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ___value0;
		__this->set_U3CsessionRelativeDataU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::OnAfterSetSessionRelativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_OnAfterSetSessionRelativeData_m4CAB624AA212786872AAC72E25E1681C433EBF55_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::SetSessionRelativeData(TSessionRelativeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2_SetSessionRelativeData_m39905457C758C01AE836EEF7F8EA8300384FE1B5_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___sessionRelativeData0, const RuntimeMethod* method)
{
	{
		// this.sessionRelativeData = sessionRelativeData;
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ___sessionRelativeData0;
		NullCheck((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)__this);
		((  void (*) (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB *)__this, (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// transform.localPosition = sessionRelativeData.pose.position;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = XRTrackedImage_get_pose_m0566E087CA2DC99DF749E80277510C61DCF13186_inline((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2.get_position_0();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/NULL);
		// transform.localRotation = sessionRelativeData.pose.rotation;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = XRTrackedImage_get_pose_m0566E087CA2DC99DF749E80277510C61DCF13186_inline((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(&___sessionRelativeData0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_5.get_rotation_1();
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2__ctor_mAC756A38888072B3018663FD4838669DE61488B6_gshared (ARTrackable_2_tDC22DD8BD2173402258A323598A3378BE19FACCB * __this, const RuntimeMethod* method)
{
	{
		// bool m_DestroyOnRemoval = true;
		__this->set_m_DestroyOnRemoval_4((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
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
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::get_subsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_subsystem_m4B541054CC60E616694357611534CDDA7DC5D1A0_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::set_subsystem(TSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_set_subsystem_mA00C58E1449F1F4595096A92719D042649335843_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CsubsystemU3Ek__BackingField_4(L_0);
		return;
	}
}
// TSubsystemDescriptor UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_descriptor_m838B61F4A4E192402B0CB4BBDF223E105CA65E92_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// get { return (subsystem == null) ? null : subsystem.SubsystemDescriptor; }
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)L_1);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (RuntimeObject *)L_2;
	}

IL_001e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_CreateSubsystem_m40BC7594101BBED8B07F752B1B0A3AD7F2971F13_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemLifecycleManager_2_CreateSubsystem_m40BC7594101BBED8B07F752B1B0A3AD7F2971F13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// SubsystemManager.GetSubsystemDescriptors(s_SubsystemDescriptors);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		// if (s_SubsystemDescriptors.Count > 0)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		// var descriptor = s_SubsystemDescriptors[0];
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = ((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (RuntimeObject *)L_4;
		// if (s_SubsystemDescriptors.Count > 1)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = ((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		int32_t L_6 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		// Debug.LogWarningFormat("Multiple {0} found. Using {1}",
		//     typeof(TSubsystem).Name,
		//     descriptor.id);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 7)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_9, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_8;
		RuntimeObject * L_13 = V_0;
		NullCheck((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)L_13);
		String_t* L_14 = SubsystemDescriptor_get_id_m3C86DB10ED367BA8CCDEB1B82EA6259712BF3F4B_inline((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB((String_t*)_stringLiteral3342B21D08DB470F1A14F4B1318C15B43E9B7D64, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_12, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// return descriptor.Create();
		RuntimeObject * L_15 = V_0;
		NullCheck((SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 *)L_15);
		RuntimeObject * L_16 = ((  RuntimeObject * (*) (SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return (RuntimeObject *)L_16;
	}

IL_006c:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_17 = V_1;
		return (RuntimeObject *)L_17;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystemIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_mA14FBB6F49F5E6A16B3675A839828DA593DAA98D_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		// if (subsystem == null)
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		// subsystem = GetActiveSubsystemInstance();
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// if (subsystem != null)
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// m_CleanupSubsystemOnDestroy = false;
		__this->set_m_CleanupSubsystemOnDestroy_5((bool)0);
	}

IL_002d:
	{
		// if (subsystem == null)
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_3)
		{
			goto IL_0046;
		}
	}
	{
		// subsystem = CreateSubsystem();
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(4 /* TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystem() */, (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnEnable_m3943B3C80EEB388DDC079E25F129B645DD244617_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		// CreateSubsystemIfNecessary();
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// if (subsystem != null)
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// OnBeforeStart();
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnBeforeStart() */, (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		// subsystem.Start();
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.Subsystem::Start() */, (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)L_1);
		// OnAfterStart();
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnAfterStart() */, (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnDisable_m25006859B7FEE85010D68C57CE9D2C1F982C98D6_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		// if (subsystem != null)
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// subsystem.Stop();
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)L_1);
	}

IL_001d:
	{
		// }
		return;
	}
}
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::GetActiveSubsystemInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_GetActiveSubsystemInstance_m111564030E10E4CDB60F6EEE4B42D93189398028_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemLifecycleManager_2_GetActiveSubsystemInstance_m111564030E10E4CDB60F6EEE4B42D93189398028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * V_1 = NULL;
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_2 = NULL;
	{
		// TSubsystem activeSubsystem = null;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		// if (XRGeneralSettings.Instance != null && XRGeneralSettings.Instance.Manager != null)
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_0 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_2 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		NullCheck((XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 *)L_2);
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_3 = XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline((XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 *)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// XRLoader loader = XRGeneralSettings.Instance.Manager.activeLoader;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_5 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline(/*hidden argument*/NULL);
		NullCheck((XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 *)L_5);
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_6 = XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline((XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 *)L_5, /*hidden argument*/NULL);
		NullCheck((XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 *)L_6);
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_7 = XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline((XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 *)L_6, /*hidden argument*/NULL);
		V_1 = (XRLoader_t2574091AF57F902BF504098AB113416E8D15186A *)L_7;
		// if (loader != null)
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		// activeSubsystem = loader.GetLoadedSubsystem<TSubsystem>();
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_10 = V_1;
		NullCheck((XRLoader_t2574091AF57F902BF504098AB113416E8D15186A *)L_10);
		RuntimeObject * L_11 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16), (XRLoader_t2574091AF57F902BF504098AB113416E8D15186A *)L_10);
		V_0 = (RuntimeObject *)L_11;
	}

IL_0047:
	{
		// if (activeSubsystem == null)
		RuntimeObject * L_12 = V_0;
		if (L_12)
		{
			goto IL_006c;
		}
	}
	{
		// List<TSubsystem> subsystemInstances = new List<TSubsystem>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_13 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 17));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)(L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		V_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13;
		// SubsystemManager.GetInstances(subsystemInstances);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		// if (subsystemInstances.Count > 0)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15);
		int32_t L_16 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		// activeSubsystem = subsystemInstances[0];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_17 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_17);
		RuntimeObject * L_18 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_17, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		V_0 = (RuntimeObject *)L_18;
	}

IL_006c:
	{
		// return activeSubsystem;
		RuntimeObject * L_19 = V_0;
		return (RuntimeObject *)L_19;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnDestroy_m66F15685F03F120643E52A0A31D652A7A8E4C06F_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// if (m_CleanupSubsystemOnDestroy && subsystem != null)
		bool L_0 = (bool)__this->get_m_CleanupSubsystemOnDestroy_5();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// subsystem.Destroy();
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)L_2);
		Subsystem_Destroy_m1D65C2E3B540A9EC80E14BF0C7A2BE8CDCF887A4((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)L_2, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// subsystem = null;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_0;
		NullCheck((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 *)__this, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnBeforeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnBeforeStart_m92B2DBD4FBDA98CAF592A3AFB106A787C65F9CBA_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnAfterStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnAfterStart_m9C3FE75A04AEB036795995CE9B0D0C52452D882D_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__ctor_m0654A5B287B1F79A654C5EBCA3D2B846860D7623_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		// bool m_CleanupSubsystemOnDestroy = true;
		__this->set_m_CleanupSubsystemOnDestroy_5((bool)1);
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__cctor_mFD4705979438527626B155E085AAAB7A00672E63_gshared (const RuntimeMethod* method)
{
	{
		// static List<TSubsystemDescriptor> s_SubsystemDescriptors =
		//     new List<TSubsystemDescriptor>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		((SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->set_s_SubsystemDescriptors_6(L_0);
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
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___trackables0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackables == null)
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = ___trackables0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("trackables");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral82A90AF1B031C38ED3A670A840145127A9847AC4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_RuntimeMethod_var);
	}

IL_000e:
	{
		// m_Enumerator = trackables.GetEnumerator();
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_2 = ___trackables0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_2);
		Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565  L_3 = ((  Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565  (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Enumerator_0(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E_AdjustorThunk (RuntimeObject * __this, Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___trackables0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * _thisAdjusted = reinterpret_cast<Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *>(__this + _offset);
	Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E(_thisAdjusted, ___trackables0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	{
		// return m_Enumerator.MoveNext();
		Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * L_0 = (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *)__this->get_address_of_m_Enumerator_0();
		bool L_1 = Enumerator_MoveNext_m890B8F901F145198465113DD42AE25E14C70CDCE((Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *)(Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * _thisAdjusted = reinterpret_cast<Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *>(__this + _offset);
	return Enumerator_MoveNext_mF64DBEA38614B8A6E085DFC09DD2745BE2ACB9BE(_thisAdjusted, method);
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return m_Enumerator.Current.Value;
		Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * L_0 = (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *)__this->get_address_of_m_Enumerator_0();
		KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA  L_1 = Enumerator_get_Current_m38C9C9D29140B117ED566DED6347FB094D64B8DC_inline((Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *)(Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA )L_1;
		RuntimeObject * L_2 = KeyValuePair_2_get_Value_m50EBF22326CE6515205823F99977C50D1FCD0A19_inline((KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA *)(KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return (RuntimeObject *)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * _thisAdjusted = reinterpret_cast<Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *>(__this + _offset);
	return Enumerator_get_Current_m6D82C8CA15561A8D32BA77CB304C80AF57C4C77E(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1_gshared (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * __this, const RuntimeMethod* method)
{
	{
		// m_Enumerator.Dispose();
		Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * L_0 = (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *)__this->get_address_of_m_Enumerator_0();
		Enumerator_Dispose_mDD09D00434936641131DA87032FE91597056CE77((Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *)(Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED * _thisAdjusted = reinterpret_cast<Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED *>(__this + _offset);
	Enumerator_Dispose_mF07BD32148859A94677FFD43184E38A82F7916C1(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method)
{
	{
		// return new Enumerator(m_Trackables);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_0();
		Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m1436C7540CC7C5E630A94069A2F8A386DA5B572E((&L_1), (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED )L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_t3CA35B0FF0588CA447157731D78AC026FF3FA6ED  TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *>(__this + _offset);
	return TrackableCollection_1_GetEnumerator_mBAA3D036F160A053757196D57318EC6B3F368D02(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___trackables0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackables == null)
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = ___trackables0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("trackables");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral82A90AF1B031C38ED3A670A840145127A9847AC4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_RuntimeMethod_var);
	}

IL_000e:
	{
		// m_Trackables = trackables;
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_2 = ___trackables0;
		__this->set_m_Trackables_0(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF_AdjustorThunk (RuntimeObject * __this, Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * ___trackables0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *>(__this + _offset);
	TrackableCollection_1__ctor_mA99D3D41CAA02EF94BD2B96D6DC1B66450E226FF(_thisAdjusted, ___trackables0, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Trackables == null)
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("This collection has not been initialized.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, (String_t*)_stringLiteral86EB3EF4A80C553E3CF57C02680D2F68C1D5641F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_RuntimeMethod_var);
	}

IL_0013:
	{
		// return m_Trackables.Count;
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_2 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_0();
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_2);
		int32_t L_3 = ((  int32_t (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (int32_t)L_3;
	}
}
IL2CPP_EXTERN_C  int32_t TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *>(__this + _offset);
	return TrackableCollection_1_get_count_mDAAAFD7E750C4885E2EE0322FC84C7EC7826C82C(_thisAdjusted, method);
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (m_Trackables == null)
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("This collection has not been initialized.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, (String_t*)_stringLiteral86EB3EF4A80C553E3CF57C02680D2F68C1D5641F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_RuntimeMethod_var);
	}

IL_0013:
	{
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		// return m_Trackables[trackableId];
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_2 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_0();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_3 = ___trackableId0;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_2, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_4;
		goto IL_003b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Collections.Generic.KeyNotFoundException)
		// catch (KeyNotFoundException e)
		V_1 = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 *)((KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 *)__exception_local);
		// throw new KeyNotFoundException(
		//     string.Format("Trackable with id {0} does not exist in this collection.", trackableId),
		//     e);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_5 = ___trackableId0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = L_5;
		RuntimeObject * L_7 = Box(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)_stringLiteral830CB8C252B57EFF127DE755CBF5A089999CEF61, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * L_9 = V_1;
		KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * L_10 = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 *)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m62266FD7195B82ED3C3005991CDDA4C0C655F48C(L_10, (String_t*)L_8, (Exception_t *)L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_003b:
	{
		// }
		RuntimeObject * L_11 = V_0;
		return (RuntimeObject *)L_11;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *>(__this + _offset);
	return TrackableCollection_1_get_Item_m2364AB8C6AC2D938F7B1BF95B6CF2EB821E02667(_thisAdjusted, ___trackableId0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_gshared (TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Trackables == null)
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_0 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("This collection has not been initialized.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, (String_t*)_stringLiteral86EB3EF4A80C553E3CF57C02680D2F68C1D5641F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_RuntimeMethod_var);
	}

IL_0013:
	{
		// return m_Trackables.TryGetValue(trackableId, out trackable);
		Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * L_2 = (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)__this->get_m_Trackables_0();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_3 = ___trackableId0;
		RuntimeObject ** L_4 = ___trackable1;
		NullCheck((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_2);
		bool L_5 = ((  bool (*) (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE *)L_2, (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 )L_3, (RuntimeObject **)(RuntimeObject **)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4F672148E28A41F14EAE569661A96270A528E608 *>(__this + _offset);
	return TrackableCollection_1_TryGetTrackable_m32817DD4F4B8853824F9C48709E001E97D0D34E1(_thisAdjusted, ___trackableId0, ___trackable1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>::OnKeepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise_OnKeepWaiting_mA27FCE26D39C737B0D39189A21C594C7FBBC67AD_gshared (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * __this, const RuntimeMethod* method)
{
	{
		// protected override void OnKeepWaiting() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise__ctor_m3C23D5D554693193E9D774F01AAFDD5D42C248DC_gshared (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * __this, int32_t ___immediateResult0, const RuntimeMethod* method)
{
	{
		// public ImmediatePromise(T immediateResult)
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// Resolve(immediateResult);
		int32_t L_0 = ___immediateResult0;
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>::OnKeepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise_OnKeepWaiting_mD1171A9214048BBB743143B236981281DA7F58B4_gshared (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * __this, const RuntimeMethod* method)
{
	{
		// protected override void OnKeepWaiting() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise__ctor_mE88D02E2D6748FD79DC319981EEA9737025B98D5_gshared (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * __this, RuntimeObject * ___immediateResult0, const RuntimeMethod* method)
{
	{
		// public ImmediatePromise(T immediateResult)
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// Resolve(immediateResult);
		RuntimeObject * L_0 = ___immediateResult0;
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Promise_1_get_keepWaiting_mB7B580185D69F835FCA4E8DA20527FF6FC537ED4_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method)
{
	{
		// OnKeepWaiting();
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::OnKeepWaiting() */, (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		// return !m_Complete;
		bool L_0 = (bool)__this->get_m_Complete_1();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// T UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Promise_1_get_result_m369355E10FC5D95CDE097DD715AC0E18DA725AFB_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method)
{
	{
		// public T result { get; private set; }
		int32_t L_0 = (int32_t)__this->get_U3CresultU3Ek__BackingField_0();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::set_result(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_set_result_mBBDFBF348B06877416B4E792897ADFE5E8CA0D5C_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public T result { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CresultU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared (int32_t ___result0, const RuntimeMethod* method)
{
	{
		// return new ImmediatePromise(result);
		int32_t L_0 = ___result0;
		ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * L_1 = (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_1, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::Resolve(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_Resolve_m504DCDC94B2BA352C3AC50DCB2549CAA67C015FB_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	{
		// this.result = result;
		int32_t L_0 = ___result0;
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// m_Complete = true;
		__this->set_m_Complete_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1__ctor_m32E79F764B084F1C1978EDE2B76AD9F1A4CDD0BF_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this);
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Promise_1_get_keepWaiting_m3BC77691EF491FC7554898C044757953A1059AD7_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, const RuntimeMethod* method)
{
	{
		// OnKeepWaiting();
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::OnKeepWaiting() */, (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		// return !m_Complete;
		bool L_0 = (bool)__this->get_m_Complete_1();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// T UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Promise_1_get_result_mAAD49394CE2242EADC922830E32D2A76ECB73E2B_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, const RuntimeMethod* method)
{
	{
		// public T result { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CresultU3Ek__BackingField_0();
		return (RuntimeObject *)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::set_result(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_set_result_mB1D488EFEE0DA6A1C22CEE6363403E04AC9BD6B3_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public T result { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CresultU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * Promise_1_CreateResolvedPromise_mFEF2285EE72DED544C72E164300EBF4F51634667_gshared (RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		// return new ImmediatePromise(result);
		RuntimeObject * L_0 = ___result0;
		ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * L_1 = (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_1, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::Resolve(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_Resolve_mB8F668BC7267A97F759AB1B008C01BB404EA67BF_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		// this.result = result;
		RuntimeObject * L_0 = ___result0;
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// m_Complete = true;
		__this->set_m_Complete_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1__ctor_m4A14410F2E5858E437D0DD77CDEB8C4C09113C63_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this);
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this, /*hidden argument*/NULL);
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
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Added_1();
		return (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	return TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Updated_2();
		return (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	return TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	return TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_5 = ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_11 = ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * L_1 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Updated.Dispose();
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * L_2 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_0 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )__this->get_m_Added_1();
		return (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	return TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_0 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )__this->get_m_Updated_2();
		return (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	return TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	return TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_5 = ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_11 = ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_inline((TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_inline((TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * L_1 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mB40809DC629860F868E59D49C1A217628077DED5((NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Updated.Dispose();
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * L_2 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mB40809DC629860F868E59D49C1A217628077DED5((NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_inline((TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_0 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )__this->get_m_Added_1();
		return (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + _offset);
	return TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_0 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )__this->get_m_Updated_2();
		return (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + _offset);
	return TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + _offset);
	return TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_5 = ((  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  (*) (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_11 = ((  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  (*) (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_inline((TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *)(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + _offset);
	TrackableChanges_1__ctor_m9D3306EC438EE09208F98E4F4049E615CC5E801E(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_gshared (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_inline((TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *)(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * L_1 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m343FC4D068AE0BA3141FDF70567F8BD2A752FF2D((NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Updated.Dispose();
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * L_2 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m343FC4D068AE0BA3141FDF70567F8BD2A752FF2D((NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_inline((TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *)(TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 *>(__this + _offset);
	TrackableChanges_1_Dispose_m8CB8D80766E7529B391391E43158D99E39220FF6(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Added_1();
		return (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	return TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Updated_2();
		return (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	return TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	return TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_5 = ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_11 = ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * L_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Updated.Dispose();
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * L_2 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Added_1();
		return (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	return TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Updated_2();
		return (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	return TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	return TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_5 = ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_11 = ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	TrackableChanges_1__ctor_m47C55466595329D4629E9A78A403D34C94AC30FC(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * L_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Updated.Dispose();
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * L_2 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Added_1();
		return (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Updated_2();
		return (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_5 = ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_11 = ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_mA4EA75E896603F2F8AF9908F15E9AA1A80253E2C_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * L_1 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Updated.Dispose();
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * L_2 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_mE178F5D0CDEEDF356425AD63AC753114DE793AD7_gshared (TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Running; }
		bool L_0 = (bool)__this->get_m_Running_1();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mF1761D396F2FC0B6BA3AA3F0DCDF7577A946B13A_gshared (TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this);
		((  void (*) (Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_m2AD16B5083036540DC1435F3081329B7DD36BADB_gshared (TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Running; }
		bool L_0 = (bool)__this->get_m_Running_1();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mD1B4842F29FB022CE1B973296BB4D7888A93835E_gshared (TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this);
		((  void (*) (Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_mA3B8A8D9F7E99E4EE1C1BDE3FD8B408C3825E6D8_gshared (TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Running; }
		bool L_0 = (bool)__this->get_m_Running_1();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7625CF45A30E7BA1C410ADCDD6556266E9BDE509_gshared (TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this);
		((  void (*) (Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_m6C093A1DAC5ED78C236F9B420478D248D4A38281_gshared (TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Running; }
		bool L_0 = (bool)__this->get_m_Running_1();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m90E4D38CB60953BC61F7EFCD9B846A9071C9DF4B_gshared (TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this);
		((  void (*) (Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_m2102054ECF2F148EF7E5285FF8113FDDB6F29FBE_gshared (TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Running; }
		bool L_0 = (bool)__this->get_m_Running_1();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7BED931B501BCE6534C3BC2DC0CA30C73E917F90_gshared (TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this);
		((  void (*) (Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_m6BB5084930534ADADDE2E3CB979D6833C916D31A_gshared (TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Running; }
		bool L_0 = (bool)__this->get_m_Running_1();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mE7AF1FD3521B4B3FE7D13D6BA44F324F0C0AC745_gshared (TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this);
		((  void (*) (Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ARSessionOrigin_get_trackablesParent_m37049D7E75CF694834A140C2EACB15D2D1098505_inline (ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * __this, const RuntimeMethod* method)
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CtrackablesParentU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRPointCloud_get_trackableId_mA394197EAD026665FC02A1118CBBB46FF6873EF1_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId { get { return m_TrackableId; } }
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_TrackableId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Id; }
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRTrackedImage_get_trackableId_m6EB6DBACC95E5EE2AFEE3CE421F4C123F32E9CB8_inline (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Id; }
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  BoundedPlane_get_trackableId_mD2A3DCDA61898E637ACAE0A0F4A832931378071A_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId { get { return m_TrackableId; } }
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_TrackableId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_m9B6467E433564ABE4BED9328F7B23AB05905B008_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState trackingState { get { return m_TrackingState; } }
		int32_t L_0 = __this->get_m_TrackingState_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  BoundedPlane_get_pose_m30B084D1F307CB46894BE4FAD448788001A0F0DF_inline (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose { get { return m_Pose; } }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XREnvironmentProbe_get_trackableId_m2F7F8DCE954C099E60807742B6A4B27DA2F30085_inline (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TrackableId; }
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_TrackableId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XREnvironmentProbe_get_trackingState_m48BAAE58BF028382D00D5F49BA1F6023E53B0AF9_inline (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TrackingState; }
		int32_t L_0 = __this->get_m_TrackingState_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XREnvironmentProbe_get_pose_m2CF6BF7E554B1225E99947B620D2C029499E7996_inline (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pose; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRFace_get_trackableId_mC7AA3B622C6B16A9E8B5A3BEA524C7ED54A6188D_inline (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TrackableId; }
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_TrackableId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRFace_get_trackingState_m29CA0D89354ACC65EF8A18C09201BCBB3F732E3B_inline (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TrackingState; }
		int32_t L_0 = __this->get_m_TrackingState_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRFace_get_pose_m3792AF11CBB24361529B7291ED46B9DD2970AC54_inline (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pose; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRPointCloud_get_trackingState_m0CE633649849B59E4AEA7875F62F0B34CA61FC96_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TrackingState; }
		int32_t L_0 = __this->get_m_TrackingState_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRPointCloud_get_pose_m09C2DF1AD7F1220B547BD2EBCCA6E35F85A87EB0_inline (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pose; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRReferencePoint_get_trackingState_mBA0DB4050B734039D22D0ECF69CD6E8896DF52B8_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TrackingState; }
		int32_t L_0 = __this->get_m_TrackingState_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C_inline (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pose; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t XRTrackedImage_get_trackingState_mA7177B042E8F9F9B584582970BC5FF0377CE94DB_inline (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TrackingState; }
		int32_t L_0 = __this->get_m_TrackingState_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRTrackedImage_get_pose_m0566E087CA2DC99DF749E80277510C61DCF13186_inline (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Pose; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SubsystemDescriptor_get_id_m3C86DB10ED367BA8CCDEB1B82EA6259712BF3F4B_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47Generics11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_0 = ((XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779_inline (XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_0 = __this->get_m_LoaderManagerInstance_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Added_1();
		return (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Updated_2();
		return (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Added_1();
		return (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Updated_2();
		return (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Added_1();
		return (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Updated_2();
		return (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA  Enumerator_get_Current_m38C9C9D29140B117ED566DED6347FB094D64B8DC_gshared_inline (Enumerator_tCB68C098BACB0B88BCB7C2F0AE3E42B10364C565 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA  L_0 = (KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA )__this->get_current_3();
		return (KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m50EBF22326CE6515205823F99977C50D1FCD0A19_gshared_inline (KeyValuePair_2_t9A2573A27EF4E0F718B4850FBA4E6B9113B0EACA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Added_1();
		return (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Updated_2();
		return (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_0 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )__this->get_m_Added_1();
		return (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_0 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )__this->get_m_Updated_2();
		return (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_added_m6C3AA173D63B8181A147527E5D607363D4D7E3B9_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_0 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )__this->get_m_Added_1();
		return (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  TrackableChanges_1_get_updated_m4DD6B31059055267B3F98F003F7891F74052267D_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_0 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )__this->get_m_Updated_2();
		return (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7C323DBD29E884085A21A82E9D5ABC458EF49AED_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mD2D689F21DCB8E4F238E18F88981D142C946CC69_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m032D3E111CF433FC5556450F581911649722CA1B_gshared_inline (TrackableChanges_1_t316F273AB927198D6305E965CDB7B0ED758920E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
