#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueInternal
	 */
	struct UWBP_OptionsMenuItem_Slider_C_SetValueInternal_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDirectSet;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.DoesMouseUseStep
	 */
	struct UWBP_OptionsMenuItem_Slider_C_DoesMouseUseStep_Params
	{
	public:
		bool                                                       bOutMouseUsesStep;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetMouseUsesStep
	 */
	struct UWBP_OptionsMenuItem_Slider_C_SetMouseUsesStep_Params
	{
	public:
		bool                                                       bInMouseUsesStep;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueStepSize
	 */
	struct UWBP_OptionsMenuItem_Slider_C_SetValueStepSize_Params
	{
	public:
		float                                                      NewStepSize;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueMax
	 */
	struct UWBP_OptionsMenuItem_Slider_C_SetValueMax_Params
	{
	public:
		float                                                      NewMax;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueMin
	 */
	struct UWBP_OptionsMenuItem_Slider_C_SetValueMin_Params
	{
	public:
		float                                                      NewMin;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.UpdateSliderText
	 */
	struct UWBP_OptionsMenuItem_Slider_C_UpdateSliderText_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.GetNormalizedValue
	 */
	struct UWBP_OptionsMenuItem_Slider_C_GetNormalizedValue_Params
	{
	public:
		float                                                      ValueNormalized;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetNormalizedValue
	 */
	struct UWBP_OptionsMenuItem_Slider_C_SetNormalizedValue_Params
	{
	public:
		float                                                      InNormValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetLocked
	 */
	struct UWBP_OptionsMenuItem_Slider_C_SetLocked_Params
	{
	public:
		bool                                                       bInLocked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.IsLocked
	 */
	struct UWBP_OptionsMenuItem_Slider_C_IsLocked_Params
	{
	public:
		bool                                                       bOutLocked;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValue
	 */
	struct UWBP_OptionsMenuItem_Slider_C_SetValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.GetValue
	 */
	struct UWBP_OptionsMenuItem_Slider_C_GetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.PreConstruct
	 */
	struct UWBP_OptionsMenuItem_Slider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Slider_C_BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.ExecuteUbergraph_WBP_OptionsMenuItem_Slider
	 */
	struct UWBP_OptionsMenuItem_Slider_C_ExecuteUbergraph_WBP_OptionsMenuItem_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.ValueChanged__DelegateSignature
	 */
	struct UWBP_OptionsMenuItem_Slider_C_ValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
