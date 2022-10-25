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
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.GetKey
	 */
	struct UWBP_Config_FOV_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.IsDirty
	 */
	struct UWBP_Config_FOV_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8NEP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.GetHorizontalFOVValue
	 */
	struct UWBP_Config_FOV_C_GetHorizontalFOVValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.GetText_1
	 */
	struct UWBP_Config_FOV_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.SetKeyValue
	 */
	struct UWBP_Config_FOV_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.Refresh
	 */
	struct UWBP_Config_FOV_C_Refresh_Params
	{	};

	/**
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.Construct
	 */
	struct UWBP_Config_FOV_C_Construct_Params
	{	};

	/**
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.SetConfigValue
	 */
	struct UWBP_Config_FOV_C_SetConfigValue_Params
	{	};

	/**
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.RevertToInitialValue
	 */
	struct UWBP_Config_FOV_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.SetDefaultValue
	 */
	struct UWBP_Config_FOV_C_SetDefaultValue_Params
	{	};

	/**
	 * Function WBP_Config_FOV.WBP_Config_FOV_C.ExecuteUbergraph_WBP_Config_FOV
	 */
	struct UWBP_Config_FOV_C_ExecuteUbergraph_WBP_Config_FOV_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
