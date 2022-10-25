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
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.IsDirty
	 */
	struct UWBP_MagLevelSensitivityScaling_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.GetKey
	 */
	struct UWBP_MagLevelSensitivityScaling_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.GetToolTipWidget_1
	 */
	struct UWBP_MagLevelSensitivityScaling_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.CreateMagLevelSensitivityScalesString
	 */
	struct UWBP_MagLevelSensitivityScaling_C_CreateMagLevelSensitivityScalesString_Params
	{
	public:
		class FString                                              OutSring;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.SetKeyValue
	 */
	struct UWBP_MagLevelSensitivityScaling_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.Construct
	 */
	struct UWBP_MagLevelSensitivityScaling_C_Construct_Params
	{	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.SetConfigValue
	 */
	struct UWBP_MagLevelSensitivityScaling_C_SetConfigValue_Params
	{	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.RevertToInitialValue
	 */
	struct UWBP_MagLevelSensitivityScaling_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.Refresh
	 */
	struct UWBP_MagLevelSensitivityScaling_C_Refresh_Params
	{	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.SetDefaultValue
	 */
	struct UWBP_MagLevelSensitivityScaling_C_SetDefaultValue_Params
	{	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.UpdateIsDirty
	 */
	struct UWBP_MagLevelSensitivityScaling_C_UpdateIsDirty_Params
	{	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.OnValueChanged_Event_1
	 */
	struct UWBP_MagLevelSensitivityScaling_C_OnValueChanged_Event_1_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.ExecuteUbergraph_WBP_MagLevelSensitivityScaling
	 */
	struct UWBP_MagLevelSensitivityScaling_C_ExecuteUbergraph_WBP_MagLevelSensitivityScaling_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
