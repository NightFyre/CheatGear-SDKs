#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.UnregisterLuaConsoleCommand
	 */
	struct ULuaBlueprintFunctionLibrary_UnregisterLuaConsoleCommand_Params
	{
	public:
		class FString                                              CommandName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.SwitchOnLuaValueType
	 */
	struct ULuaBlueprintFunctionLibrary_SwitchOnLuaValueType_Params
	{
	public:
		struct FLuaValue                                           LuaValue;                                                // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ELuaValueType                                              LuaValueTypes;                                           // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.RegisterLuaConsoleCommand
	 */
	struct ULuaBlueprintFunctionLibrary_RegisterLuaConsoleCommand_Params
	{
	public:
		class FString                                              CommandName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           LuaConsoleCommand;                                       // 0x0010(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueYield
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueYield_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF8
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueToUTF8_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF32
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueToUTF32_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF16
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueToUTF16_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToTransientTexture
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueToTransientTexture_Params
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0008(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EPixelFormat                                               PixelFormat;                                             // 0x0048(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDetectFormat;                                           // 0x0049(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6IIR[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToTransientSoundWave
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueToTransientSoundWave_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bLoop;                                                   // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DMQ8[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundWave*                                          ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToPointer
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueToPointer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToJson
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueToJson_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToHexPointer
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueToHexPointer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToBlueprintGeneratedClass
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueToBlueprintGeneratedClass_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToBase64
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueToBase64_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueResumeMulti
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueResumeMulti_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLoadObject
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueLoadObject_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLoadClass
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueLoadClass_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bDetectBlueprintGeneratedClass;                          // 0x0040(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OA2I[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLength
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueLength_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsThread
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsThread_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsTable
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsTable_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsString
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsString_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsReferencedInLuaRegistry
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsReferencedInLuaRegistry_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsOwned
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsOwned_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNumber
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsNumber_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNotNil
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsNotNil_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNil
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsNil_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsInteger
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsInteger_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsFunction
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsFunction_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsBoolean
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueIsBoolean_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueGetOwner
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueGetOwner_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF8
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueFromUTF8_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF32
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueFromUTF32_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF16
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueFromUTF16_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromJson
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueFromJson_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Json;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0020(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromBase64
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueFromBase64_Params
	{
	public:
		class FString                                              Base64;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCallMulti
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueCallMulti_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCallIfNotNil
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueCallIfNotNil_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0050(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCall
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueCall_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0050(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueArrayMerge
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueArrayMerge_Params
	{
	public:
		TArray<struct FLuaValue>                                   Array1;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Array2;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueArrayAppend
	 */
	struct ULuaBlueprintFunctionLibrary_LuaValueArrayAppend_Params
	{
	public:
		TArray<struct FLuaValue>                                   Array;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaThreadGetStatus
	 */
	struct ULuaBlueprintFunctionLibrary_LuaThreadGetStatus_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		ELuaThreadStatus                                           ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaThreadGetStackTop
	 */
	struct ULuaBlueprintFunctionLibrary_LuaThreadGetStackTop_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableUnpack
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableUnpack_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableToVector
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableToVector_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0040(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetMetaTable
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableSetMetaTable_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           InMetaTable;                                             // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0080(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetField
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableSetField_Params
	{
	public:
		struct FLuaValue                                           Table;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0050(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0090(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetByIndex
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableSetByIndex_Params
	{
	public:
		struct FLuaValue                                           Table;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0040(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ES9E[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           Value;                                                   // 0x0048(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0088(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableRange
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableRange_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    First;                                                   // 0x0040(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Last;                                                    // 0x0044(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTablePack
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTablePack_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Values;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0020(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableMergeUnpack
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableMergeUnpack_Params
	{
	public:
		struct FLuaValue                                           InTable1;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           InTable2;                                                // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableMergePack
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableMergePack_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Values1;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Values2;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0030(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableKeyCallWithSelf
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableKeyCallWithSelf_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0050(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0060(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableKeyCall
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableKeyCall_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0050(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0060(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableIndexCall
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableIndexCall_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0040(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IJ6G[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0048(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0058(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplementsAny
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableImplementsAny_Params
	{
	public:
		struct FLuaValue                                           Table;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<class ULuaTableAsset*>                              TableAssets;                                             // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplementsAll
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableImplementsAll_Params
	{
	public:
		struct FLuaValue                                           Table;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<class ULuaTableAsset*>                              TableAssets;                                             // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplements
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableImplements_Params
	{
	public:
		struct FLuaValue                                           Table;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class ULuaTableAsset*                                      TableAsset;                                              // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetValues
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableGetValues_Params
	{
	public:
		struct FLuaValue                                           Table;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetKeys
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableGetKeys_Params
	{
	public:
		struct FLuaValue                                           Table;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetField
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableGetField_Params
	{
	public:
		struct FLuaValue                                           Table;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0050(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetByIndex
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableGetByIndex_Params
	{
	public:
		struct FLuaValue                                           Table;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0040(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7ZBL[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0048(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableFromMap
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableFromMap_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, struct FLuaValue>                      Map;                                                     // 0x0010(0x0050)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0060(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableFillObject
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableFillObject_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableAssetToLuaTable
	 */
	struct ULuaBlueprintFunctionLibrary_LuaTableAssetToLuaTable_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULuaTableAsset*                                      TableAsset;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0018(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaStateReload
	 */
	struct ULuaBlueprintFunctionLibrary_LuaStateReload_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaStateDestroy
	 */
	struct ULuaBlueprintFunctionLibrary_LuaStateDestroy_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaSetUserDataMetaTable
	 */
	struct ULuaBlueprintFunctionLibrary_LuaSetUserDataMetaTable_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           MetaTable;                                               // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaSetGlobal
	 */
	struct ULuaBlueprintFunctionLibrary_LuaSetGlobal_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0020(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunURL
	 */
	struct ULuaBlueprintFunctionLibrary_LuaRunURL_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              URL;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0020(0x0050)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              SecurityHeader;                                          // 0x0070(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SignaturePublicExponent;                                 // 0x0080(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SignatureModulus;                                        // 0x0090(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Completed;                                               // 0x00A0(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunString
	 */
	struct ULuaBlueprintFunctionLibrary_LuaRunString_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CodeString;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CodePath;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0030(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunNonContentFile
	 */
	struct ULuaBlueprintFunctionLibrary_LuaRunNonContentFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreNonExistent;                                      // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BOCG[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0028(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunFile
	 */
	struct ULuaBlueprintFunctionLibrary_LuaRunFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreNonExistent;                                      // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J27G[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0028(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunCodeAsset
	 */
	struct ULuaBlueprintFunctionLibrary_LuaRunCodeAsset_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULuaCode*                                            CodeAsset;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0018(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunByteCode
	 */
	struct ULuaBlueprintFunctionLibrary_LuaRunByteCode_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ByteCode;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              CodePath;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0030(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaNewLuaUserDataObject
	 */
	struct ULuaBlueprintFunctionLibrary_LuaNewLuaUserDataObject_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              UserDataObjectClass;                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTrackObject;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7X33[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0020(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaLoadPakFile
	 */
	struct ULuaBlueprintFunctionLibrary_LuaLoadPakFile_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Mountpoint;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Assets;                                                  // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              ContentPath;                                             // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AssetRegistryPath;                                       // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaHttpRequest
	 */
	struct ULuaBlueprintFunctionLibrary_LuaHttpRequest_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Method;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              URL;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0030(0x0050)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Body;                                                    // 0x0080(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Context;                                                 // 0x00C0(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ResponseReceived;                                        // 0x0100(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Error;                                                   // 0x0110(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallValueMulti
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGlobalCallValueMulti_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0050(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallValue
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGlobalCallValue_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0050(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0060(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallMulti
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGlobalCallMulti_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCall
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGlobalCall_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0030(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetUsedMemory
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGetUsedMemory_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetTop
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGetTop_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetState
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGetState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULuaState*                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetGlobal
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGetGlobal_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0020(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGCStop
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGCStop_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGCRestart
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGCRestart_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGCCollect
	 */
	struct ULuaBlueprintFunctionLibrary_LuaGCCollect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateUFunction
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateUFunction_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FunctionName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0018(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateThread
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateThread_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0050(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateTable
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateTable_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateString
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateString_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateObjectInState
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateObjectInState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             InObject;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0018(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateObject
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateObject_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateNumber
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateNumber_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YNYR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateNil
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateNil_Params
	{
	public:
		struct FLuaValue                                           ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateLazyTable
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateLazyTable_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateInteger
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateInteger_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PB5R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateBool
	 */
	struct ULuaBlueprintFunctionLibrary_LuaCreateBool_Params
	{
	public:
		bool                                                       bInBool;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A95V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.LuaComponentGetField
	 */
	struct ULuaBlueprintFunctionLibrary_LuaComponentGetField_Params
	{
	public:
		struct FLuaValue                                           LuaComponent;                                            // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0050(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaReflectionType
	 */
	struct ULuaBlueprintFunctionLibrary_GetLuaReflectionType_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELuaReflectionType                                         LuaReflectionTypes;                                      // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByStateAsLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_GetLuaComponentByStateAsLuaValue_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByStateAndNameAsLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_GetLuaComponentByStateAndNameAsLuaValue_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0020(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByNameAsLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_GetLuaComponentByNameAsLuaValue_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0018(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentAsLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_GetLuaComponentAsLuaValue_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_TextToLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_TextToLuaValue_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0018(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_StringToLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_StringToLuaValue_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_ObjectToLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_ObjectToLuaValue_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_NameToLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_NameToLuaValue_Params
	{
	public:
		class FName                                                Value;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToText
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_LuaValueToText_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0040(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToString
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_LuaValueToString_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToObject
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_LuaValueToObject_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToName
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_LuaValueToName_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToInt
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_LuaValueToInt_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToFVector
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_LuaValueToFVector_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0040(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToFloat
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_LuaValueToFloat_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToClass
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_LuaValueToClass_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToBool
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_LuaValueToBool_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_IntToLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_IntToLuaValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HCV3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_FloatToLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_FloatToLuaValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L4K0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_BoolToLuaValue
	 */
	struct ULuaBlueprintFunctionLibrary_Conv_BoolToLuaValue_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U9DP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintFunctionLibrary.AssignLuaValueToLuaState
	 */
	struct ULuaBlueprintFunctionLibrary_AssignLuaValueToLuaState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              State;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0050(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintPackage.ReceiveInit
	 */
	struct ULuaBlueprintPackage_ReceiveInit_Params
	{	};

	/**
	 * Function LuaMachine.LuaBlueprintPackage.GetSelfLuaTable
	 */
	struct ULuaBlueprintPackage_GetSelfLuaTable_Params
	{
	public:
		struct FLuaValue                                           ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaBlueprintPackage.GetLuaState
	 */
	struct ULuaBlueprintPackage_GetLuaState_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.ReceiveLuaMetaNewIndex
	 */
	struct ULuaComponent_ReceiveLuaMetaNewIndex_Params
	{
	public:
		struct FLuaValue                                           Key;                                                     // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0040(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.ReceiveLuaMetaIndex
	 */
	struct ULuaComponent_ReceiveLuaMetaIndex_Params
	{
	public:
		struct FLuaValue                                           Key;                                                     // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaSetField
	 */
	struct ULuaComponent_LuaSetField_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaGetField
	 */
	struct ULuaComponent_LuaGetField_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaComponentGetState
	 */
	struct ULuaComponent_LuaComponentGetState_Params
	{
	public:
		class ULuaState*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaCallValueMultiIfNotNil
	 */
	struct ULuaComponent_LuaCallValueMultiIfNotNil_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaCallValueMulti
	 */
	struct ULuaComponent_LuaCallValueMulti_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaCallValueIfNotNil
	 */
	struct ULuaComponent_LuaCallValueIfNotNil_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0050(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaCallValue
	 */
	struct ULuaComponent_LuaCallValue_Params
	{
	public:
		struct FLuaValue                                           Value;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0050(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaCallTableKeyMulti
	 */
	struct ULuaComponent_LuaCallTableKeyMulti_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0050(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaCallTableKey
	 */
	struct ULuaComponent_LuaCallTableKey_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0050(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0060(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaCallTableIndexMulti
	 */
	struct ULuaComponent_LuaCallTableIndexMulti_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2NZX[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0048(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0058(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaCallTableIndex
	 */
	struct ULuaComponent_LuaCallTableIndex_Params
	{
	public:
		struct FLuaValue                                           InTable;                                                 // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EYAO[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0048(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0058(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaCallFunctionMulti
	 */
	struct ULuaComponent_LuaCallFunctionMulti_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bGlobal;                                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7TBY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLuaValue>                                   ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaComponent.LuaCallFunction
	 */
	struct ULuaComponent_LuaCallFunction_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bGlobal;                                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K75V[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0028(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaDelegate.LuaDelegateFunction
	 */
	struct ULuaDelegate_LuaDelegateFunction_Params
	{	};

	/**
	 * Function LuaMachine.LuaMultiLineEditableTextBox.SetText
	 */
	struct ULuaMultiLineEditableTextBox_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorUp
	 */
	struct ULuaMultiLineEditableTextBox_MoveCursorUp_Params
	{	};

	/**
	 * Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorRight
	 */
	struct ULuaMultiLineEditableTextBox_MoveCursorRight_Params
	{	};

	/**
	 * Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorLeft
	 */
	struct ULuaMultiLineEditableTextBox_MoveCursorLeft_Params
	{	};

	/**
	 * Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorDown
	 */
	struct ULuaMultiLineEditableTextBox_MoveCursorDown_Params
	{	};

	/**
	 * Function LuaMachine.LuaMultiLineEditableTextBox.GetText
	 */
	struct ULuaMultiLineEditableTextBox_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaMultiLineEditableTextBox.GetSelectedText
	 */
	struct ULuaMultiLineEditableTextBox_GetSelectedText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaMultiLineEditableTextBox.GetCursorLine
	 */
	struct ULuaMultiLineEditableTextBox_GetCursorLine_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaMultiLineEditableTextBox.GetCursorColumn
	 */
	struct ULuaMultiLineEditableTextBox_GetCursorColumn_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaMultiLineEditableTextBox.CursorGoTo
	 */
	struct ULuaMultiLineEditableTextBox_CursorGoTo_Params
	{
	public:
		int32_t                                                    Line;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Column;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.ToByteCode
	 */
	struct ULuaState_ToByteCode_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CodePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ErrorString;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.StructToLuaTable
	 */
	struct ULuaState_StructToLuaTable_Params
	{
	public:
		class UScriptStruct*                                       InScriptStruct;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      StructData;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0018(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.SetPropertyFromLuaValue
	 */
	struct ULuaState_SetPropertyFromLuaValue_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0018(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.SetLuaUserDataField
	 */
	struct ULuaState_SetLuaUserDataField_Params
	{
	public:
		struct FLuaValue                                           UserData;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0050(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.ReceiveLuaStatePreInitialized
	 */
	struct ULuaState_ReceiveLuaStatePreInitialized_Params
	{	};

	/**
	 * Function LuaMachine.LuaState.ReceiveLuaStateInitialized
	 */
	struct ULuaState_ReceiveLuaStateInitialized_Params
	{	};

	/**
	 * Function LuaMachine.LuaState.ReceiveLuaReturnHook
	 */
	struct ULuaState_ReceiveLuaReturnHook_Params
	{
	public:
		struct FLuaDebug                                           LuaDebug;                                                // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.ReceiveLuaLineHook
	 */
	struct ULuaState_ReceiveLuaLineHook_Params
	{
	public:
		struct FLuaDebug                                           LuaDebug;                                                // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.ReceiveLuaLevelRemovedFromWorld
	 */
	struct ULuaState_ReceiveLuaLevelRemovedFromWorld_Params
	{
	public:
		class ULevel*                                              Level;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorld*                                              World;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.ReceiveLuaLevelAddedToWorld
	 */
	struct ULuaState_ReceiveLuaLevelAddedToWorld_Params
	{
	public:
		class ULevel*                                              Level;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorld*                                              World;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.ReceiveLuaError
	 */
	struct ULuaState_ReceiveLuaError_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.ReceiveLuaCallHook
	 */
	struct ULuaState_ReceiveLuaCallHook_Params
	{
	public:
		struct FLuaDebug                                           LuaDebug;                                                // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.NewLuaUserDataObject
	 */
	struct ULuaState_NewLuaUserDataObject_Params
	{
	public:
		class UClass*                                              LuaUserDataObjectClass;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTrackObject;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HXND[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.LuaGetLocals
	 */
	struct ULuaState_LuaGetLocals_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T74K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FString, struct FLuaValue>                      ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.LuaGetInfo
	 */
	struct ULuaState_LuaGetInfo_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H3G6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaDebug                                           ReturnValue;                                             // 0x0008(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.GetSelfLuaState
	 */
	struct ULuaState_GetSelfLuaState_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.GetLuaValueFromProperty
	 */
	struct ULuaState_GetLuaValueFromProperty_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0018(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.GetLuaUserDataField
	 */
	struct ULuaState_GetLuaUserDataField_Params
	{
	public:
		struct FLuaValue                                           UserData;                                                // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0050(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaState.GetLuaBlueprintPackageTable
	 */
	struct ULuaState_GetLuaBlueprintPackageTable_Params
	{
	public:
		class FString                                              PackageName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaUserDataObject.UFunctionToLuaValue
	 */
	struct ULuaUserDataObject_UFunctionToLuaValue_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaUserDataObject.ReceiveLuaUserDataTableInit
	 */
	struct ULuaUserDataObject_ReceiveLuaUserDataTableInit_Params
	{	};

	/**
	 * Function LuaMachine.LuaUserDataObject.ReceiveLuaMetaIndex
	 */
	struct ULuaUserDataObject_ReceiveLuaMetaIndex_Params
	{
	public:
		struct FLuaValue                                           Key;                                                     // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0040(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaUserDataObject.ReceiveLuaGC
	 */
	struct ULuaUserDataObject_ReceiveLuaGC_Params
	{	};

	/**
	 * Function LuaMachine.LuaUserDataObject.LuaSetField
	 */
	struct ULuaUserDataObject_LuaSetField_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           Value;                                                   // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaUserDataObject.LuaGetField
	 */
	struct ULuaUserDataObject_LuaGetField_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLuaValue                                           ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaUserDataObject.LuaCallFunction
	 */
	struct ULuaUserDataObject_LuaCallFunction_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLuaValue>                                   Args;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bGlobal;                                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_94P4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLuaValue                                           ReturnValue;                                             // 0x0028(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaUserDataObject.GetObjectUFunctions
	 */
	struct ULuaUserDataObject_GetObjectUFunctions_Params
	{
	public:
		bool                                                       bOnlyPublic;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HLSD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaUserDataObject.GetLuaStateInstance
	 */
	struct ULuaUserDataObject_GetLuaStateInstance_Params
	{
	public:
		class ULuaState*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LuaMachine.LuaUserDataObject.GetLuaState
	 */
	struct ULuaUserDataObject_GetLuaState_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
