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
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.SetInitialButtonStyle
	 */
	struct UBP_KeyActionButton_C_SetInitialButtonStyle_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.setPressedButtonStyle
	 */
	struct UBP_KeyActionButton_C_setPressedButtonStyle_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.UpdateButtonOrder
	 */
	struct UBP_KeyActionButton_C_UpdateButtonOrder_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.RefreshText
	 */
	struct UBP_KeyActionButton_C_RefreshText_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.SetText
	 */
	struct UBP_KeyActionButton_C_SetText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.EmulateClick
	 */
	struct UBP_KeyActionButton_C_EmulateClick_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.SetAllowButtonPressEnabled
	 */
	struct UBP_KeyActionButton_C_SetAllowButtonPressEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.GetKeyActionIcon
	 */
	struct UBP_KeyActionButton_C_GetKeyActionIcon_Params
	{
	public:
		class UBP_KeyActionIcon_C*                                 KeyActionIcon;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.SetButtonType
	 */
	struct UBP_KeyActionButton_C_SetButtonType_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.BindControllerDelegates
	 */
	struct UBP_KeyActionButton_C_BindControllerDelegates_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.SetIsUsingController
	 */
	struct UBP_KeyActionButton_C_SetIsUsingController_Params
	{
	public:
		bool                                                       bUsingController;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            IconType;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.Update
	 */
	struct UBP_KeyActionButton_C_Update_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.SetInvertHover
	 */
	struct UBP_KeyActionButton_C_SetInvertHover_Params
	{
	public:
		bool                                                       bInvert;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PYHI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.GetColorAndOpacity_1
	 */
	struct UBP_KeyActionButton_C_GetColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.Construct
	 */
	struct UBP_KeyActionButton_C_Construct_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.BndEvt__Button_151_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KeyActionButton_C_BndEvt__Button_151_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.PreConstruct
	 */
	struct UBP_KeyActionButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.BndEvt__Button_151_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_KeyActionButton_C_BndEvt__Button_151_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.OnRebuildButton
	 */
	struct UBP_KeyActionButton_C_OnRebuildButton_Params
	{	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.ExecuteUbergraph_BP_KeyActionButton
	 */
	struct UBP_KeyActionButton_C_ExecuteUbergraph_BP_KeyActionButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyActionButton.BP_KeyActionButton_C.OnPressed__DelegateSignature
	 */
	struct UBP_KeyActionButton_C_OnPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
