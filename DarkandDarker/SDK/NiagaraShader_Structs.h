#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum NiagaraShader.ENiagaraMipMapGenerationType
	 */
	enum class ENiagaraMipMapGenerationType : uint8_t
	{
		Unfiltered = 0,
		Linear     = 1,
		Blur1      = 2,
		Blur2      = 3,
		Blur3      = 4,
		Blur4      = 5,
		MAX        = 6
	};

	/**
	 * Enum NiagaraShader.ENiagaraGpuDispatchType
	 */
	enum class ENiagaraGpuDispatchType : uint8_t
	{
		OneD   = 0,
		TwoD   = 1,
		ThreeD = 2,
		Custom = 3,
		MAX    = 4
	};

	/**
	 * Enum NiagaraShader.ENiagaraSimStageExecuteBehavior
	 */
	enum class ENiagaraSimStageExecuteBehavior : uint8_t
	{
		Always               = 0,
		OnSimulationReset    = 1,
		NotOnSimulationReset = 2,
		MAX                  = 3
	};

	/**
	 * Enum NiagaraShader.FNiagaraCompileEventSeverity
	 */
	enum class EFNiagaraCompileEventSeverity : uint8_t
	{
		FNiagaraCompileEventSeverityLog                              = 0,
		FNiagaraCompileEventSeverityDisplay                          = 1,
		FNiagaraCompileEventSeverityWarning                          = 2,
		FNiagaraCompileEventSeverityError                            = 3,
		FNiagaraCompileEventSeverityFNiagaraCompileEventSeverity_MAX = 4
	};

	/**
	 * Enum NiagaraShader.FNiagaraCompileEventSource
	 */
	enum class EFNiagaraCompileEventSource : uint8_t
	{
		FNiagaraCompileEventSourceUnset                          = 0,
		FNiagaraCompileEventSourceScriptDependency               = 1,
		FNiagaraCompileEventSourceFNiagaraCompileEventSource_MAX = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NiagaraShader.SimulationStageMetaData
	 * Size -> 0x0068
	 */
	struct FSimulationStageMetaData
	{
	public:
		class FName                                                SimulationStageName;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EnabledBinding;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                IterationSource;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSimStageExecuteBehavior                            ExecuteBehavior;                                         // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JV1W[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bWritesParticles : 1;                                    // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPartialParticleUpdate : 1;                              // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParticleIterationStateEnabled : 1;                      // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PZ8[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParticleIterationStateBinding;                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6JT[0x4];                                   // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           ParticleIterationStateRange;                             // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTEL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        OutputDestinations;                                      // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumIterations;                                           // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NumIterationsBinding;                                    // 0x004C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraGpuDispatchType                                    GpuDispatchType;                                         // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZXV[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          GpuDispatchNumThreads;                                   // 0x0058(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZNQ[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
	 * Size -> 0x0028
	 */
	struct FNiagaraDataInterfaceGeneratedFunction
	{
	public:
		unsigned char                                              UnknownData_LP1X[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
	 * Size -> 0x0030
	 */
	struct FNiagaraDataInterfaceGPUParamInfo
	{
	public:
		class FString                                              DataInterfaceHLSLSymbol;                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DIClassName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataInterfaceGeneratedFunction>      GeneratedFunctions;                                      // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NiagaraShader.NiagaraCompileEvent
	 * Size -> 0x0068
	 */
	struct FNiagaraCompileEvent
	{
	public:
		EFNiagaraCompileEventSeverity                              Severity;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VK61[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShortDescription;                                        // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDismissable;                                            // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FL3G[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               NodeGuid;                                                // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PinGuid;                                                 // 0x003C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9V0[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGuid>                                       StackGuids;                                              // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EFNiagaraCompileEventSource                                Source;                                                  // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2EVJ[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
