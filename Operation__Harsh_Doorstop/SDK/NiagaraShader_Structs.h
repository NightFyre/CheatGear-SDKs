#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Enum NiagaraShader.FNiagaraCompileEventSeverity
	 */
	enum class EFNiagaraCompileEventSeverity : uint8_t
	{
		FNiagaraCompileEventSeverity_Log                              = 0,
		FNiagaraCompileEventSeverity_Warning                          = 1,
		FNiagaraCompileEventSeverity_Error                            = 2,
		FNiagaraCompileEventSeverity_FNiagaraCompileEventSeverity_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
	 * Size -> 0x0028
	 */
	struct FNiagaraDataInterfaceGeneratedFunction
	{
	public:
		unsigned char                                              UnknownData_KB5X[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
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
		TArray<struct FNiagaraDataInterfaceGeneratedFunction>      GeneratedFunctions;                                      // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NiagaraShader.NiagaraCompileEvent
	 * Size -> 0x0048
	 */
	struct FNiagaraCompileEvent
	{
	public:
		EFNiagaraCompileEventSeverity                              Severity;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPHC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               NodeGuid;                                                // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PinGuid;                                                 // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       StackGuids;                                              // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
