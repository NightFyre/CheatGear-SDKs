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
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnHoverStatusChanged
	 */
	struct UBP_SelectableImageButton_C_OnHoverStatusChanged_Params
	{
	public:
		bool                                                       bIsHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5B7Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnSelectedStatusChanged
	 */
	struct UBP_SelectableImageButton_C_OnSelectedStatusChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.PreConstruct
	 */
	struct UBP_SelectableImageButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_SelectableImageButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_SelectableImageButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_SelectableImageButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_SelectableImageButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_SelectableImageButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnAddedToFocusPath
	 */
	struct UBP_SelectableImageButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_SelectableImageButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.ExecuteUbergraph_BP_SelectableImageButton
	 */
	struct UBP_SelectableImageButton_C_ExecuteUbergraph_BP_SelectableImageButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SelectableImageButton.BP_SelectableImageButton_C.OnClicked__DelegateSignature
	 */
	struct UBP_SelectableImageButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
