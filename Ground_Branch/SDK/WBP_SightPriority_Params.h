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
	 * Function WBP_SightPriority.WBP_SightPriority_C.IsDirty
	 */
	struct UWBP_SightPriority_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.GetKey
	 */
	struct UWBP_SightPriority_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.Get_Button_1_ToolTipWidget_1
	 */
	struct UWBP_SightPriority_C_Get_Button_1_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.SightPrioritesToStringArray
	 */
	struct UWBP_SightPriority_C_SightPrioritesToStringArray_Params
	{
	public:
		class FString                                              OutSring;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.SetKeyValue
	 */
	struct UWBP_SightPriority_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_SightPriority_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_SightPriority_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.Construct
	 */
	struct UWBP_SightPriority_C_Construct_Params
	{	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.SetConfigValue
	 */
	struct UWBP_SightPriority_C_SetConfigValue_Params
	{	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.RevertToInitialValue
	 */
	struct UWBP_SightPriority_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.Refresh
	 */
	struct UWBP_SightPriority_C_Refresh_Params
	{	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.SetDefaultValue
	 */
	struct UWBP_SightPriority_C_SetDefaultValue_Params
	{	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.UpdateText
	 */
	struct UWBP_SightPriority_C_UpdateText_Params
	{	};

	/**
	 * Function WBP_SightPriority.WBP_SightPriority_C.ExecuteUbergraph_WBP_SightPriority
	 */
	struct UWBP_SightPriority_C_ExecuteUbergraph_WBP_SightPriority_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
