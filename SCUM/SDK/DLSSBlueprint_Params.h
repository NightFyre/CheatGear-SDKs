#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	 */
	struct UDLSSLibrary_SetDLSSSharpness_Params
	{
	public:
		float                                                      Sharpness;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
	 */
	struct UDLSSLibrary_SetDLSSMode_Params
	{
	public:
		EUDLSSMode                                                 DLSSMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	 */
	struct UDLSSLibrary_QueryDLSSSupport_Params
	{
	public:
		EUDLSSSupport                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	 */
	struct UDLSSLibrary_IsDLSSSupported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	 */
	struct UDLSSLibrary_IsDLSSModeSupported_Params
	{
	public:
		EUDLSSMode                                                 DLSSMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	 */
	struct UDLSSLibrary_IsDLAAEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	 */
	struct UDLSSLibrary_GetSupportedDLSSModes_Params
	{
	public:
		TArray<EUDLSSMode>                                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	 */
	struct UDLSSLibrary_GetDLSSSharpness_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	 */
	struct UDLSSLibrary_GetDLSSScreenPercentageRange_Params
	{
	public:
		float                                                      MinScreenPercentage;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxScreenPercentage;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	 */
	struct UDLSSLibrary_GetDLSSModeInformation_Params
	{
	public:
		EUDLSSMode                                                 DLSSMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0UXL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ScreenResolution;                                        // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSupported;                                            // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6B0D[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OptimalScreenPercentage;                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsFixedScreenPercentage;                                // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YT18[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      MinScreenPercentage;                                     // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxScreenPercentage;                                     // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OptimalSharpness;                                        // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
	 */
	struct UDLSSLibrary_GetDLSSMode_Params
	{
	public:
		EUDLSSMode                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	 */
	struct UDLSSLibrary_GetDLSSMinimumDriverVersion_Params
	{
	public:
		int32_t                                                    MinDriverVersionMajor;                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MinDriverVersionMinor;                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	 */
	struct UDLSSLibrary_GetDefaultDLSSMode_Params
	{
	public:
		EUDLSSMode                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DLSSBlueprint.DLSSLibrary.EnableDLAA
	 */
	struct UDLSSLibrary_EnableDLAA_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
