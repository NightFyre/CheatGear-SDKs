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
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnKeyDown
	 */
	struct UBP_OptionsRow_Slider_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.UpdateScrollSpeed
	 */
	struct UBP_OptionsRow_Slider_C_UpdateScrollSpeed_Params
	{	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnKeyUp
	 */
	struct UBP_OptionsRow_Slider_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnCustomNavigation
	 */
	struct UBP_OptionsRow_Slider_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnFocusReceived
	 */
	struct UBP_OptionsRow_Slider_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetValue
	 */
	struct UBP_OptionsRow_Slider_C_GetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetRoundedValue
	 */
	struct UBP_OptionsRow_Slider_C_GetRoundedValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutValue;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.UpdateValue
	 */
	struct UBP_OptionsRow_Slider_C_UpdateValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Updated_Value;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetForegroundColor_1
	 */
	struct UBP_OptionsRow_Slider_C_GetForegroundColor_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.SetInitialValue
	 */
	struct UBP_OptionsRow_Slider_C_SetInitialValue_Params
	{
	public:
		float                                                      Amt;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.GetSlider
	 */
	struct UBP_OptionsRow_Slider_C_GetSlider_Params
	{
	public:
		class USpinBox*                                            Box;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.Construct
	 */
	struct UBP_OptionsRow_Slider_C_Construct_Params
	{	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.Tick
	 */
	struct UBP_OptionsRow_Slider_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__SpinBox_481_K2Node_ComponentBoundEvent_243_OnSpinBoxValueCommittedEvent__DelegateSignature
	 */
	struct UBP_OptionsRow_Slider_C_BndEvt__SpinBox_481_K2Node_ComponentBoundEvent_243_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature
	 */
	struct UBP_OptionsRow_Slider_C_BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.PreConstruct
	 */
	struct UBP_OptionsRow_Slider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnMouseEnter
	 */
	struct UBP_OptionsRow_Slider_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnMouseLeave
	 */
	struct UBP_OptionsRow_Slider_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxBeginSliderMovement__DelegateSignature
	 */
	struct UBP_OptionsRow_Slider_C_BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
	 */
	struct UBP_OptionsRow_Slider_C_BndEvt__InputSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnAddedToFocusPath
	 */
	struct UBP_OptionsRow_Slider_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnRemovedFromFocusPath
	 */
	struct UBP_OptionsRow_Slider_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.ExecuteUbergraph_BP_OptionsRow_Slider
	 */
	struct UBP_OptionsRow_Slider_C_ExecuteUbergraph_BP_OptionsRow_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnValueChanged__DelegateSignature
	 */
	struct UBP_OptionsRow_Slider_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_Slider.BP_OptionsRow_Slider_C.OnValueCommitted__DelegateSignature
	 */
	struct UBP_OptionsRow_Slider_C_OnValueCommitted__DelegateSignature_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
