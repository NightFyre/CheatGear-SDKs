#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryVector
	 */
	struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryVector_Params
	{
	public:
		struct FK2TelemetryValues                                  StatArray;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0038(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESetTelemetryValue                                         Opt;                                                     // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7Q9X[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FK2TelemetryValues                                  ReturnValue;                                             // 0x0048(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryString
	 */
	struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryString_Params
	{
	public:
		struct FK2TelemetryValues                                  StatArray;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESetTelemetryValue                                         Opt;                                                     // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G149[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FK2TelemetryValues                                  ReturnValue;                                             // 0x0050(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryRotator
	 */
	struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryRotator_Params
	{
	public:
		struct FK2TelemetryValues                                  StatArray;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Value;                                                   // 0x0038(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ESetTelemetryValue                                         Opt;                                                     // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B3F7[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FK2TelemetryValues                                  ReturnValue;                                             // 0x0048(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryInt
	 */
	struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryInt_Params
	{
	public:
		struct FK2TelemetryValues                                  StatArray;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0038(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESetTelemetryValue                                         Opt;                                                     // 0x003C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ODAO[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FK2TelemetryValues                                  ReturnValue;                                             // 0x0040(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryFloat
	 */
	struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryFloat_Params
	{
	public:
		struct FK2TelemetryValues                                  StatArray;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0038(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESetTelemetryValue                                         Opt;                                                     // 0x003C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9NU4[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FK2TelemetryValues                                  ReturnValue;                                             // 0x0040(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryByte
	 */
	struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryByte_Params
	{
	public:
		struct FK2TelemetryValues                                  StatArray;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Value;                                                   // 0x0038(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESetTelemetryValue                                         Opt;                                                     // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8DUA[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FK2TelemetryValues                                  ReturnValue;                                             // 0x0040(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryBool
	 */
	struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryBool_Params
	{
	public:
		struct FK2TelemetryValues                                  StatArray;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0038(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESetTelemetryValue                                         Opt;                                                     // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4MMS[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FK2TelemetryValues                                  ReturnValue;                                             // 0x0040(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.MakeTelemetryEventRef
	 */
	struct UGbxTelemetryBlueprintLibrary_MakeTelemetryEventRef_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FK2EventRef                                         ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.IsValid
	 */
	struct UGbxTelemetryBlueprintLibrary_IsValid_Params
	{
	public:
		struct FK2EventRef                                         EventRef;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryValues
	 */
	struct UGbxTelemetryBlueprintLibrary_EmitTelemetryValues_Params
	{
	public:
		class FString                                              EventContext;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FK2TelemetryValues                                  Values;                                                  // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               Guid;                                                    // 0x0040(0x0010)  (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRunOnClient;                                            // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0051(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryEvent
	 */
	struct UGbxTelemetryBlueprintLibrary_EmitTelemetryEvent_Params
	{
	public:
		struct FK2EventRef                                         Event;                                                   // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              EventContext;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             EventContextObject;                                      // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             EventInstigatorObject;                                   // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               Guid;                                                    // 0x0040(0x0010)  (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRunOnClient;                                            // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0051(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.DefineTelemetryEventRef
	 */
	struct UGbxTelemetryBlueprintLibrary_DefineTelemetryEventRef_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              TableDesc;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FK2EventRef                                         ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
