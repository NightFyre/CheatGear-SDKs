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
	 * Function BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C.OnFocusReceived
	 */
	struct UBP_SaveNewLoadoutPresetButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_SaveNewLoadoutPresetButton_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C.OnMouseEnter
	 */
	struct UBP_SaveNewLoadoutPresetButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C.OnMouseLeave
	 */
	struct UBP_SaveNewLoadoutPresetButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C.OnAddedToFocusPath
	 */
	struct UBP_SaveNewLoadoutPresetButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_SaveNewLoadoutPresetButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C.ExecuteUbergraph_BP_SaveNewLoadoutPresetButton
	 */
	struct UBP_SaveNewLoadoutPresetButton_C_ExecuteUbergraph_BP_SaveNewLoadoutPresetButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C.OnNewPresetUnhovered__DelegateSignature
	 */
	struct UBP_SaveNewLoadoutPresetButton_C_OnNewPresetUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C.OnNewPresetHovered__DelegateSignature
	 */
	struct UBP_SaveNewLoadoutPresetButton_C_OnNewPresetHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SaveNewLoadoutPresetButton.BP_SaveNewLoadoutPresetButton_C.OnNewPresetClicked__DelegateSignature
	 */
	struct UBP_SaveNewLoadoutPresetButton_C_OnNewPresetClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
