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
	 * Function BP_SpecialButton.BP_SpecialButton_C.OnFocusReceived
	 */
	struct UBP_SpecialButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.UpdateKeyAction
	 */
	struct UBP_SpecialButton_C_UpdateKeyAction_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FName                                                Action;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.UpdateText
	 */
	struct UBP_SpecialButton_C_UpdateText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.PreConstruct
	 */
	struct UBP_SpecialButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_SpecialButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_SpecialButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_SpecialButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_SpecialButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 */
	struct UBP_SpecialButton_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.OnHovered
	 */
	struct UBP_SpecialButton_C_OnHovered_Params
	{	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.OnUnhovered
	 */
	struct UBP_SpecialButton_C_OnUnhovered_Params
	{	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.OnAddedToFocusPath
	 */
	struct UBP_SpecialButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_SpecialButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.ExecuteUbergraph_BP_SpecialButton
	 */
	struct UBP_SpecialButton_C_ExecuteUbergraph_BP_SpecialButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpecialButton.BP_SpecialButton_C.OnClicked__DelegateSignature
	 */
	struct UBP_SpecialButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
