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
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateCachedWidgets
	 */
	struct UBP_ProfileAppearance_C_UpdateCachedWidgets_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SaveSelectedPreset
	 */
	struct UBP_ProfileAppearance_C_SaveSelectedPreset_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetPresetButtonSelected
	 */
	struct UBP_ProfileAppearance_C_SetPresetButtonSelected_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetVisibilityBtnBack
	 */
	struct UBP_ProfileAppearance_C_GetVisibilityBtnBack_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OXQ0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetWidgetToFocusFromCache
	 */
	struct UBP_ProfileAppearance_C_GetWidgetToFocusFromCache_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.ResetHoveredCache
	 */
	struct UBP_ProfileAppearance_C_ResetHoveredCache_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnSubSlotHover
	 */
	struct UBP_ProfileAppearance_C_OnSubSlotHover_Params
	{
	public:
		class UUserWidget*                                         SelfRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetPresetToFocusFromCache
	 */
	struct UBP_ProfileAppearance_C_GetPresetToFocusFromCache_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetSelectedSlotItem
	 */
	struct UBP_ProfileAppearance_C_GetSelectedSlotItem_Params
	{
	public:
		class UBP_ProfileAppearance_CosmeticItem_C*                SelectedItemRef;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.RemoveActiveDialogWidget
	 */
	struct UBP_ProfileAppearance_C_RemoveActiveDialogWidget_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.On Confirm Network Purchase Error Dialog
	 */
	struct UBP_ProfileAppearance_C_On_Confirm_Network_Purchase_Error_Dialog_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.On Button Purchase Cart Clicked
	 */
	struct UBP_ProfileAppearance_C_On_Button_Purchase_Cart_Clicked_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCustomNavigation
	 */
	struct UBP_ProfileAppearance_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnAnalogValueChanged
	 */
	struct UBP_ProfileAppearance_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SelectEquippedVariation
	 */
	struct UBP_ProfileAppearance_C_SelectEquippedVariation_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.ClearUnviewedItems
	 */
	struct UBP_ProfileAppearance_C_ClearUnviewedItems_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnConfirmedError
	 */
	struct UBP_ProfileAppearance_C_OnConfirmedError_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetupPurchaseBox
	 */
	struct UBP_ProfileAppearance_C_SetupPurchaseBox_Params
	{
	public:
		struct FSelectedCosmetic                                   SelectedCosmetic;                                        // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetCanceled
	 */
	struct UBP_ProfileAppearance_C_OnPresetCanceled_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCancelPurchase
	 */
	struct UBP_ProfileAppearance_C_OnCancelPurchase_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetTextColor_GenderSwitchBtn
	 */
	struct UBP_ProfileAppearance_C_GetTextColor_GenderSwitchBtn_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetBrushColor_1
	 */
	struct UBP_ProfileAppearance_C_GetBrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnKeyDown
	 */
	struct UBP_ProfileAppearance_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCurrentSlotWidget
	 */
	struct UBP_ProfileAppearance_C_GetCurrentSlotWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnSlotListVisible
	 */
	struct UBP_ProfileAppearance_C_OnSlotListVisible_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnSlotDetailVisible
	 */
	struct UBP_ProfileAppearance_C_OnSlotDetailVisible_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnFocusReceived
	 */
	struct UBP_ProfileAppearance_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnEditPresetCanceled
	 */
	struct UBP_ProfileAppearance_C_OnEditPresetCanceled_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnEditPresetConfirmed
	 */
	struct UBP_ProfileAppearance_C_OnEditPresetConfirmed_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetConfirmed
	 */
	struct UBP_ProfileAppearance_C_OnPresetConfirmed_Params
	{
	public:
		class FText                                                CommitedText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetTextColor_RandomizeBtn
	 */
	struct UBP_ProfileAppearance_C_GetTextColor_RandomizeBtn_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnConfirmPurchase
	 */
	struct UBP_ProfileAppearance_C_OnConfirmPurchase_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.Prompt Purchase Shopping Cart
	 */
	struct UBP_ProfileAppearance_C_Prompt_Purchase_Shopping_Cart_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.ResetCosmeticState
	 */
	struct UBP_ProfileAppearance_C_ResetCosmeticState_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.EmptyShoppingCart
	 */
	struct UBP_ProfileAppearance_C_EmptyShoppingCart_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetEntitledCosmeticsInSlot
	 */
	struct UBP_ProfileAppearance_C_GetEntitledCosmeticsInSlot_Params
	{
	public:
		ECharacterAppearanceSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1XYW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bActive;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8EF9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UClass*>                                      OutArray;                                                // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.IsCosmeticEquipped
	 */
	struct UBP_ProfileAppearance_C_IsCosmeticEquipped_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIncludeBase;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipped;                                               // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WWR4[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PlayerOwnsItemId
	 */
	struct UBP_ProfileAppearance_C_PlayerOwnsItemId_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Owns;                                                    // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZHWE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCurrentFaction
	 */
	struct UBP_ProfileAppearance_C_GetCurrentFaction_Params
	{
	public:
		class FName                                                OutFaction;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SwitchFactionTo
	 */
	struct UBP_ProfileAppearance_C_SwitchFactionTo_Params
	{
	public:
		class FName                                                NewFaction;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.Open Hands Slot List
	 */
	struct UBP_ProfileAppearance_C_Open_Hands_Slot_List_Params
	{
	public:
		ECharacterAppearanceSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BTET[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdatePreferredFactionSelection
	 */
	struct UBP_ProfileAppearance_C_UpdatePreferredFactionSelection_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.InitializeCarrierAndArmorButtons
	 */
	struct UBP_ProfileAppearance_C_InitializeCarrierAndArmorButtons_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateEquipmentPreview
	 */
	struct UBP_ProfileAppearance_C_UpdateEquipmentPreview_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnTabSelected
	 */
	struct UBP_ProfileAppearance_C_OnTabSelected_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.ForceCameraForCurrentSlot
	 */
	struct UBP_ProfileAppearance_C_ForceCameraForCurrentSlot_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateCarrierLevel
	 */
	struct UBP_ProfileAppearance_C_UpdateCarrierLevel_Params
	{
	public:
		class FName                                                Level;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.NotifyArmorOrCarrierUpdate
	 */
	struct UBP_ProfileAppearance_C_NotifyArmorOrCarrierUpdate_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateArmorLevel
	 */
	struct UBP_ProfileAppearance_C_UpdateArmorLevel_Params
	{
	public:
		class FName                                                Level;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateBalance
	 */
	struct UBP_ProfileAppearance_C_UpdateBalance_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetLastKnownBalance
	 */
	struct UBP_ProfileAppearance_C_GetLastKnownBalance_Params
	{
	public:
		int32_t                                                    Credits;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VHF8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetLastKnownBalanceAsText
	 */
	struct UBP_ProfileAppearance_C_GetLastKnownBalanceAsText_Params
	{
	public:
		class FText                                                Balance;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PopulateEquipmentList
	 */
	struct UBP_ProfileAppearance_C_PopulateEquipmentList_Params
	{
	public:
		ECharacterAppearanceSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O4XO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.ResetCharacterRotation
	 */
	struct UBP_ProfileAppearance_C_ResetCharacterRotation_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.AddCharacterRotation
	 */
	struct UBP_ProfileAppearance_C_AddCharacterRotation_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateExternalCamera
	 */
	struct UBP_ProfileAppearance_C_UpdateExternalCamera_Params
	{
	public:
		ECharacterAppearanceSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1156[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Sub_Slot;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reset;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GUJN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnQueryEntitlementsComplete
	 */
	struct UBP_ProfileAppearance_C_OnQueryEntitlementsComplete_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetColor_GenderSwitchImage
	 */
	struct UBP_ProfileAppearance_C_GetColor_GenderSwitchImage_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetGenderText
	 */
	struct UBP_ProfileAppearance_C_GetGenderText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_GenderDisplay_Visibility_1
	 */
	struct UBP_ProfileAppearance_C_Get_GenderDisplay_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressBackButton
	 */
	struct UBP_ProfileAppearance_C_PressBackButton_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.ShouldNavigateBackToMenu
	 */
	struct UBP_ProfileAppearance_C_ShouldNavigateBackToMenu_Params
	{
	public:
		bool                                                       ShouldReturn;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_VoiceIconWindow_Visibility_1
	 */
	struct UBP_ProfileAppearance_C_Get_VoiceIconWindow_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateCurrentGender
	 */
	struct UBP_ProfileAppearance_C_UpdateCurrentGender_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.CloseShoppingCart
	 */
	struct UBP_ProfileAppearance_C_CloseShoppingCart_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_RightSidebar_Visibility_1
	 */
	struct UBP_ProfileAppearance_C_Get_RightSidebar_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCosmeticUnHovered
	 */
	struct UBP_ProfileAppearance_C_OnCosmeticUnHovered_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SaveCurrentStateAsPreset
	 */
	struct UBP_ProfileAppearance_C_SaveCurrentStateAsPreset_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCreatePresetHovered
	 */
	struct UBP_ProfileAppearance_C_OnCreatePresetHovered_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetNextPresetName
	 */
	struct UBP_ProfileAppearance_C_GetNextPresetName_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetRandomizeText
	 */
	struct UBP_ProfileAppearance_C_GetRandomizeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.RandomizeCurrentCosmetics
	 */
	struct UBP_ProfileAppearance_C_RandomizeCurrentCosmetics_Params
	{
	public:
		ECharacterAppearanceSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1HKS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSubSlotButton;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MUND[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PurchaseShoppingCart
	 */
	struct UBP_ProfileAppearance_C_PurchaseShoppingCart_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_ConfirmPurchaseWindow_Visibility_1
	 */
	struct UBP_ProfileAppearance_C_Get_ConfirmPurchaseWindow_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.StartCheckout
	 */
	struct UBP_ProfileAppearance_C_StartCheckout_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PreviewItem
	 */
	struct UBP_ProfileAppearance_C_PreviewItem_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.CloseShoppingList
	 */
	struct UBP_ProfileAppearance_C_CloseShoppingList_Params
	{
	public:
		bool                                                       Skip_Camera;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       To_Initial_Slot;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J363[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseMove
	 */
	struct UBP_ProfileAppearance_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseButtonUp
	 */
	struct UBP_ProfileAppearance_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseButtonDown
	 */
	struct UBP_ProfileAppearance_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.IsCosmeticAvailable
	 */
	struct UBP_ProfileAppearance_C_IsCosmeticAvailable_Params
	{
	public:
		class UClass*                                              Cosmetic;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAvailable;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCosmeticRarity
	 */
	struct UBP_ProfileAppearance_C_GetCosmeticRarity_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECollectibleRarity                                         Rarity;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SW38[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateSelectedItems
	 */
	struct UBP_ProfileAppearance_C_UpdateSelectedItems_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateDevBox
	 */
	struct UBP_ProfileAppearance_C_UpdateDevBox_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UnhoveredItemButton
	 */
	struct UBP_ProfileAppearance_C_UnhoveredItemButton_Params
	{
	public:
		class UWidget*                                             WidgetRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.HoverItemButton
	 */
	struct UBP_ProfileAppearance_C_HoverItemButton_Params
	{
	public:
		class UWidget*                                             Ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressItemButton
	 */
	struct UBP_ProfileAppearance_C_PressItemButton_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L3PV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_ProfileAppearance_Variation_C*                   VariationButtonReference;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.Open Sub Slot List
	 */
	struct UBP_ProfileAppearance_C_Open_Sub_Slot_List_Params
	{
	public:
		ECharacterAppearanceSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2T3V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_SlotDetailsContainer_Visibility_1
	 */
	struct UBP_ProfileAppearance_C_Get_SlotDetailsContainer_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.ScrollToSlotListNow
	 */
	struct UBP_ProfileAppearance_C_ScrollToSlotListNow_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnInventoryPurchase
	 */
	struct UBP_ProfileAppearance_C_OnInventoryPurchase_Params
	{
	public:
		int32_t                                                    NewItemDefId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_76AJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetCosmeticStyleVisibility
	 */
	struct UBP_ProfileAppearance_C_GetCosmeticStyleVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.AnimScrollToSlotDetail
	 */
	struct UBP_ProfileAppearance_C_AnimScrollToSlotDetail_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.AnimReturnToSlotList
	 */
	struct UBP_ProfileAppearance_C_AnimReturnToSlotList_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetUnHovered
	 */
	struct UBP_ProfileAppearance_C_OnPresetUnHovered_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetHovered
	 */
	struct UBP_ProfileAppearance_C_OnPresetHovered_Params
	{
	public:
		class UWidget*                                             ItemRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetCancelButtonClicked
	 */
	struct UBP_ProfileAppearance_C_OnPresetCancelButtonClicked_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.UpdateFactionSelectButtons
	 */
	struct UBP_ProfileAppearance_C_UpdateFactionSelectButtons_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.RemovePreset
	 */
	struct UBP_ProfileAppearance_C_RemovePreset_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetEditButtonClicked
	 */
	struct UBP_ProfileAppearance_C_OnPresetEditButtonClicked_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetEditingPreset
	 */
	struct UBP_ProfileAppearance_C_SetEditingPreset_Params
	{
	public:
		bool                                                       bEditing;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetSaveButtonClicked
	 */
	struct UBP_ProfileAppearance_C_OnPresetSaveButtonClicked_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                PresetDesignation;                                       // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.Get_BtnAddNewPreset_Visibility_1
	 */
	struct UBP_ProfileAppearance_C_Get_BtnAddNewPreset_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.ReloadPresets
	 */
	struct UBP_ProfileAppearance_C_ReloadPresets_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.VisibleIfEditingPreset
	 */
	struct UBP_ProfileAppearance_C_VisibleIfEditingPreset_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.LoadPreset
	 */
	struct UBP_ProfileAppearance_C_LoadPreset_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetButtonClicked
	 */
	struct UBP_ProfileAppearance_C_OnPresetButtonClicked_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SwitchFactionToInsurgent
	 */
	struct UBP_ProfileAppearance_C_SwitchFactionToInsurgent_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.GetLocalPlayer
	 */
	struct UBP_ProfileAppearance_C_GetLocalPlayer_Params
	{
	public:
		class UINSLocalPlayer*                                     LocalPlayer;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressVarietyButton
	 */
	struct UBP_ProfileAppearance_C_PressVarietyButton_Params
	{
	public:
		class UBP_ProfileAppearance_CosmeticVariety_C*             VarietyButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PopulateVarietiesList
	 */
	struct UBP_ProfileAppearance_C_PopulateVarietiesList_Params
	{
	public:
		class UClass*                                              Cosmetic;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PopulateItemsList
	 */
	struct UBP_ProfileAppearance_C_PopulateItemsList_Params
	{
	public:
		ECharacterAppearanceSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_58V4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Clear;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ZY6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SwitchFactionToSecurity
	 */
	struct UBP_ProfileAppearance_C_SwitchFactionToSecurity_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressCosmeticButton
	 */
	struct UBP_ProfileAppearance_C_PressCosmeticButton_Params
	{
	public:
		class UBP_ProfileAppearance_CosmeticItem_C*                CosmeticButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PressSlotButton
	 */
	struct UBP_ProfileAppearance_C_PressSlotButton_Params
	{
	public:
		ECharacterAppearanceSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D9BJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSubSlotButton;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.RefreshAppearanceSlotList
	 */
	struct UBP_ProfileAppearance_C_RefreshAppearanceSlotList_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.Construct
	 */
	struct UBP_ProfileAppearance_C_Construct_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__SwitchFactionButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__SwitchFactionButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Appearance_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BP_Profile_Appearance_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature_Params
	{
	public:
		class FString                                              Parameter;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Appearance_Button_C_0_K2Node_ComponentBoundEvent_102_OnClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BP_Profile_Appearance_Button_C_0_K2Node_ComponentBoundEvent_102_OnClicked__DelegateSignature_Params
	{
	public:
		class FString                                              Parameter;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnCancelEditPreset_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BtnCancelEditPreset_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnAddNewPreset_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BtnAddNewPreset_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_14_OnPresetClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BP_Profile_Preset_Button_K2Node_ComponentBoundEvent_14_OnPresetClicked__DelegateSignature_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_Profile_Preset_Button_C_1_K2Node_ComponentBoundEvent_23_OnPresetClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BP_Profile_Preset_Button_C_1_K2Node_ComponentBoundEvent_23_OnPresetClicked__DelegateSignature_Params
	{
	public:
		class FText                                                PresetName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_31_OnRefreshClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_31_OnRefreshClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_376_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_376_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnScrollToSlotListStart
	 */
	struct UBP_ProfileAppearance_C_OnScrollToSlotListStart_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnScrollToSlotListEnd
	 */
	struct UBP_ProfileAppearance_C_OnScrollToSlotListEnd_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_ProfileAppearance_CosmeticSlot_K2Node_ComponentBoundEvent_86_OnPressed__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BP_ProfileAppearance_CosmeticSlot_K2Node_ComponentBoundEvent_86_OnPressed__DelegateSignature_Params
	{
	public:
		ECharacterAppearanceSlot                                   Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YMH2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSubSlotButton;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_15_OnRefreshClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_15_OnRefreshClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.RefreshCosmetics
	 */
	struct UBP_ProfileAppearance_C_RefreshCosmetics_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetSlotDetailVisibilities
	 */
	struct UBP_ProfileAppearance_C_SetSlotDetailVisibilities_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.SetSlotListVisibilities
	 */
	struct UBP_ProfileAppearance_C_SetSlotListVisibilities_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnToggle_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BtnToggle_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BtnCloseSlotContainer_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__ButtonPurchaseCart_K2Node_ComponentBoundEvent_629_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__ButtonPurchaseCart_K2Node_ComponentBoundEvent_629_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_372_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_372_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnPlayVoiceSample_K2Node_ComponentBoundEvent_977_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BtnPlayVoiceSample_K2Node_ComponentBoundEvent_977_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnMouseLeave
	 */
	struct UBP_ProfileAppearance_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__NoArmorBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__NoArmorBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__LightArmorBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__LightArmorBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__HeavyArmorBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__HeavyArmorBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__NoCarrierBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__NoCarrierBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__LightCarrierBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__LightCarrierBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__HeavyCarrierBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__HeavyCarrierBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	public:
		class FName                                                Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PreConstruct
	 */
	struct UBP_ProfileAppearance_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnProfileBlockLoaded
	 */
	struct UBP_ProfileAppearance_C_OnProfileBlockLoaded_Params
	{
	public:
		EProfileBlockType                                          Type;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromCloud;                                              // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnCosmeticsProfileLoaded
	 */
	struct UBP_ProfileAppearance_C_OnCosmeticsProfileLoaded_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BtnRandomize_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__GenderSwitchButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.PlayVoiceSample
	 */
	struct UBP_ProfileAppearance_C_PlayVoiceSample_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__InsurgentFactionSelect_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__SecurityFactionSelect_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_17_Click__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_17_Click__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnEntitlementsQueryCompleted
	 */
	struct UBP_ProfileAppearance_C_OnEntitlementsQueryCompleted_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.ExecuteUbergraph_BP_ProfileAppearance
	 */
	struct UBP_ProfileAppearance_C_ExecuteUbergraph_BP_ProfileAppearance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8Z42[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.RefreshBackButtonHint__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_RefreshBackButtonHint__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetUnhover__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_OnPresetUnhover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnPresetHover__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_OnPresetHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ProfileAppearance.BP_ProfileAppearance_C.OnClicked__DelegateSignature
	 */
	struct UBP_ProfileAppearance_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
