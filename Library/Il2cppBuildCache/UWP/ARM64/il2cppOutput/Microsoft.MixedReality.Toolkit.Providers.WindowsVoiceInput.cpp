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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tE53B250B7876B3E56E408C5CA22A803CF413477B;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t0E8AEAD57F4E842649411A16470AC632AB9C970D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.AudioClip>>
struct Func_2_tC68DB6EB17C52DC8C41E4D5AAA0FECD055491BAE;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_tB93032867275F6C802C3659FC027FF6FB1372359;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.AudioClip>
struct TaskFactory_1_tB7E2DE3003BEA542E8B70CE56103ABD1C976EA0C;
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_t6B24628ACC7E67C528C6F3A5F62982B253F27525;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD;
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[]
struct SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t1EA05E36F788958E2F8162D0A2A6D406491B4E39;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource
struct BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider
struct IMixedRealityFocusProvider_t7C682825A5C87666EDAF2330F246FB86FA0E9A9B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t3196307F098DCEFBD251512224039745B7F4B96B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t37E1E92066EA816628E60A45958488D2F5439D6D;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t291CCF315C184E755FF04AB8E7B66DB28067781D;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_tAB262576486142569677C6C85D90DAFEF030224C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_t9250226E948FE7E8708F92A1A2366DD2115C77FB;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_t0A8C82ACAABFCA9C53AD987FE328E5A97F273D98;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t9C76FCD6841393C37078E797873CE9AA799EB99E;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_tE7FE65F7EC936396CC9A34C2A3603587AA9DC121;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_t0241AD4A8B1DABC5653ADDF694E4F11B806B2515;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c
struct U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31
struct U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7
struct U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10
struct U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8
struct U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12
struct U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral189013BD92021E16C75329951B42E7538D7E67D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1FBA00525F2CB885816773C3D2AC5C17D742A707;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9BB892AE8F267E8FB87B58FC66D97F0D8F35F8;
IL2CPP_EXTERN_C String_t* _stringLiteral41FC95C9B01C6E1BB2995C44E826A25782B17ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE31E0969D861DE596FAB10AFDD13C658F0B1A7;
IL2CPP_EXTERN_C String_t* _stringLiteral504063796676558304FA9BFB772485E3FB358E39;
IL2CPP_EXTERN_C String_t* _stringLiteral58094DFD982E8F83C13584471CA99E2D492D58A7;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB6674A4E84DAEC0356B7F29B4F3C8141D3AE47;
IL2CPP_EXTERN_C String_t* _stringLiteral5FDAD51AB222641CF457DB377588944EDB3E4986;
IL2CPP_EXTERN_C String_t* _stringLiteral66567CDCC7582D19AC6F27568F55ED3656B1F5DC;
IL2CPP_EXTERN_C String_t* _stringLiteral6A692985631DF10AA6C652745BE0175D785AE8A5;
IL2CPP_EXTERN_C String_t* _stringLiteral6B91DB38E514CD95D08ED56D631AF663640D0691;
IL2CPP_EXTERN_C String_t* _stringLiteral9CC9201FF3A30F167E478C97EF7FAE9D5B9255CB;
IL2CPP_EXTERN_C String_t* _stringLiteralA3B2C65B41F0F7E70A61575320F673B019D25FBC;
IL2CPP_EXTERN_C String_t* _stringLiteralAA0C0110228B2778F846E1D743D5D5CC1A6D73A4;
IL2CPP_EXTERN_C String_t* _stringLiteralBDB82FA753B97ED58FA2A451CE549D9C1BBEAD4D;
IL2CPP_EXTERN_C String_t* _stringLiteralC4373752820EFFF9B79520956C83459F4F0E4643;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6DECC329FCEE51F37E6EC8FEC3066A97185282;
IL2CPP_EXTERN_C String_t* _stringLiteralE15B7D6432B76BC9BA11BCEFAB6C9B25F1A4D40A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434;
IL2CPP_EXTERN_C String_t* _stringLiteralF9549835CCB023C006F6F8DCF4409D6EDFA36592;
IL2CPP_EXTERN_C String_t* _stringLiteralFC1D834D3337354218D057F130315C2FDF06B3CB;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m9C6B056CD99D33410B89C087D23E7B73A0E8C3F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m6438FCEF9125A693A0B6E7C189370E94641A365C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m13E931EC8E7ED47A810CD3DBA2107CE88B96D816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mC888A31494DA8E24FCC132F3E3C2E585030F8BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m2A39FEBAECCD703E9542C48DE6048693F17E1C2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m5DEE8BD64EA4EA2CE680ECC9A4CB4B34E7272FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_m13F1A0250150FF0A64860BA38172DBB27D7B7C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_mC38347D8C1130DBD20F08C50E4E23B29EF2E258A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_mA2013DC790084E5BBB2CC13E17D07A49CEA43890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_m6C28F8A861F124D455224A4B12C4FC4EDF550FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_mDC7098AEC669128E2F138FCC752F00C1FEA3DDAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_mEC4AE04A423CFA31160F9811C1C3A0B2CBC1A0DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_m4500AE9AF3D1183D923FEE4B05759D1580DFFD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_mBA501DA297D61A3472386E2D973837F5BEFEA002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_set_Registrar_m4F518E83D062179E33E0AFC630A92B09F2D9AE26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_0_m28B195F4838C08E4E7B824F56B2EC54C9EE49E2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_1_m5AE96B78E04956CADF287FC92EE7CE5D2A6AE355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_2_mD25E72EE0A23D2F7F274F4F30E2F818C4C60AB45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_3_m4FBFB1081A9B70AEAB6D61B61C9BF1E31D6D09B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mE04742A7A151B920A24137B5F00040035EBEF63E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationError_m33F98B0DC284F4887C115640EA5F5BFCEBA164EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mFD3ACEE3BB06255C8DE84B1136CDB8AC234174D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationResult_m067B2232436F0915B51BFB0D074002BB37190719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6DC1BCB77986C5796959EEF012B0DAD125326BE2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_com;
struct SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2;
struct SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t49A490844A2A6FDCF4FAE0481776B471E30D47EA 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c
struct U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<>9
	U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<>9__1_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__1_0_1;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<>9__1_1
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__1_1_2;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<>9__1_2
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__1_2_3;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<>9__1_3
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__1_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields, ___U3CU3E9__1_2_3)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__1_2_3() const { return ___U3CU3E9__1_2_3; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__1_2_3() { return &___U3CU3E9__1_2_3; }
	inline void set_U3CU3E9__1_2_3(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__1_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields, ___U3CU3E9__1_3_4)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__1_3_4() const { return ___U3CU3E9__1_3_4; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__1_3_4() { return &___U3CU3E9__1_3_4; }
	inline void set_U3CU3E9__1_3_4(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__1_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_3_4), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>
struct TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93, ___m_task_0)); }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>
struct AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28, ___m_task_2)); }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_t4F9338F24376C00A42FB9194C9B340D42FD9424B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t4F9338F24376C00A42FB9194C9B340D42FD9424B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t6AC8C31BC7161427E9FCC65350B7AB6350B79BFB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t6AC8C31BC7161427E9FCC65350B7AB6350B79BFB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// UnityEngine.Windows.Speech.ConfidenceLevel
struct ConfidenceLevel_t1961445160E273E8B221599F4596C7B1A56CACE3 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.ConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceLevel_t1961445160E273E8B221599F4596C7B1A56CACE3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Windows.Speech.DictationCompletionCause
struct DictationCompletionCause_tADA68D91510F726A21B7F6CF5F5A35A310F7C028 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.DictationCompletionCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DictationCompletionCause_tADA68D91510F726A21B7F6CF5F5A35A310F7C028, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.DictationRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationHypothesis
	DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * ___DictationHypothesis_1;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationResult
	DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * ___DictationResult_2;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationComplete
	DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * ___DictationComplete_3;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler UnityEngine.Windows.Speech.DictationRecognizer::DictationError
	DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * ___DictationError_4;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesis_1() { return static_cast<int32_t>(offsetof(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B, ___DictationHypothesis_1)); }
	inline DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * get_DictationHypothesis_1() const { return ___DictationHypothesis_1; }
	inline DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 ** get_address_of_DictationHypothesis_1() { return &___DictationHypothesis_1; }
	inline void set_DictationHypothesis_1(DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * value)
	{
		___DictationHypothesis_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationHypothesis_1), (void*)value);
	}

	inline static int32_t get_offset_of_DictationResult_2() { return static_cast<int32_t>(offsetof(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B, ___DictationResult_2)); }
	inline DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * get_DictationResult_2() const { return ___DictationResult_2; }
	inline DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D ** get_address_of_DictationResult_2() { return &___DictationResult_2; }
	inline void set_DictationResult_2(DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * value)
	{
		___DictationResult_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationResult_2), (void*)value);
	}

	inline static int32_t get_offset_of_DictationComplete_3() { return static_cast<int32_t>(offsetof(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B, ___DictationComplete_3)); }
	inline DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * get_DictationComplete_3() const { return ___DictationComplete_3; }
	inline DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC ** get_address_of_DictationComplete_3() { return &___DictationComplete_3; }
	inline void set_DictationComplete_3(DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * value)
	{
		___DictationComplete_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationComplete_3), (void*)value);
	}

	inline static int32_t get_offset_of_DictationError_4() { return static_cast<int32_t>(offsetof(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B, ___DictationError_4)); }
	inline DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * get_DictationError_4() const { return ___DictationError_4; }
	inline DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 ** get_address_of_DictationError_4() { return &___DictationError_4; }
	inline void set_DictationError_4(DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * value)
	{
		___DictationError_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationError_4), (void*)value);
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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

// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_tC054F14B0D86BA0C97E14A2D2EF20C89834401D2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_tC054F14B0D86BA0C97E14A2D2EF20C89834401D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
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


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct MixedRealityCapability_t907E230EBBE1633D922DB880EDB612E3026A8650 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t907E230EBBE1633D922DB880EDB612E3026A8650, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhraseRecognized_1), (void*)value);
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_t5E3D9BFFCECBCC8588F02F2EBA4B71AB534B525D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t5E3D9BFFCECBCC8588F02F2EBA4B71AB534B525D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.SpeechSystemStatus
struct SpeechSystemStatus_t9D1FF73360901F27A8117402D1F5BCC7E1309BF5 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.SpeechSystemStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechSystemStatus_t9D1FF73360901F27A8117402D1F5BCC7E1309BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468  : public BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tE53B250B7876B3E56E408C5CA22A803CF413477B  : public BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tE53B250B7876B3E56E408C5CA22A803CF413477B, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tE53B250B7876B3E56E408C5CA22A803CF413477B, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5, ___m_result_22)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_result_22() const { return ___m_result_22; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tB7E2DE3003BEA542E8B70CE56103ABD1C976EA0C * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC68DB6EB17C52DC8C41E4D5AAA0FECD055491BAE * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tB7E2DE3003BEA542E8B70CE56103ABD1C976EA0C * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tB7E2DE3003BEA542E8B70CE56103ABD1C976EA0C ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tB7E2DE3003BEA542E8B70CE56103ABD1C976EA0C * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tC68DB6EB17C52DC8C41E4D5AAA0FECD055491BAE * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tC68DB6EB17C52DC8C41E4D5AAA0FECD055491BAE ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tC68DB6EB17C52DC8C41E4D5AAA0FECD055491BAE * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource
struct BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource::<Pointers>k__BackingField
	IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2* ___U3CPointersU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource::<SourceType>k__BackingField
	int32_t ___U3CSourceTypeU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource::FocusProvider
	RuntimeObject* ___FocusProvider_4;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036, ___U3CSourceIdU3Ek__BackingField_0)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_0() const { return ___U3CSourceIdU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_0() { return &___U3CSourceIdU3Ek__BackingField_0; }
	inline void set_U3CSourceIdU3Ek__BackingField_0(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036, ___U3CSourceNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_1() const { return ___U3CSourceNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_1() { return &___U3CSourceNameU3Ek__BackingField_1; }
	inline void set_U3CSourceNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036, ___U3CPointersU3Ek__BackingField_2)); }
	inline IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2* get_U3CPointersU3Ek__BackingField_2() const { return ___U3CPointersU3Ek__BackingField_2; }
	inline IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2** get_address_of_U3CPointersU3Ek__BackingField_2() { return &___U3CPointersU3Ek__BackingField_2; }
	inline void set_U3CPointersU3Ek__BackingField_2(IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2* value)
	{
		___U3CPointersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointersU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036, ___U3CSourceTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CSourceTypeU3Ek__BackingField_3() const { return ___U3CSourceTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSourceTypeU3Ek__BackingField_3() { return &___U3CSourceTypeU3Ek__BackingField_3; }
	inline void set_U3CSourceTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CSourceTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_FocusProvider_4() { return static_cast<int32_t>(offsetof(BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036, ___FocusProvider_4)); }
	inline RuntimeObject* get_FocusProvider_4() const { return ___FocusProvider_4; }
	inline RuntimeObject** get_address_of_FocusProvider_4() { return &___FocusProvider_4; }
	inline void set_FocusProvider_4(RuntimeObject* value)
	{
		___FocusProvider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FocusProvider_4), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F  : public PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF 
{
public:
	// UnityEngine.Windows.Speech.ConfidenceLevel UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::confidence
	int32_t ___confidence_0;
	// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::semanticMeanings
	SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD* ___semanticMeanings_1;
	// System.String UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::text
	String_t* ___text_2;
	// System.DateTime UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseStartTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime_3;
	// System.TimeSpan UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseDuration
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration_4;

public:
	inline static int32_t get_offset_of_confidence_0() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___confidence_0)); }
	inline int32_t get_confidence_0() const { return ___confidence_0; }
	inline int32_t* get_address_of_confidence_0() { return &___confidence_0; }
	inline void set_confidence_0(int32_t value)
	{
		___confidence_0 = value;
	}

	inline static int32_t get_offset_of_semanticMeanings_1() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___semanticMeanings_1)); }
	inline SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD* get_semanticMeanings_1() const { return ___semanticMeanings_1; }
	inline SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD** get_address_of_semanticMeanings_1() { return &___semanticMeanings_1; }
	inline void set_semanticMeanings_1(SemanticMeaningU5BU5D_t7BA8135E11B4D0C1065824DA86D4B3DB63A5B4DD* value)
	{
		___semanticMeanings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___semanticMeanings_1), (void*)value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_phraseStartTime_3() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___phraseStartTime_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_phraseStartTime_3() const { return ___phraseStartTime_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_phraseStartTime_3() { return &___phraseStartTime_3; }
	inline void set_phraseStartTime_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___phraseStartTime_3 = value;
	}

	inline static int32_t get_offset_of_phraseDuration_4() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF, ___phraseDuration_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_phraseDuration_4() const { return ___phraseDuration_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_phraseDuration_4() { return &___phraseDuration_4; }
	inline void set_phraseDuration_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___phraseDuration_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF_marshaled_pinvoke
{
	int32_t ___confidence_0;
	SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_pinvoke* ___semanticMeanings_1;
	char* ___text_2;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime_3;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration_4;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF_marshaled_com
{
	int32_t ___confidence_0;
	SemanticMeaning_t5AEB02C787CA22E278A1E6D32FDA7CCA378F86E3_marshaled_com* ___semanticMeanings_1;
	Il2CppChar* ___text_2;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime_3;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration_4;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31
struct U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::<>4__this
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::<>u__1
	TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7
struct U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::listener
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener_2;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::initialSilenceTimeout
	float ___initialSilenceTimeout_3;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::autoSilenceTimeout
	float ___autoSilenceTimeout_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::recordingTime
	int32_t ___recordingTime_5;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::micDeviceName
	String_t* ___micDeviceName_6;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::<>4__this
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * ___U3CU3E4__this_7;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_listener_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C, ___listener_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_listener_2() const { return ___listener_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_listener_2() { return &___listener_2; }
	inline void set_listener_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___listener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_2), (void*)value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C, ___initialSilenceTimeout_3)); }
	inline float get_initialSilenceTimeout_3() const { return ___initialSilenceTimeout_3; }
	inline float* get_address_of_initialSilenceTimeout_3() { return &___initialSilenceTimeout_3; }
	inline void set_initialSilenceTimeout_3(float value)
	{
		___initialSilenceTimeout_3 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C, ___autoSilenceTimeout_4)); }
	inline float get_autoSilenceTimeout_4() const { return ___autoSilenceTimeout_4; }
	inline float* get_address_of_autoSilenceTimeout_4() { return &___autoSilenceTimeout_4; }
	inline void set_autoSilenceTimeout_4(float value)
	{
		___autoSilenceTimeout_4 = value;
	}

	inline static int32_t get_offset_of_recordingTime_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C, ___recordingTime_5)); }
	inline int32_t get_recordingTime_5() const { return ___recordingTime_5; }
	inline int32_t* get_address_of_recordingTime_5() { return &___recordingTime_5; }
	inline void set_recordingTime_5(int32_t value)
	{
		___recordingTime_5 = value;
	}

	inline static int32_t get_offset_of_micDeviceName_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C, ___micDeviceName_6)); }
	inline String_t* get_micDeviceName_6() const { return ___micDeviceName_6; }
	inline String_t** get_address_of_micDeviceName_6() { return &___micDeviceName_6; }
	inline void set_micDeviceName_6(String_t* value)
	{
		___micDeviceName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___micDeviceName_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C, ___U3CU3E4__this_7)); }
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8
struct U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::<>4__this
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::<>u__1
	TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12
struct U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::<>t__builder
	AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::<>4__this
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * ___U3CU3E4__this_2;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::<>s__1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3Es__1_3;
	// System.Object Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::<>u__1
	RuntimeObject * ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1, ___U3CU3Es__1_3)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3Es__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1, ___U3CU3Eu__1_4)); }
	inline RuntimeObject * get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(RuntimeObject * value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_4), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A  : public BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t1EA05E36F788958E2F8162D0A2A6D406491B4E39* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t0E8AEAD57F4E842649411A16470AC632AB9C970D * ___activePointersToConfig_17;

public:
	inline static int32_t get_offset_of_enablePointerCache_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A, ___enablePointerCache_14)); }
	inline bool get_enablePointerCache_14() const { return ___enablePointerCache_14; }
	inline bool* get_address_of_enablePointerCache_14() { return &___enablePointerCache_14; }
	inline void set_enablePointerCache_14(bool value)
	{
		___enablePointerCache_14 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A, ___pointerConfigurations_15)); }
	inline PointerConfigU5BU5D_t1EA05E36F788958E2F8162D0A2A6D406491B4E39* get_pointerConfigurations_15() const { return ___pointerConfigurations_15; }
	inline PointerConfigU5BU5D_t1EA05E36F788958E2F8162D0A2A6D406491B4E39** get_address_of_pointerConfigurations_15() { return &___pointerConfigurations_15; }
	inline void set_pointerConfigurations_15(PointerConfigU5BU5D_t1EA05E36F788958E2F8162D0A2A6D406491B4E39* value)
	{
		___pointerConfigurations_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_15), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_17() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A, ___activePointersToConfig_17)); }
	inline Dictionary_2_t0E8AEAD57F4E842649411A16470AC632AB9C970D * get_activePointersToConfig_17() const { return ___activePointersToConfig_17; }
	inline Dictionary_2_t0E8AEAD57F4E842649411A16470AC632AB9C970D ** get_address_of_activePointersToConfig_17() { return &___activePointersToConfig_17; }
	inline void set_activePointersToConfig_17(Dictionary_2_t0E8AEAD57F4E842649411A16470AC632AB9C970D * value)
	{
		___activePointersToConfig_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_17), (void*)value);
	}
};

struct BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_20;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_StaticFields, ___RequestPointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_16() const { return ___RequestPointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_16() { return &___RequestPointersPerfMarker_16; }
	inline void set_RequestPointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_18() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_StaticFields, ___RecyclePointersPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_18() const { return ___RecyclePointersPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_18() { return &___RecyclePointersPerfMarker_18; }
	inline void set_RecyclePointersPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_StaticFields, ___CreatePointerPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_19() const { return ___CreatePointerPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_19() { return &___CreatePointerPerfMarker_19; }
	inline void set_CreatePointerPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_20() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_StaticFields, ___CleanActivePointersPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_20() const { return ___CleanActivePointersPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_20() { return &___CleanActivePointersPerfMarker_20; }
	inline void set_CleanActivePointersPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_20 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56, ___action_4)); }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_marshaled_com ___action_4;
};

// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10
struct U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::listener
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener_2;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::initialSilenceTimeout
	float ___initialSilenceTimeout_3;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::autoSilenceTimeout
	float ___autoSilenceTimeout_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::recordingTime
	int32_t ___recordingTime_5;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::micDeviceName
	String_t* ___micDeviceName_6;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<>4__this
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * ___U3CU3E4__this_7;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<>s__1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3Es__1_8;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<minSamplingRate>5__2
	int32_t ___U3CminSamplingRateU3E5__2_9;
	// System.Object Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::<>u__1
	RuntimeObject * ___U3CU3Eu__1_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_listener_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___listener_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_listener_2() const { return ___listener_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_listener_2() { return &___listener_2; }
	inline void set_listener_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___listener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_2), (void*)value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___initialSilenceTimeout_3)); }
	inline float get_initialSilenceTimeout_3() const { return ___initialSilenceTimeout_3; }
	inline float* get_address_of_initialSilenceTimeout_3() { return &___initialSilenceTimeout_3; }
	inline void set_initialSilenceTimeout_3(float value)
	{
		___initialSilenceTimeout_3 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___autoSilenceTimeout_4)); }
	inline float get_autoSilenceTimeout_4() const { return ___autoSilenceTimeout_4; }
	inline float* get_address_of_autoSilenceTimeout_4() { return &___autoSilenceTimeout_4; }
	inline void set_autoSilenceTimeout_4(float value)
	{
		___autoSilenceTimeout_4 = value;
	}

	inline static int32_t get_offset_of_recordingTime_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___recordingTime_5)); }
	inline int32_t get_recordingTime_5() const { return ___recordingTime_5; }
	inline int32_t* get_address_of_recordingTime_5() { return &___recordingTime_5; }
	inline void set_recordingTime_5(int32_t value)
	{
		___recordingTime_5 = value;
	}

	inline static int32_t get_offset_of_micDeviceName_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___micDeviceName_6)); }
	inline String_t* get_micDeviceName_6() const { return ___micDeviceName_6; }
	inline String_t** get_address_of_micDeviceName_6() { return &___micDeviceName_6; }
	inline void set_micDeviceName_6(String_t* value)
	{
		___micDeviceName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___micDeviceName_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___U3CU3E4__this_7)); }
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___U3CU3Es__1_8)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3Es__1_8() const { return ___U3CU3Es__1_8; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3Es__1_8() { return &___U3CU3Es__1_8; }
	inline void set_U3CU3Es__1_8(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3Es__1_8 = value;
	}

	inline static int32_t get_offset_of_U3CminSamplingRateU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___U3CminSamplingRateU3E5__2_9)); }
	inline int32_t get_U3CminSamplingRateU3E5__2_9() const { return ___U3CminSamplingRateU3E5__2_9; }
	inline int32_t* get_address_of_U3CminSamplingRateU3E5__2_9() { return &___U3CminSamplingRateU3E5__2_9; }
	inline void set_U3CminSamplingRateU3E5__2_9(int32_t value)
	{
		___U3CminSamplingRateU3E5__2_9 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_10() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70, ___U3CU3Eu__1_10)); }
	inline RuntimeObject * get_U3CU3Eu__1_10() const { return ___U3CU3Eu__1_10; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_10() { return &___U3CU3Eu__1_10; }
	inline void set_U3CU3Eu__1_10(RuntimeObject * value)
	{
		___U3CU3Eu__1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_10), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23  : public BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_t6B24628ACC7E67C528C6F3A5F62982B253F27525* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 * ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::shouldUseGraphicsRaycast
	bool ___shouldUseGraphicsRaycast_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_tE7FE65F7EC936396CC9A34C2A3603587AA9DC121 * ___inputActionsProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t9C76FCD6841393C37078E797873CE9AA799EB99E * ___inputActionRulesProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_t0241AD4A8B1DABC5653ADDF694E4F11B806B2515 * ___pointerProfile_13;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_t9250226E948FE7E8708F92A1A2366DD2115C77FB * ___gesturesProfile_14;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * ___supportedVoiceCultures_15;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * ___speechCommandsProfile_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_t291CCF315C184E755FF04AB8E7B66DB28067781D * ___controllerMappingProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_tAB262576486142569677C6C85D90DAFEF030224C * ___controllerVisualizationProfile_19;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_t0A8C82ACAABFCA9C53AD987FE328E5A97F273D98 * ___handTrackingProfile_20;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t6B24628ACC7E67C528C6F3A5F62982B253F27525* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t6B24628ACC7E67C528C6F3A5F62982B253F27525** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_t6B24628ACC7E67C528C6F3A5F62982B253F27525* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviderConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___focusProviderType_6)); }
	inline SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProviderType_6), (void*)value);
	}

	inline static int32_t get_offset_of_raycastProviderType_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___raycastProviderType_7)); }
	inline SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 * get_raycastProviderType_7() const { return ___raycastProviderType_7; }
	inline SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 ** get_address_of_raycastProviderType_7() { return &___raycastProviderType_7; }
	inline void set_raycastProviderType_7(SystemType_t3E946F5E8510424A800493142ADEDCD7429E6CF3 * value)
	{
		___raycastProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastProviderType_7), (void*)value);
	}

	inline static int32_t get_offset_of_focusQueryBufferSize_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___focusQueryBufferSize_8)); }
	inline int32_t get_focusQueryBufferSize_8() const { return ___focusQueryBufferSize_8; }
	inline int32_t* get_address_of_focusQueryBufferSize_8() { return &___focusQueryBufferSize_8; }
	inline void set_focusQueryBufferSize_8(int32_t value)
	{
		___focusQueryBufferSize_8 = value;
	}

	inline static int32_t get_offset_of_shouldUseGraphicsRaycast_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___shouldUseGraphicsRaycast_9)); }
	inline bool get_shouldUseGraphicsRaycast_9() const { return ___shouldUseGraphicsRaycast_9; }
	inline bool* get_address_of_shouldUseGraphicsRaycast_9() { return &___shouldUseGraphicsRaycast_9; }
	inline void set_shouldUseGraphicsRaycast_9(bool value)
	{
		___shouldUseGraphicsRaycast_9 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___focusIndividualCompoundCollider_10)); }
	inline bool get_focusIndividualCompoundCollider_10() const { return ___focusIndividualCompoundCollider_10; }
	inline bool* get_address_of_focusIndividualCompoundCollider_10() { return &___focusIndividualCompoundCollider_10; }
	inline void set_focusIndividualCompoundCollider_10(bool value)
	{
		___focusIndividualCompoundCollider_10 = value;
	}

	inline static int32_t get_offset_of_inputActionsProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___inputActionsProfile_11)); }
	inline MixedRealityInputActionsProfile_tE7FE65F7EC936396CC9A34C2A3603587AA9DC121 * get_inputActionsProfile_11() const { return ___inputActionsProfile_11; }
	inline MixedRealityInputActionsProfile_tE7FE65F7EC936396CC9A34C2A3603587AA9DC121 ** get_address_of_inputActionsProfile_11() { return &___inputActionsProfile_11; }
	inline void set_inputActionsProfile_11(MixedRealityInputActionsProfile_tE7FE65F7EC936396CC9A34C2A3603587AA9DC121 * value)
	{
		___inputActionsProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionsProfile_11), (void*)value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___inputActionRulesProfile_12)); }
	inline MixedRealityInputActionRulesProfile_t9C76FCD6841393C37078E797873CE9AA799EB99E * get_inputActionRulesProfile_12() const { return ___inputActionRulesProfile_12; }
	inline MixedRealityInputActionRulesProfile_t9C76FCD6841393C37078E797873CE9AA799EB99E ** get_address_of_inputActionRulesProfile_12() { return &___inputActionRulesProfile_12; }
	inline void set_inputActionRulesProfile_12(MixedRealityInputActionRulesProfile_t9C76FCD6841393C37078E797873CE9AA799EB99E * value)
	{
		___inputActionRulesProfile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionRulesProfile_12), (void*)value);
	}

	inline static int32_t get_offset_of_pointerProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___pointerProfile_13)); }
	inline MixedRealityPointerProfile_t0241AD4A8B1DABC5653ADDF694E4F11B806B2515 * get_pointerProfile_13() const { return ___pointerProfile_13; }
	inline MixedRealityPointerProfile_t0241AD4A8B1DABC5653ADDF694E4F11B806B2515 ** get_address_of_pointerProfile_13() { return &___pointerProfile_13; }
	inline void set_pointerProfile_13(MixedRealityPointerProfile_t0241AD4A8B1DABC5653ADDF694E4F11B806B2515 * value)
	{
		___pointerProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_gesturesProfile_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___gesturesProfile_14)); }
	inline MixedRealityGesturesProfile_t9250226E948FE7E8708F92A1A2366DD2115C77FB * get_gesturesProfile_14() const { return ___gesturesProfile_14; }
	inline MixedRealityGesturesProfile_t9250226E948FE7E8708F92A1A2366DD2115C77FB ** get_address_of_gesturesProfile_14() { return &___gesturesProfile_14; }
	inline void set_gesturesProfile_14(MixedRealityGesturesProfile_t9250226E948FE7E8708F92A1A2366DD2115C77FB * value)
	{
		___gesturesProfile_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gesturesProfile_14), (void*)value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___supportedVoiceCultures_15)); }
	inline List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * get_supportedVoiceCultures_15() const { return ___supportedVoiceCultures_15; }
	inline List_1_tB93032867275F6C802C3659FC027FF6FB1372359 ** get_address_of_supportedVoiceCultures_15() { return &___supportedVoiceCultures_15; }
	inline void set_supportedVoiceCultures_15(List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * value)
	{
		___supportedVoiceCultures_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportedVoiceCultures_15), (void*)value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___speechCommandsProfile_16)); }
	inline MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * get_speechCommandsProfile_16() const { return ___speechCommandsProfile_16; }
	inline MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA ** get_address_of_speechCommandsProfile_16() { return &___speechCommandsProfile_16; }
	inline void set_speechCommandsProfile_16(MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * value)
	{
		___speechCommandsProfile_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommandsProfile_16), (void*)value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___enableControllerMapping_17)); }
	inline bool get_enableControllerMapping_17() const { return ___enableControllerMapping_17; }
	inline bool* get_address_of_enableControllerMapping_17() { return &___enableControllerMapping_17; }
	inline void set_enableControllerMapping_17(bool value)
	{
		___enableControllerMapping_17 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___controllerMappingProfile_18)); }
	inline MixedRealityControllerMappingProfile_t291CCF315C184E755FF04AB8E7B66DB28067781D * get_controllerMappingProfile_18() const { return ___controllerMappingProfile_18; }
	inline MixedRealityControllerMappingProfile_t291CCF315C184E755FF04AB8E7B66DB28067781D ** get_address_of_controllerMappingProfile_18() { return &___controllerMappingProfile_18; }
	inline void set_controllerMappingProfile_18(MixedRealityControllerMappingProfile_t291CCF315C184E755FF04AB8E7B66DB28067781D * value)
	{
		___controllerMappingProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerMappingProfile_18), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___controllerVisualizationProfile_19)); }
	inline MixedRealityControllerVisualizationProfile_tAB262576486142569677C6C85D90DAFEF030224C * get_controllerVisualizationProfile_19() const { return ___controllerVisualizationProfile_19; }
	inline MixedRealityControllerVisualizationProfile_tAB262576486142569677C6C85D90DAFEF030224C ** get_address_of_controllerVisualizationProfile_19() { return &___controllerVisualizationProfile_19; }
	inline void set_controllerVisualizationProfile_19(MixedRealityControllerVisualizationProfile_tAB262576486142569677C6C85D90DAFEF030224C * value)
	{
		___controllerVisualizationProfile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationProfile_19), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_20() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23, ___handTrackingProfile_20)); }
	inline MixedRealityHandTrackingProfile_t0A8C82ACAABFCA9C53AD987FE328E5A97F273D98 * get_handTrackingProfile_20() const { return ___handTrackingProfile_20; }
	inline MixedRealityHandTrackingProfile_t0A8C82ACAABFCA9C53AD987FE328E5A97F273D98 ** get_address_of_handTrackingProfile_20() { return &___handTrackingProfile_20; }
	inline void set_handTrackingProfile_20(MixedRealityHandTrackingProfile_t0A8C82ACAABFCA9C53AD987FE328E5A97F273D98 * value)
	{
		___handTrackingProfile_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingProfile_20), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA  : public BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::startBehavior
	int32_t ___startBehavior_5;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::recognitionConfidenceLevel
	int32_t ___recognitionConfidenceLevel_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::speechCommands
	SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* ___speechCommands_7;

public:
	inline static int32_t get_offset_of_startBehavior_5() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA, ___startBehavior_5)); }
	inline int32_t get_startBehavior_5() const { return ___startBehavior_5; }
	inline int32_t* get_address_of_startBehavior_5() { return &___startBehavior_5; }
	inline void set_startBehavior_5(int32_t value)
	{
		___startBehavior_5 = value;
	}

	inline static int32_t get_offset_of_recognitionConfidenceLevel_6() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA, ___recognitionConfidenceLevel_6)); }
	inline int32_t get_recognitionConfidenceLevel_6() const { return ___recognitionConfidenceLevel_6; }
	inline int32_t* get_address_of_recognitionConfidenceLevel_6() { return &___recognitionConfidenceLevel_6; }
	inline void set_recognitionConfidenceLevel_6(int32_t value)
	{
		___recognitionConfidenceLevel_6 = value;
	}

	inline static int32_t get_offset_of_speechCommands_7() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA, ___speechCommands_7)); }
	inline SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* get_speechCommands_7() const { return ___speechCommands_7; }
	inline SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891** get_address_of_speechCommands_7() { return &___speechCommands_7; }
	inline void set_speechCommands_7(SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* value)
	{
		___speechCommands_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommands_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F  : public BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasFailed
	bool ___hasFailed_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasListener
	bool ___hasListener_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::isTransitioning
	bool ___isTransitioning_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::inputSource
	RuntimeObject* ___inputSource_27;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::textSoFar
	StringBuilder_t * ___textSoFar_28;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::deviceName
	String_t* ___deviceName_29;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::samplingRate
	int32_t ___samplingRate_30;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationResult
	String_t* ___dictationResult_31;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationAudioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___dictationAudioClip_32;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStarted
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilPhraseRecognitionSystemHasStarted_34;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStopped
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilPhraseRecognitionSystemHasStopped_35;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStarted
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilDictationRecognizerHasStarted_36;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStopped
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilDictationRecognizerHasStopped_37;

public:
	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___U3CIsListeningU3Ek__BackingField_21)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_21() const { return ___U3CIsListeningU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_21() { return &___U3CIsListeningU3Ek__BackingField_21; }
	inline void set_U3CIsListeningU3Ek__BackingField_21(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_hasFailed_24() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___hasFailed_24)); }
	inline bool get_hasFailed_24() const { return ___hasFailed_24; }
	inline bool* get_address_of_hasFailed_24() { return &___hasFailed_24; }
	inline void set_hasFailed_24(bool value)
	{
		___hasFailed_24 = value;
	}

	inline static int32_t get_offset_of_hasListener_25() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___hasListener_25)); }
	inline bool get_hasListener_25() const { return ___hasListener_25; }
	inline bool* get_address_of_hasListener_25() { return &___hasListener_25; }
	inline void set_hasListener_25(bool value)
	{
		___hasListener_25 = value;
	}

	inline static int32_t get_offset_of_isTransitioning_26() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___isTransitioning_26)); }
	inline bool get_isTransitioning_26() const { return ___isTransitioning_26; }
	inline bool* get_address_of_isTransitioning_26() { return &___isTransitioning_26; }
	inline void set_isTransitioning_26(bool value)
	{
		___isTransitioning_26 = value;
	}

	inline static int32_t get_offset_of_inputSource_27() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___inputSource_27)); }
	inline RuntimeObject* get_inputSource_27() const { return ___inputSource_27; }
	inline RuntimeObject** get_address_of_inputSource_27() { return &___inputSource_27; }
	inline void set_inputSource_27(RuntimeObject* value)
	{
		___inputSource_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_27), (void*)value);
	}

	inline static int32_t get_offset_of_textSoFar_28() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___textSoFar_28)); }
	inline StringBuilder_t * get_textSoFar_28() const { return ___textSoFar_28; }
	inline StringBuilder_t ** get_address_of_textSoFar_28() { return &___textSoFar_28; }
	inline void set_textSoFar_28(StringBuilder_t * value)
	{
		___textSoFar_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSoFar_28), (void*)value);
	}

	inline static int32_t get_offset_of_deviceName_29() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___deviceName_29)); }
	inline String_t* get_deviceName_29() const { return ___deviceName_29; }
	inline String_t** get_address_of_deviceName_29() { return &___deviceName_29; }
	inline void set_deviceName_29(String_t* value)
	{
		___deviceName_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceName_29), (void*)value);
	}

	inline static int32_t get_offset_of_samplingRate_30() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___samplingRate_30)); }
	inline int32_t get_samplingRate_30() const { return ___samplingRate_30; }
	inline int32_t* get_address_of_samplingRate_30() { return &___samplingRate_30; }
	inline void set_samplingRate_30(int32_t value)
	{
		___samplingRate_30 = value;
	}

	inline static int32_t get_offset_of_dictationResult_31() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___dictationResult_31)); }
	inline String_t* get_dictationResult_31() const { return ___dictationResult_31; }
	inline String_t** get_address_of_dictationResult_31() { return &___dictationResult_31; }
	inline void set_dictationResult_31(String_t* value)
	{
		___dictationResult_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationResult_31), (void*)value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_32() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___dictationAudioClip_32)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_dictationAudioClip_32() const { return ___dictationAudioClip_32; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_dictationAudioClip_32() { return &___dictationAudioClip_32; }
	inline void set_dictationAudioClip_32(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___dictationAudioClip_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationAudioClip_32), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStarted_34() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___waitUntilPhraseRecognitionSystemHasStarted_34)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilPhraseRecognitionSystemHasStarted_34() const { return ___waitUntilPhraseRecognitionSystemHasStarted_34; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilPhraseRecognitionSystemHasStarted_34() { return &___waitUntilPhraseRecognitionSystemHasStarted_34; }
	inline void set_waitUntilPhraseRecognitionSystemHasStarted_34(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStarted_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStarted_34), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStopped_35() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___waitUntilPhraseRecognitionSystemHasStopped_35)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilPhraseRecognitionSystemHasStopped_35() const { return ___waitUntilPhraseRecognitionSystemHasStopped_35; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilPhraseRecognitionSystemHasStopped_35() { return &___waitUntilPhraseRecognitionSystemHasStopped_35; }
	inline void set_waitUntilPhraseRecognitionSystemHasStopped_35(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStopped_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStopped_35), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStarted_36() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___waitUntilDictationRecognizerHasStarted_36)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilDictationRecognizerHasStarted_36() const { return ___waitUntilDictationRecognizerHasStarted_36; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilDictationRecognizerHasStarted_36() { return &___waitUntilDictationRecognizerHasStarted_36; }
	inline void set_waitUntilDictationRecognizerHasStarted_36(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilDictationRecognizerHasStarted_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStarted_36), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStopped_37() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F, ___waitUntilDictationRecognizerHasStopped_37)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilDictationRecognizerHasStopped_37() const { return ___waitUntilDictationRecognizerHasStopped_37; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilDictationRecognizerHasStopped_37() { return &___waitUntilDictationRecognizerHasStopped_37; }
	inline void set_waitUntilDictationRecognizerHasStopped_37(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilDictationRecognizerHasStopped_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStopped_37), (void*)value);
	}
};

struct WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StartRecordingAsyncPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StopRecordingAsyncPerfMarker_23;
	// UnityEngine.Windows.Speech.DictationRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationRecognizer
	DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * ___dictationRecognizer_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationHypothesisPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationResultPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationCompletePerfMarker_41;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationErrorPerfMarker_42;

public:
	inline static int32_t get_offset_of_StartRecordingAsyncPerfMarker_22() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___StartRecordingAsyncPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StartRecordingAsyncPerfMarker_22() const { return ___StartRecordingAsyncPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StartRecordingAsyncPerfMarker_22() { return &___StartRecordingAsyncPerfMarker_22; }
	inline void set_StartRecordingAsyncPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StartRecordingAsyncPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_StopRecordingAsyncPerfMarker_23() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___StopRecordingAsyncPerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StopRecordingAsyncPerfMarker_23() const { return ___StopRecordingAsyncPerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StopRecordingAsyncPerfMarker_23() { return &___StopRecordingAsyncPerfMarker_23; }
	inline void set_StopRecordingAsyncPerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StopRecordingAsyncPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_dictationRecognizer_33() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___dictationRecognizer_33)); }
	inline DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * get_dictationRecognizer_33() const { return ___dictationRecognizer_33; }
	inline DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B ** get_address_of_dictationRecognizer_33() { return &___dictationRecognizer_33; }
	inline void set_dictationRecognizer_33(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * value)
	{
		___dictationRecognizer_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationRecognizer_33), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_38() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___UpdatePerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_38() const { return ___UpdatePerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_38() { return &___UpdatePerfMarker_38; }
	inline void set_UpdatePerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesisPerfMarker_39() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___DictationHypothesisPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationHypothesisPerfMarker_39() const { return ___DictationHypothesisPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationHypothesisPerfMarker_39() { return &___DictationHypothesisPerfMarker_39; }
	inline void set_DictationHypothesisPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationHypothesisPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_DictationResultPerfMarker_40() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___DictationResultPerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationResultPerfMarker_40() const { return ___DictationResultPerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationResultPerfMarker_40() { return &___DictationResultPerfMarker_40; }
	inline void set_DictationResultPerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationResultPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_DictationCompletePerfMarker_41() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___DictationCompletePerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationCompletePerfMarker_41() const { return ___DictationCompletePerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationCompletePerfMarker_41() { return &___DictationCompletePerfMarker_41; }
	inline void set_DictationCompletePerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationCompletePerfMarker_41 = value;
	}

	inline static int32_t get_offset_of_DictationErrorPerfMarker_42() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields, ___DictationErrorPerfMarker_42)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationErrorPerfMarker_42() const { return ___DictationErrorPerfMarker_42; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationErrorPerfMarker_42() { return &___DictationErrorPerfMarker_42; }
	inline void set_DictationErrorPerfMarker_42(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationErrorPerfMarker_42 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5  : public BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::<RecognitionConfidenceLevel>k__BackingField
	int32_t ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::globalInputSource
	BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * ___globalInputSource_22;
	// UnityEngine.Windows.Speech.KeywordRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::keywordRecognizer
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * ___keywordRecognizer_23;

public:
	inline static int32_t get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5, ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21)); }
	inline int32_t get_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() const { return ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() { return &___U3CRecognitionConfidenceLevelU3Ek__BackingField_21; }
	inline void set_U3CRecognitionConfidenceLevelU3Ek__BackingField_21(int32_t value)
	{
		___U3CRecognitionConfidenceLevelU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_globalInputSource_22() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5, ___globalInputSource_22)); }
	inline BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * get_globalInputSource_22() const { return ___globalInputSource_22; }
	inline BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 ** get_address_of_globalInputSource_22() { return &___globalInputSource_22; }
	inline void set_globalInputSource_22(BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * value)
	{
		___globalInputSource_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalInputSource_22), (void*)value);
	}

	inline static int32_t get_offset_of_keywordRecognizer_23() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5, ___keywordRecognizer_23)); }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * get_keywordRecognizer_23() const { return ___keywordRecognizer_23; }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F ** get_address_of_keywordRecognizer_23() { return &___keywordRecognizer_23; }
	inline void set_keywordRecognizer_23(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * value)
	{
		___keywordRecognizer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywordRecognizer_23), (void*)value);
	}
};

struct WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPhraseRecognizedPerfMarker_25;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_24() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_StaticFields, ___UpdatePerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_24() const { return ___UpdatePerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_24() { return &___UpdatePerfMarker_24; }
	inline void set_UpdatePerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognizedPerfMarker_25() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_StaticFields, ___OnPhraseRecognizedPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPhraseRecognizedPerfMarker_25() const { return ___OnPhraseRecognizedPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPhraseRecognizedPerfMarker_25() { return &___OnPhraseRecognizedPerfMarker_25; }
	inline void set_OnPhraseRecognizedPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPhraseRecognizedPerfMarker_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[]
struct SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  m_Items[1];

public:
	inline SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_4))->___description_2), (void*)NULL);
		#endif
	}
	inline SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_4))->___description_2), (void*)NULL);
		#endif
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


// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseDataProvider_1_set_Registrar_m9A6B8E558C9D61800FFCA7DF25947534A3FFF3E1_gshared_inline (BaseDataProvider_1_tE53B250B7876B3E56E408C5CA22A803CF413477B * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m106EE2F1FA18DC25ED42F23C4E8E8F2E11B48995_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  AsyncTaskMethodBuilder_1_Create_mE593F9E703EBA7EF294FAC0F5C20F69AF4D08C26_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m928B43238B7ECA6810C21221E3F7A4568C73ABB4_gshared_inline (BaseDataProvider_1_tE53B250B7876B3E56E408C5CA22A803CF413477B * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisRuntimeObject_mB1409EBBA8754AF8D1F56A6D5337931DB40C39D8_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m53C73637E160C055CA914211B2B12D384B9A80BD_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitOnCompleted<System.Object,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m6257A2C75E80DFDAEC0DC221289E3A9D7B3D658B_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_m91D25B82712B72039BEA3A75E426565C3FA26975 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
inline void BaseDataProvider_1_set_Registrar_m4F518E83D062179E33E0AFC630A92B09F2D9AE26_inline (BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	((  void (*) (BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468 *, RuntimeObject*, const RuntimeMethod*))BaseDataProvider_1_set_Registrar_m9A6B8E558C9D61800FFCA7DF25947534A3FFF3E1_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m09F5864E9027844C02E97F13FD34354A609D48C1 (BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7__ctor_m959E160BF127B4D71CA1B4AD941F5BBD59344F65 (U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m3E7C78F87F23C313FCD75A71B745C647490230C1 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_m4500AE9AF3D1183D923FEE4B05759D1580DFFD64 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C **, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m106EE2F1FA18DC25ED42F23C4E8E8F2E11B48995_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8__ctor_mADB7768A6771332C2F2FA9CFD8FDB2FBD46DED17 (U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_mBA501DA297D61A3472386E2D973837F5BEFEA002 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 **, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m106EE2F1FA18DC25ED42F23C4E8E8F2E11B48995_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10__ctor_m1C2237F76AE9A6998A4CCC18D7655F67C47DD945 (U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_m156BFD7083AC20B1EFCD990D6DA52E51928EC521 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_mC38347D8C1130DBD20F08C50E4E23B29EF2E258A (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12__ctor_m72513714408720DB0AA6C7EC200909608A8FBCCE (U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Create()
inline AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  AsyncTaskMethodBuilder_1_Create_m6438FCEF9125A693A0B6E7C189370E94641A365C (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mE593F9E703EBA7EF294FAC0F5C20F69AF4D08C26_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m2A39FEBAECCD703E9542C48DE6048693F17E1C2B (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m25C57EA59EF179635A81530036C12082EE50878B_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::get_Task()
inline Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * AsyncTaskMethodBuilder_1_get_Task_m5DEE8BD64EA4EA2CE680ECC9A4CB4B34E7272FD0 (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C (const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline (BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t5DB3231FD37A2CCF293DD0B9C73000370D729468 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m928B43238B7ECA6810C21221E3F7A4568C73ABB4_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::get_InputSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * BaseInputDeviceManager_get_InputSystemProfile_m9A511D56CA8760DACD8FD7D997DE79479E4DAF71 (BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_SpeechCommandsProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mBE692898D5C1C58160CC153D391149E6516C8703 (MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechRecognizerStartBehavior()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mBD72C68AE8ACECF31601DF0157C93B47A4215549_inline (MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::InitializeDictationRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_InitializeDictationRecognizer_m32BC2E41A73ECEA3B9EC829AC0906AEB7BA570FE (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_mB3A42A5718767137AE30530A769CAB9C3A060C46 (BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer__ctor_m5658CFC5EE5D7702144B6ABF00E0D95A4AE68F74 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationHypothesisDelegate__ctor_mC0ABE67DC4DBB4FA1F9869C18419245544A3E597 (DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationHypothesis_mCB47ABBC5F12D301EEC4D9C8DFC3F991F60F9A6D (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationResultDelegate__ctor_mA245D7423472C29BE33A7340495C2673E4FF3A65 (DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationResult_mE94975CCCBBC229D354524CB109A37EFD9A3992B (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationCompletedDelegate__ctor_mC90654E14428DFAEF0ADC53BF45C64487DE4B028 (DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationComplete_mA0531CDD1A1027B2EE39CF8B5F5CA1F5C7A39FB3 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationErrorHandler__ctor_m0D33C95E89B5B9F7361B33CBEFD9E12FAEBB7CA4 (DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationError_m3484DF96D1EAFBE39C6C5A1844B33556EA9D3FF6 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isBatchMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isBatchMode_m7A58E167B99D14508C68D51A5F27B07FC9E49E40 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Update_m2D442BFF65D6462AD0ED8514F38B191295922C80 (BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::get_IsListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_m01E80EAA7B5233D25B41DA2459321ACEFBAD26CF_inline (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_mFE8C01EC643515C463F5027CC3EA4FD5BDC9B0A4 (String_t* ___deviceName0, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.DictationRecognizer::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StopRecording_m06D51DF56831D4B95C348A416CFEB3622BFAD4D0 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31__ctor_mD1C432D167512427E20C35EE09EC4FA3EAE4597B (U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_mEC4AE04A423CFA31160F9811C1C3A0B2CBC1A0DA (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 **, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m106EE2F1FA18DC25ED42F23C4E8E8F2E11B48995_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Dispose_m2E97E835018DB62CCD41023232CA977C0CF350C0 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mA8355F6CFDE340AE7177821B8544CA99CCE8071B (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m2FA5F123AE0DD0B1775810B8E093779BDEEAE004 (BaseService_t9FD63727C9C310CC7B15F6080DF3854661DE80E4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_m9A0C69BB49A8085ACE40B78CC713EAE658662F1B (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * ___profile3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechCommands()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* MixedRealitySpeechCommandsProfile_get_SpeechCommands_mE4E046E08D416E2825B89BFB0FE58F757D259F19_inline (MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Windows.Speech.PhraseRecognizer::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognizer_get_IsRunning_mF3491BF090CCD503082288D4A2F489F54355B272 (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::InitializeKeywordRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_InitializeKeywordRecognizer_m93647818DEBCF0A2A5B4C101BD9B31C43F1DA21F (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Start_m051D982B305F1F0A7274443A8683417690276BA4 (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Stop_m394040FBA43DD1B3EBEBD6E9EFA08ACD4B621096 (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StartRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StartRecognition_m6052F48CE52A01AC8AA20373902545ADBB51FAC4 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* WindowsSpeechInputProvider_get_Commands_mC4F274ED75EA1F4005F41C28E9E3E484DAF2B9A2 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_LocalizedKeyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_LocalizedKeyword_mB01B195617D2C071B943737DB5D055393A45356C (SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechRecognitionConfidenceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_m8922AA86109244567A754D7ADBD75C4C39A4EBDA_inline (MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::set_RecognitionConfidenceLevel(Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_m3737A8D58381E0743B3AFF7640B0DF619689CC91_inline (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, int32_t ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_RecognitionConfidenceLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_m882F8B8455B4CAFE53DDBDE167851EF596F8FACD_inline (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.KeywordRecognizer::.ctor(System.String[],UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognizer__ctor_m86A6F9743F04144833FCED18CC2FCDA6644D208B (KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___keywords0, int32_t ___minimumConfidence1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate__ctor_m01A9360909C670C8869C24BB40DC38C2EFCAA03C (PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::add_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_add_OnPhraseRecognized_m78C6A460FD186BB5E9155C45A4DEDF369F80875D (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___value0, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_KeyCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechCommands_get_KeyCode_m9F769AB6EDCEE90294459FD99C82C20F335001FF_inline (SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m806A477EAE0AE49AA9C5E518A0800A3D80D873DC (int32_t ___key0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m1DDFBE2EF6AB0E4461E1F23E845CDAFAB49A2970 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_OnPhraseRecognized_mBA7C5DD88E057CBE137AC982C63628BFB856FE62 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, int32_t ___confidence0, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration1, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime2, String_t* ___text3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StopRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StopRecognition_mDCDB00980E86E36C90C9AC5D738370257A72CBE2 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::remove_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_remove_OnPhraseRecognized_m115359BFE70A3DDB3FA899FDFDEF8BE955B390BB (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Dispose_m0988DBCF03D9215304699526C39638028E567298 (PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource::UpdateActivePointers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseGlobalInputSource_UpdateActivePointers_mBC30A8F3A3FB8918ABE1313997848157E34A7502 (BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsSpeechInputProvider_get_InputSource_mEEF9A891AD26CB0DB841726797E8B9C123083290_inline (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7A35EA79FDA879E2E91C845E72B04C9F47CBFAC5 (U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.PhraseRecognitionSystem::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhraseRecognitionSystem_get_Status_m3D95148AA1F0C04973D320DBA79C9B1D8E5C23AC (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * WindowsDictationInputProvider_StopRecordingAsync_m6D263105085E2C51359424A208D63610AB8F0E59 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.AudioClip>::GetAwaiter()
inline TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A (Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  (*) (Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539 (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_mA2013DC790084E5BBB2CC13E17D07A49CEA43890 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * ___awaiter0, U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *, U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisRuntimeObject_mB1409EBBA8754AF8D1F56A6D5337931DB40C39D8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::GetResult()
inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61 (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * __this, const RuntimeMethod* method)
{
	return ((  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * (*) (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationHypothesis_m9F2EF6DC31E8D84CE505C6BDAC853BC0D8471EAB (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationResult_m1021B2EC2757F57A15E20A9130E28985F2CD2E6A (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationComplete_mF19070690AD8045AB16FECC264CB87DCDE223D58 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationError_m260C0E6B821661E95EBBE59B10046FD3C2DD8FC7 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_U3CU3En__0_m0670D05C01A55CE2BB600605EF9D55C301BED637 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WindowsDictationInputProvider_StartRecordingAsync_m1B512B167409C3DAFC16A293D75AD086CE1C72FA (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_mDC7098AEC669128E2F138FCC752F00C1FEA3DDAA (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::set_IsListening(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_m65A0446A3BA77ACA2CE36E65B8E96D085C28E95B_inline (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Shutdown_m28B5C13BBCCB57412A4CF73C89CF4D0BFE569D49 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * AwaiterExtensions_GetAwaiter_m19F2A5009ABEF7C69C5D1F9CFBA83A6E550F7578 (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mA1D47F19E3535E59267118BB76A0C9495A50C4CE_inline (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_m13F1A0250150FF0A64860BA38172DBB27D7B7C57 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 ** ___awaiter0, U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 **, U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m53C73637E160C055CA914211B2B12D384B9A80BD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m2AAF3D8883A33795B8216B9D4BBA4586B2E29365 (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m53F36A02500304378258152FEF64F63DF788CA2B (bool ___condition0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mD5E5DA4817126E96A7A00E99828FD8A113A65A9E (String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_InitialSilenceTimeoutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_set_InitialSilenceTimeoutSeconds_m627AD13CB5E50B9D3D6EA40AFD4B6A5EC56AEEBB (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_AutoSilenceTimeoutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_set_AutoSilenceTimeoutSeconds_m10BF345CBF41C4CBDEB84F0F5B8D64C76A6D1126 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Start_m6C9847C17C7262369B2732E3FE5F2659A2B76D45 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Microphone_Start_m2F9AD1061F64F1F569B00503955CF728C1B16D06 (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_m6C28F8A861F124D455224A4B12C4FC4EDF550FF2 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * ___awaiter0, U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *, U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisRuntimeObject_mB1409EBBA8754AF8D1F56A6D5337931DB40C39D8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Stop_m1CC3E04376DDF6A5B31B25515D1B3A66C238C308 (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m9C6B056CD99D33410B89C087D23E7B73A0E8C3F0 (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 ** ___awaiter0, U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 **, U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m6257A2C75E80DFDAEC0DC221289E3A9D7B3D658B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Restart_m3D48D3DE57E4C309458956E1492275C7F7D57137 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m13E931EC8E7ED47A810CD3DBA2107CE88B96D816 (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mC888A31494DA8E24FCC132F3E3C2E585030F8BFF (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_mC9D7FEC36D763D732F96A8E75826908C762078DC (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, String_t* ___name2, uint32_t ___priority3, BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * ___profile4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_set_Registrar_m4F518E83D062179E33E0AFC630A92B09F2D9AE26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : this(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem1;
		String_t* L_1 = ___name2;
		uint32_t L_2 = ___priority3;
		BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * L_3 = ___profile4;
		WindowsDictationInputProvider__ctor_m91D25B82712B72039BEA3A75E426565C3FA26975(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_4 = ___registrar0;
		BaseDataProvider_1_set_Registrar_m4F518E83D062179E33E0AFC630A92B09F2D9AE26_inline(__this, L_4, /*hidden argument*/BaseDataProvider_1_set_Registrar_m4F518E83D062179E33E0AFC630A92B09F2D9AE26_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_m91D25B82712B72039BEA3A75E426565C3FA26975 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__1_0_m28B195F4838C08E4E7B824F56B2EC54C9EE49E2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__1_1_m5AE96B78E04956CADF287FC92EE7CE5D2A6AE355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__1_2_mD25E72EE0A23D2F7F274F4F30E2F818C4C60AB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__1_3_m4FBFB1081A9B70AEAB6D61B61C9BF1E31D6D09B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B2_0 = NULL;
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * G_B2_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B1_0 = NULL;
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * G_B1_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B4_0 = NULL;
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * G_B4_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B3_0 = NULL;
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * G_B3_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B6_0 = NULL;
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * G_B6_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * G_B5_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B8_0 = NULL;
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * G_B8_1 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B7_0 = NULL;
	WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * G_B7_1 = NULL;
	{
		// public bool IsListening { get; private set; } = false;
		__this->set_U3CIsListeningU3Ek__BackingField_21((bool)0);
		// private IMixedRealityInputSource inputSource = null;
		__this->set_inputSource_27((RuntimeObject*)NULL);
		// private string deviceName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_deviceName_29(L_0);
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStarted = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = ((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * L_3 = ((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_0_m28B195F4838C08E4E7B824F56B2EC54C9EE49E2D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_5 = L_4;
		((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0039:
	{
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_6 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_6, G_B2_0, /*hidden argument*/NULL);
		NullCheck(G_B2_1);
		G_B2_1->set_waitUntilPhraseRecognitionSystemHasStarted_34(L_6);
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStopped = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = ((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->get_U3CU3E9__1_1_2();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = __this;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = __this;
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * L_9 = ((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_10 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_1_m5AE96B78E04956CADF287FC92EE7CE5D2A6AE355_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_11 = L_10;
		((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->set_U3CU3E9__1_1_2(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0063:
	{
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_12 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_12, G_B4_0, /*hidden argument*/NULL);
		NullCheck(G_B4_1);
		G_B4_1->set_waitUntilPhraseRecognitionSystemHasStopped_35(L_12);
		// private readonly WaitUntil waitUntilDictationRecognizerHasStarted = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_13 = ((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->get_U3CU3E9__1_2_3();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_14 = L_13;
		G_B5_0 = L_14;
		G_B5_1 = __this;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = __this;
			goto IL_008d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * L_15 = ((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_16 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_2_mD25E72EE0A23D2F7F274F4F30E2F818C4C60AB45_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_17 = L_16;
		((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->set_U3CU3E9__1_2_3(L_17);
		G_B6_0 = L_17;
		G_B6_1 = G_B5_1;
	}

IL_008d:
	{
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_18 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_18, G_B6_0, /*hidden argument*/NULL);
		NullCheck(G_B6_1);
		G_B6_1->set_waitUntilDictationRecognizerHasStarted_36(L_18);
		// private readonly WaitUntil waitUntilDictationRecognizerHasStopped = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_19 = ((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->get_U3CU3E9__1_3_4();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_20 = L_19;
		G_B7_0 = L_20;
		G_B7_1 = __this;
		if (L_20)
		{
			G_B8_0 = L_20;
			G_B8_1 = __this;
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * L_21 = ((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_22 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__1_3_m4FBFB1081A9B70AEAB6D61B61C9BF1E31D6D09B7_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_23 = L_22;
		((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->set_U3CU3E9__1_3_4(L_23);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
	}

IL_00b7:
	{
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_24 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_24, G_B8_0, /*hidden argument*/NULL);
		NullCheck(G_B8_1);
		G_B8_1->set_waitUntilDictationRecognizerHasStopped_37(L_24);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_25 = ___inputSystem0;
		String_t* L_26 = ___name1;
		uint32_t L_27 = ___priority2;
		BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * L_28 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m09F5864E9027844C02E97F13FD34354A609D48C1(__this, L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::get_IsListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_m01E80EAA7B5233D25B41DA2459321ACEFBAD26CF (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = __this->get_U3CIsListeningU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::set_IsListening(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_m65A0446A3BA77ACA2CE36E65B8E96D085C28E95B (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsListeningU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_CheckCapability_m49A401A5618FAE7AB1872EDBCA3EA8C2F68AF2EE (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return (capability == MixedRealityCapability.VoiceDictation);
		int32_t L_0 = ___capability0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecording(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StartRecording_m9015D5A73F285F10B9BCD89AE169F6FD23C6B2B2 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_m4500AE9AF3D1183D923FEE4B05759D1580DFFD64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * V_0 = NULL;
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * L_0 = (U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C *)il2cpp_codegen_object_new(U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_il2cpp_TypeInfo_var);
		U3CStartRecordingU3Ed__7__ctor_m959E160BF127B4D71CA1B4AD941F5BBD59344F65(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_7(__this);
		U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * L_2 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___listener0;
		NullCheck(L_2);
		L_2->set_listener_2(L_3);
		U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * L_4 = V_0;
		float L_5 = ___initialSilenceTimeout1;
		NullCheck(L_4);
		L_4->set_initialSilenceTimeout_3(L_5);
		U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * L_6 = V_0;
		float L_7 = ___autoSilenceTimeout2;
		NullCheck(L_6);
		L_6->set_autoSilenceTimeout_4(L_7);
		U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * L_8 = V_0;
		int32_t L_9 = ___recordingTime3;
		NullCheck(L_8);
		L_8->set_recordingTime_5(L_9);
		U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * L_10 = V_0;
		String_t* L_11 = ___micDeviceName4;
		NullCheck(L_10);
		L_10->set_micDeviceName_6(L_11);
		U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * L_12 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_13;
		L_13 = AsyncVoidMethodBuilder_Create_m3E7C78F87F23C313FCD75A71B745C647490230C1(/*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_U3CU3Et__builder_1(L_13);
		U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * L_14 = V_0;
		NullCheck(L_14);
		L_14->set_U3CU3E1__state_0((-1));
		U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * L_15 = V_0;
		NullCheck(L_15);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_16 = L_15->get_U3CU3Et__builder_1();
		V_1 = L_16;
		AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_m4500AE9AF3D1183D923FEE4B05759D1580DFFD64((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C **)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_m4500AE9AF3D1183D923FEE4B05759D1580DFFD64_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StopRecording_m06D51DF56831D4B95C348A416CFEB3622BFAD4D0 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_mBA501DA297D61A3472386E2D973837F5BEFEA002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * V_0 = NULL;
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * L_0 = (U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 *)il2cpp_codegen_object_new(U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_il2cpp_TypeInfo_var);
		U3CStopRecordingU3Ed__8__ctor_mADB7768A6771332C2F2FA9CFD8FDB2FBD46DED17(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * L_2 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3;
		L_3 = AsyncVoidMethodBuilder_Create_m3E7C78F87F23C313FCD75A71B745C647490230C1(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_mBA501DA297D61A3472386E2D973837F5BEFEA002((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 **)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_mBA501DA297D61A3472386E2D973837F5BEFEA002_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WindowsDictationInputProvider_StartRecordingAsync_m1B512B167409C3DAFC16A293D75AD086CE1C72FA (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_mC38347D8C1130DBD20F08C50E4E23B29EF2E258A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_0 = (U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 *)il2cpp_codegen_object_new(U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_il2cpp_TypeInfo_var);
		U3CStartRecordingAsyncU3Ed__10__ctor_m1C2237F76AE9A6998A4CCC18D7655F67C47DD945(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_7(__this);
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_2 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___listener0;
		NullCheck(L_2);
		L_2->set_listener_2(L_3);
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_4 = V_0;
		float L_5 = ___initialSilenceTimeout1;
		NullCheck(L_4);
		L_4->set_initialSilenceTimeout_3(L_5);
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_6 = V_0;
		float L_7 = ___autoSilenceTimeout2;
		NullCheck(L_6);
		L_6->set_autoSilenceTimeout_4(L_7);
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_8 = V_0;
		int32_t L_9 = ___recordingTime3;
		NullCheck(L_8);
		L_8->set_recordingTime_5(L_9);
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_10 = V_0;
		String_t* L_11 = ___micDeviceName4;
		NullCheck(L_10);
		L_10->set_micDeviceName_6(L_11);
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_13;
		L_13 = AsyncTaskMethodBuilder_Create_m156BFD7083AC20B1EFCD990D6DA52E51928EC521(/*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_U3CU3Et__builder_1(L_13);
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_14 = V_0;
		NullCheck(L_14);
		L_14->set_U3CU3E1__state_0((-1));
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_15 = V_0;
		NullCheck(L_15);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_16 = L_15->get_U3CU3Et__builder_1();
		V_1 = L_16;
		AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_mC38347D8C1130DBD20F08C50E4E23B29EF2E258A((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_mC38347D8C1130DBD20F08C50E4E23B29EF2E258A_RuntimeMethod_var);
		U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * L_17 = V_0;
		NullCheck(L_17);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = L_17->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_19;
		L_19 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * WindowsDictationInputProvider_StopRecordingAsync_m6D263105085E2C51359424A208D63610AB8F0E59 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m6438FCEF9125A693A0B6E7C189370E94641A365C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m2A39FEBAECCD703E9542C48DE6048693F17E1C2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m5DEE8BD64EA4EA2CE680ECC9A4CB4B34E7272FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * V_0 = NULL;
	AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * L_0 = (U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 *)il2cpp_codegen_object_new(U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_il2cpp_TypeInfo_var);
		U3CStopRecordingAsyncU3Ed__12__ctor_m72513714408720DB0AA6C7EC200909608A8FBCCE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  L_3;
		L_3 = AsyncTaskMethodBuilder_1_Create_m6438FCEF9125A693A0B6E7C189370E94641A365C(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m6438FCEF9125A693A0B6E7C189370E94641A365C_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m2A39FEBAECCD703E9542C48DE6048693F17E1C2B((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)(&V_1), (U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m2A39FEBAECCD703E9542C48DE6048693F17E1C2B_RuntimeMethod_var);
		U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_8 = L_7->get_address_of_U3CU3Et__builder_1();
		Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_m5DEE8BD64EA4EA2CE680ECC9A4CB4B34E7272FD0((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_8, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m5DEE8BD64EA4EA2CE680ECC9A4CB4B34E7272FD0_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Enable_m7B5D039456B689E25538D373A4EFF859EDD64383 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE31E0969D861DE596FAB10AFDD13C658F0B1A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE15B7D6432B76BC9BA11BCEFAB6C9B25F1A4D40A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!Application.isPlaying) { return; }
		bool L_0;
		L_0 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		goto IL_0093;
	}

IL_0013:
	{
		// if (Service == null)
		RuntimeObject* L_2;
		L_2 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// Debug.LogError($"Unable to start {Name}. An Input System is required for this feature.");
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		String_t* L_5;
		L_5 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralE15B7D6432B76BC9BA11BCEFAB6C9B25F1A4D40A, L_4, _stringLiteral4EE31E0969D861DE596FAB10AFDD13C658F0B1A7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_5, /*hidden argument*/NULL);
		// return;
		goto IL_0093;
	}

IL_003e:
	{
		// inputSource = Service.RequestNewGenericInputSource(Name, sourceType: InputSourceType.Voice);
		RuntimeObject* L_6;
		L_6 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, L_6, L_7, (IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2*)(IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2*)NULL, 3);
		__this->set_inputSource_27(L_8);
		// dictationResult = string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_dictationResult_31(L_9);
		// if (dictationRecognizer == null && InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.AutoStart)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_10 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
		if (L_10)
		{
			goto IL_007e;
		}
	}
	{
		MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * L_11;
		L_11 = BaseInputDeviceManager_get_InputSystemProfile_m9A511D56CA8760DACD8FD7D997DE79479E4DAF71(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * L_12;
		L_12 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mBE692898D5C1C58160CC153D391149E6516C8703(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mBD72C68AE8ACECF31601DF0157C93B47A4215549_inline(L_12, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_007f;
	}

IL_007e:
	{
		G_B7_0 = 0;
	}

IL_007f:
	{
		V_2 = (bool)G_B7_0;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		// InitializeDictationRecognizer();
		WindowsDictationInputProvider_InitializeDictationRecognizer_m32BC2E41A73ECEA3B9EC829AC0906AEB7BA570FE(__this, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// base.Enable();
		BaseService_Enable_mB3A42A5718767137AE30530A769CAB9C3A060C46(__this, /*hidden argument*/NULL);
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::InitializeDictationRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_InitializeDictationRecognizer_m32BC2E41A73ECEA3B9EC829AC0906AEB7BA570FE (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mE04742A7A151B920A24137B5F00040035EBEF63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationError_m33F98B0DC284F4887C115640EA5F5BFCEBA164EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mFD3ACEE3BB06255C8DE84B1136CDB8AC234174D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationResult_m067B2232436F0915B51BFB0D074002BB37190719_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// if (dictationRecognizer == null)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_0 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			V_0 = (bool)((((RuntimeObject*)(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_0076;
			}
		}

IL_000e:
		{
			// dictationRecognizer = new DictationRecognizer();
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_2 = (DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B *)il2cpp_codegen_object_new(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B_il2cpp_TypeInfo_var);
			DictationRecognizer__ctor_m5658CFC5EE5D7702144B6ABF00E0D95A4AE68F74(L_2, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
			((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->set_dictationRecognizer_33(L_2);
			// dictationRecognizer.DictationHypothesis += DictationRecognizer_DictationHypothesis;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_3 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * L_4 = (DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 *)il2cpp_codegen_object_new(DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4_il2cpp_TypeInfo_var);
			DictationHypothesisDelegate__ctor_mC0ABE67DC4DBB4FA1F9869C18419245544A3E597(L_4, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mFD3ACEE3BB06255C8DE84B1136CDB8AC234174D8_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_3);
			DictationRecognizer_add_DictationHypothesis_mCB47ABBC5F12D301EEC4D9C8DFC3F991F60F9A6D(L_3, L_4, /*hidden argument*/NULL);
			// dictationRecognizer.DictationResult += DictationRecognizer_DictationResult;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_5 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * L_6 = (DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D *)il2cpp_codegen_object_new(DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D_il2cpp_TypeInfo_var);
			DictationResultDelegate__ctor_mA245D7423472C29BE33A7340495C2673E4FF3A65(L_6, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationResult_m067B2232436F0915B51BFB0D074002BB37190719_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			DictationRecognizer_add_DictationResult_mE94975CCCBBC229D354524CB109A37EFD9A3992B(L_5, L_6, /*hidden argument*/NULL);
			// dictationRecognizer.DictationComplete += DictationRecognizer_DictationComplete;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_7 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * L_8 = (DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC *)il2cpp_codegen_object_new(DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC_il2cpp_TypeInfo_var);
			DictationCompletedDelegate__ctor_mC90654E14428DFAEF0ADC53BF45C64487DE4B028(L_8, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mE04742A7A151B920A24137B5F00040035EBEF63E_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_7);
			DictationRecognizer_add_DictationComplete_mA0531CDD1A1027B2EE39CF8B5F5CA1F5C7A39FB3(L_7, L_8, /*hidden argument*/NULL);
			// dictationRecognizer.DictationError += DictationRecognizer_DictationError;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_9 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * L_10 = (DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 *)il2cpp_codegen_object_new(DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489_il2cpp_TypeInfo_var);
			DictationErrorHandler__ctor_m0D33C95E89B5B9F7361B33CBEFD9E12FAEBB7CA4(L_10, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationError_m33F98B0DC284F4887C115640EA5F5BFCEBA164EA_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_9);
			DictationRecognizer_add_DictationError_m3484DF96D1EAFBE39C6C5A1844B33556EA9D3FF6(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0076:
		{
			goto IL_00aa;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			// catch (System.Exception ex)
			V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// if (!Application.isBatchMode)
			bool L_11;
			L_11 = Application_get_isBatchMode_m7A58E167B99D14508C68D51A5F27B07FC9E49E40(/*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
			bool L_12 = V_2;
			if (!L_12)
			{
				goto IL_009a;
			}
		}

IL_0087:
		{
			// Debug.LogWarning($"Failed to start dictation recognizer. Are microphone permissions granted? Exception: {ex}");
			Exception_t * L_13 = V_1;
			String_t* L_14;
			L_14 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9549835CCB023C006F6F8DCF4409D6EDFA36592)), L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(L_14, /*hidden argument*/NULL);
		}

IL_009a:
		{
			// Disable();
			VirtActionInvoker0::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
			// dictationRecognizer = null;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var)));
			((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))))->set_dictationRecognizer_33((DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B *)NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00aa;
		}
	} // end catch (depth: 1)

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Update_m3234422129FA6D8C8CD06DF6B1190E21174C0A33 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FDAD51AB222641CF457DB377588944EDB3E4986);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_38();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (!Application.isPlaying || Service == null || dictationRecognizer == null) { return; }
			bool L_2;
			L_2 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0029;
			}
		}

IL_0017:
		{
			RuntimeObject* L_3;
			L_3 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_0029;
			}
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_4 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			G_B5_0 = ((((RuntimeObject*)(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			goto IL_002a;
		}

IL_0029:
		{
			G_B5_0 = 1;
		}

IL_002a:
		{
			V_2 = (bool)G_B5_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			// if (!Application.isPlaying || Service == null || dictationRecognizer == null) { return; }
			IL2CPP_LEAVE(0xC6, FINALLY_00b7);
		}

IL_0034:
		{
			// base.Update();
			BaseService_Update_m2D442BFF65D6462AD0ED8514F38B191295922C80(__this, /*hidden argument*/NULL);
			// if (!isTransitioning && IsListening && !Microphone.IsRecording(deviceName) && dictationRecognizer.Status == SpeechSystemStatus.Running)
			bool L_6 = __this->get_isTransitioning_26();
			if (L_6)
			{
				goto IL_0067;
			}
		}

IL_0043:
		{
			bool L_7;
			L_7 = WindowsDictationInputProvider_get_IsListening_m01E80EAA7B5233D25B41DA2459321ACEFBAD26CF_inline(__this, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0067;
			}
		}

IL_004b:
		{
			String_t* L_8 = __this->get_deviceName_29();
			bool L_9;
			L_9 = Microphone_IsRecording_mFE8C01EC643515C463F5027CC3EA4FD5BDC9B0A4(L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0067;
			}
		}

IL_0058:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_10 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			NullCheck(L_10);
			int32_t L_11;
			L_11 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_10, /*hidden argument*/NULL);
			G_B12_0 = ((((int32_t)L_11) == ((int32_t)1))? 1 : 0);
			goto IL_0068;
		}

IL_0067:
		{
			G_B12_0 = 0;
		}

IL_0068:
		{
			V_3 = (bool)G_B12_0;
			bool L_12 = V_3;
			if (!L_12)
			{
				goto IL_0075;
			}
		}

IL_006c:
		{
			// StopRecording();
			WindowsDictationInputProvider_StopRecording_m06D51DF56831D4B95C348A416CFEB3622BFAD4D0(__this, /*hidden argument*/NULL);
		}

IL_0075:
		{
			// if (!hasFailed && dictationRecognizer.Status == SpeechSystemStatus.Failed)
			bool L_13 = __this->get_hasFailed_24();
			if (L_13)
			{
				goto IL_008c;
			}
		}

IL_007d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_14 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			NullCheck(L_14);
			int32_t L_15;
			L_15 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_14, /*hidden argument*/NULL);
			G_B17_0 = ((((int32_t)L_15) == ((int32_t)2))? 1 : 0);
			goto IL_008d;
		}

IL_008c:
		{
			G_B17_0 = 0;
		}

IL_008d:
		{
			V_4 = (bool)G_B17_0;
			bool L_16 = V_4;
			if (!L_16)
			{
				goto IL_00b4;
			}
		}

IL_0093:
		{
			// hasFailed = true;
			__this->set_hasFailed_24((bool)1);
			// Service.RaiseDictationError(inputSource, "Dictation recognizer has failed!");
			RuntimeObject* L_17;
			L_17 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
			RuntimeObject* L_18 = __this->get_inputSource_27();
			NullCheck(L_17);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(62 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, L_17, L_18, _stringLiteral5FDAD51AB222641CF457DB377588944EDB3E4986, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
		}

IL_00b4:
		{
			IL2CPP_LEAVE(0xC6, FINALLY_00b7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC6, IL_00c6)
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Disable_mC6D186EA0D2D13764C5293A0A39EFBE80D2DCA2D (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_mEC4AE04A423CFA31160F9811C1C3A0B2CBC1A0DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * V_0 = NULL;
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * L_0 = (U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 *)il2cpp_codegen_object_new(U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_il2cpp_TypeInfo_var);
		U3CDisableU3Ed__31__ctor_mD1C432D167512427E20C35EE09EC4FA3EAE4597B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * L_2 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3;
		L_3 = AsyncVoidMethodBuilder_Create_m3E7C78F87F23C313FCD75A71B745C647490230C1(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * L_5 = V_0;
		NullCheck(L_5);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_mEC4AE04A423CFA31160F9811C1C3A0B2CBC1A0DA((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 **)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_mEC4AE04A423CFA31160F9811C1C3A0B2CBC1A0DA_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Dispose_m6E60ADE49AC519807C70808B0455DB3AF9E40687 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * G_B3_0 = NULL;
	DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * G_B2_0 = NULL;
	{
		// if (disposing)
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// dictationRecognizer?.Dispose();
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_2 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
		DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0012;
		}
	}
	{
		goto IL_0018;
	}

IL_0012:
	{
		NullCheck(G_B3_0);
		DictationRecognizer_Dispose_m2E97E835018DB62CCD41023232CA977C0CF350C0(G_B3_0, /*hidden argument*/NULL);
	}

IL_0018:
	{
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationHypothesis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mFD3ACEE3BB06255C8DE84B1136CDB8AC234174D8 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC1D834D3337354218D057F130315C2FDF06B3CB);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// using (DictationHypothesisPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_DictationHypothesisPerfMarker_39();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// dictationResult = $"{textSoFar} {text}...";
			StringBuilder_t * L_2 = __this->get_textSoFar_28();
			String_t* L_3 = ___text0;
			String_t* L_4;
			L_4 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteralFC1D834D3337354218D057F130315C2FDF06B3CB, L_2, L_3, /*hidden argument*/NULL);
			__this->set_dictationResult_31(L_4);
			// Service?.RaiseDictationHypothesis(inputSource, dictationResult);
			RuntimeObject* L_5;
			L_5 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
			RuntimeObject* L_6 = L_5;
			G_B2_0 = L_6;
			if (L_6)
			{
				G_B3_0 = L_6;
				goto IL_0033;
			}
		}

IL_0030:
		{
			goto IL_0046;
		}

IL_0033:
		{
			RuntimeObject* L_7 = __this->get_inputSource_27();
			String_t* L_8 = __this->get_dictationResult_31();
			NullCheck(G_B3_0);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(59 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B3_0, L_7, L_8, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x58, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x58, IL_0058)
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationResult(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationResult_m067B2232436F0915B51BFB0D074002BB37190719 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// using (DictationResultPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_DictationResultPerfMarker_40();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// textSoFar.Append($"{text}. ");
			StringBuilder_t * L_2 = __this->get_textSoFar_28();
			String_t* L_3 = ___text0;
			String_t* L_4;
			L_4 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_3, _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434, /*hidden argument*/NULL);
			NullCheck(L_2);
			StringBuilder_t * L_5;
			L_5 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_2, L_4, /*hidden argument*/NULL);
			// dictationResult = textSoFar.ToString();
			StringBuilder_t * L_6 = __this->get_textSoFar_28();
			NullCheck(L_6);
			String_t* L_7;
			L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
			__this->set_dictationResult_31(L_7);
			// Service?.RaiseDictationResult(inputSource, dictationResult);
			RuntimeObject* L_8;
			L_8 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
			RuntimeObject* L_9 = L_8;
			G_B2_0 = L_9;
			if (L_9)
			{
				G_B3_0 = L_9;
				goto IL_0044;
			}
		}

IL_0041:
		{
			goto IL_0057;
		}

IL_0044:
		{
			RuntimeObject* L_10 = __this->get_inputSource_27();
			String_t* L_11 = __this->get_dictationResult_31();
			NullCheck(G_B3_0);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(60 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationResult(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B3_0, L_10, L_11, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationComplete(UnityEngine.Windows.Speech.DictationCompletionCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mE04742A7A151B920A24137B5F00040035EBEF63E (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6DECC329FCEE51F37E6EC8FEC3066A97185282);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// using (DictationCompletePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_DictationCompletePerfMarker_41();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (cause == DictationCompletionCause.TimeoutExceeded)
			int32_t L_2 = ___cause0;
			V_2 = (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_0031;
			}
		}

IL_0018:
		{
			// Microphone.End(deviceName);
			String_t* L_4 = __this->get_deviceName_29();
			Microphone_End_mA8355F6CFDE340AE7177821B8544CA99CCE8071B(L_4, /*hidden argument*/NULL);
			// dictationResult = "Dictation has timed out. Please try again.";
			__this->set_dictationResult_31(_stringLiteralDD6DECC329FCEE51F37E6EC8FEC3066A97185282);
		}

IL_0031:
		{
			// Service?.RaiseDictationComplete(inputSource, dictationResult, dictationAudioClip);
			RuntimeObject* L_5;
			L_5 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
			RuntimeObject* L_6 = L_5;
			G_B4_0 = L_6;
			if (L_6)
			{
				G_B5_0 = L_6;
				goto IL_003d;
			}
		}

IL_003a:
		{
			goto IL_0055;
		}

IL_003d:
		{
			RuntimeObject* L_7 = __this->get_inputSource_27();
			String_t* L_8 = __this->get_dictationResult_31();
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9 = __this->get_dictationAudioClip_32();
			NullCheck(G_B5_0);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(61 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B5_0, L_7, L_8, L_9);
		}

IL_0055:
		{
			// textSoFar = null;
			__this->set_textSoFar_28((StringBuilder_t *)NULL);
			// dictationResult = string.Empty;
			String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			__this->set_dictationResult_31(L_10);
			IL2CPP_LEAVE(0x79, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x79, IL_0079)
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationError(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationError_m33F98B0DC284F4887C115640EA5F5BFCEBA164EA (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41FC95C9B01C6E1BB2995C44E826A25782B17ECD);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// using (DictationErrorPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_DictationErrorPerfMarker_42();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// dictationResult = $"{error}\nHRESULT: {hresult}";
			String_t* L_2 = ___error0;
			int32_t L_3 = ___hresult1;
			int32_t L_4 = L_3;
			RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
			String_t* L_6;
			L_6 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral41FC95C9B01C6E1BB2995C44E826A25782B17ECD, L_2, L_5, /*hidden argument*/NULL);
			__this->set_dictationResult_31(L_6);
			// Service?.RaiseDictationError(inputSource, dictationResult);
			RuntimeObject* L_7;
			L_7 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
			RuntimeObject* L_8 = L_7;
			G_B2_0 = L_8;
			if (L_8)
			{
				G_B3_0 = L_8;
				goto IL_0033;
			}
		}

IL_0030:
		{
			goto IL_0046;
		}

IL_0033:
		{
			RuntimeObject* L_9 = __this->get_inputSource_27();
			String_t* L_10 = __this->get_dictationResult_31();
			NullCheck(G_B3_0);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(62 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B3_0, L_9, L_10, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
		}

IL_0046:
		{
			// textSoFar = null;
			__this->set_textSoFar_28((StringBuilder_t *)NULL);
			// dictationResult = string.Empty;
			String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			__this->set_dictationResult_31(L_11);
			IL2CPP_LEAVE(0x6A, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
	}

IL_006a:
	{
		// }
		return;
	}
}
// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::get_AudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * WindowsDictationInputProvider_get_AudioClip_m711B96906B79206908D2EDF869C151B5F0C7B210 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method)
{
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_0 = NULL;
	{
		// return dictationAudioClip;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = __this->get_dictationAudioClip_32();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__cctor_mB424988B3C8E1B31CBDDFA6406B7C4696DA3DC7B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral189013BD92021E16C75329951B42E7538D7E67D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9BB892AE8F267E8FB87B58FC66D97F0D8F35F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral504063796676558304FA9BFB772485E3FB358E39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB6674A4E84DAEC0356B7F29B4F3C8141D3AE47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B91DB38E514CD95D08ED56D631AF663640D0691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3B2C65B41F0F7E70A61575320F673B019D25FBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDB82FA753B97ED58FA2A451CE549D9C1BBEAD4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker StartRecordingAsyncPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.StartRecordingAsync");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral5BB6674A4E84DAEC0356B7F29B4F3C8141D3AE47, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->set_StartRecordingAsyncPerfMarker_22(L_0);
		// private static readonly ProfilerMarker StopRecordingAsyncPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.StopRecordingAsync");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral3D9BB892AE8F267E8FB87B58FC66D97F0D8F35F8, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->set_StopRecordingAsyncPerfMarker_23(L_1);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral189013BD92021E16C75329951B42E7538D7E67D5, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_38(L_2);
		// private static readonly ProfilerMarker DictationHypothesisPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationHypothesis");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral504063796676558304FA9BFB772485E3FB358E39, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->set_DictationHypothesisPerfMarker_39(L_3);
		// private static readonly ProfilerMarker DictationResultPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationResult");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteral6B91DB38E514CD95D08ED56D631AF663640D0691, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->set_DictationResultPerfMarker_40(L_4);
		// private static readonly ProfilerMarker DictationCompletePerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationComplete");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_5), _stringLiteralBDB82FA753B97ED58FA2A451CE549D9C1BBEAD4D, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->set_DictationCompletePerfMarker_41(L_5);
		// private static readonly ProfilerMarker DictationErrorPerfMarker = new ProfilerMarker("[MRTK] WindowsDictationInputProvider.DictationRecognizer_DictationError");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_6), _stringLiteralA3B2C65B41F0F7E70A61575320F673B019D25FBC, /*hidden argument*/NULL);
		((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->set_DictationErrorPerfMarker_42(L_6);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_U3CU3En__0_m0670D05C01A55CE2BB600605EF9D55C301BED637 (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method)
{
	{
		BaseService_Disable_m2FA5F123AE0DD0B1775810B8E093779BDEEAE004(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_mF20A5CAB2CECC6D7213A3930728216572E7321A9 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, String_t* ___name2, uint32_t ___priority3, BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * ___profile4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_set_Registrar_m4F518E83D062179E33E0AFC630A92B09F2D9AE26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : this(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem1;
		String_t* L_1 = ___name2;
		uint32_t L_2 = ___priority3;
		BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * L_3 = ___profile4;
		WindowsSpeechInputProvider__ctor_m9A0C69BB49A8085ACE40B78CC713EAE658662F1B(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_4 = ___registrar0;
		BaseDataProvider_1_set_Registrar_m4F518E83D062179E33E0AFC630A92B09F2D9AE26_inline(__this, L_4, /*hidden argument*/BaseDataProvider_1_set_Registrar_m4F518E83D062179E33E0AFC630A92B09F2D9AE26_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_m9A0C69BB49A8085ACE40B78CC713EAE658662F1B (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private BaseGlobalInputSource globalInputSource = null;
		__this->set_globalInputSource_22((BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 *)NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tC46C22858588AED562A1AFB339F39EB9C8F69CAB * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t23423F595D1823EB971ACFCAB5EDCD1826B42F2A_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m09F5864E9027844C02E97F13FD34354A609D48C1(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* WindowsSpeechInputProvider_get_Commands_mC4F274ED75EA1F4005F41C28E9E3E484DAF2B9A2 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	{
		// private SpeechCommands[] Commands => InputSystemProfile.SpeechCommandsProfile.SpeechCommands;
		MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * L_0;
		L_0 = BaseInputDeviceManager_get_InputSystemProfile_m9A511D56CA8760DACD8FD7D997DE79479E4DAF71(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * L_1;
		L_1 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mBE692898D5C1C58160CC153D391149E6516C8703(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_2;
		L_2 = MixedRealitySpeechCommandsProfile_get_SpeechCommands_mE4E046E08D416E2825B89BFB0FE58F757D259F19_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_InputSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsSpeechInputProvider_get_InputSource_mEEF9A891AD26CB0DB841726797E8B9C123083290 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource => globalInputSource;
		BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * L_0 = __this->get_globalInputSource_22();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_RecognitionConfidenceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_m882F8B8455B4CAFE53DDBDE167851EF596F8FACD (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = __this->get_U3CRecognitionConfidenceLevelU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::set_RecognitionConfidenceLevel(Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_m3737A8D58381E0743B3AFF7640B0DF619689CC91 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRecognitionConfidenceLevelU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_IsRecognitionActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSpeechInputProvider_get_IsRecognitionActive_m6F357ACC80729F198C1531E98525391EF7C31CFE (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * G_B2_0 = NULL;
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		//             keywordRecognizer?.IsRunning ??
		// #endif
		//             false;
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_0 = __this->get_keywordRecognizer_23();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = PhraseRecognizer_get_IsRunning_mF3491BF090CCD503082288D4A2F489F54355B272(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_0012:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSpeechInputProvider_CheckCapability_mE5625D65E6B63F5E14BA2536EB7FCB7FFCC197D5 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return capability == MixedRealityCapability.VoiceCommand;
		int32_t L_0 = ___capability0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StartRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StartRecognition_m6052F48CE52A01AC8AA20373902545ADBB51FAC4 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (keywordRecognizer == null && InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.ManualStart)
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_0 = __this->get_keywordRecognizer_23();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * L_1;
		L_1 = BaseInputDeviceManager_get_InputSystemProfile_m9A511D56CA8760DACD8FD7D997DE79479E4DAF71(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * L_2;
		L_2 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mBE692898D5C1C58160CC153D391149E6516C8703(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mBD72C68AE8ACECF31601DF0157C93B47A4215549_inline(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// InitializeKeywordRecognizer();
		WindowsSpeechInputProvider_InitializeKeywordRecognizer_m93647818DEBCF0A2A5B4C101BD9B31C43F1DA21F(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// if (keywordRecognizer != null && !keywordRecognizer.IsRunning)
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_5 = __this->get_keywordRecognizer_23();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_6 = __this->get_keywordRecognizer_23();
		NullCheck(L_6);
		bool L_7;
		L_7 = PhraseRecognizer_get_IsRunning_mF3491BF090CCD503082288D4A2F489F54355B272(L_6, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B8_0 = 0;
	}

IL_0045:
	{
		V_1 = (bool)G_B8_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// keywordRecognizer.Start();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_9 = __this->get_keywordRecognizer_23();
		NullCheck(L_9);
		PhraseRecognizer_Start_m051D982B305F1F0A7274443A8683417690276BA4(L_9, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StopRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StopRecognition_mDCDB00980E86E36C90C9AC5D738370257A72CBE2 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_0 = __this->get_keywordRecognizer_23();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_1 = __this->get_keywordRecognizer_23();
		NullCheck(L_1);
		bool L_2;
		L_2 = PhraseRecognizer_get_IsRunning_mF3491BF090CCD503082288D4A2F489F54355B272(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// keywordRecognizer.Stop();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_4 = __this->get_keywordRecognizer_23();
		NullCheck(L_4);
		PhraseRecognizer_Stop_m394040FBA43DD1B3EBEBD6E9EFA08ACD4B621096(L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Enable_mAC92C85405497C13893BC42A3F293456194E1029 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.AutoStart)
		MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * L_0;
		L_0 = BaseInputDeviceManager_get_InputSystemProfile_m9A511D56CA8760DACD8FD7D997DE79479E4DAF71(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * L_1;
		L_1 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mBE692898D5C1C58160CC153D391149E6516C8703(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mBD72C68AE8ACECF31601DF0157C93B47A4215549_inline(L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// InitializeKeywordRecognizer();
		WindowsSpeechInputProvider_InitializeKeywordRecognizer_m93647818DEBCF0A2A5B4C101BD9B31C43F1DA21F(__this, /*hidden argument*/NULL);
		// StartRecognition();
		WindowsSpeechInputProvider_StartRecognition_m6052F48CE52A01AC8AA20373902545ADBB51FAC4(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// base.Enable();
		BaseService_Enable_mB3A42A5718767137AE30530A769CAB9C3A060C46(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::InitializeKeywordRecognizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_InitializeKeywordRecognizer_m93647818DEBCF0A2A5B4C101BD9B31C43F1DA21F (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6DC1BCB77986C5796959EEF012B0DAD125326BE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FBA00525F2CB885816773C3D2AC5C17D742A707);
		s_Il2CppMethodInitialized = true;
	}
	SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	Exception_t * V_7 = NULL;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	RuntimeObject* G_B13_0 = NULL;
	WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * G_B13_1 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * G_B12_1 = NULL;
	BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * G_B14_0 = NULL;
	WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * G_B14_1 = NULL;
	{
		// if (!Application.isPlaying ||
		//     InputSystemProfile == null ||
		//     keywordRecognizer != null)
		bool L_0;
		L_0 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * L_1;
		L_1 = BaseInputDeviceManager_get_InputSystemProfile_m9A511D56CA8760DACD8FD7D997DE79479E4DAF71(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_3 = __this->get_keywordRecognizer_23();
		G_B4_0 = ((!(((RuntimeObject*)(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 1;
	}

IL_0022:
	{
		V_3 = (bool)G_B4_0;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		goto IL_010f;
	}

IL_002c:
	{
		// SpeechCommands[] commands = Commands;
		SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_5;
		L_5 = WindowsSpeechInputProvider_get_Commands_mC4F274ED75EA1F4005F41C28E9E3E484DAF2B9A2(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		// int commandsCount = commands?.Length ?? 0;
		SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_6 = V_0;
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_003c;
	}

IL_0039:
	{
		SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_7 = V_0;
		NullCheck(L_7);
		G_B9_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)));
	}

IL_003c:
	{
		V_1 = G_B9_0;
		// if (commandsCount == 0)
		int32_t L_8 = V_1;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// return;
		goto IL_010f;
	}

IL_004d:
	{
		// globalInputSource = Service?.RequestNewGlobalInputSource("Windows Speech Input Source", sourceType: InputSourceType.Voice);
		RuntimeObject* L_10;
		L_10 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		RuntimeObject* L_11 = L_10;
		G_B12_0 = L_11;
		G_B12_1 = __this;
		if (L_11)
		{
			G_B13_0 = L_11;
			G_B13_1 = __this;
			goto IL_005b;
		}
	}
	{
		G_B14_0 = ((BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 *)(NULL));
		G_B14_1 = G_B12_1;
		goto IL_0067;
	}

IL_005b:
	{
		NullCheck(G_B13_0);
		BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * L_12;
		L_12 = InterfaceFuncInvoker3< BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 *, String_t*, RuntimeObject*, int32_t >::Invoke(23 /* Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGlobalInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider,Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B13_0, _stringLiteral1FBA00525F2CB885816773C3D2AC5C17D742A707, (RuntimeObject*)NULL, 3);
		G_B14_0 = L_12;
		G_B14_1 = G_B13_1;
	}

IL_0067:
	{
		NullCheck(G_B14_1);
		G_B14_1->set_globalInputSource_22(G_B14_0);
		// var newKeywords = new string[commandsCount];
		int32_t L_13 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_2 = L_14;
		// for (int i = 0; i < commandsCount; i++)
		V_5 = 0;
		goto IL_0091;
	}

IL_0078:
	{
		// newKeywords[i] = commands[i].LocalizedKeyword;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = V_2;
		int32_t L_16 = V_5;
		SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_17 = V_0;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = SpeechCommands_get_LocalizedKeyword_mB01B195617D2C071B943737DB5D055393A45356C((SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 *)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_19);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (String_t*)L_19);
		// for (int i = 0; i < commandsCount; i++)
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0091:
	{
		// for (int i = 0; i < commandsCount; i++)
		int32_t L_21 = V_5;
		int32_t L_22 = V_1;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_0078;
		}
	}
	{
		// RecognitionConfidenceLevel = InputSystemProfile.SpeechCommandsProfile.SpeechRecognitionConfidenceLevel;
		MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * L_24;
		L_24 = BaseInputDeviceManager_get_InputSystemProfile_m9A511D56CA8760DACD8FD7D997DE79479E4DAF71(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * L_25;
		L_25 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mBE692898D5C1C58160CC153D391149E6516C8703(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_m8922AA86109244567A754D7ADBD75C4C39A4EBDA_inline(L_25, /*hidden argument*/NULL);
		WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_m3737A8D58381E0743B3AFF7640B0DF619689CC91_inline(__this, L_26, /*hidden argument*/NULL);
	}

IL_00b3:
	try
	{ // begin try (depth: 1)
		// keywordRecognizer = new KeywordRecognizer(newKeywords, (ConfidenceLevel)RecognitionConfidenceLevel);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = V_2;
		int32_t L_28;
		L_28 = WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_m882F8B8455B4CAFE53DDBDE167851EF596F8FACD_inline(__this, /*hidden argument*/NULL);
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_29 = (KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F *)il2cpp_codegen_object_new(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_il2cpp_TypeInfo_var);
		KeywordRecognizer__ctor_m86A6F9743F04144833FCED18CC2FCDA6644D208B(L_29, L_27, L_28, /*hidden argument*/NULL);
		__this->set_keywordRecognizer_23(L_29);
		goto IL_00f7;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c9;
		}
		throw e;
	}

CATCH_00c9:
	{ // begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// if (!Application.isBatchMode)
			bool L_30;
			L_30 = Application_get_isBatchMode_m7A58E167B99D14508C68D51A5F27B07FC9E49E40(/*hidden argument*/NULL);
			V_8 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
			bool L_31 = V_8;
			if (!L_31)
			{
				goto IL_00ee;
			}
		}

IL_00da:
		{
			// Debug.LogWarning($"Failed to start keyword recognizer. Are microphone permissions granted? Exception: {ex}");
			Exception_t * L_32 = V_7;
			String_t* L_33;
			L_33 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4373752820EFFF9B79520956C83459F4F0E4643)), L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(L_33, /*hidden argument*/NULL);
		}

IL_00ee:
		{
			// keywordRecognizer = null;
			__this->set_keywordRecognizer_23((KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F *)NULL);
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_010f;
		}
	} // end catch (depth: 1)

IL_00f7:
	{
		// keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_34 = __this->get_keywordRecognizer_23();
		PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * L_35 = (PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m01A9360909C670C8869C24BB40DC38C2EFCAA03C(L_35, __this, (intptr_t)((intptr_t)WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6DC1BCB77986C5796959EEF012B0DAD125326BE2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_34);
		PhraseRecognizer_add_OnPhraseRecognized_m78C6A460FD186BB5E9155C45A4DEDF369F80875D(L_34, L_35, /*hidden argument*/NULL);
	}

IL_010f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Update_m7130D03B8D685B983848EF2FEAA862C7BADE2303 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_24();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// base.Update();
			BaseService_Update_m2D442BFF65D6462AD0ED8514F38B191295922C80(__this, /*hidden argument*/NULL);
			// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
			KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_2 = __this->get_keywordRecognizer_23();
			if (!L_2)
			{
				goto IL_002c;
			}
		}

IL_001f:
		{
			KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_3 = __this->get_keywordRecognizer_23();
			NullCheck(L_3);
			bool L_4;
			L_4 = PhraseRecognizer_get_IsRunning_mF3491BF090CCD503082288D4A2F489F54355B272(L_3, /*hidden argument*/NULL);
			G_B4_0 = ((int32_t)(L_4));
			goto IL_002d;
		}

IL_002c:
		{
			G_B4_0 = 0;
		}

IL_002d:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_009a;
			}
		}

IL_0031:
		{
			// SpeechCommands[] commands = Commands;
			SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_6;
			L_6 = WindowsSpeechInputProvider_get_Commands_mC4F274ED75EA1F4005F41C28E9E3E484DAF2B9A2(__this, /*hidden argument*/NULL);
			V_3 = L_6;
			// int commandsCount = commands?.Length ?? 0;
			SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_7 = V_3;
			if (L_7)
			{
				goto IL_003f;
			}
		}

IL_003c:
		{
			G_B8_0 = 0;
			goto IL_0042;
		}

IL_003f:
		{
			SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_8 = V_3;
			NullCheck(L_8);
			G_B8_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)));
		}

IL_0042:
		{
			V_4 = G_B8_0;
			// for (int i = 0; i < commandsCount; i++)
			V_5 = 0;
			goto IL_008d;
		}

IL_0049:
		{
			// SpeechCommands command = commands[i];
			SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_9 = V_3;
			int32_t L_10 = V_5;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_6 = L_12;
			// if (UInput.GetKeyDown(command.KeyCode))
			int32_t L_13;
			L_13 = SpeechCommands_get_KeyCode_m9F769AB6EDCEE90294459FD99C82C20F335001FF_inline((SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 *)(&V_6), /*hidden argument*/NULL);
			bool L_14;
			L_14 = Input_GetKeyDown_m806A477EAE0AE49AA9C5E518A0800A3D80D873DC(L_13, /*hidden argument*/NULL);
			V_7 = L_14;
			bool L_15 = V_7;
			if (!L_15)
			{
				goto IL_0086;
			}
		}

IL_0066:
		{
			// OnPhraseRecognized((ConfidenceLevel)RecognitionConfidenceLevel, TimeSpan.Zero, DateTime.UtcNow, command.LocalizedKeyword);
			int32_t L_16;
			L_16 = WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_m882F8B8455B4CAFE53DDBDE167851EF596F8FACD_inline(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
			TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_17 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_18;
			L_18 = DateTime_get_UtcNow_m1DDFBE2EF6AB0E4461E1F23E845CDAFAB49A2970(/*hidden argument*/NULL);
			String_t* L_19;
			L_19 = SpeechCommands_get_LocalizedKeyword_mB01B195617D2C071B943737DB5D055393A45356C((SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 *)(&V_6), /*hidden argument*/NULL);
			WindowsSpeechInputProvider_OnPhraseRecognized_mBA7C5DD88E057CBE137AC982C63628BFB856FE62(__this, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		}

IL_0086:
		{
			// for (int i = 0; i < commandsCount; i++)
			int32_t L_20 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		}

IL_008d:
		{
			// for (int i = 0; i < commandsCount; i++)
			int32_t L_21 = V_5;
			int32_t L_22 = V_4;
			V_8 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
			bool L_23 = V_8;
			if (L_23)
			{
				goto IL_0049;
			}
		}

IL_0099:
		{
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_009d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(157)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Disable_m3ED592E57B3C839EDBC51FAA7AF4D4F78DED3164 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6DC1BCB77986C5796959EEF012B0DAD125326BE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (keywordRecognizer != null)
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_0 = __this->get_keywordRecognizer_23();
		V_0 = (bool)((!(((RuntimeObject*)(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// StopRecognition();
		WindowsSpeechInputProvider_StopRecognition_mDCDB00980E86E36C90C9AC5D738370257A72CBE2(__this, /*hidden argument*/NULL);
		// keywordRecognizer.OnPhraseRecognized -= KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_2 = __this->get_keywordRecognizer_23();
		PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * L_3 = (PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m01A9360909C670C8869C24BB40DC38C2EFCAA03C(L_3, __this, (intptr_t)((intptr_t)WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6DC1BCB77986C5796959EEF012B0DAD125326BE2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		PhraseRecognizer_remove_OnPhraseRecognized_m115359BFE70A3DDB3FA899FDFDEF8BE955B390BB(L_2, L_3, /*hidden argument*/NULL);
		// keywordRecognizer.Dispose();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_4 = __this->get_keywordRecognizer_23();
		NullCheck(L_4);
		PhraseRecognizer_Dispose_m0988DBCF03D9215304699526C39638028E567298(L_4, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// keywordRecognizer = null;
		__this->set_keywordRecognizer_23((KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F *)NULL);
		// base.Disable();
		BaseService_Disable_m2FA5F123AE0DD0B1775810B8E093779BDEEAE004(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Dispose_m6FD2CAC54018ED128D246565C25BFE4C2C3B3803 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * G_B3_0 = NULL;
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * G_B2_0 = NULL;
	{
		// if (disposing)
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// keywordRecognizer?.Dispose();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_2 = __this->get_keywordRecognizer_23();
		KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		PhraseRecognizer_Dispose_m0988DBCF03D9215304699526C39638028E567298(G_B3_0, /*hidden argument*/NULL);
	}

IL_0019:
	{
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::KeywordRecognizer_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m6DC1BCB77986C5796959EEF012B0DAD125326BE2 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  ___args0, const RuntimeMethod* method)
{
	{
		// OnPhraseRecognized(args.confidence, args.phraseDuration, args.phraseStartTime, args.text);
		PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  L_0 = ___args0;
		int32_t L_1 = L_0.get_confidence_0();
		PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  L_2 = ___args0;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = L_2.get_phraseDuration_4();
		PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  L_4 = ___args0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = L_4.get_phraseStartTime_3();
		PhraseRecognizedEventArgs_tC5746BBD42781AC39F1A02EACCF7CF8950AE6BEF  L_6 = ___args0;
		String_t* L_7 = L_6.get_text_2();
		WindowsSpeechInputProvider_OnPhraseRecognized_mBA7C5DD88E057CBE137AC982C63628BFB856FE62(__this, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_OnPhraseRecognized_mBA7C5DD88E057CBE137AC982C63628BFB856FE62 (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, int32_t ___confidence0, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___phraseDuration1, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___phraseStartTime2, String_t* ___text3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// using (OnPhraseRecognizedPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_il2cpp_TypeInfo_var))->get_OnPhraseRecognizedPerfMarker_25();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// SpeechCommands[] commands = Commands;
			SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_2;
			L_2 = WindowsSpeechInputProvider_get_Commands_mC4F274ED75EA1F4005F41C28E9E3E484DAF2B9A2(__this, /*hidden argument*/NULL);
			V_2 = L_2;
			// int commandsCount = commands?.Length ?? 0;
			SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_3 = V_2;
			if (L_3)
			{
				goto IL_001d;
			}
		}

IL_001a:
		{
			G_B4_0 = 0;
			goto IL_0020;
		}

IL_001d:
		{
			SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_4 = V_2;
			NullCheck(L_4);
			G_B4_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		}

IL_0020:
		{
			V_3 = G_B4_0;
			// for (int i = 0; i < commandsCount; i++)
			V_4 = 0;
			goto IL_0078;
		}

IL_0026:
		{
			// SpeechCommands command = commands[i];
			SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_5 = V_2;
			int32_t L_6 = V_4;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_5 = L_8;
			// if (command.LocalizedKeyword == text)
			String_t* L_9;
			L_9 = SpeechCommands_get_LocalizedKeyword_mB01B195617D2C071B943737DB5D055393A45356C((SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 *)(&V_5), /*hidden argument*/NULL);
			String_t* L_10 = ___text3;
			bool L_11;
			L_11 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_9, L_10, /*hidden argument*/NULL);
			V_6 = L_11;
			bool L_12 = V_6;
			if (!L_12)
			{
				goto IL_0071;
			}
		}

IL_0045:
		{
			// globalInputSource.UpdateActivePointers();
			BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * L_13 = __this->get_globalInputSource_22();
			NullCheck(L_13);
			BaseGlobalInputSource_UpdateActivePointers_mBC30A8F3A3FB8918ABE1313997848157E34A7502(L_13, /*hidden argument*/NULL);
			// Service?.RaiseSpeechCommandRecognized(InputSource, (RecognitionConfidenceLevel)confidence, phraseDuration, phraseStartTime, command);
			RuntimeObject* L_14;
			L_14 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
			RuntimeObject* L_15 = L_14;
			G_B7_0 = L_15;
			if (L_15)
			{
				G_B8_0 = L_15;
				goto IL_005e;
			}
		}

IL_005b:
		{
			goto IL_006f;
		}

IL_005e:
		{
			RuntimeObject* L_16;
			L_16 = WindowsSpeechInputProvider_get_InputSource_mEEF9A891AD26CB0DB841726797E8B9C123083290_inline(__this, /*hidden argument*/NULL);
			int32_t L_17 = ___confidence0;
			TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_18 = ___phraseDuration1;
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_19 = ___phraseStartTime2;
			SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  L_20 = V_5;
			NullCheck(G_B8_0);
			InterfaceActionInvoker5< RuntimeObject*, int32_t, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  >::Invoke(58 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSpeechCommandRecognized(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel,System.TimeSpan,System.DateTime,Microsoft.MixedReality.Toolkit.Input.SpeechCommands) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B8_0, L_16, L_17, L_18, L_19, L_20);
		}

IL_006f:
		{
			// break;
			goto IL_0083;
		}

IL_0071:
		{
			// for (int i = 0; i < commandsCount; i++)
			int32_t L_21 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		}

IL_0078:
		{
			// for (int i = 0; i < commandsCount; i++)
			int32_t L_22 = V_4;
			int32_t L_23 = V_3;
			V_7 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
			bool L_24 = V_7;
			if (L_24)
			{
				goto IL_0026;
			}
		}

IL_0083:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0086);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0086;
	}

FINALLY_0086:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(134)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(134)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__cctor_mC06E7E79D255025C8AB959A24BBDA2D4C7FDBFCF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A692985631DF10AA6C652745BE0175D785AE8A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA0C0110228B2778F846E1D743D5D5CC1A6D73A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] WindowsSpeechInputProvider.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral6A692985631DF10AA6C652745BE0175D785AE8A5, /*hidden argument*/NULL);
		((WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_24(L_0);
		// private static readonly ProfilerMarker OnPhraseRecognizedPerfMarker = new ProfilerMarker("[MRTK] WindowsSpeechInputProvider.OnPhraseRecognized");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralAA0C0110228B2778F846E1D743D5D5CC1A6D73A4, /*hidden argument*/NULL);
		((WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_StaticFields*)il2cpp_codegen_static_fields_for(WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5_il2cpp_TypeInfo_var))->set_OnPhraseRecognizedPerfMarker_25(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m06F02F6C3956D1A6D9DCE31FCF300265B84F6D31 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * L_0 = (U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 *)il2cpp_codegen_object_new(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7A35EA79FDA879E2E91C845E72B04C9F47CBFAC5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7A35EA79FDA879E2E91C845E72B04C9F47CBFAC5 (U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<.ctor>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_0_m28B195F4838C08E4E7B824F56B2EC54C9EE49E2D (U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * __this, const RuntimeMethod* method)
{
	{
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStarted = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Stopped);
		int32_t L_0;
		L_0 = PhraseRecognitionSystem_get_Status_m3D95148AA1F0C04973D320DBA79C9B1D8E5C23AC(/*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<.ctor>b__1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_1_m5AE96B78E04956CADF287FC92EE7CE5D2A6AE355 (U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * __this, const RuntimeMethod* method)
{
	{
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStopped = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		int32_t L_0;
		L_0 = PhraseRecognitionSystem_get_Status_m3D95148AA1F0C04973D320DBA79C9B1D8E5C23AC(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<.ctor>b__1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_2_mD25E72EE0A23D2F7F274F4F30E2F818C4C60AB45 (U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitUntil waitUntilDictationRecognizerHasStarted = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_0 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_0, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::<.ctor>b__1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__1_3_m4FBFB1081A9B70AEAB6D61B61C9BF1E31D6D09B7 (U3CU3Ec_tD5F04EBB764F1D05D8E8B362049BF85BD8FCDA83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitUntil waitUntilDictationRecognizerHasStopped = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_0 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31__ctor_mD1C432D167512427E20C35EE09EC4FA3EAE4597B (U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31_MoveNext_m1842E34164247B5FC37D2F1B8FC0D925A22882F8 (U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_mA2013DC790084E5BBB2CC13E17D07A49CEA43890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mE04742A7A151B920A24137B5F00040035EBEF63E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationError_m33F98B0DC284F4887C115640EA5F5BFCEBA164EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mFD3ACEE3BB06255C8DE84B1136CDB8AC234174D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_DictationRecognizer_DictationResult_m067B2232436F0915B51BFB0D074002BB37190719_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_008b;
		}

IL_000e:
		{
			// if (Application.isPlaying && dictationRecognizer != null)
			bool L_2;
			L_2 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0020;
			}
		}

IL_0016:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_3 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			G_B7_0 = ((!(((RuntimeObject*)(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_0021;
		}

IL_0020:
		{
			G_B7_0 = 0;
		}

IL_0021:
		{
			V_1 = (bool)G_B7_0;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_012c;
			}
		}

IL_0028:
		{
			// if (!isTransitioning && IsListening) { await StopRecordingAsync(); }
			WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			bool L_6 = L_5->get_isTransitioning_26();
			if (L_6)
			{
				goto IL_0043;
			}
		}

IL_0036:
		{
			WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_7 = __this->get_U3CU3E4__this_2();
			NullCheck(L_7);
			bool L_8;
			L_8 = WindowsDictationInputProvider_get_IsListening_m01E80EAA7B5233D25B41DA2459321ACEFBAD26CF_inline(L_7, /*hidden argument*/NULL);
			G_B11_0 = ((int32_t)(L_8));
			goto IL_0044;
		}

IL_0043:
		{
			G_B11_0 = 0;
		}

IL_0044:
		{
			V_2 = (bool)G_B11_0;
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_00b0;
			}
		}

IL_0048:
		{
			// if (!isTransitioning && IsListening) { await StopRecordingAsync(); }
			WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_10 = __this->get_U3CU3E4__this_2();
			NullCheck(L_10);
			Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * L_11;
			L_11 = WindowsDictationInputProvider_StopRecordingAsync_m6D263105085E2C51359424A208D63610AB8F0E59(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_12;
			L_12 = Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A(L_11, /*hidden argument*/Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A_RuntimeMethod_var);
			V_3 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539((TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_00a7;
			}
		}

IL_0063:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_15 = V_3;
			__this->set_U3CU3Eu__1_3(L_15);
			V_4 = __this;
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_mA2013DC790084E5BBB2CC13E17D07A49CEA43890((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_3), (U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 **)(&V_4), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7_mA2013DC790084E5BBB2CC13E17D07A49CEA43890_RuntimeMethod_var);
			goto IL_0168;
		}

IL_008b:
		{
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_17 = __this->get_U3CU3Eu__1_3();
			V_3 = L_17;
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * L_18 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_00a7:
		{
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_20;
			L_20 = TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61((TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61_RuntimeMethod_var);
		}

IL_00b0:
		{
			// dictationRecognizer.DictationHypothesis -= DictationRecognizer_DictationHypothesis;
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_21 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_22 = __this->get_U3CU3E4__this_2();
			DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 * L_23 = (DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4 *)il2cpp_codegen_object_new(DictationHypothesisDelegate_tB114A80C520E9A7AEBCC6FB097CD282D887C5EB4_il2cpp_TypeInfo_var);
			DictationHypothesisDelegate__ctor_mC0ABE67DC4DBB4FA1F9869C18419245544A3E597(L_23, L_22, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mFD3ACEE3BB06255C8DE84B1136CDB8AC234174D8_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_21);
			DictationRecognizer_remove_DictationHypothesis_m9F2EF6DC31E8D84CE505C6BDAC853BC0D8471EAB(L_21, L_23, /*hidden argument*/NULL);
			// dictationRecognizer.DictationResult -= DictationRecognizer_DictationResult;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_24 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_25 = __this->get_U3CU3E4__this_2();
			DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D * L_26 = (DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D *)il2cpp_codegen_object_new(DictationResultDelegate_t88BDCB6357C9490F858C89A42042833C6D61866D_il2cpp_TypeInfo_var);
			DictationResultDelegate__ctor_mA245D7423472C29BE33A7340495C2673E4FF3A65(L_26, L_25, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationResult_m067B2232436F0915B51BFB0D074002BB37190719_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_24);
			DictationRecognizer_remove_DictationResult_m1021B2EC2757F57A15E20A9130E28985F2CD2E6A(L_24, L_26, /*hidden argument*/NULL);
			// dictationRecognizer.DictationComplete -= DictationRecognizer_DictationComplete;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_27 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_28 = __this->get_U3CU3E4__this_2();
			DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC * L_29 = (DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC *)il2cpp_codegen_object_new(DictationCompletedDelegate_tE6D2D2F684A5A59434BE8AF87FCDC43BD191F3DC_il2cpp_TypeInfo_var);
			DictationCompletedDelegate__ctor_mC90654E14428DFAEF0ADC53BF45C64487DE4B028(L_29, L_28, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mE04742A7A151B920A24137B5F00040035EBEF63E_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_27);
			DictationRecognizer_remove_DictationComplete_mF19070690AD8045AB16FECC264CB87DCDE223D58(L_27, L_29, /*hidden argument*/NULL);
			// dictationRecognizer.DictationError -= DictationRecognizer_DictationError;
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_30 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_31 = __this->get_U3CU3E4__this_2();
			DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 * L_32 = (DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489 *)il2cpp_codegen_object_new(DictationErrorHandler_t0DEE0680E9AD9FFB1CEFC4DD62C0651AC21A2489_il2cpp_TypeInfo_var);
			DictationErrorHandler__ctor_m0D33C95E89B5B9F7361B33CBEFD9E12FAEBB7CA4(L_32, L_31, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationError_m33F98B0DC284F4887C115640EA5F5BFCEBA164EA_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_30);
			DictationRecognizer_remove_DictationError_m260C0E6B821661E95EBBE59B10046FD3C2DD8FC7(L_30, L_32, /*hidden argument*/NULL);
			// dictationRecognizer.Dispose();
			DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_33 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
			NullCheck(L_33);
			DictationRecognizer_Dispose_m2E97E835018DB62CCD41023232CA977C0CF350C0(L_33, /*hidden argument*/NULL);
		}

IL_012c:
		{
			// base.Disable();
			WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_34 = __this->get_U3CU3E4__this_2();
			NullCheck(L_34);
			WindowsDictationInputProvider_U3CU3En__0_m0670D05C01A55CE2BB600605EF9D55C301BED637(L_34, /*hidden argument*/NULL);
			goto IL_0154;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013a;
		}
		throw e;
	}

CATCH_013a:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_35 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_36 = V_5;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_35, L_36, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0168;
	} // end catch (depth: 1)

IL_0154:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_37 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_37, /*hidden argument*/NULL);
	}

IL_0168:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__31_SetStateMachine_mC4ED1D1F0B759FAEF646B2881CAC00039332FCB7 (U3CDisableU3Ed__31_tACCB484EDF3A733DA17B8530D7631CFCC12151D7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7__ctor_m959E160BF127B4D71CA1B4AD941F5BBD59344F65 (U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7_MoveNext_m039A0B8278AF7E6D28D94D927896352705AEFEC7 (U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_mDC7098AEC669128E2F138FCC752F00C1FEA3DDAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_006b;
		}

IL_000e:
		{
			// await StartRecordingAsync(listener, initialSilenceTimeout, autoSilenceTimeout, recordingTime, micDeviceName);
			WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_2 = __this->get_U3CU3E4__this_7();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_listener_2();
			float L_4 = __this->get_initialSilenceTimeout_3();
			float L_5 = __this->get_autoSilenceTimeout_4();
			int32_t L_6 = __this->get_recordingTime_5();
			String_t* L_7 = __this->get_micDeviceName_6();
			NullCheck(L_2);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
			L_8 = WindowsDictationInputProvider_StartRecordingAsync_m1B512B167409C3DAFC16A293D75AD086CE1C72FA(L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9;
			L_9 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0087;
			}
		}

IL_0047:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = V_1;
			__this->set_U3CU3Eu__1_8(L_12);
			V_2 = __this;
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_mDC7098AEC669128E2F138FCC752F00C1FEA3DDAA((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_13, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C **)(&V_2), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C_mDC7098AEC669128E2F138FCC752F00C1FEA3DDAA_RuntimeMethod_var);
			goto IL_00bd;
		}

IL_006b:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14 = __this->get_U3CU3Eu__1_8();
			V_1 = L_14;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_15 = __this->get_address_of_U3CU3Eu__1_8();
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_0087:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			goto IL_00a9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bd;
	} // end catch (depth: 1)

IL_00a9:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__7_SetStateMachine_m46D5CC4331CB61789BD2EA460068A8786D13367A (U3CStartRecordingU3Ed__7_t676E03F4B85E5CD0016E2EAB846AE1A8154B009C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10__ctor_m1C2237F76AE9A6998A4CCC18D7655F67C47DD945 (U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10_MoveNext_mFB365AD53A8F0BAD6DC64B8D5FC5BFECF10E2B87 (U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_m13F1A0250150FF0A64860BA38172DBB27D7B7C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58094DFD982E8F83C13584471CA99E2D492D58A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66567CDCC7582D19AC6F27568F55ED3656B1F5DC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * V_6 = NULL;
	U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * V_7 = NULL;
	SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * V_8 = NULL;
	bool V_9 = false;
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	int32_t G_B17_0 = 0;
	int32_t G_B22_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_0023;
		}

IL_000f:
		{
			// using (StartRecordingAsyncPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_StartRecordingAsyncPerfMarker_22();
			V_1 = L_2;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
			L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_8(L_3);
		}

IL_0023:
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_002f;
				}
			}

IL_0027:
			{
				goto IL_0029;
			}

IL_0029:
			{
				int32_t L_5 = V_0;
				if ((((int32_t)L_5) == ((int32_t)1)))
				{
					goto IL_0034;
				}
			}

IL_002d:
			{
				goto IL_0039;
			}

IL_002f:
			{
				goto IL_016b;
			}

IL_0034:
			{
				goto IL_0242;
			}

IL_0039:
			{
				// if (IsListening || isTransitioning || Service == null || !Application.isPlaying)
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_6 = __this->get_U3CU3E4__this_7();
				NullCheck(L_6);
				bool L_7;
				L_7 = WindowsDictationInputProvider_get_IsListening_m01E80EAA7B5233D25B41DA2459321ACEFBAD26CF_inline(L_6, /*hidden argument*/NULL);
				if (L_7)
				{
					goto IL_006b;
				}
			}

IL_0047:
			{
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_8 = __this->get_U3CU3E4__this_7();
				NullCheck(L_8);
				bool L_9 = L_8->get_isTransitioning_26();
				if (L_9)
				{
					goto IL_006b;
				}
			}

IL_0054:
			{
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_10 = __this->get_U3CU3E4__this_7();
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(L_10, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
				if (!L_11)
				{
					goto IL_006b;
				}
			}

IL_0061:
			{
				bool L_12;
				L_12 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
				G_B17_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
				goto IL_006c;
			}

IL_006b:
			{
				G_B17_0 = 1;
			}

IL_006c:
			{
				V_2 = (bool)G_B17_0;
				bool L_13 = V_2;
				if (!L_13)
				{
					goto IL_0081;
				}
			}

IL_0070:
			{
				// Debug.LogWarning("Unable to start recording");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral66567CDCC7582D19AC6F27568F55ED3656B1F5DC, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x340, FINALLY_0301);
			}

IL_0081:
			{
				// if (dictationRecognizer == null && InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.ManualStart)
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_14 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
				if (L_14)
				{
					goto IL_00a2;
				}
			}

IL_0088:
			{
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_15 = __this->get_U3CU3E4__this_7();
				NullCheck(L_15);
				MixedRealityInputSystemProfile_t4B4A55122275B102E760E4209B80D1F6C0007F23 * L_16;
				L_16 = BaseInputDeviceManager_get_InputSystemProfile_m9A511D56CA8760DACD8FD7D997DE79479E4DAF71(L_15, /*hidden argument*/NULL);
				NullCheck(L_16);
				MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * L_17;
				L_17 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_mBE692898D5C1C58160CC153D391149E6516C8703(L_16, /*hidden argument*/NULL);
				NullCheck(L_17);
				int32_t L_18;
				L_18 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mBD72C68AE8ACECF31601DF0157C93B47A4215549_inline(L_17, /*hidden argument*/NULL);
				G_B22_0 = ((((int32_t)L_18) == ((int32_t)1))? 1 : 0);
				goto IL_00a3;
			}

IL_00a2:
			{
				G_B22_0 = 0;
			}

IL_00a3:
			{
				V_3 = (bool)G_B22_0;
				bool L_19 = V_3;
				if (!L_19)
				{
					goto IL_00b5;
				}
			}

IL_00a7:
			{
				// InitializeDictationRecognizer();
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_20 = __this->get_U3CU3E4__this_7();
				NullCheck(L_20);
				WindowsDictationInputProvider_InitializeDictationRecognizer_m32BC2E41A73ECEA3B9EC829AC0906AEB7BA570FE(L_20, /*hidden argument*/NULL);
			}

IL_00b5:
			{
				// hasFailed = false;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_21 = __this->get_U3CU3E4__this_7();
				NullCheck(L_21);
				L_21->set_hasFailed_24((bool)0);
				// IsListening = true;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_22 = __this->get_U3CU3E4__this_7();
				NullCheck(L_22);
				WindowsDictationInputProvider_set_IsListening_m65A0446A3BA77ACA2CE36E65B8E96D085C28E95B_inline(L_22, (bool)1, /*hidden argument*/NULL);
				// isTransitioning = true;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_23 = __this->get_U3CU3E4__this_7();
				NullCheck(L_23);
				L_23->set_isTransitioning_26((bool)1);
				// if (listener != null)
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_listener_2();
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_25;
				L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				V_4 = L_25;
				bool L_26 = V_4;
				if (!L_26)
				{
					goto IL_0111;
				}
			}

IL_00ec:
			{
				// hasListener = true;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_27 = __this->get_U3CU3E4__this_7();
				NullCheck(L_27);
				L_27->set_hasListener_25((bool)1);
				// Service.PushModalInputHandler(listener);
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_28 = __this->get_U3CU3E4__this_7();
				NullCheck(L_28);
				RuntimeObject* L_29;
				L_29 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(L_28, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_listener_2();
				NullCheck(L_29);
				InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(15 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::PushModalInputHandler(UnityEngine.GameObject) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, L_29, L_30);
			}

IL_0111:
			{
				// if (PhraseRecognitionSystem.Status == SpeechSystemStatus.Running)
				int32_t L_31;
				L_31 = PhraseRecognitionSystem_get_Status_m3D95148AA1F0C04973D320DBA79C9B1D8E5C23AC(/*hidden argument*/NULL);
				V_5 = (bool)((((int32_t)L_31) == ((int32_t)1))? 1 : 0);
				bool L_32 = V_5;
				if (!L_32)
				{
					goto IL_0127;
				}
			}

IL_011f:
			{
				// PhraseRecognitionSystem.Shutdown();
				PhraseRecognitionSystem_Shutdown_m28B5C13BBCCB57412A4CF73C89CF4D0BFE569D49(/*hidden argument*/NULL);
			}

IL_0127:
			{
				// await waitUntilPhraseRecognitionSystemHasStopped;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_33 = __this->get_U3CU3E4__this_7();
				NullCheck(L_33);
				WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_34 = L_33->get_waitUntilPhraseRecognitionSystemHasStopped_35();
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_35;
				L_35 = AwaiterExtensions_GetAwaiter_m19F2A5009ABEF7C69C5D1F9CFBA83A6E550F7578(L_34, /*hidden argument*/NULL);
				V_6 = L_35;
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_36 = V_6;
				NullCheck(L_36);
				bool L_37;
				L_37 = SimpleCoroutineAwaiter_get_IsCompleted_mA1D47F19E3535E59267118BB76A0C9495A50C4CE_inline(L_36, /*hidden argument*/NULL);
				if (L_37)
				{
					goto IL_0188;
				}
			}

IL_0142:
			{
				int32_t L_38 = 0;
				V_0 = L_38;
				__this->set_U3CU3E1__state_0(L_38);
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_39 = V_6;
				__this->set_U3CU3Eu__1_10(L_39);
				V_7 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_40 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_m13F1A0250150FF0A64860BA38172DBB27D7B7C57((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_40, (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 **)(&V_6), (U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 **)(&V_7), /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_m13F1A0250150FF0A64860BA38172DBB27D7B7C57_RuntimeMethod_var);
				IL2CPP_LEAVE(0x354, FINALLY_0301);
			}

IL_016b:
			{
				RuntimeObject * L_41 = __this->get_U3CU3Eu__1_10();
				V_6 = ((SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 *)CastclassClass((RuntimeObject*)L_41, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_10(NULL);
				int32_t L_42 = (-1);
				V_0 = L_42;
				__this->set_U3CU3E1__state_0(L_42);
			}

IL_0188:
			{
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_43 = V_6;
				NullCheck(L_43);
				SimpleCoroutineAwaiter_GetResult_m2AAF3D8883A33795B8216B9D4BBA4586B2E29365(L_43, /*hidden argument*/NULL);
				// Debug.Assert(PhraseRecognitionSystem.Status == SpeechSystemStatus.Stopped);
				int32_t L_44;
				L_44 = PhraseRecognitionSystem_get_Status_m3D95148AA1F0C04973D320DBA79C9B1D8E5C23AC(/*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Assert_m53F36A02500304378258152FEF64F63DF788CA2B((bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
				// deviceName = micDeviceName;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_45 = __this->get_U3CU3E4__this_7();
				String_t* L_46 = __this->get_micDeviceName_6();
				NullCheck(L_45);
				L_45->set_deviceName_29(L_46);
				// Microphone.GetDeviceCaps(deviceName, out minSamplingRate, out samplingRate);
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_47 = __this->get_U3CU3E4__this_7();
				NullCheck(L_47);
				String_t* L_48 = L_47->get_deviceName_29();
				int32_t* L_49 = __this->get_address_of_U3CminSamplingRateU3E5__2_9();
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_50 = __this->get_U3CU3E4__this_7();
				NullCheck(L_50);
				int32_t* L_51 = L_50->get_address_of_samplingRate_30();
				Microphone_GetDeviceCaps_mD5E5DA4817126E96A7A00E99828FD8A113A65A9E(L_48, (int32_t*)L_49, (int32_t*)L_51, /*hidden argument*/NULL);
				// dictationRecognizer.InitialSilenceTimeoutSeconds = initialSilenceTimeout;
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_52 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
				float L_53 = __this->get_initialSilenceTimeout_3();
				NullCheck(L_52);
				DictationRecognizer_set_InitialSilenceTimeoutSeconds_m627AD13CB5E50B9D3D6EA40AFD4B6A5EC56AEEBB(L_52, L_53, /*hidden argument*/NULL);
				// dictationRecognizer.AutoSilenceTimeoutSeconds = autoSilenceTimeout;
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_54 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
				float L_55 = __this->get_autoSilenceTimeout_4();
				NullCheck(L_54);
				DictationRecognizer_set_AutoSilenceTimeoutSeconds_m10BF345CBF41C4CBDEB84F0F5B8D64C76A6D1126(L_54, L_55, /*hidden argument*/NULL);
				// dictationRecognizer.Start();
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_56 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
				NullCheck(L_56);
				DictationRecognizer_Start_m6C9847C17C7262369B2732E3FE5F2659A2B76D45(L_56, /*hidden argument*/NULL);
				// await waitUntilDictationRecognizerHasStarted;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_57 = __this->get_U3CU3E4__this_7();
				NullCheck(L_57);
				WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_58 = L_57->get_waitUntilDictationRecognizerHasStarted_36();
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_59;
				L_59 = AwaiterExtensions_GetAwaiter_m19F2A5009ABEF7C69C5D1F9CFBA83A6E550F7578(L_58, /*hidden argument*/NULL);
				V_8 = L_59;
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_60 = V_8;
				NullCheck(L_60);
				bool L_61;
				L_61 = SimpleCoroutineAwaiter_get_IsCompleted_mA1D47F19E3535E59267118BB76A0C9495A50C4CE_inline(L_60, /*hidden argument*/NULL);
				if (L_61)
				{
					goto IL_025f;
				}
			}

IL_0219:
			{
				int32_t L_62 = 1;
				V_0 = L_62;
				__this->set_U3CU3E1__state_0(L_62);
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_63 = V_8;
				__this->set_U3CU3Eu__1_10(L_63);
				V_7 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_64 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_m13F1A0250150FF0A64860BA38172DBB27D7B7C57((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_64, (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 **)(&V_8), (U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 **)(&V_7), /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70_m13F1A0250150FF0A64860BA38172DBB27D7B7C57_RuntimeMethod_var);
				IL2CPP_LEAVE(0x354, FINALLY_0301);
			}

IL_0242:
			{
				RuntimeObject * L_65 = __this->get_U3CU3Eu__1_10();
				V_8 = ((SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 *)CastclassClass((RuntimeObject*)L_65, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_10(NULL);
				int32_t L_66 = (-1);
				V_0 = L_66;
				__this->set_U3CU3E1__state_0(L_66);
			}

IL_025f:
			{
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_67 = V_8;
				NullCheck(L_67);
				SimpleCoroutineAwaiter_GetResult_m2AAF3D8883A33795B8216B9D4BBA4586B2E29365(L_67, /*hidden argument*/NULL);
				// Debug.Assert(dictationRecognizer.Status == SpeechSystemStatus.Running);
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_68 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
				NullCheck(L_68);
				int32_t L_69;
				L_69 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_68, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Assert_m53F36A02500304378258152FEF64F63DF788CA2B((bool)((((int32_t)L_69) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
				// if (dictationRecognizer.Status == SpeechSystemStatus.Failed)
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_70 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
				NullCheck(L_70);
				int32_t L_71;
				L_71 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_70, /*hidden argument*/NULL);
				V_9 = (bool)((((int32_t)L_71) == ((int32_t)2))? 1 : 0);
				bool L_72 = V_9;
				if (!L_72)
				{
					goto IL_02b5;
				}
			}

IL_028d:
			{
				// Service.RaiseDictationError(inputSource, "Dictation recognizer failed to start!");
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_73 = __this->get_U3CU3E4__this_7();
				NullCheck(L_73);
				RuntimeObject* L_74;
				L_74 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(L_73, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_75 = __this->get_U3CU3E4__this_7();
				NullCheck(L_75);
				RuntimeObject* L_76 = L_75->get_inputSource_27();
				NullCheck(L_74);
				InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(62 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, L_74, L_76, _stringLiteral58094DFD982E8F83C13584471CA99E2D492D58A7, (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
				// return;
				IL2CPP_LEAVE(0x340, FINALLY_0301);
			}

IL_02b5:
			{
				// dictationAudioClip = Microphone.Start(deviceName, false, recordingTime, samplingRate);
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_77 = __this->get_U3CU3E4__this_7();
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_78 = __this->get_U3CU3E4__this_7();
				NullCheck(L_78);
				String_t* L_79 = L_78->get_deviceName_29();
				int32_t L_80 = __this->get_recordingTime_5();
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_81 = __this->get_U3CU3E4__this_7();
				NullCheck(L_81);
				int32_t L_82 = L_81->get_samplingRate_30();
				AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_83;
				L_83 = Microphone_Start_m2F9AD1061F64F1F569B00503955CF728C1B16D06(L_79, (bool)0, L_80, L_82, /*hidden argument*/NULL);
				NullCheck(L_77);
				L_77->set_dictationAudioClip_32(L_83);
				// textSoFar = new StringBuilder();
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_84 = __this->get_U3CU3E4__this_7();
				StringBuilder_t * L_85 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
				StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_85, /*hidden argument*/NULL);
				NullCheck(L_84);
				L_84->set_textSoFar_28(L_85);
				// isTransitioning = false;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_86 = __this->get_U3CU3E4__this_7();
				NullCheck(L_86);
				L_86->set_isTransitioning_26((bool)0);
				IL2CPP_LEAVE(0x318, FINALLY_0301);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0301;
		}

FINALLY_0301:
		{ // begin finally (depth: 2)
			{
				int32_t L_87 = V_0;
				if ((((int32_t)L_87) >= ((int32_t)0)))
				{
					goto IL_0317;
				}
			}

IL_0305:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_88 = __this->get_address_of_U3CU3Es__1_8();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_88, /*hidden argument*/NULL);
			}

IL_0317:
			{
				IL2CPP_END_FINALLY(769)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(769)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x340, IL_0340)
			IL2CPP_JUMP_TBL(0x354, IL_0354)
			IL2CPP_JUMP_TBL(0x318, IL_0318)
		}

IL_0318:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_89 = __this->get_address_of_U3CU3Es__1_8();
			il2cpp_codegen_initobj(L_89, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0340;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0326;
		}
		throw e;
	}

CATCH_0326:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_90 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_91 = V_10;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_90, L_91, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0354;
	} // end catch (depth: 1)

IL_0340:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_92 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_92, /*hidden argument*/NULL);
	}

IL_0354:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__10_SetStateMachine_m36714E7605869F50B86306A62D2120E7C2C1B25E (U3CStartRecordingAsyncU3Ed__10_t6A5D68D13866BDB5FF4832162BF63FBA4D646A70 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8__ctor_mADB7768A6771332C2F2FA9CFD8FDB2FBD46DED17 (U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8_MoveNext_m3995FD17635CBE588D50F18F313D4C63613D5E31 (U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_m6C28F8A861F124D455224A4B12C4FC4EDF550FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_004d;
		}

IL_000e:
		{
			// await StopRecordingAsync();
			WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			Task_1_t20B69E8E2028353626E84A336FA44095D96D25D5 * L_3;
			L_3 = WindowsDictationInputProvider_StopRecordingAsync_m6D263105085E2C51359424A208D63610AB8F0E59(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_4;
			L_4 = Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A(L_3, /*hidden argument*/Task_1_GetAwaiter_m26A9105AD7618FC9B08AC7D704F617F309218B3A_RuntimeMethod_var);
			V_1 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539((TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_1), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mADA344A574373E48D88F6EB297342A2152CBD539_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0069;
			}
		}

IL_0029:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_7 = V_1;
			__this->set_U3CU3Eu__1_3(L_7);
			V_2 = __this;
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_m6C28F8A861F124D455224A4B12C4FC4EDF550FF2((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_8, (TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_1), (U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 **)(&V_2), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93_TisU3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4_m6C28F8A861F124D455224A4B12C4FC4EDF550FF2_RuntimeMethod_var);
			goto IL_009f;
		}

IL_004d:
		{
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93  L_9 = __this->get_U3CU3Eu__1_3();
			V_1 = L_9;
			TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 * L_10 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0069:
		{
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_12;
			L_12 = TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61((TaskAwaiter_1_tF7A93D23DBF5DF8DF7793D8113363AC69223CD93 *)(&V_1), /*hidden argument*/TaskAwaiter_1_GetResult_m172EC617281A4F3B58232398E23D456C343EAE61_RuntimeMethod_var);
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0073;
		}
		throw e;
	}

CATCH_0073:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_14 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009f;
	} // end catch (depth: 1)

IL_008b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_15, /*hidden argument*/NULL);
	}

IL_009f:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__8_SetStateMachine_mF696A424EFB3F7C8A807DF22415640DEA9A946EB (U3CStopRecordingU3Ed__8_t428ACCAF6711DCC688F79227DF69E7CB4F65ECE4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12__ctor_m72513714408720DB0AA6C7EC200909608A8FBCCE (U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12_MoveNext_m803F6D58BB6C888DDC63E73912F7098A6EFC3E60 (U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m9C6B056CD99D33410B89C087D23E7B73A0E8C3F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mC888A31494DA8E24FCC132F3E3C2E585030F8BFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CC9201FF3A30F167E478C97EF7FAE9D5B9255CB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * V_6 = NULL;
	U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * V_7 = NULL;
	SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	int32_t G_B16_0 = 0;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_0023;
		}

IL_000f:
		{
			// using (StopRecordingAsyncPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_StopRecordingAsyncPerfMarker_23();
			V_2 = L_2;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
			L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_3(L_3);
		}

IL_0023:
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_002f;
				}
			}

IL_0027:
			{
				goto IL_0029;
			}

IL_0029:
			{
				int32_t L_5 = V_0;
				if ((((int32_t)L_5) == ((int32_t)1)))
				{
					goto IL_0034;
				}
			}

IL_002d:
			{
				goto IL_0039;
			}

IL_002f:
			{
				goto IL_013a;
			}

IL_0034:
			{
				goto IL_01bc;
			}

IL_0039:
			{
				// if (!IsListening || isTransitioning || !Application.isPlaying)
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_6 = __this->get_U3CU3E4__this_2();
				NullCheck(L_6);
				bool L_7;
				L_7 = WindowsDictationInputProvider_get_IsListening_m01E80EAA7B5233D25B41DA2459321ACEFBAD26CF_inline(L_6, /*hidden argument*/NULL);
				if (!L_7)
				{
					goto IL_005e;
				}
			}

IL_0047:
			{
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_8 = __this->get_U3CU3E4__this_2();
				NullCheck(L_8);
				bool L_9 = L_8->get_isTransitioning_26();
				if (L_9)
				{
					goto IL_005e;
				}
			}

IL_0054:
			{
				bool L_10;
				L_10 = Application_get_isPlaying_m0388B541E40404CBB82D6AEB224A29053A0BC58C(/*hidden argument*/NULL);
				G_B16_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
				goto IL_005f;
			}

IL_005e:
			{
				G_B16_0 = 1;
			}

IL_005f:
			{
				V_3 = (bool)G_B16_0;
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_0076;
				}
			}

IL_0063:
			{
				// Debug.LogWarning("Unable to stop recording");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteral9CC9201FF3A30F167E478C97EF7FAE9D5B9255CB, /*hidden argument*/NULL);
				// return null;
				V_1 = (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL;
				IL2CPP_LEAVE(0x23A, FINALLY_0209);
			}

IL_0076:
			{
				// IsListening = false;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_12 = __this->get_U3CU3E4__this_2();
				NullCheck(L_12);
				WindowsDictationInputProvider_set_IsListening_m65A0446A3BA77ACA2CE36E65B8E96D085C28E95B_inline(L_12, (bool)0, /*hidden argument*/NULL);
				// isTransitioning = true;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_13 = __this->get_U3CU3E4__this_2();
				NullCheck(L_13);
				L_13->set_isTransitioning_26((bool)1);
				// if (hasListener)
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_14 = __this->get_U3CU3E4__this_2();
				NullCheck(L_14);
				bool L_15 = L_14->get_hasListener_25();
				V_4 = L_15;
				bool L_16 = V_4;
				if (!L_16)
				{
					goto IL_00c5;
				}
			}

IL_00a0:
			{
				// Service?.PopModalInputHandler();
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_17 = __this->get_U3CU3E4__this_2();
				NullCheck(L_17);
				RuntimeObject* L_18;
				L_18 = BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_inline(L_17, /*hidden argument*/BaseDataProvider_1_get_Service_m300190F2E39552396665FEAB0A8DDBD3752E041E_RuntimeMethod_var);
				RuntimeObject* L_19 = L_18;
				G_B20_0 = L_19;
				if (L_19)
				{
					G_B21_0 = L_19;
					goto IL_00b2;
				}
			}

IL_00af:
			{
				goto IL_00b8;
			}

IL_00b2:
			{
				NullCheck(G_B21_0);
				InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::PopModalInputHandler() */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B21_0);
			}

IL_00b8:
			{
				// hasListener = false;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_20 = __this->get_U3CU3E4__this_2();
				NullCheck(L_20);
				L_20->set_hasListener_25((bool)0);
			}

IL_00c5:
			{
				// Microphone.End(deviceName);
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_21 = __this->get_U3CU3E4__this_2();
				NullCheck(L_21);
				String_t* L_22 = L_21->get_deviceName_29();
				Microphone_End_mA8355F6CFDE340AE7177821B8544CA99CCE8071B(L_22, /*hidden argument*/NULL);
				// if (dictationRecognizer.Status == SpeechSystemStatus.Running)
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_23 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
				NullCheck(L_23);
				int32_t L_24;
				L_24 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_23, /*hidden argument*/NULL);
				V_5 = (bool)((((int32_t)L_24) == ((int32_t)1))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_00f6;
				}
			}

IL_00e9:
			{
				// dictationRecognizer.Stop();
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_26 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
				NullCheck(L_26);
				DictationRecognizer_Stop_m1CC3E04376DDF6A5B31B25515D1B3A66C238C308(L_26, /*hidden argument*/NULL);
			}

IL_00f6:
			{
				// await waitUntilDictationRecognizerHasStopped;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_27 = __this->get_U3CU3E4__this_2();
				NullCheck(L_27);
				WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_28 = L_27->get_waitUntilDictationRecognizerHasStopped_37();
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_29;
				L_29 = AwaiterExtensions_GetAwaiter_m19F2A5009ABEF7C69C5D1F9CFBA83A6E550F7578(L_28, /*hidden argument*/NULL);
				V_6 = L_29;
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_30 = V_6;
				NullCheck(L_30);
				bool L_31;
				L_31 = SimpleCoroutineAwaiter_get_IsCompleted_mA1D47F19E3535E59267118BB76A0C9495A50C4CE_inline(L_30, /*hidden argument*/NULL);
				if (L_31)
				{
					goto IL_0157;
				}
			}

IL_0111:
			{
				int32_t L_32 = 0;
				V_0 = L_32;
				__this->set_U3CU3E1__state_0(L_32);
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_33 = V_6;
				__this->set_U3CU3Eu__1_4(L_33);
				V_7 = __this;
				AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m9C6B056CD99D33410B89C087D23E7B73A0E8C3F0((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_34, (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 **)(&V_6), (U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 **)(&V_7), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m9C6B056CD99D33410B89C087D23E7B73A0E8C3F0_RuntimeMethod_var);
				IL2CPP_LEAVE(0x24F, FINALLY_0209);
			}

IL_013a:
			{
				RuntimeObject * L_35 = __this->get_U3CU3Eu__1_4();
				V_6 = ((SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 *)CastclassClass((RuntimeObject*)L_35, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_4(NULL);
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->set_U3CU3E1__state_0(L_36);
			}

IL_0157:
			{
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_37 = V_6;
				NullCheck(L_37);
				SimpleCoroutineAwaiter_GetResult_m2AAF3D8883A33795B8216B9D4BBA4586B2E29365(L_37, /*hidden argument*/NULL);
				// Debug.Assert(dictationRecognizer.Status == SpeechSystemStatus.Stopped);
				IL2CPP_RUNTIME_CLASS_INIT(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var);
				DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * L_38 = ((WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F_il2cpp_TypeInfo_var))->get_dictationRecognizer_33();
				NullCheck(L_38);
				int32_t L_39;
				L_39 = DictationRecognizer_get_Status_m675489E1A4752DE522F72117C30676CCAE8DC39D(L_38, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Assert_m53F36A02500304378258152FEF64F63DF788CA2B((bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
				// PhraseRecognitionSystem.Restart();
				PhraseRecognitionSystem_Restart_m3D48D3DE57E4C309458956E1492275C7F7D57137(/*hidden argument*/NULL);
				// await waitUntilPhraseRecognitionSystemHasStarted;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_40 = __this->get_U3CU3E4__this_2();
				NullCheck(L_40);
				WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_41 = L_40->get_waitUntilPhraseRecognitionSystemHasStarted_34();
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_42;
				L_42 = AwaiterExtensions_GetAwaiter_m19F2A5009ABEF7C69C5D1F9CFBA83A6E550F7578(L_41, /*hidden argument*/NULL);
				V_8 = L_42;
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_43 = V_8;
				NullCheck(L_43);
				bool L_44;
				L_44 = SimpleCoroutineAwaiter_get_IsCompleted_mA1D47F19E3535E59267118BB76A0C9495A50C4CE_inline(L_43, /*hidden argument*/NULL);
				if (L_44)
				{
					goto IL_01d9;
				}
			}

IL_0193:
			{
				int32_t L_45 = 1;
				V_0 = L_45;
				__this->set_U3CU3E1__state_0(L_45);
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_46 = V_8;
				__this->set_U3CU3Eu__1_4(L_46);
				V_7 = __this;
				AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_47 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m9C6B056CD99D33410B89C087D23E7B73A0E8C3F0((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_47, (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 **)(&V_8), (U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 **)(&V_7), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1_m9C6B056CD99D33410B89C087D23E7B73A0E8C3F0_RuntimeMethod_var);
				IL2CPP_LEAVE(0x24F, FINALLY_0209);
			}

IL_01bc:
			{
				RuntimeObject * L_48 = __this->get_U3CU3Eu__1_4();
				V_8 = ((SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 *)CastclassClass((RuntimeObject*)L_48, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var));
				__this->set_U3CU3Eu__1_4(NULL);
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->set_U3CU3E1__state_0(L_49);
			}

IL_01d9:
			{
				SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_50 = V_8;
				NullCheck(L_50);
				SimpleCoroutineAwaiter_GetResult_m2AAF3D8883A33795B8216B9D4BBA4586B2E29365(L_50, /*hidden argument*/NULL);
				// Debug.Assert(PhraseRecognitionSystem.Status == SpeechSystemStatus.Running);
				int32_t L_51;
				L_51 = PhraseRecognitionSystem_get_Status_m3D95148AA1F0C04973D320DBA79C9B1D8E5C23AC(/*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Assert_m53F36A02500304378258152FEF64F63DF788CA2B((bool)((((int32_t)L_51) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
				// isTransitioning = false;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_52 = __this->get_U3CU3E4__this_2();
				NullCheck(L_52);
				L_52->set_isTransitioning_26((bool)0);
				// return dictationAudioClip;
				WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * L_53 = __this->get_U3CU3E4__this_2();
				NullCheck(L_53);
				AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_54 = L_53->get_dictationAudioClip_32();
				V_1 = L_54;
				IL2CPP_LEAVE(0x23A, FINALLY_0209);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0209;
		}

FINALLY_0209:
		{ // begin finally (depth: 2)
			{
				int32_t L_55 = V_0;
				if ((((int32_t)L_55) >= ((int32_t)0)))
				{
					goto IL_021f;
				}
			}

IL_020d:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_56 = __this->get_address_of_U3CU3Es__1_3();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_56, /*hidden argument*/NULL);
			}

IL_021f:
			{
				IL2CPP_END_FINALLY(521)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(521)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x23A, IL_023a)
			IL2CPP_JUMP_TBL(0x24F, IL_024f)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0220;
		}
		throw e;
	}

CATCH_0220:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_57 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_58 = V_9;
		AsyncTaskMethodBuilder_1_SetException_m13E931EC8E7ED47A810CD3DBA2107CE88B96D816((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_57, L_58, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m13E931EC8E7ED47A810CD3DBA2107CE88B96D816_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_024f;
	} // end catch (depth: 1)

IL_023a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 * L_59 = __this->get_address_of_U3CU3Et__builder_1();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_60 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mC888A31494DA8E24FCC132F3E3C2E585030F8BFF((AsyncTaskMethodBuilder_1_t936915F023C40EA6ED63AF8B5F59CA10D33C6E28 *)L_59, L_60, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mC888A31494DA8E24FCC132F3E3C2E585030F8BFF_RuntimeMethod_var);
	}

IL_024f:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__12_SetStateMachine_m8E4435E2CFBA1C2A9BAD39A4FABFB1E21BB23E68 (U3CStopRecordingAsyncU3Ed__12_tD8397395E1B9409D54D264B0C54B08F7FC3564A1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_mBD72C68AE8ACECF31601DF0157C93B47A4215549_inline (MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * __this, const RuntimeMethod* method)
{
	{
		// public AutoStartBehavior SpeechRecognizerStartBehavior => startBehavior;
		int32_t L_0 = __this->get_startBehavior_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_m01E80EAA7B5233D25B41DA2459321ACEFBAD26CF_inline (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = __this->get_U3CIsListeningU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* MixedRealitySpeechCommandsProfile_get_SpeechCommands_mE4E046E08D416E2825B89BFB0FE58F757D259F19_inline (MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * __this, const RuntimeMethod* method)
{
	{
		// public SpeechCommands[] SpeechCommands => speechCommands;
		SpeechCommandsU5BU5D_t769CEDACC0299A8664E5095377A1192A1F324891* L_0 = __this->get_speechCommands_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_m8922AA86109244567A754D7ADBD75C4C39A4EBDA_inline (MixedRealitySpeechCommandsProfile_tED61991554D4D40498EABCAB2F5A8635D23B0CFA * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel SpeechRecognitionConfidenceLevel => recognitionConfidenceLevel;
		int32_t L_0 = __this->get_recognitionConfidenceLevel_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_m3737A8D58381E0743B3AFF7640B0DF619689CC91_inline (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRecognitionConfidenceLevelU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_m882F8B8455B4CAFE53DDBDE167851EF596F8FACD_inline (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = __this->get_U3CRecognitionConfidenceLevelU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechCommands_get_KeyCode_m9F769AB6EDCEE90294459FD99C82C20F335001FF_inline (SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode KeyCode => keyCode;
		int32_t L_0 = __this->get_keyCode_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsSpeechInputProvider_get_InputSource_mEEF9A891AD26CB0DB841726797E8B9C123083290_inline (WindowsSpeechInputProvider_t1C44B2FFA1625DA71EBCD6322E69395D419890E5 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource => globalInputSource;
		BaseGlobalInputSource_t52203023EDDA1D0969187B995C6CBDCE49D0E036 * L_0 = __this->get_globalInputSource_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_m65A0446A3BA77ACA2CE36E65B8E96D085C28E95B_inline (WindowsDictationInputProvider_tD8D774A2DD7AE144DFE55229E8E7CD6D4A1EF44F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsListeningU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mA1D47F19E3535E59267118BB76A0C9495A50C4CE_inline (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseDataProvider_1_set_Registrar_m9A6B8E558C9D61800FFCA7DF25947534A3FFF3E1_gshared_inline (BaseDataProvider_1_tE53B250B7876B3E56E408C5CA22A803CF413477B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m928B43238B7ECA6810C21221E3F7A4568C73ABB4_gshared_inline (BaseDataProvider_1_tE53B250B7876B3E56E408C5CA22A803CF413477B * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_13();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
