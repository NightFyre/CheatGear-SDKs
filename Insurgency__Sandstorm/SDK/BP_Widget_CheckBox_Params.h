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
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.SetHovered
	 */
	struct UBP_Widget_CheckBox_C_SetHovered_Params
	{
	public:
		bool                                                       bNewState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.UpdateVisualState
	 */
	struct UBP_Widget_CheckBox_C_UpdateVisualState_Params
	{	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.SetCheckboxState
	 */
	struct UBP_Widget_CheckBox_C_SetCheckboxState_Params
	{
	public:
		ECheckBoxState                                             NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSkipEvent;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.PreConstruct
	 */
	struct UBP_Widget_CheckBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_Widget_CheckBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnAddedToFocusPath
	 */
	struct UBP_Widget_CheckBox_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnMouseEnter
	 */
	struct UBP_Widget_CheckBox_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnRemovedFromFocusPath
	 */
	struct UBP_Widget_CheckBox_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnMouseLeave
	 */
	struct UBP_Widget_CheckBox_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UBP_Widget_CheckBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnUserToggle
	 */
	struct UBP_Widget_CheckBox_C_OnUserToggle_Params
	{	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.ExecuteUbergraph_BP_Widget_CheckBox
	 */
	struct UBP_Widget_CheckBox_C_ExecuteUbergraph_BP_Widget_CheckBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnHovered__DelegateSignature
	 */
	struct UBP_Widget_CheckBox_C_OnHovered__DelegateSignature_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_CheckBox.BP_Widget_CheckBox_C.OnToggle__DelegateSignature
	 */
	struct UBP_Widget_CheckBox_C_OnToggle__DelegateSignature_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ECheckBoxState                                             Toggled;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
