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
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	 */
	struct UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params
	{
	public:
		float                                                      TimeInSeconds;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          FrameRate;                                               // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameTime                                          ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	 */
	struct UTimeManagementBlueprintLibrary_GetTimecode_Params
	{
	public:
		struct FTimecode                                           ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	 */
	struct UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params
	{
	public:
		struct FTimecode                                           InTimecode;                                              // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceSignDisplay;                                       // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AX8I[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	 */
	struct UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params
	{
	public:
		struct FQualifiedFrameTime                                 InFrameTime;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	 */
	struct UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params
	{
	public:
		struct FFrameRate                                          InFrameRate;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
