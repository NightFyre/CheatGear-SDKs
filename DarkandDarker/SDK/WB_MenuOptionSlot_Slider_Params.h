#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.Construct
	 */
	struct UWB_MenuOptionSlot_Slider_C_Construct_Params
	{	};

	/**
	 * Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderValue
	 */
	struct UWB_MenuOptionSlot_Slider_C_UpdateSliderValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetCurrentOptionValue
	 */
	struct UWB_MenuOptionSlot_Slider_C_GetCurrentOptionValue_Params
	{	};

	/**
	 * Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetCurrentOptionValueByPercent
	 */
	struct UWB_MenuOptionSlot_Slider_C_GetCurrentOptionValueByPercent_Params
	{	};

	/**
	 * Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnChangeSliderValue
	 */
	struct UWB_MenuOptionSlot_Slider_C_OnChangeSliderValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderMinMaxValue
	 */
	struct UWB_MenuOptionSlot_Slider_C_UpdateSliderMinMaxValue_Params
	{	};

	/**
	 * Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnTextCommited
	 */
	struct UWB_MenuOptionSlot_Slider_C_OnTextCommited_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.ExecuteUbergraph_WB_MenuOptionSlot_Slider
	 */
	struct UWB_MenuOptionSlot_Slider_C_ExecuteUbergraph_WB_MenuOptionSlot_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H5L8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
