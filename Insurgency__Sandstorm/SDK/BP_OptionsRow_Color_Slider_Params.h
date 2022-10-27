#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.GetSliderValue
	 */
	struct UBP_OptionsRow_Color_Slider_C_GetSliderValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateRepresentativeText
	 */
	struct UBP_OptionsRow_Color_Slider_C_UpdateRepresentativeText_Params
	{	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnCanceled
	 */
	struct UBP_OptionsRow_Color_Slider_C_OnCanceled_Params
	{	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateValue
	 */
	struct UBP_OptionsRow_Color_Slider_C_UpdateValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateArrowColor
	 */
	struct UBP_OptionsRow_Color_Slider_C_UpdateArrowColor_Params
	{	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnFocusReceived
	 */
	struct UBP_OptionsRow_Color_Slider_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.UpdateArrowVisibility
	 */
	struct UBP_OptionsRow_Color_Slider_C_UpdateArrowVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnSelected
	 */
	struct UBP_OptionsRow_Color_Slider_C_OnSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnHovered
	 */
	struct UBP_OptionsRow_Color_Slider_C_OnHovered_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnAddedToFocusPath
	 */
	struct UBP_OptionsRow_Color_Slider_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnRemovedFromFocusPath
	 */
	struct UBP_OptionsRow_Color_Slider_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnMouseEnter
	 */
	struct UBP_OptionsRow_Color_Slider_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnMouseLeave
	 */
	struct UBP_OptionsRow_Color_Slider_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_Slider_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_Slider_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.ExecuteUbergraph_BP_OptionsRow_Color_Slider
	 */
	struct UBP_OptionsRow_Color_Slider_C_ExecuteUbergraph_BP_OptionsRow_Color_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnValueCommited__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_Slider_C_OnValueCommited__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Color_Slider.BP_OptionsRow_Color_Slider_C.OnValueChanged__DelegateSignature
	 */
	struct UBP_OptionsRow_Color_Slider_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
