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
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetIsShoppingListActive
	 */
	struct UBP_InGameMenu_KitSelect_C_GetIsShoppingListActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get Visibility Btn Back
	 */
	struct UBP_InGameMenu_KitSelect_C_Get_Visibility_Btn_Back_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4URG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetRelativeToViewportCanvasScale
	 */
	struct UBP_InGameMenu_KitSelect_C_GetRelativeToViewportCanvasScale_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PerformDefaultUpgradeActions
	 */
	struct UBP_InGameMenu_KitSelect_C_PerformDefaultUpgradeActions_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Outline Upgrade For Given Slot
	 */
	struct UBP_InGameMenu_KitSelect_C_Outline_Upgrade_For_Given_Slot_Params
	{
	public:
		EWeaponUpgradeSlot                                         SlotToOutline;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OGXH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdatePreviewItemName
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdatePreviewItemName_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetLoadoutFocusWidget
	 */
	struct UBP_InGameMenu_KitSelect_C_GetLoadoutFocusWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetFirstEmptyUpgradeSlot
	 */
	struct UBP_InGameMenu_KitSelect_C_GetFirstEmptyUpgradeSlot_Params
	{
	public:
		class UWidget*                                             EmptySlot;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetUpgradeLoadoutSlot
	 */
	struct UBP_InGameMenu_KitSelect_C_GetUpgradeLoadoutSlot_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U1PL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetSupplayCostTotalForSlot
	 */
	struct UBP_InGameMenu_KitSelect_C_GetSupplayCostTotalForSlot_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IOXD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TotalCost;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetTotalSupplayCostForHoveredUpgrade
	 */
	struct UBP_InGameMenu_KitSelect_C_GetTotalSupplayCostForHoveredUpgrade_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RXC8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Upgrade;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalCost;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetSupplayCostTotal
	 */
	struct UBP_InGameMenu_KitSelect_C_GetSupplayCostTotal_Params
	{
	public:
		int32_t                                                    TotalCost;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ClearItemUpgradesSupplayCost
	 */
	struct UBP_InGameMenu_KitSelect_C_ClearItemUpgradesSupplayCost_Params
	{
	public:
		EItemSlot                                                  ItemSlot;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3466[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemUpgrade;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ClearItemSupplayCost
	 */
	struct UBP_InGameMenu_KitSelect_C_ClearItemSupplayCost_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CacheItemUpgradesSupplayCost
	 */
	struct UBP_InGameMenu_KitSelect_C_CacheItemUpgradesSupplayCost_Params
	{
	public:
		EItemSlot                                                  ItemSlot;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2964[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemUpgrade;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CacheItemSupplayCost
	 */
	struct UBP_InGameMenu_KitSelect_C_CacheItemSupplayCost_Params
	{
	public:
		class UClass*                                              Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetUpgradeWidgetByTypeForFocus
	 */
	struct UBP_InGameMenu_KitSelect_C_GetUpgradeWidgetByTypeForFocus_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.FindUpgradeSlot
	 */
	struct UBP_InGameMenu_KitSelect_C_FindUpgradeSlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUINavigation                                              NavDirection;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3P75[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_KitSelect_UpgradeListItem_C*                     UpgradeSlot;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsUpgradeSlotFounded;                                    // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G36F[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Is Nav Coordinate Hits Border
	 */
	struct UBP_InGameMenu_KitSelect_C_Is_Nav_Coordinate_Hits_Border_Params
	{
	public:
		struct FIntPoint                                           NavCoordinate;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsHitBorder;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateUpgradingSlots
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateUpgradingSlots_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Populate Slot Upgrading List
	 */
	struct UBP_InGameMenu_KitSelect_C_Populate_Slot_Upgrading_List_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BFCP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.IsUpgradingListActive
	 */
	struct UBP_InGameMenu_KitSelect_C_IsUpgradingListActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeUpgradeSlot
	 */
	struct UBP_InGameMenu_KitSelect_C_InitializeUpgradeSlot_Params
	{
	public:
		class UBP_KitSelect_UpgradeListItem_C*                     In_Upgrade_List_Item;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CloseUpgradingList
	 */
	struct UBP_InGameMenu_KitSelect_C_CloseUpgradingList_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GenerateUserDefinedLoadoutName
	 */
	struct UBP_InGameMenu_KitSelect_C_GenerateUserDefinedLoadoutName_Params
	{
	public:
		class FText                                                InLoadoutName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                OutGeneratedName;                                        // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.MakeNameFitRequirements
	 */
	struct UBP_InGameMenu_KitSelect_C_MakeNameFitRequirements_Params
	{
	public:
		class FText                                                InLoadoutName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutNeedRename;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EVT1[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutLoadoutName;                                          // 0x0020(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CheckAndFixLoadoutName
	 */
	struct UBP_InGameMenu_KitSelect_C_CheckAndFixLoadoutName_Params
	{
	public:
		int32_t                                                    InLoadoutIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_26PO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                InLoadoutName;                                           // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                OutLoadoutName;                                          // 0x0020(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RecallLoadoutRenamePrompt
	 */
	struct UBP_InGameMenu_KitSelect_C_RecallLoadoutRenamePrompt_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DeleteLoadoutFromProfile
	 */
	struct UBP_InGameMenu_KitSelect_C_DeleteLoadoutFromProfile_Params
	{
	public:
		int32_t                                                    LoadoutIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MM41[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.On Overwrite Loadout when Renaming
	 */
	struct UBP_InGameMenu_KitSelect_C_On_Overwrite_Loadout_when_Renaming_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ConditionallyRenameLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_ConditionallyRenameLoadout_Params
	{
	public:
		class FText                                                InNewName;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetHoveredSavedPresetWidget
	 */
	struct UBP_InGameMenu_KitSelect_C_GetHoveredSavedPresetWidget_Params
	{
	public:
		class UBP_SavedLoadoutButton_C*                            AsBP_Saved_Loadout_Button;                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get_BoxRemoveKey_Visibility
	 */
	struct UBP_InGameMenu_KitSelect_C_Get_BoxRemoveKey_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HandleBackInput
	 */
	struct UBP_InGameMenu_KitSelect_C_HandleBackInput_Params
	{
	public:
		bool                                                       Handled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnKeyUp
	 */
	struct UBP_InGameMenu_KitSelect_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSelectButtonText
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateSelectButtonText_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnAnalogValueChanged
	 */
	struct UBP_InGameMenu_KitSelect_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PendingSaveDirtyProfile
	 */
	struct UBP_InGameMenu_KitSelect_C_PendingSaveDirtyProfile_Params
	{
	public:
		bool                                                       bIsPending;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSaveDirtyTimer
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateSaveDirtyTimer_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetProfileIsDirty
	 */
	struct UBP_InGameMenu_KitSelect_C_GetProfileIsDirty_Params
	{
	public:
		bool                                                       bProfileIsDirty;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B57L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RestorePresetHover
	 */
	struct UBP_InGameMenu_KitSelect_C_RestorePresetHover_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveLoadoutWithDefaultName
	 */
	struct UBP_InGameMenu_KitSelect_C_SaveLoadoutWithDefaultName_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BP_InGameMenu_KitSelect_HoverSaveLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_BP_InGameMenu_KitSelect_HoverSaveLoadout_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SupportRemoval;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BP_InGameMenu_KitSelect_UnHoverSaveLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_BP_InGameMenu_KitSelect_UnHoverSaveLoadout_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DoDetermineFireModeImages
	 */
	struct UBP_InGameMenu_KitSelect_C_DoDetermineFireModeImages_Params
	{
	public:
		class UClass*                                              InFirearmClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		TArray<class UTexture2D*>                                  OutFireModeImages;                                       // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DoHasActiveHoverComparison
	 */
	struct UBP_InGameMenu_KitSelect_C_DoHasActiveHoverComparison_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateAddUpgradeWidgetData
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateAddUpgradeWidgetData_Params
	{
	public:
		int32_t                                                    InLoadoutItemIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InItemSlot;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DWPT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InParentLoadoutCategoryIndex;                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSlotRowEmptyWidgetData
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateSlotRowEmptyWidgetData_Params
	{
	public:
		int32_t                                                    InLoadoutListIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X4AL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlayerInventoryComponent*                           InPlayerInventory;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InItemSlot;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0DSB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSubSlot;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInDisabledSlot;                                         // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GDQ5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UClass*>                                      AllowedItems;                                            // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		int32_t                                                    InLoadoutCategoryIndex;                                  // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateUpgradeDisplayWidgetData
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateUpgradeDisplayWidgetData_Params
	{
	public:
		int32_t                                                    InLoadoutListIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RUB1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlayerInventoryComponent*                           InPlayerInventory;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItemClass;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InUpgradeClass;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InParentItemSlot;                                        // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P5VM[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InParentItemSubSlot;                                     // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InParentLoadoutCategoryIndex;                            // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSlotItemButtonWidgetData
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateSlotItemButtonWidgetData_Params
	{
	public:
		int32_t                                                    InLoadoutListIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BY09[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlayerInventoryComponent*                           InPlayerInventory;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItemClass;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InItemSlot;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7UDF[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSubSlot;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLoadoutCategoryIndex;                                  // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeWeaponListItem
	 */
	struct UBP_InGameMenu_KitSelect_C_InitializeWeaponListItem_Params
	{
	public:
		class UBP_KitSelect_ItemButton_C*                          InWeaponListItem;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeLoadoutListItem
	 */
	struct UBP_InGameMenu_KitSelect_C_InitializeLoadoutListItem_Params
	{
	public:
		class UBP_KitSelect_LoadoutListItem_C*                     InLoadoutListItem;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeUpgradeListItem
	 */
	struct UBP_InGameMenu_KitSelect_C_InitializeUpgradeListItem_Params
	{
	public:
		class UBP_KitSelect_UpgradeListItem_C*                     InUpgradeListItem;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Update Upgrade Button Widget Data
	 */
	struct UBP_InGameMenu_KitSelect_C_Update_Upgrade_Button_Widget_Data_Params
	{
	public:
		int32_t                                                    InUpgradeListIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FAKG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlayerInventoryComponent*                           InPlayerInventory;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItemBase;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItemUpgrade;                                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InParentSlot;                                            // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InLastShoppingItemSlot;                                  // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M93M[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InLastShoppingItemSubSlot;                               // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateUpgradeHeaderWidgetData
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateUpgradeHeaderWidgetData_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InUpgradeListIndex;                                      // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateItemWidgetData
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateItemWidgetData_Params
	{
	public:
		class UClass*                                              InItemClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSubSlot;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InItemIndex;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLoadoutCategoryIndex;                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2Q15[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PreCreateWidgets
	 */
	struct UBP_InGameMenu_KitSelect_C_PreCreateWidgets_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PopulateNewItems
	 */
	struct UBP_InGameMenu_KitSelect_C_PopulateNewItems_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ForceSelectSavedLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_ForceSelectSavedLoadout_Params
	{
	public:
		int32_t                                                    LoadoutIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LXQK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.LoadSavedActivePreset
	 */
	struct UBP_InGameMenu_KitSelect_C_LoadSavedActivePreset_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveActivePreset
	 */
	struct UBP_InGameMenu_KitSelect_C_SaveActivePreset_Params
	{
	public:
		int32_t                                                    PresetIndex;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LU27[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CancelPresetModification
	 */
	struct UBP_InGameMenu_KitSelect_C_CancelPresetModification_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.EmptyPreset
	 */
	struct UBP_InGameMenu_KitSelect_C_EmptyPreset_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Reset Preset to Default
	 */
	struct UBP_InGameMenu_KitSelect_C_Reset_Preset_to_Default_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnRenameClick
	 */
	struct UBP_InGameMenu_KitSelect_C_OnRenameClick_Params
	{
	public:
		int32_t                                                    OutLoadoutIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OTNP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSavedLoadout                                       Loadout;                                                 // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.LoadoutRenamePrompt
	 */
	struct UBP_InGameMenu_KitSelect_C_LoadoutRenamePrompt_Params
	{
	public:
		class FText                                                StartText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RenameLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_RenameLoadout_Params
	{
	public:
		class FText                                                InNewName;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnEmptyLoadoutPressed
	 */
	struct UBP_InGameMenu_KitSelect_C_OnEmptyLoadoutPressed_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnResetToDefaultPressed
	 */
	struct UBP_InGameMenu_KitSelect_C_OnResetToDefaultPressed_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ClearActiveLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_ClearActiveLoadout_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AddUpgradeToEquippedUpgrades
	 */
	struct UBP_InGameMenu_KitSelect_C_AddUpgradeToEquippedUpgrades_Params
	{
	public:
		unsigned char                                              UnknownData_40DW[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.IsNewUpgrade
	 */
	struct UBP_InGameMenu_KitSelect_C_IsNewUpgrade_Params
	{
	public:
		unsigned char                                              UnknownData_R9DG[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       Result;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AnyNewItems
	 */
	struct UBP_InGameMenu_KitSelect_C_AnyNewItems_Params
	{
	public:
		TArray<class UClass*>                                      AllowedItems;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QERP[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AddItemToEquippedItems
	 */
	struct UBP_InGameMenu_KitSelect_C_AddItemToEquippedItems_Params
	{
	public:
		unsigned char                                              UnknownData_U8AL[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.IsNewItem
	 */
	struct UBP_InGameMenu_KitSelect_C_IsNewItem_Params
	{
	public:
		unsigned char                                              UnknownData_3TWP[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       Result;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdatePurchasableUpgrades
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdatePurchasableUpgrades_Params
	{
	public:
		class UScrollBox*                                          SlotUpgradesList;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get Current Hovered Ammo Type
	 */
	struct UBP_InGameMenu_KitSelect_C_Get_Current_Hovered_Ammo_Type_Params
	{
	public:
		class UClass*                                              BaseAmmoType;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              OriginalAmmoType;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              UpgradeAmmoType;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HideAllHints
	 */
	struct UBP_InGameMenu_KitSelect_C_HideAllHints_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CacheHints
	 */
	struct UBP_InGameMenu_KitSelect_C_CacheHints_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ToggleHints
	 */
	struct UBP_InGameMenu_KitSelect_C_ToggleHints_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnAddUpgradePressed
	 */
	struct UBP_InGameMenu_KitSelect_C_OnAddUpgradePressed_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OSKB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ParentLoadoutCategoryIndex;                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ResetRotation
	 */
	struct UBP_InGameMenu_KitSelect_C_ResetRotation_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetSoldierCamera
	 */
	struct UBP_InGameMenu_KitSelect_C_SetSoldierCamera_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetWeaponCamera
	 */
	struct UBP_InGameMenu_KitSelect_C_SetWeaponCamera_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineAmmoWeight
	 */
	struct UBP_InGameMenu_KitSelect_C_DetermineAmmoWeight_Params
	{
	public:
		int32_t                                                    Carrier_Extra_Ammo;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Magazine_Capacity;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Default_Magazine_Amount;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AmmoContainerWeight;                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RoundWeight;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AmmoIsMagCount;                                          // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3Q8I[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AmmoWeight;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnTeamChanged
	 */
	struct UBP_InGameMenu_KitSelect_C_OnTeamChanged_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W14N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATeamInfo*                                           TeamInfo;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPlayerClassChanged
	 */
	struct UBP_InGameMenu_KitSelect_C_OnPlayerClassChanged_Params
	{
	public:
		class UPlayerClass*                                        PlayerClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RemoveSavedLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_RemoveSavedLoadout_Params
	{
	public:
		int32_t                                                    LoadoutIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WULU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSavedLoadout                                       Loadout;                                                 // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetRespawnDelayForGameMode
	 */
	struct UBP_InGameMenu_KitSelect_C_GetRespawnDelayForGameMode_Params
	{
	public:
		float                                                      RespawnDelay;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8YNN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateOuterStatus
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateOuterStatus_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ToggleResupplyButtonVisibility
	 */
	struct UBP_InGameMenu_KitSelect_C_ToggleResupplyButtonVisibility_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ApplyUpgradeHandlingModifiers
	 */
	struct UBP_InGameMenu_KitSelect_C_ApplyUpgradeHandlingModifiers_Params
	{
	public:
		class UClass*                                              InUpgrade;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRecoilAmount;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAdditive;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bVertical;                                               // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CSEI[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutRecoilAmount;                                         // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmRecoilHandling
	 */
	struct UBP_InGameMenu_KitSelect_C_DetermineFirearmRecoilHandling_Params
	{
	public:
		class UClass*                                              FirearmClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bVertical;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WRDP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RecoilHandlingOutput;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                RecoilHandlingText;                                      // 0x0010(0x0018)  (Parm, OutParm)
		float                                                      RecoilHandlingHoverOutput;                               // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetItemDescriptiveTextWithActionIconsVisibility
	 */
	struct UBP_InGameMenu_KitSelect_C_GetItemDescriptiveTextWithActionIconsVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateEquipableRotation
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateEquipableRotation_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AddEquipableRotation
	 */
	struct UBP_InGameMenu_KitSelect_C_AddEquipableRotation_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetItemDescriptiveTextVisibility
	 */
	struct UBP_InGameMenu_KitSelect_C_GetItemDescriptiveTextVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetUpgradeInfoVisibility
	 */
	struct UBP_InGameMenu_KitSelect_C_GetUpgradeInfoVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HasLoadoutNamed
	 */
	struct UBP_InGameMenu_KitSelect_C_HasLoadoutNamed_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Out;                                                     // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8GR5[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    LoadoutIndex;                                            // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GenerateDefaultLoadoutName
	 */
	struct UBP_InGameMenu_KitSelect_C_GenerateDefaultLoadoutName_Params
	{
	public:
		class FText                                                GeneratedName;                                           // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PresentLoadoutSavingPrompt
	 */
	struct UBP_InGameMenu_KitSelect_C_PresentLoadoutSavingPrompt_Params
	{
	public:
		class FText                                                StartText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RecallLoadoutSavingPrompt
	 */
	struct UBP_InGameMenu_KitSelect_C_RecallLoadoutSavingPrompt_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnOverwritePendingLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_OnOverwritePendingLoadout_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HideActiveDialog
	 */
	struct UBP_InGameMenu_KitSelect_C_HideActiveDialog_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ShowGenericDialog
	 */
	struct UBP_InGameMenu_KitSelect_C_ShowGenericDialog_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Text;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EDialogType                                                DialogType;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O3V3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_GenericDialog_C*                                 Dialog;                                                  // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ConditionallySaveCurrentLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_ConditionallySaveCurrentLoadout_Params
	{
	public:
		class FText                                                LoadoutName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SelectSavedLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_SelectSavedLoadout_Params
	{
	public:
		int32_t                                                    LoadoutIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OE54[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveDirtyProfile
	 */
	struct UBP_InGameMenu_KitSelect_C_SaveDirtyProfile_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveCurrentLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_SaveCurrentLoadout_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bImmediately;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_02H7[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RefreshSavedLoadouts
	 */
	struct UBP_InGameMenu_KitSelect_C_RefreshSavedLoadouts_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HideActiveSavePresetWidget
	 */
	struct UBP_InGameMenu_KitSelect_C_HideActiveSavePresetWidget_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CheckForFallbackItemDescription
	 */
	struct UBP_InGameMenu_KitSelect_C_CheckForFallbackItemDescription_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateHoveredWeaponUpgradeClass
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateHoveredWeaponUpgradeClass_Params
	{
	public:
		class UClass*                                              WeaponUpgradeClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateHoveredItemClass
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateHoveredItemClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetDisabledSlotHintText
	 */
	struct UBP_InGameMenu_KitSelect_C_SetDisabledSlotHintText_Params
	{
	public:
		EItemSlot                                                  ItemSlot;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5L2L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSupplyRemaining
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateSupplyRemaining_Params
	{
	public:
		bool                                                       bShopping;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ATVH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetConfirmButtonText
	 */
	struct UBP_InGameMenu_KitSelect_C_SetConfirmButtonText_Params
	{
	public:
		bool                                                       bShopping;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FUV6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetRemoveKeyHintText
	 */
	struct UBP_InGameMenu_KitSelect_C_SetRemoveKeyHintText_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              UpgradeClass;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  Slot;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZJY5[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetConfirmButtonVisibility
	 */
	struct UBP_InGameMenu_KitSelect_C_GetConfirmButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HasConfirmedLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_HasConfirmedLoadout_Params
	{
	public:
		bool                                                       bConfirmed;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_96PC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetConfirmKeyHintText
	 */
	struct UBP_InGameMenu_KitSelect_C_SetConfirmKeyHintText_Params
	{
	public:
		bool                                                       bShopping;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BindControllerDelegates
	 */
	struct UBP_InGameMenu_KitSelect_C_BindControllerDelegates_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetIsUsingGamepad
	 */
	struct UBP_InGameMenu_KitSelect_C_SetIsUsingGamepad_Params
	{
	public:
		bool                                                       bUsingGamepad;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            InputIcon;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateLastSelectedListItemIndexes
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateLastSelectedListItemIndexes_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EEND[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Sub_Slot;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RefreshWeight
	 */
	struct UBP_InGameMenu_KitSelect_C_RefreshWeight_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetFireRateFireModeModifier
	 */
	struct UBP_InGameMenu_KitSelect_C_GetFireRateFireModeModifier_Params
	{
	public:
		class UClass*                                              FirearmClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InFireRate;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutFireRate;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Apply Upgrade Velocity Modifiers
	 */
	struct UBP_InGameMenu_KitSelect_C_Apply_Upgrade_Velocity_Modifiers_Params
	{
	public:
		class UClass*                                              InUpgrade;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InMuzzleVelocity;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAdditive;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UZ9M[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutMuzzleVelocity;                                       // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Has Active Hover Comparison
	 */
	struct UBP_InGameMenu_KitSelect_C_Has_Active_Hover_Comparison_Params
	{
	public:
		bool                                                       HasHoverComparison;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetHoveredItemName
	 */
	struct UBP_InGameMenu_KitSelect_C_GetHoveredItemName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetItemInfoVisibility
	 */
	struct UBP_InGameMenu_KitSelect_C_GetItemInfoVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetCurrentItemName
	 */
	struct UBP_InGameMenu_KitSelect_C_GetCurrentItemName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Update Firearm Attributes
	 */
	struct UBP_InGameMenu_KitSelect_C_Update_Firearm_Attributes_Params
	{
	public:
		class UClass*                                              ItemFirearmClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AmmoType;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              OriginalAmmoType;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetAttributeContainerVisibility
	 */
	struct UBP_InGameMenu_KitSelect_C_GetAttributeContainerVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPaint
	 */
	struct UBP_InGameMenu_KitSelect_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseButtonUp
	 */
	struct UBP_InGameMenu_KitSelect_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseButtonDown
	 */
	struct UBP_InGameMenu_KitSelect_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseMove
	 */
	struct UBP_InGameMenu_KitSelect_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFireRate
	 */
	struct UBP_InGameMenu_KitSelect_C_DetermineFireRate_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FireRateOutput;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OO25[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                FireRateText;                                            // 0x0010(0x0018)  (Parm, OutParm)
		float                                                      FireRateHoverOutput;                                     // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Determine Fire Mode Images
	 */
	struct UBP_InGameMenu_KitSelect_C_Determine_Fire_Mode_Images_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UTexture2D*>                                  FireModeImages;                                          // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineMagSizeText
	 */
	struct UBP_InGameMenu_KitSelect_C_DetermineMagSizeText_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                MagSizeText;                                             // 0x0008(0x0018)  (Parm, OutParm)
		class FText                                                MagSizeDifferenceText;                                   // 0x0020(0x0018)  (Parm, OutParm)
		float                                                      DifferencePercentage;                                    // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmCaliber
	 */
	struct UBP_InGameMenu_KitSelect_C_DetermineFirearmCaliber_Params
	{
	public:
		class UClass*                                              FirearmClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AmmoTypeClass;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              OriginalAmmoTypeClass;                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CaliberOutput;                                           // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W42O[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                CaliberText;                                             // 0x0020(0x0018)  (Parm, OutParm)
		float                                                      CaliberHoverOutput;                                      // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmPenetration
	 */
	struct UBP_InGameMenu_KitSelect_C_DetermineFirearmPenetration_Params
	{
	public:
		class UClass*                                              FirearmClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AmmoTypeClass;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              OriginalAmmoTypeClass;                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PenetrationOutput;                                       // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HCHF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                PenetrationText;                                         // 0x0020(0x0018)  (Parm, OutParm)
		float                                                      PenetrationHoverOutput;                                  // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Determine Firearm Muzzle Velocity
	 */
	struct UBP_InGameMenu_KitSelect_C_Determine_Firearm_Muzzle_Velocity_Params
	{
	public:
		class UClass*                                              FirearmClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AmmoTypeClass;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MuzzleVelocityOutput;                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CTMV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                MuzzleVelocityText;                                      // 0x0018(0x0018)  (Parm, OutParm)
		float                                                      MuzzleVelocityHoverOutput;                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmEffectiveRange
	 */
	struct UBP_InGameMenu_KitSelect_C_DetermineFirearmEffectiveRange_Params
	{
	public:
		class UClass*                                              FirearmClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AmmoTypeClass;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              OriignalAmmoTypeClass;                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RangeOutput;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PD5H[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                RangeText;                                               // 0x0020(0x0018)  (Parm, OutParm)
		float                                                      RangeHoverOutput;                                        // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateItemAttributes
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateItemAttributes_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetClassIconImage
	 */
	struct UBP_InGameMenu_KitSelect_C_GetClassIconImage_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetupClassInfo
	 */
	struct UBP_InGameMenu_KitSelect_C_SetupClassInfo_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnCustomNavigation
	 */
	struct UBP_InGameMenu_KitSelect_C_OnCustomNavigation_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnKeyDown
	 */
	struct UBP_InGameMenu_KitSelect_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnFocusReceived
	 */
	struct UBP_InGameMenu_KitSelect_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetWidgetToFocus
	 */
	struct UBP_InGameMenu_KitSelect_C_GetWidgetToFocus_Params
	{
	public:
		bool                                                       bShoppingList;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bNewCategory;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bGetFirstInList;                                         // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D7PR[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RestoreKeyboardListFocus
	 */
	struct UBP_InGameMenu_KitSelect_C_RestoreKeyboardListFocus_Params
	{
	public:
		class UPanelWidget*                                        Panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetFocusedListIndex
	 */
	struct UBP_InGameMenu_KitSelect_C_GetFocusedListIndex_Params
	{
	public:
		class UPanelWidget*                                        Panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OpenShoppingList
	 */
	struct UBP_InGameMenu_KitSelect_C_OpenShoppingList_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CloseShoppingList
	 */
	struct UBP_InGameMenu_KitSelect_C_CloseShoppingList_Params
	{
	public:
		bool                                                       bInitialOpen;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RefreshShoppingListIfActive
	 */
	struct UBP_InGameMenu_KitSelect_C_RefreshShoppingListIfActive_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Is Shopping List Active
	 */
	struct UBP_InGameMenu_KitSelect_C_Is_Shopping_List_Active_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MLSL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Populate Slot Shopping List
	 */
	struct UBP_InGameMenu_KitSelect_C_Populate_Slot_Shopping_List_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4IA2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LoadoutCategoryIndex;                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BC1E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CreateSlotRowEmpty
	 */
	struct UBP_InGameMenu_KitSelect_C_CreateSlotRowEmpty_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TP40[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisabledSlot;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DC7K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BindDelegates
	 */
	struct UBP_InGameMenu_KitSelect_C_BindDelegates_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get_ConfirmButton_bIsEnabled_1
	 */
	struct UBP_InGameMenu_KitSelect_C_Get_ConfirmButton_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_82SS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PopulateLoadout
	 */
	struct UBP_InGameMenu_KitSelect_C_PopulateLoadout_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeUnequipped
	 */
	struct UBP_InGameMenu_KitSelect_C_OnWeaponUpgradeUnequipped_Params
	{
	public:
		class UClass*                                              Upgrade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  ParentSlot;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutUpgradeClick
	 */
	struct UBP_InGameMenu_KitSelect_C_OnLoadoutUpgradeClick_Params
	{
	public:
		EItemSlot                                                  ParentSlot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q4PH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ParentLoadoutCategoryIndex;                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              UpgradeClass;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetModelFromInventory
	 */
	struct UBP_InGameMenu_KitSelect_C_SetModelFromInventory_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O2P3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Sub_Slot;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force_Refresh;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateModel
	 */
	struct UBP_InGameMenu_KitSelect_C_UpdateModel_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8CF3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Sub_Slot;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeSelected
	 */
	struct UBP_InGameMenu_KitSelect_C_OnWeaponUpgradeSelected_Params
	{
	public:
		class UClass*                                              Upgrade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAlreadySelected;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseLeave
	 */
	struct UBP_InGameMenu_KitSelect_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotHover
	 */
	struct UBP_InGameMenu_KitSelect_C_OnItemSlotHover_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EItemSlot                                                  ItemSlot;                                                // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GO5P[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSubslot;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemHover
	 */
	struct UBP_InGameMenu_KitSelect_C_OnItemHover_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EItemSlot                                                  ItemSlot;                                                // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D2TE[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSubslot;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeHover
	 */
	struct UBP_InGameMenu_KitSelect_C_OnWeaponUpgradeHover_Params
	{
	public:
		class UClass*                                              UpgradeClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InSelected;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutUpgradeHover
	 */
	struct UBP_InGameMenu_KitSelect_C_OnLoadoutUpgradeHover_Params
	{
	public:
		class UClass*                                              UpgradeClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ParentItemClass;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EItemSlot                                                  ItemSlot;                                                // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2AAD[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSubslot;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutUpgradeUnequipHover
	 */
	struct UBP_InGameMenu_KitSelect_C_OnLoadoutUpgradeUnequipHover_Params
	{
	public:
		class UClass*                                              UpgradeClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotUnequipped
	 */
	struct UBP_InGameMenu_KitSelect_C_OnItemSlotUnequipped_Params
	{
	public:
		class UClass*                                              InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InSlot;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XKF9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InItemSubslot;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemUnequip
	 */
	struct UBP_InGameMenu_KitSelect_C_OnItemUnequip_Params
	{
	public:
		class UClass*                                              InItemClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InItemSlot;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HAA5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InItemSubslot;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnEmptyItemSlotHovered
	 */
	struct UBP_InGameMenu_KitSelect_C_OnEmptyItemSlotHovered_Params
	{
	public:
		EItemSlot                                                  ItemSlot;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P53F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisabled;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHovered;                                                // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__ConfirmKeyHintPC_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__ConfirmKeyHintPC_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPanelClosed
	 */
	struct UBP_InGameMenu_KitSelect_C_OnPanelClosed_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Destruct
	 */
	struct UBP_InGameMenu_KitSelect_C_Destruct_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_3_OnResupplyButtonPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_3_OnResupplyButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_SavedLoadoutButton_K2Node_ComponentBoundEvent_4_OnLoadoutClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__BP_SavedLoadoutButton_K2Node_ComponentBoundEvent_4_OnLoadoutClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutLoadoutIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_5_OnLoadoutClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_5_OnLoadoutClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutLoadoutIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_SaveNewLoadoutPresetButton_K2Node_ComponentBoundEvent_6_OnNewPresetClicked__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__BP_SaveNewLoadoutPresetButton_K2Node_ComponentBoundEvent_6_OnNewPresetClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature_Params
	{
	public:
		EConfirmableEvent                                          ButtonEvent;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_9_OnUnHover__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_9_OnUnHover__DelegateSignature_Params
	{
	public:
		EConfirmableEvent                                          ButtonEvent;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnEmptyItemSelected
	 */
	struct UBP_InGameMenu_KitSelect_C_OnEmptyItemSelected_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ConfirmedPressed
	 */
	struct UBP_InGameMenu_KitSelect_C_ConfirmedPressed_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InventoryItemLoaded_Event_1
	 */
	struct UBP_InGameMenu_KitSelect_C_InventoryItemLoaded_Event_1_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.load
	 */
	struct UBP_InGameMenu_KitSelect_C_load_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSelected
	 */
	struct UBP_InGameMenu_KitSelect_C_OnItemSelected_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubSlot;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotSelected
	 */
	struct UBP_InGameMenu_KitSelect_C_OnItemSlotSelected_Params
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OS23[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LoadoutCategoryIndex;                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Tick
	 */
	struct UBP_InGameMenu_KitSelect_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DoSaveDirtyProfile
	 */
	struct UBP_InGameMenu_KitSelect_C_DoSaveDirtyProfile_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPanelOpened
	 */
	struct UBP_InGameMenu_KitSelect_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutChanged
	 */
	struct UBP_InGameMenu_KitSelect_C_OnLoadoutChanged_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Construct
	 */
	struct UBP_InGameMenu_KitSelect_C_Construct_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeDisplayUnequipped
	 */
	struct UBP_InGameMenu_KitSelect_C_OnWeaponUpgradeDisplayUnequipped_Params
	{
	public:
		class UClass*                                              Upgrade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BackButton_1_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__BackButton_1_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnResupply
	 */
	struct UBP_InGameMenu_KitSelect_C_OnResupply_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SaveLoadoutButton_K2Node_ComponentBoundEvent_0_OnNewPresetHovered__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__SaveLoadoutButton_K2Node_ComponentBoundEvent_0_OnNewPresetHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_10_OnHover__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_10_OnHover__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SupportRemoval;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_11_OnDeployButtonPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_11_OnDeployButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PopulateUpgradesList
	 */
	struct UBP_InGameMenu_KitSelect_C_PopulateUpgradesList_Params
	{
	public:
		EWeaponUpgradeSlot                                         UpgradeSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_12_OnUpgradeListBgHover__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_12_OnUpgradeListBgHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_13_OnUpgradeListBgUnhover__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_13_OnUpgradeListBgUnhover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeSlotClicked
	 */
	struct UBP_InGameMenu_KitSelect_C_OnUpgradeSlotClicked_Params
	{
	public:
		EWeaponUpgradeSlot                                         UpgradeSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeAddHover
	 */
	struct UBP_InGameMenu_KitSelect_C_OnUpgradeAddHover_Params
	{
	public:
		EWeaponUpgradeSlot                                         UpgradeSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeAddUnhover
	 */
	struct UBP_InGameMenu_KitSelect_C_OnUpgradeAddUnhover_Params
	{
	public:
		EWeaponUpgradeSlot                                         UpgradeSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetUpgradesListVisibility
	 */
	struct UBP_InGameMenu_KitSelect_C_SetUpgradesListVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ShoppingListAnimationFinshed
	 */
	struct UBP_InGameMenu_KitSelect_C_ShoppingListAnimationFinshed_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_BtnBack_353_K2Node_ComponentBoundEvent_12_Click__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__BP_BtnBack_353_K2Node_ComponentBoundEvent_12_Click__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_13_Click__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_13_Click__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ShoppingListAnimFinished
	 */
	struct UBP_InGameMenu_KitSelect_C_ShoppingListAnimFinished_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ExecuteUbergraph_BP_InGameMenu_KitSelect
	 */
	struct UBP_InGameMenu_KitSelect_C_ExecuteUbergraph_BP_InGameMenu_KitSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XS88[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnClassBack__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnClassBack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeUpdated__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnUpgradeUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnShoppingListClose__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnShoppingListClose__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnShoppingListOpen__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnShoppingListOpen__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnRemoveButtonChange__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnRemoveButtonChange__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           RemoveKeyVisibility;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LAXL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                HintText;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotSelectedDelegate__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnItemSlotSelectedDelegate__DelegateSignature_Params
	{
	public:
		EItemSlot                                                  ItemSlot;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZZ5M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SubSlot;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSoldierCamera;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnCharacterRotated__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnCharacterRotated__DelegateSignature_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponRotated__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnWeaponRotated__DelegateSignature_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnSetSoldierCamera__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnSetSoldierCamera__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnSetWeaponCamera__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnSetWeaponCamera__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutConfirmed__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnLoadoutConfirmed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnSupplyInfoButtonPressed__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnSupplyInfoButtonPressed__DelegateSignature_Params
	{
	public:
		EConfirmableEvent                                          Event;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpdateWeight__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnUpdateWeight__DelegateSignature_Params
	{
	public:
		float                                                      WeightValueToShow;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EquippedWeight;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_InGameMenu_KitSelect_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
