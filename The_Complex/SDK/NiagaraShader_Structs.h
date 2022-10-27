#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
		FNiagaraCompileEventSeverity_Log                              = 0,
		FNiagaraCompileEventSeverity_Display                          = 1,
		FNiagaraCompileEventSeverity_Warning                          = 2,
		FNiagaraCompileEventSeverity_Error                            = 3,
		FNiagaraCompileEventSeverity_FNiagaraCompileEventSeverity_MAX = 4
	};

	/**
	 * Enum NiagaraShader.FNiagaraCompileEventSource
	 */
	enum class EFNiagaraCompileEventSource : uint8_t
	{
		FNiagaraCompileEventSource_Unset                          = 0,
		FNiagaraCompileEventSource_ScriptDependency               = 1,
		FNiagaraCompileEventSource_FNiagaraCompileEventSource_MAX = 2
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
		unsigned char                                              UnknownData_H1TS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bWritesParticles : 1;                                    // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPartialParticleUpdate : 1;                              // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bParticleIterationStateEnabled : 1;                      // 0x001C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6VJ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParticleIterationStateBinding;                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGMI[0x4];                                   // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           ParticleIterationStateRange;                             // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZYJ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        OutputDestinations;                                      // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumIterations;                                           // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NumIterationsBinding;                                    // 0x004C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraGpuDispatchType                                    GpuDispatchType;                                         // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSFA[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          GpuDispatchNumThreads;                                   // 0x0058(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2I7[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
	 * Size -> 0x0028
	 */
	struct FNiagaraDataInterfaceGeneratedFunction
	{
	public:
		unsigned char                                              UnknownData_VZ84[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_6BAG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShortDescription;                                        // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDismissable;                                            // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7FUB[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               NodeGuid;                                                // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PinGuid;                                                 // 0x003C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1FOB[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGuid>                                       StackGuids;                                              // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EFNiagaraCompileEventSource                                Source;                                                  // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYVW[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
