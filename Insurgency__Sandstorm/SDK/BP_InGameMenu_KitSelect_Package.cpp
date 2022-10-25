/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetIsShoppingListActive
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_InGameMenu_KitSelect_C::GetIsShoppingListActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetIsShoppingListActive");
		
		UBP_InGameMenu_KitSelect_C_GetIsShoppingListActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get Visibility Btn Back
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_KitSelect_C::Get_Visibility_Btn_Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get Visibility Btn Back");
		
		UBP_InGameMenu_KitSelect_C_Get_Visibility_Btn_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetRelativeToViewportCanvasScale
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector2D UBP_InGameMenu_KitSelect_C::GetRelativeToViewportCanvasScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetRelativeToViewportCanvasScale");
		
		UBP_InGameMenu_KitSelect_C_GetRelativeToViewportCanvasScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PerformDefaultUpgradeActions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::PerformDefaultUpgradeActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PerformDefaultUpgradeActions");
		
		UBP_InGameMenu_KitSelect_C_PerformDefaultUpgradeActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Outline Upgrade For Given Slot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWeaponUpgradeSlot                                 SlotToOutline                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::Outline_Upgrade_For_Given_Slot(EWeaponUpgradeSlot SlotToOutline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Outline Upgrade For Given Slot");
		
		UBP_InGameMenu_KitSelect_C_Outline_Upgrade_For_Given_Slot_Params params {};
		params.SlotToOutline = SlotToOutline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdatePreviewItemName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdatePreviewItemName(bool Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdatePreviewItemName");
		
		UBP_InGameMenu_KitSelect_C_UpdatePreviewItemName_Params params {};
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetLoadoutFocusWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBP_InGameMenu_KitSelect_C::GetLoadoutFocusWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetLoadoutFocusWidget");
		
		UBP_InGameMenu_KitSelect_C_GetLoadoutFocusWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetFirstEmptyUpgradeSlot
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     EmptySlot                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetFirstEmptyUpgradeSlot(class UWidget** EmptySlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetFirstEmptyUpgradeSlot");
		
		UBP_InGameMenu_KitSelect_C_GetFirstEmptyUpgradeSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EmptySlot != nullptr)
			*EmptySlot = params.EmptySlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetUpgradeLoadoutSlot
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetUpgradeLoadoutSlot(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetUpgradeLoadoutSlot");
		
		UBP_InGameMenu_KitSelect_C_GetUpgradeLoadoutSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetSupplayCostTotalForSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalCost                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetSupplayCostTotalForSlot(EItemSlot Slot, int32_t* TotalCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetSupplayCostTotalForSlot");
		
		UBP_InGameMenu_KitSelect_C_GetSupplayCostTotalForSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalCost != nullptr)
			*TotalCost = params.TotalCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetTotalSupplayCostForHoveredUpgrade
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalCost                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetTotalSupplayCostForHoveredUpgrade(EItemSlot Slot, class UClass* Upgrade, int32_t* TotalCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetTotalSupplayCostForHoveredUpgrade");
		
		UBP_InGameMenu_KitSelect_C_GetTotalSupplayCostForHoveredUpgrade_Params params {};
		params.Slot = Slot;
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalCost != nullptr)
			*TotalCost = params.TotalCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetSupplayCostTotal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            TotalCost                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetSupplayCostTotal(int32_t* TotalCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetSupplayCostTotal");
		
		UBP_InGameMenu_KitSelect_C_GetSupplayCostTotal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalCost != nullptr)
			*TotalCost = params.TotalCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ClearItemUpgradesSupplayCost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ItemUpgrade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::ClearItemUpgradesSupplayCost(EItemSlot ItemSlot, class UClass* ItemUpgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ClearItemUpgradesSupplayCost");
		
		UBP_InGameMenu_KitSelect_C_ClearItemUpgradesSupplayCost_Params params {};
		params.ItemSlot = ItemSlot;
		params.ItemUpgrade = ItemUpgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ClearItemSupplayCost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::ClearItemSupplayCost(EItemSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ClearItemSupplayCost");
		
		UBP_InGameMenu_KitSelect_C_ClearItemSupplayCost_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CacheItemUpgradesSupplayCost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ItemUpgrade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::CacheItemUpgradesSupplayCost(EItemSlot ItemSlot, class UClass* ItemUpgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CacheItemUpgradesSupplayCost");
		
		UBP_InGameMenu_KitSelect_C_CacheItemUpgradesSupplayCost_Params params {};
		params.ItemSlot = ItemSlot;
		params.ItemUpgrade = ItemUpgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CacheItemSupplayCost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::CacheItemSupplayCost(class UClass* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CacheItemSupplayCost");
		
		UBP_InGameMenu_KitSelect_C_CacheItemSupplayCost_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetUpgradeWidgetByTypeForFocus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetUpgradeWidgetByTypeForFocus(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetUpgradeWidgetByTypeForFocus");
		
		UBP_InGameMenu_KitSelect_C_GetUpgradeWidgetByTypeForFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.FindUpgradeSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUINavigation                                      NavDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_KitSelect_UpgradeListItem_C*             UpgradeSlot                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUpgradeSlotFounded                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::FindUpgradeSlot(class UWidget* Widget, EUINavigation NavDirection, class UBP_KitSelect_UpgradeListItem_C** UpgradeSlot, bool* IsUpgradeSlotFounded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.FindUpgradeSlot");
		
		UBP_InGameMenu_KitSelect_C_FindUpgradeSlot_Params params {};
		params.Widget = Widget;
		params.NavDirection = NavDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpgradeSlot != nullptr)
			*UpgradeSlot = params.UpgradeSlot;
		if (IsUpgradeSlotFounded != nullptr)
			*IsUpgradeSlotFounded = params.IsUpgradeSlotFounded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Is Nav Coordinate Hits Border
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FIntPoint                                   NavCoordinate                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsHitBorder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::Is_Nav_Coordinate_Hits_Border(const struct FIntPoint& NavCoordinate, bool* bIsHitBorder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Is Nav Coordinate Hits Border");
		
		UBP_InGameMenu_KitSelect_C_Is_Nav_Coordinate_Hits_Border_Params params {};
		params.NavCoordinate = NavCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsHitBorder != nullptr)
			*bIsHitBorder = params.bIsHitBorder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateUpgradingSlots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateUpgradingSlots(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateUpgradingSlots");
		
		UBP_InGameMenu_KitSelect_C_UpdateUpgradingSlots_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Populate Slot Upgrading List
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::Populate_Slot_Upgrading_List(EItemSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Populate Slot Upgrading List");
		
		UBP_InGameMenu_KitSelect_C_Populate_Slot_Upgrading_List_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.IsUpgradingListActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::IsUpgradingListActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.IsUpgradingListActive");
		
		UBP_InGameMenu_KitSelect_C_IsUpgradingListActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeUpgradeSlot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_KitSelect_UpgradeListItem_C*             In_Upgrade_List_Item                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::InitializeUpgradeSlot(class UBP_KitSelect_UpgradeListItem_C* In_Upgrade_List_Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeUpgradeSlot");
		
		UBP_InGameMenu_KitSelect_C_InitializeUpgradeSlot_Params params {};
		params.In_Upgrade_List_Item = In_Upgrade_List_Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CloseUpgradingList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::CloseUpgradingList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CloseUpgradingList");
		
		UBP_InGameMenu_KitSelect_C_CloseUpgradingList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GenerateUserDefinedLoadoutName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        InLoadoutName                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        OutGeneratedName                                           (Parm, OutParm)
	 */
	void UBP_InGameMenu_KitSelect_C::GenerateUserDefinedLoadoutName(class FText* InLoadoutName, class FText* OutGeneratedName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GenerateUserDefinedLoadoutName");
		
		UBP_InGameMenu_KitSelect_C_GenerateUserDefinedLoadoutName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InLoadoutName != nullptr)
			*InLoadoutName = params.InLoadoutName;
		if (OutGeneratedName != nullptr)
			*OutGeneratedName = params.OutGeneratedName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.MakeNameFitRequirements
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        InLoadoutName                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutNeedRename                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        OutLoadoutName                                             (Parm, OutParm)
	 */
	void UBP_InGameMenu_KitSelect_C::MakeNameFitRequirements(class FText* InLoadoutName, bool* OutNeedRename, class FText* OutLoadoutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.MakeNameFitRequirements");
		
		UBP_InGameMenu_KitSelect_C_MakeNameFitRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InLoadoutName != nullptr)
			*InLoadoutName = params.InLoadoutName;
		if (OutNeedRename != nullptr)
			*OutNeedRename = params.OutNeedRename;
		if (OutLoadoutName != nullptr)
			*OutLoadoutName = params.OutLoadoutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CheckAndFixLoadoutName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InLoadoutIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InLoadoutName                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        OutLoadoutName                                             (Parm, OutParm)
	 */
	void UBP_InGameMenu_KitSelect_C::CheckAndFixLoadoutName(int32_t InLoadoutIndex, class FText* InLoadoutName, class FText* OutLoadoutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CheckAndFixLoadoutName");
		
		UBP_InGameMenu_KitSelect_C_CheckAndFixLoadoutName_Params params {};
		params.InLoadoutIndex = InLoadoutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InLoadoutName != nullptr)
			*InLoadoutName = params.InLoadoutName;
		if (OutLoadoutName != nullptr)
			*OutLoadoutName = params.OutLoadoutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RecallLoadoutRenamePrompt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::RecallLoadoutRenamePrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RecallLoadoutRenamePrompt");
		
		UBP_InGameMenu_KitSelect_C_RecallLoadoutRenamePrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DeleteLoadoutFromProfile
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LoadoutIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::DeleteLoadoutFromProfile(int32_t LoadoutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DeleteLoadoutFromProfile");
		
		UBP_InGameMenu_KitSelect_C_DeleteLoadoutFromProfile_Params params {};
		params.LoadoutIndex = LoadoutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.On Overwrite Loadout when Renaming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::On_Overwrite_Loadout_when_Renaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.On Overwrite Loadout when Renaming");
		
		UBP_InGameMenu_KitSelect_C_On_Overwrite_Loadout_when_Renaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ConditionallyRenameLoadout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InNewName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_KitSelect_C::ConditionallyRenameLoadout(const class FText& InNewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ConditionallyRenameLoadout");
		
		UBP_InGameMenu_KitSelect_C_ConditionallyRenameLoadout_Params params {};
		params.InNewName = InNewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetHoveredSavedPresetWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBP_SavedLoadoutButton_C*                    AsBP_Saved_Loadout_Button                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetHoveredSavedPresetWidget(class UBP_SavedLoadoutButton_C** AsBP_Saved_Loadout_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetHoveredSavedPresetWidget");
		
		UBP_InGameMenu_KitSelect_C_GetHoveredSavedPresetWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsBP_Saved_Loadout_Button != nullptr)
			*AsBP_Saved_Loadout_Button = params.AsBP_Saved_Loadout_Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get_BoxRemoveKey_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_KitSelect_C::Get_BoxRemoveKey_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get_BoxRemoveKey_Visibility");
		
		UBP_InGameMenu_KitSelect_C_Get_BoxRemoveKey_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HandleBackInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::HandleBackInput(bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HandleBackInput");
		
		UBP_InGameMenu_KitSelect_C_HandleBackInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handled != nullptr)
			*Handled = params.Handled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_InGameMenu_KitSelect_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnKeyUp");
		
		UBP_InGameMenu_KitSelect_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSelectButtonText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateSelectButtonText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSelectButtonText");
		
		UBP_InGameMenu_KitSelect_C_UpdateSelectButtonText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnAnalogValueChanged
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_InGameMenu_KitSelect_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnAnalogValueChanged");
		
		UBP_InGameMenu_KitSelect_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PendingSaveDirtyProfile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsPending                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::PendingSaveDirtyProfile(bool* bIsPending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PendingSaveDirtyProfile");
		
		UBP_InGameMenu_KitSelect_C_PendingSaveDirtyProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsPending != nullptr)
			*bIsPending = params.bIsPending;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSaveDirtyTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateSaveDirtyTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSaveDirtyTimer");
		
		UBP_InGameMenu_KitSelect_C_UpdateSaveDirtyTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetProfileIsDirty
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bProfileIsDirty                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::GetProfileIsDirty(bool* bProfileIsDirty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetProfileIsDirty");
		
		UBP_InGameMenu_KitSelect_C_GetProfileIsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bProfileIsDirty != nullptr)
			*bProfileIsDirty = params.bProfileIsDirty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RestorePresetHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::RestorePresetHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RestorePresetHover");
		
		UBP_InGameMenu_KitSelect_C_RestorePresetHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveLoadoutWithDefaultName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::SaveLoadoutWithDefaultName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveLoadoutWithDefaultName");
		
		UBP_InGameMenu_KitSelect_C_SaveLoadoutWithDefaultName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BP_InGameMenu_KitSelect_HoverSaveLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SupportRemoval                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::BP_InGameMenu_KitSelect_HoverSaveLoadout(int32_t Index, bool SupportRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BP_InGameMenu_KitSelect_HoverSaveLoadout");
		
		UBP_InGameMenu_KitSelect_C_BP_InGameMenu_KitSelect_HoverSaveLoadout_Params params {};
		params.Index = Index;
		params.SupportRemoval = SupportRemoval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BP_InGameMenu_KitSelect_UnHoverSaveLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BP_InGameMenu_KitSelect_UnHoverSaveLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BP_InGameMenu_KitSelect_UnHoverSaveLoadout");
		
		UBP_InGameMenu_KitSelect_C_BP_InGameMenu_KitSelect_UnHoverSaveLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DoDetermineFireModeImages
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      InFirearmClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		TArray<class UTexture2D*>                          OutFireModeImages                                          (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::DoDetermineFireModeImages(class UClass* InFirearmClass, TArray<class UTexture2D*>* OutFireModeImages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DoDetermineFireModeImages");
		
		UBP_InGameMenu_KitSelect_C_DoDetermineFireModeImages_Params params {};
		params.InFirearmClass = InFirearmClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFireModeImages != nullptr)
			*OutFireModeImages = params.OutFireModeImages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DoHasActiveHoverComparison
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_InGameMenu_KitSelect_C::DoHasActiveHoverComparison()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DoHasActiveHoverComparison");
		
		UBP_InGameMenu_KitSelect_C_DoHasActiveHoverComparison_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateAddUpgradeWidgetData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InLoadoutItemIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InParentLoadoutCategoryIndex                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateAddUpgradeWidgetData(int32_t InLoadoutItemIndex, EItemSlot InItemSlot, int32_t InParentLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateAddUpgradeWidgetData");
		
		UBP_InGameMenu_KitSelect_C_UpdateAddUpgradeWidgetData_Params params {};
		params.InLoadoutItemIndex = InLoadoutItemIndex;
		params.InItemSlot = InItemSlot;
		params.InParentLoadoutCategoryIndex = InParentLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSlotRowEmptyWidgetData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InLoadoutListIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerInventoryComponent*                   InPlayerInventory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInDisabledSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UClass*>                              AllowedItems                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            InLoadoutCategoryIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateSlotRowEmptyWidgetData(int32_t InLoadoutListIndex, class UPlayerInventoryComponent* InPlayerInventory, EItemSlot InItemSlot, int32_t InSubSlot, bool bInDisabledSlot, TArray<class UClass*>* AllowedItems, int32_t InLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSlotRowEmptyWidgetData");
		
		UBP_InGameMenu_KitSelect_C_UpdateSlotRowEmptyWidgetData_Params params {};
		params.InLoadoutListIndex = InLoadoutListIndex;
		params.InPlayerInventory = InPlayerInventory;
		params.InItemSlot = InItemSlot;
		params.InSubSlot = InSubSlot;
		params.bInDisabledSlot = bInDisabledSlot;
		params.InLoadoutCategoryIndex = InLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowedItems != nullptr)
			*AllowedItems = params.AllowedItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateUpgradeDisplayWidgetData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InLoadoutListIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerInventoryComponent*                   InPlayerInventory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InUpgradeClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InParentItemSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InParentItemSubSlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InParentLoadoutCategoryIndex                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateUpgradeDisplayWidgetData(int32_t InLoadoutListIndex, class UPlayerInventoryComponent* InPlayerInventory, class UClass* InItemClass, class UClass* InUpgradeClass, EItemSlot InParentItemSlot, int32_t InParentItemSubSlot, int32_t InParentLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateUpgradeDisplayWidgetData");
		
		UBP_InGameMenu_KitSelect_C_UpdateUpgradeDisplayWidgetData_Params params {};
		params.InLoadoutListIndex = InLoadoutListIndex;
		params.InPlayerInventory = InPlayerInventory;
		params.InItemClass = InItemClass;
		params.InUpgradeClass = InUpgradeClass;
		params.InParentItemSlot = InParentItemSlot;
		params.InParentItemSubSlot = InParentItemSubSlot;
		params.InParentLoadoutCategoryIndex = InParentLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSlotItemButtonWidgetData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InLoadoutListIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerInventoryComponent*                   InPlayerInventory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLoadoutCategoryIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateSlotItemButtonWidgetData(int32_t InLoadoutListIndex, class UPlayerInventoryComponent* InPlayerInventory, class UClass* InItemClass, EItemSlot InItemSlot, int32_t InSubSlot, int32_t InLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSlotItemButtonWidgetData");
		
		UBP_InGameMenu_KitSelect_C_UpdateSlotItemButtonWidgetData_Params params {};
		params.InLoadoutListIndex = InLoadoutListIndex;
		params.InPlayerInventory = InPlayerInventory;
		params.InItemClass = InItemClass;
		params.InItemSlot = InItemSlot;
		params.InSubSlot = InSubSlot;
		params.InLoadoutCategoryIndex = InLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeWeaponListItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_KitSelect_ItemButton_C*                  InWeaponListItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::InitializeWeaponListItem(class UBP_KitSelect_ItemButton_C* InWeaponListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeWeaponListItem");
		
		UBP_InGameMenu_KitSelect_C_InitializeWeaponListItem_Params params {};
		params.InWeaponListItem = InWeaponListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeLoadoutListItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_KitSelect_LoadoutListItem_C*             InLoadoutListItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::InitializeLoadoutListItem(class UBP_KitSelect_LoadoutListItem_C* InLoadoutListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeLoadoutListItem");
		
		UBP_InGameMenu_KitSelect_C_InitializeLoadoutListItem_Params params {};
		params.InLoadoutListItem = InLoadoutListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeUpgradeListItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_KitSelect_UpgradeListItem_C*             InUpgradeListItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::InitializeUpgradeListItem(class UBP_KitSelect_UpgradeListItem_C* InUpgradeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InitializeUpgradeListItem");
		
		UBP_InGameMenu_KitSelect_C_InitializeUpgradeListItem_Params params {};
		params.InUpgradeListItem = InUpgradeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Update Upgrade Button Widget Data
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InUpgradeListIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerInventoryComponent*                   InPlayerInventory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItemBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItemUpgrade                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InParentSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InLastShoppingItemSlot                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLastShoppingItemSubSlot                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::Update_Upgrade_Button_Widget_Data(int32_t InUpgradeListIndex, class UPlayerInventoryComponent* InPlayerInventory, class UClass* InItemBase, class UClass* InItemUpgrade, EItemSlot InParentSlot, EItemSlot InLastShoppingItemSlot, int32_t InLastShoppingItemSubSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Update Upgrade Button Widget Data");
		
		UBP_InGameMenu_KitSelect_C_Update_Upgrade_Button_Widget_Data_Params params {};
		params.InUpgradeListIndex = InUpgradeListIndex;
		params.InPlayerInventory = InPlayerInventory;
		params.InItemBase = InItemBase;
		params.InItemUpgrade = InItemUpgrade;
		params.InParentSlot = InParentSlot;
		params.InLastShoppingItemSlot = InLastShoppingItemSlot;
		params.InLastShoppingItemSubSlot = InLastShoppingItemSubSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateUpgradeHeaderWidgetData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InUpgradeListIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateUpgradeHeaderWidgetData(class FText* InText, int32_t InUpgradeListIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateUpgradeHeaderWidgetData");
		
		UBP_InGameMenu_KitSelect_C_UpdateUpgradeHeaderWidgetData_Params params {};
		params.InUpgradeListIndex = InUpgradeListIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InText != nullptr)
			*InText = params.InText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateItemWidgetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLoadoutCategoryIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateItemWidgetData(class UClass* InItemClass, int32_t InSubSlot, int32_t InItemIndex, int32_t InLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateItemWidgetData");
		
		UBP_InGameMenu_KitSelect_C_UpdateItemWidgetData_Params params {};
		params.InItemClass = InItemClass;
		params.InSubSlot = InSubSlot;
		params.InItemIndex = InItemIndex;
		params.InLoadoutCategoryIndex = InLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PreCreateWidgets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::PreCreateWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PreCreateWidgets");
		
		UBP_InGameMenu_KitSelect_C_PreCreateWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PopulateNewItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::PopulateNewItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PopulateNewItems");
		
		UBP_InGameMenu_KitSelect_C_PopulateNewItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ForceSelectSavedLoadout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LoadoutIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::ForceSelectSavedLoadout(int32_t LoadoutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ForceSelectSavedLoadout");
		
		UBP_InGameMenu_KitSelect_C_ForceSelectSavedLoadout_Params params {};
		params.LoadoutIndex = LoadoutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.LoadSavedActivePreset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::LoadSavedActivePreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.LoadSavedActivePreset");
		
		UBP_InGameMenu_KitSelect_C_LoadSavedActivePreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveActivePreset
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PresetIndex                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::SaveActivePreset(int32_t PresetIndex, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveActivePreset");
		
		UBP_InGameMenu_KitSelect_C_SaveActivePreset_Params params {};
		params.PresetIndex = PresetIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CancelPresetModification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::CancelPresetModification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CancelPresetModification");
		
		UBP_InGameMenu_KitSelect_C_CancelPresetModification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.EmptyPreset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::EmptyPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.EmptyPreset");
		
		UBP_InGameMenu_KitSelect_C_EmptyPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Reset Preset to Default
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::Reset_Preset_to_Default()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Reset Preset to Default");
		
		UBP_InGameMenu_KitSelect_C_Reset_Preset_to_Default_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnRenameClick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OutLoadoutIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSavedLoadout                               Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_KitSelect_C::OnRenameClick(int32_t OutLoadoutIndex, const struct FSavedLoadout& Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnRenameClick");
		
		UBP_InGameMenu_KitSelect_C_OnRenameClick_Params params {};
		params.OutLoadoutIndex = OutLoadoutIndex;
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.LoadoutRenamePrompt
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        StartText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_InGameMenu_KitSelect_C::LoadoutRenamePrompt(class FText* StartText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.LoadoutRenamePrompt");
		
		UBP_InGameMenu_KitSelect_C_LoadoutRenamePrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartText != nullptr)
			*StartText = params.StartText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RenameLoadout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InNewName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_KitSelect_C::RenameLoadout(const class FText& InNewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RenameLoadout");
		
		UBP_InGameMenu_KitSelect_C_RenameLoadout_Params params {};
		params.InNewName = InNewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnEmptyLoadoutPressed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnEmptyLoadoutPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnEmptyLoadoutPressed");
		
		UBP_InGameMenu_KitSelect_C_OnEmptyLoadoutPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnResetToDefaultPressed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnResetToDefaultPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnResetToDefaultPressed");
		
		UBP_InGameMenu_KitSelect_C_OnResetToDefaultPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ClearActiveLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::ClearActiveLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ClearActiveLoadout");
		
		UBP_InGameMenu_KitSelect_C_ClearActiveLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AddUpgradeToEquippedUpgrades
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::AddUpgradeToEquippedUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AddUpgradeToEquippedUpgrades");
		
		UBP_InGameMenu_KitSelect_C_AddUpgradeToEquippedUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.IsNewUpgrade
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::IsNewUpgrade(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.IsNewUpgrade");
		
		UBP_InGameMenu_KitSelect_C_IsNewUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AnyNewItems
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              AllowedItems                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::AnyNewItems(TArray<class UClass*>* AllowedItems, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AnyNewItems");
		
		UBP_InGameMenu_KitSelect_C_AnyNewItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowedItems != nullptr)
			*AllowedItems = params.AllowedItems;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AddItemToEquippedItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::AddItemToEquippedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AddItemToEquippedItems");
		
		UBP_InGameMenu_KitSelect_C_AddItemToEquippedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.IsNewItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::IsNewItem(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.IsNewItem");
		
		UBP_InGameMenu_KitSelect_C_IsNewItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdatePurchasableUpgrades
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UScrollBox*                                  SlotUpgradesList                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdatePurchasableUpgrades(class UScrollBox* SlotUpgradesList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdatePurchasableUpgrades");
		
		UBP_InGameMenu_KitSelect_C_UpdatePurchasableUpgrades_Params params {};
		params.SlotUpgradesList = SlotUpgradesList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get Current Hovered Ammo Type
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      BaseAmmoType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      OriginalAmmoType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      UpgradeAmmoType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::Get_Current_Hovered_Ammo_Type(class UClass* BaseAmmoType, class UClass* OriginalAmmoType, class UClass** UpgradeAmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get Current Hovered Ammo Type");
		
		UBP_InGameMenu_KitSelect_C_Get_Current_Hovered_Ammo_Type_Params params {};
		params.BaseAmmoType = BaseAmmoType;
		params.OriginalAmmoType = OriginalAmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpgradeAmmoType != nullptr)
			*UpgradeAmmoType = params.UpgradeAmmoType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HideAllHints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::HideAllHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HideAllHints");
		
		UBP_InGameMenu_KitSelect_C_HideAllHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CacheHints
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::CacheHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CacheHints");
		
		UBP_InGameMenu_KitSelect_C_CacheHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ToggleHints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::ToggleHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ToggleHints");
		
		UBP_InGameMenu_KitSelect_C_ToggleHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnAddUpgradePressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ParentLoadoutCategoryIndex                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnAddUpgradePressed(EItemSlot Slot, int32_t ParentLoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnAddUpgradePressed");
		
		UBP_InGameMenu_KitSelect_C_OnAddUpgradePressed_Params params {};
		params.Slot = Slot;
		params.ParentLoadoutCategoryIndex = ParentLoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ResetRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::ResetRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ResetRotation");
		
		UBP_InGameMenu_KitSelect_C_ResetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetSoldierCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::SetSoldierCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetSoldierCamera");
		
		UBP_InGameMenu_KitSelect_C_SetSoldierCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetWeaponCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::SetWeaponCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetWeaponCamera");
		
		UBP_InGameMenu_KitSelect_C_SetWeaponCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineAmmoWeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Carrier_Extra_Ammo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Magazine_Capacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Default_Magazine_Amount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AmmoContainerWeight                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RoundWeight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AmmoIsMagCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AmmoWeight                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::DetermineAmmoWeight(int32_t Carrier_Extra_Ammo, int32_t Magazine_Capacity, int32_t Default_Magazine_Amount, float AmmoContainerWeight, float RoundWeight, bool AmmoIsMagCount, float* AmmoWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineAmmoWeight");
		
		UBP_InGameMenu_KitSelect_C_DetermineAmmoWeight_Params params {};
		params.Carrier_Extra_Ammo = Carrier_Extra_Ammo;
		params.Magazine_Capacity = Magazine_Capacity;
		params.Default_Magazine_Amount = Default_Magazine_Amount;
		params.AmmoContainerWeight = AmmoContainerWeight;
		params.RoundWeight = RoundWeight;
		params.AmmoIsMagCount = AmmoIsMagCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoWeight != nullptr)
			*AmmoWeight = params.AmmoWeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnTeamChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATeamInfo*                                   TeamInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnTeamChanged(unsigned char TeamId, class ATeamInfo* TeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnTeamChanged");
		
		UBP_InGameMenu_KitSelect_C_OnTeamChanged_Params params {};
		params.TeamId = TeamId;
		params.TeamInfo = TeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPlayerClassChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlayerClass*                                PlayerClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnPlayerClassChanged(class UPlayerClass* PlayerClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPlayerClassChanged");
		
		UBP_InGameMenu_KitSelect_C_OnPlayerClassChanged_Params params {};
		params.PlayerClass = PlayerClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RemoveSavedLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LoadoutIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSavedLoadout                               Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_KitSelect_C::RemoveSavedLoadout(int32_t LoadoutIndex, const struct FSavedLoadout& Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RemoveSavedLoadout");
		
		UBP_InGameMenu_KitSelect_C_RemoveSavedLoadout_Params params {};
		params.LoadoutIndex = LoadoutIndex;
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetRespawnDelayForGameMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              RespawnDelay                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetRespawnDelayForGameMode(float* RespawnDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetRespawnDelayForGameMode");
		
		UBP_InGameMenu_KitSelect_C_GetRespawnDelayForGameMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RespawnDelay != nullptr)
			*RespawnDelay = params.RespawnDelay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateOuterStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateOuterStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateOuterStatus");
		
		UBP_InGameMenu_KitSelect_C_UpdateOuterStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ToggleResupplyButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::ToggleResupplyButtonVisibility(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ToggleResupplyButtonVisibility");
		
		UBP_InGameMenu_KitSelect_C_ToggleResupplyButtonVisibility_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ApplyUpgradeHandlingModifiers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InUpgrade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRecoilAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAdditive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bVertical                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutRecoilAmount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::ApplyUpgradeHandlingModifiers(class UClass* InUpgrade, float InRecoilAmount, bool bAdditive, bool bVertical, float* OutRecoilAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ApplyUpgradeHandlingModifiers");
		
		UBP_InGameMenu_KitSelect_C_ApplyUpgradeHandlingModifiers_Params params {};
		params.InUpgrade = InUpgrade;
		params.InRecoilAmount = InRecoilAmount;
		params.bAdditive = bAdditive;
		params.bVertical = bVertical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRecoilAmount != nullptr)
			*OutRecoilAmount = params.OutRecoilAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmRecoilHandling
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      FirearmClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVertical                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RecoilHandlingOutput                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RecoilHandlingText                                         (Parm, OutParm)
	 * 		float                                              RecoilHandlingHoverOutput                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::DetermineFirearmRecoilHandling(class UClass* FirearmClass, bool bVertical, float* RecoilHandlingOutput, class FText* RecoilHandlingText, float* RecoilHandlingHoverOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmRecoilHandling");
		
		UBP_InGameMenu_KitSelect_C_DetermineFirearmRecoilHandling_Params params {};
		params.FirearmClass = FirearmClass;
		params.bVertical = bVertical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RecoilHandlingOutput != nullptr)
			*RecoilHandlingOutput = params.RecoilHandlingOutput;
		if (RecoilHandlingText != nullptr)
			*RecoilHandlingText = params.RecoilHandlingText;
		if (RecoilHandlingHoverOutput != nullptr)
			*RecoilHandlingHoverOutput = params.RecoilHandlingHoverOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetItemDescriptiveTextWithActionIconsVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_KitSelect_C::GetItemDescriptiveTextWithActionIconsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetItemDescriptiveTextWithActionIconsVisibility");
		
		UBP_InGameMenu_KitSelect_C_GetItemDescriptiveTextWithActionIconsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateEquipableRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateEquipableRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateEquipableRotation");
		
		UBP_InGameMenu_KitSelect_C_UpdateEquipableRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AddEquipableRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::AddEquipableRotation(float Pitch, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.AddEquipableRotation");
		
		UBP_InGameMenu_KitSelect_C_AddEquipableRotation_Params params {};
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetItemDescriptiveTextVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_KitSelect_C::GetItemDescriptiveTextVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetItemDescriptiveTextVisibility");
		
		UBP_InGameMenu_KitSelect_C_GetItemDescriptiveTextVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetUpgradeInfoVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_KitSelect_C::GetUpgradeInfoVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetUpgradeInfoVisibility");
		
		UBP_InGameMenu_KitSelect_C_GetUpgradeInfoVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HasLoadoutNamed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            LoadoutIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::HasLoadoutNamed(class FText* Name, bool* Out, int32_t* LoadoutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HasLoadoutNamed");
		
		UBP_InGameMenu_KitSelect_C_HasLoadoutNamed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		if (Out != nullptr)
			*Out = params.Out;
		if (LoadoutIndex != nullptr)
			*LoadoutIndex = params.LoadoutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GenerateDefaultLoadoutName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        GeneratedName                                              (Parm, OutParm)
	 */
	void UBP_InGameMenu_KitSelect_C::GenerateDefaultLoadoutName(class FText* GeneratedName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GenerateDefaultLoadoutName");
		
		UBP_InGameMenu_KitSelect_C_GenerateDefaultLoadoutName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GeneratedName != nullptr)
			*GeneratedName = params.GeneratedName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PresentLoadoutSavingPrompt
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        StartText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_InGameMenu_KitSelect_C::PresentLoadoutSavingPrompt(class FText* StartText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PresentLoadoutSavingPrompt");
		
		UBP_InGameMenu_KitSelect_C_PresentLoadoutSavingPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartText != nullptr)
			*StartText = params.StartText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RecallLoadoutSavingPrompt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::RecallLoadoutSavingPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RecallLoadoutSavingPrompt");
		
		UBP_InGameMenu_KitSelect_C_RecallLoadoutSavingPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnOverwritePendingLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnOverwritePendingLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnOverwritePendingLoadout");
		
		UBP_InGameMenu_KitSelect_C_OnOverwritePendingLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HideActiveDialog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::HideActiveDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HideActiveDialog");
		
		UBP_InGameMenu_KitSelect_C_HideActiveDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ShowGenericDialog
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EDialogType                                        DialogType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_GenericDialog_C*                         Dialog                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::ShowGenericDialog(class FText* Title, class FText* Text, EDialogType DialogType, class UBP_GenericDialog_C** Dialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ShowGenericDialog");
		
		UBP_InGameMenu_KitSelect_C_ShowGenericDialog_Params params {};
		params.DialogType = DialogType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Title != nullptr)
			*Title = params.Title;
		if (Text != nullptr)
			*Text = params.Text;
		if (Dialog != nullptr)
			*Dialog = params.Dialog;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ConditionallySaveCurrentLoadout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        LoadoutName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_KitSelect_C::ConditionallySaveCurrentLoadout(const class FText& LoadoutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ConditionallySaveCurrentLoadout");
		
		UBP_InGameMenu_KitSelect_C_ConditionallySaveCurrentLoadout_Params params {};
		params.LoadoutName = LoadoutName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SelectSavedLoadout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LoadoutIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::SelectSavedLoadout(int32_t LoadoutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SelectSavedLoadout");
		
		UBP_InGameMenu_KitSelect_C_SelectSavedLoadout_Params params {};
		params.LoadoutIndex = LoadoutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveDirtyProfile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::SaveDirtyProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveDirtyProfile");
		
		UBP_InGameMenu_KitSelect_C_SaveDirtyProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveCurrentLoadout
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bImmediately                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::SaveCurrentLoadout(class FText* Name, bool bImmediately, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SaveCurrentLoadout");
		
		UBP_InGameMenu_KitSelect_C_SaveCurrentLoadout_Params params {};
		params.bImmediately = bImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RefreshSavedLoadouts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::RefreshSavedLoadouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RefreshSavedLoadouts");
		
		UBP_InGameMenu_KitSelect_C_RefreshSavedLoadouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HideActiveSavePresetWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::HideActiveSavePresetWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HideActiveSavePresetWidget");
		
		UBP_InGameMenu_KitSelect_C_HideActiveSavePresetWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CheckForFallbackItemDescription
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::CheckForFallbackItemDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CheckForFallbackItemDescription");
		
		UBP_InGameMenu_KitSelect_C_CheckForFallbackItemDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateHoveredWeaponUpgradeClass
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      WeaponUpgradeClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateHoveredWeaponUpgradeClass(class UClass* WeaponUpgradeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateHoveredWeaponUpgradeClass");
		
		UBP_InGameMenu_KitSelect_C_UpdateHoveredWeaponUpgradeClass_Params params {};
		params.WeaponUpgradeClass = WeaponUpgradeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateHoveredItemClass
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateHoveredItemClass(class UClass* ItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateHoveredItemClass");
		
		UBP_InGameMenu_KitSelect_C_UpdateHoveredItemClass_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetDisabledSlotHintText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::SetDisabledSlotHintText(EItemSlot ItemSlot, int32_t SubSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetDisabledSlotHintText");
		
		UBP_InGameMenu_KitSelect_C_SetDisabledSlotHintText_Params params {};
		params.ItemSlot = ItemSlot;
		params.SubSlot = SubSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSupplyRemaining
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShopping                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateSupplyRemaining(bool bShopping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateSupplyRemaining");
		
		UBP_InGameMenu_KitSelect_C_UpdateSupplyRemaining_Params params {};
		params.bShopping = bShopping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetConfirmButtonText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShopping                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::SetConfirmButtonText(bool bShopping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetConfirmButtonText");
		
		UBP_InGameMenu_KitSelect_C_SetConfirmButtonText_Params params {};
		params.bShopping = bShopping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetRemoveKeyHintText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      UpgradeClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::SetRemoveKeyHintText(class UClass* ItemClass, class UClass* UpgradeClass, EItemSlot Slot, int32_t SubSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetRemoveKeyHintText");
		
		UBP_InGameMenu_KitSelect_C_SetRemoveKeyHintText_Params params {};
		params.ItemClass = ItemClass;
		params.UpgradeClass = UpgradeClass;
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetConfirmButtonVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_KitSelect_C::GetConfirmButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetConfirmButtonVisibility");
		
		UBP_InGameMenu_KitSelect_C_GetConfirmButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HasConfirmedLoadout
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bConfirmed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::HasConfirmedLoadout(bool* bConfirmed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.HasConfirmedLoadout");
		
		UBP_InGameMenu_KitSelect_C_HasConfirmedLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bConfirmed != nullptr)
			*bConfirmed = params.bConfirmed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetConfirmKeyHintText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShopping                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::SetConfirmKeyHintText(bool bShopping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetConfirmKeyHintText");
		
		UBP_InGameMenu_KitSelect_C_SetConfirmKeyHintText_Params params {};
		params.bShopping = bShopping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BindControllerDelegates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BindControllerDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BindControllerDelegates");
		
		UBP_InGameMenu_KitSelect_C_BindControllerDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetIsUsingGamepad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EeInputIconType                                    InputIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::SetIsUsingGamepad(bool bUsingGamepad, EeInputIconType InputIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetIsUsingGamepad");
		
		UBP_InGameMenu_KitSelect_C_SetIsUsingGamepad_Params params {};
		params.bUsingGamepad = bUsingGamepad;
		params.InputIcon = InputIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateLastSelectedListItemIndexes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Sub_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateLastSelectedListItemIndexes(EItemSlot Slot, int32_t Sub_Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateLastSelectedListItemIndexes");
		
		UBP_InGameMenu_KitSelect_C_UpdateLastSelectedListItemIndexes_Params params {};
		params.Slot = Slot;
		params.Sub_Slot = Sub_Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RefreshWeight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::RefreshWeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RefreshWeight");
		
		UBP_InGameMenu_KitSelect_C_RefreshWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetFireRateFireModeModifier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      FirearmClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InFireRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutFireRate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetFireRateFireModeModifier(class UClass* FirearmClass, float InFireRate, float* OutFireRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetFireRateFireModeModifier");
		
		UBP_InGameMenu_KitSelect_C_GetFireRateFireModeModifier_Params params {};
		params.FirearmClass = FirearmClass;
		params.InFireRate = InFireRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFireRate != nullptr)
			*OutFireRate = params.OutFireRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Apply Upgrade Velocity Modifiers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InUpgrade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InMuzzleVelocity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAdditive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutMuzzleVelocity                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::Apply_Upgrade_Velocity_Modifiers(class UClass* InUpgrade, float InMuzzleVelocity, bool bAdditive, float* OutMuzzleVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Apply Upgrade Velocity Modifiers");
		
		UBP_InGameMenu_KitSelect_C_Apply_Upgrade_Velocity_Modifiers_Params params {};
		params.InUpgrade = InUpgrade;
		params.InMuzzleVelocity = InMuzzleVelocity;
		params.bAdditive = bAdditive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMuzzleVelocity != nullptr)
			*OutMuzzleVelocity = params.OutMuzzleVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Has Active Hover Comparison
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               HasHoverComparison                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::Has_Active_Hover_Comparison(bool* HasHoverComparison)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Has Active Hover Comparison");
		
		UBP_InGameMenu_KitSelect_C_Has_Active_Hover_Comparison_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasHoverComparison != nullptr)
			*HasHoverComparison = params.HasHoverComparison;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetHoveredItemName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_InGameMenu_KitSelect_C::GetHoveredItemName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetHoveredItemName");
		
		UBP_InGameMenu_KitSelect_C_GetHoveredItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetItemInfoVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_KitSelect_C::GetItemInfoVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetItemInfoVisibility");
		
		UBP_InGameMenu_KitSelect_C_GetItemInfoVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetCurrentItemName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_InGameMenu_KitSelect_C::GetCurrentItemName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetCurrentItemName");
		
		UBP_InGameMenu_KitSelect_C_GetCurrentItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Update Firearm Attributes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemFirearmClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AmmoType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      OriginalAmmoType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::Update_Firearm_Attributes(class UClass* ItemFirearmClass, class UClass* AmmoType, class UClass* OriginalAmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Update Firearm Attributes");
		
		UBP_InGameMenu_KitSelect_C_Update_Firearm_Attributes_Params params {};
		params.ItemFirearmClass = ItemFirearmClass;
		params.AmmoType = AmmoType;
		params.OriginalAmmoType = OriginalAmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetAttributeContainerVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_KitSelect_C::GetAttributeContainerVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetAttributeContainerVisibility");
		
		UBP_InGameMenu_KitSelect_C_GetAttributeContainerVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPaint
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::OnPaint(struct FPaintContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPaint");
		
		UBP_InGameMenu_KitSelect_C_OnPaint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_InGameMenu_KitSelect_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseButtonUp");
		
		UBP_InGameMenu_KitSelect_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_InGameMenu_KitSelect_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseButtonDown");
		
		UBP_InGameMenu_KitSelect_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseMove
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBP_InGameMenu_KitSelect_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseMove");
		
		UBP_InGameMenu_KitSelect_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFireRate
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FireRateOutput                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        FireRateText                                               (Parm, OutParm)
	 * 		float                                              FireRateHoverOutput                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::DetermineFireRate(class UClass* ItemClass, float* FireRateOutput, class FText* FireRateText, float* FireRateHoverOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFireRate");
		
		UBP_InGameMenu_KitSelect_C_DetermineFireRate_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FireRateOutput != nullptr)
			*FireRateOutput = params.FireRateOutput;
		if (FireRateText != nullptr)
			*FireRateText = params.FireRateText;
		if (FireRateHoverOutput != nullptr)
			*FireRateHoverOutput = params.FireRateHoverOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Determine Fire Mode Images
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UTexture2D*>                          FireModeImages                                             (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::Determine_Fire_Mode_Images(class UClass* ItemClass, TArray<class UTexture2D*>* FireModeImages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Determine Fire Mode Images");
		
		UBP_InGameMenu_KitSelect_C_Determine_Fire_Mode_Images_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FireModeImages != nullptr)
			*FireModeImages = params.FireModeImages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineMagSizeText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        MagSizeText                                                (Parm, OutParm)
	 * 		class FText                                        MagSizeDifferenceText                                      (Parm, OutParm)
	 * 		float                                              DifferencePercentage                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::DetermineMagSizeText(class UClass* ItemClass, class FText* MagSizeText, class FText* MagSizeDifferenceText, float* DifferencePercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineMagSizeText");
		
		UBP_InGameMenu_KitSelect_C_DetermineMagSizeText_Params params {};
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MagSizeText != nullptr)
			*MagSizeText = params.MagSizeText;
		if (MagSizeDifferenceText != nullptr)
			*MagSizeDifferenceText = params.MagSizeDifferenceText;
		if (DifferencePercentage != nullptr)
			*DifferencePercentage = params.DifferencePercentage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmCaliber
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      FirearmClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AmmoTypeClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      OriginalAmmoTypeClass                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CaliberOutput                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CaliberText                                                (Parm, OutParm)
	 * 		float                                              CaliberHoverOutput                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::DetermineFirearmCaliber(class UClass* FirearmClass, class UClass* AmmoTypeClass, class UClass* OriginalAmmoTypeClass, float* CaliberOutput, class FText* CaliberText, float* CaliberHoverOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmCaliber");
		
		UBP_InGameMenu_KitSelect_C_DetermineFirearmCaliber_Params params {};
		params.FirearmClass = FirearmClass;
		params.AmmoTypeClass = AmmoTypeClass;
		params.OriginalAmmoTypeClass = OriginalAmmoTypeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CaliberOutput != nullptr)
			*CaliberOutput = params.CaliberOutput;
		if (CaliberText != nullptr)
			*CaliberText = params.CaliberText;
		if (CaliberHoverOutput != nullptr)
			*CaliberHoverOutput = params.CaliberHoverOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmPenetration
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      FirearmClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AmmoTypeClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      OriginalAmmoTypeClass                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PenetrationOutput                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PenetrationText                                            (Parm, OutParm)
	 * 		float                                              PenetrationHoverOutput                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::DetermineFirearmPenetration(class UClass* FirearmClass, class UClass* AmmoTypeClass, class UClass* OriginalAmmoTypeClass, float* PenetrationOutput, class FText* PenetrationText, float* PenetrationHoverOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmPenetration");
		
		UBP_InGameMenu_KitSelect_C_DetermineFirearmPenetration_Params params {};
		params.FirearmClass = FirearmClass;
		params.AmmoTypeClass = AmmoTypeClass;
		params.OriginalAmmoTypeClass = OriginalAmmoTypeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PenetrationOutput != nullptr)
			*PenetrationOutput = params.PenetrationOutput;
		if (PenetrationText != nullptr)
			*PenetrationText = params.PenetrationText;
		if (PenetrationHoverOutput != nullptr)
			*PenetrationHoverOutput = params.PenetrationHoverOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Determine Firearm Muzzle Velocity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      FirearmClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AmmoTypeClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MuzzleVelocityOutput                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        MuzzleVelocityText                                         (Parm, OutParm)
	 * 		float                                              MuzzleVelocityHoverOutput                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::Determine_Firearm_Muzzle_Velocity(class UClass* FirearmClass, class UClass* AmmoTypeClass, float* MuzzleVelocityOutput, class FText* MuzzleVelocityText, float* MuzzleVelocityHoverOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Determine Firearm Muzzle Velocity");
		
		UBP_InGameMenu_KitSelect_C_Determine_Firearm_Muzzle_Velocity_Params params {};
		params.FirearmClass = FirearmClass;
		params.AmmoTypeClass = AmmoTypeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MuzzleVelocityOutput != nullptr)
			*MuzzleVelocityOutput = params.MuzzleVelocityOutput;
		if (MuzzleVelocityText != nullptr)
			*MuzzleVelocityText = params.MuzzleVelocityText;
		if (MuzzleVelocityHoverOutput != nullptr)
			*MuzzleVelocityHoverOutput = params.MuzzleVelocityHoverOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmEffectiveRange
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      FirearmClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AmmoTypeClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      OriignalAmmoTypeClass                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RangeOutput                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RangeText                                                  (Parm, OutParm)
	 * 		float                                              RangeHoverOutput                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::DetermineFirearmEffectiveRange(class UClass* FirearmClass, class UClass* AmmoTypeClass, class UClass* OriignalAmmoTypeClass, float* RangeOutput, class FText* RangeText, float* RangeHoverOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DetermineFirearmEffectiveRange");
		
		UBP_InGameMenu_KitSelect_C_DetermineFirearmEffectiveRange_Params params {};
		params.FirearmClass = FirearmClass;
		params.AmmoTypeClass = AmmoTypeClass;
		params.OriignalAmmoTypeClass = OriignalAmmoTypeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RangeOutput != nullptr)
			*RangeOutput = params.RangeOutput;
		if (RangeText != nullptr)
			*RangeText = params.RangeText;
		if (RangeHoverOutput != nullptr)
			*RangeHoverOutput = params.RangeHoverOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateItemAttributes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateItemAttributes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateItemAttributes");
		
		UBP_InGameMenu_KitSelect_C_UpdateItemAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetClassIconImage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_InGameMenu_KitSelect_C::GetClassIconImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetClassIconImage");
		
		UBP_InGameMenu_KitSelect_C_GetClassIconImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetupClassInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::SetupClassInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetupClassInfo");
		
		UBP_InGameMenu_KitSelect_C_SetupClassInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_InGameMenu_KitSelect_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnCustomNavigation");
		
		UBP_InGameMenu_KitSelect_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_InGameMenu_KitSelect_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnKeyDown");
		
		UBP_InGameMenu_KitSelect_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_InGameMenu_KitSelect_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnFocusReceived");
		
		UBP_InGameMenu_KitSelect_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetWidgetToFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bShoppingList                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNewCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bGetFirstInList                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetWidgetToFocus(bool bShoppingList, bool bNewCategory, bool bGetFirstInList, class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetWidgetToFocus");
		
		UBP_InGameMenu_KitSelect_C_GetWidgetToFocus_Params params {};
		params.bShoppingList = bShoppingList;
		params.bNewCategory = bNewCategory;
		params.bGetFirstInList = bGetFirstInList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RestoreKeyboardListFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                Panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::RestoreKeyboardListFocus(class UPanelWidget* Panel, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RestoreKeyboardListFocus");
		
		UBP_InGameMenu_KitSelect_C_RestoreKeyboardListFocus_Params params {};
		params.Panel = Panel;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetFocusedListIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPanelWidget*                                Panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::GetFocusedListIndex(class UPanelWidget* Panel, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.GetFocusedListIndex");
		
		UBP_InGameMenu_KitSelect_C_GetFocusedListIndex_Params params {};
		params.Panel = Panel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OpenShoppingList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OpenShoppingList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OpenShoppingList");
		
		UBP_InGameMenu_KitSelect_C_OpenShoppingList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CloseShoppingList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInitialOpen                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::CloseShoppingList(bool bInitialOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CloseShoppingList");
		
		UBP_InGameMenu_KitSelect_C_CloseShoppingList_Params params {};
		params.bInitialOpen = bInitialOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RefreshShoppingListIfActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::RefreshShoppingListIfActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.RefreshShoppingListIfActive");
		
		UBP_InGameMenu_KitSelect_C_RefreshShoppingListIfActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Is Shopping List Active
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::Is_Shopping_List_Active(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Is Shopping List Active");
		
		UBP_InGameMenu_KitSelect_C_Is_Shopping_List_Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Populate Slot Shopping List
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LoadoutCategoryIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::Populate_Slot_Shopping_List(EItemSlot Slot, int32_t SubSlot, int32_t LoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Populate Slot Shopping List");
		
		UBP_InGameMenu_KitSelect_C_Populate_Slot_Shopping_List_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		params.LoadoutCategoryIndex = LoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CreateSlotRowEmpty
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisabledSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::CreateSlotRowEmpty(EItemSlot Slot, int32_t SubSlot, bool bDisabledSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.CreateSlotRowEmpty");
		
		UBP_InGameMenu_KitSelect_C_CreateSlotRowEmpty_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		params.bDisabledSlot = bDisabledSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BindDelegates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BindDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BindDelegates");
		
		UBP_InGameMenu_KitSelect_C_BindDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get_ConfirmButton_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_InGameMenu_KitSelect_C::Get_ConfirmButton_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Get_ConfirmButton_bIsEnabled_1");
		
		UBP_InGameMenu_KitSelect_C_Get_ConfirmButton_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PopulateLoadout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::PopulateLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PopulateLoadout");
		
		UBP_InGameMenu_KitSelect_C_PopulateLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeUnequipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          ParentSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnWeaponUpgradeUnequipped(class UClass* Upgrade, EItemSlot ParentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeUnequipped");
		
		UBP_InGameMenu_KitSelect_C_OnWeaponUpgradeUnequipped_Params params {};
		params.Upgrade = Upgrade;
		params.ParentSlot = ParentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutUpgradeClick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          ParentSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ParentLoadoutCategoryIndex                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      UpgradeClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnLoadoutUpgradeClick(EItemSlot ParentSlot, int32_t ParentLoadoutCategoryIndex, class UClass* UpgradeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutUpgradeClick");
		
		UBP_InGameMenu_KitSelect_C_OnLoadoutUpgradeClick_Params params {};
		params.ParentSlot = ParentSlot;
		params.ParentLoadoutCategoryIndex = ParentLoadoutCategoryIndex;
		params.UpgradeClass = UpgradeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetModelFromInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Sub_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force_Refresh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::SetModelFromInventory(EItemSlot Slot, int32_t Sub_Slot, bool Force_Refresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetModelFromInventory");
		
		UBP_InGameMenu_KitSelect_C_SetModelFromInventory_Params params {};
		params.Slot = Slot;
		params.Sub_Slot = Sub_Slot;
		params.Force_Refresh = Force_Refresh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateModel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Sub_Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::UpdateModel(EItemSlot Slot, int32_t Sub_Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.UpdateModel");
		
		UBP_InGameMenu_KitSelect_C_UpdateModel_Params params {};
		params.Slot = Slot;
		params.Sub_Slot = Sub_Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAlreadySelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::OnWeaponUpgradeSelected(class UClass* Upgrade, bool bAlreadySelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeSelected");
		
		UBP_InGameMenu_KitSelect_C_OnWeaponUpgradeSelected_Params params {};
		params.Upgrade = Upgrade;
		params.bAlreadySelected = bAlreadySelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_InGameMenu_KitSelect_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnMouseLeave");
		
		UBP_InGameMenu_KitSelect_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoverValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSubslot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnItemSlotHover(class UClass* ItemClass, bool HoverValue, EItemSlot ItemSlot, int32_t ItemSubslot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotHover");
		
		UBP_InGameMenu_KitSelect_C_OnItemSlotHover_Params params {};
		params.ItemClass = ItemClass;
		params.HoverValue = HoverValue;
		params.ItemSlot = ItemSlot;
		params.ItemSubslot = ItemSubslot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoverValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSubslot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnItemHover(class UClass* ItemClass, bool HoverValue, EItemSlot ItemSlot, int32_t ItemSubslot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemHover");
		
		UBP_InGameMenu_KitSelect_C_OnItemHover_Params params {};
		params.ItemClass = ItemClass;
		params.HoverValue = HoverValue;
		params.ItemSlot = ItemSlot;
		params.ItemSubslot = ItemSubslot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      UpgradeClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoverValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::OnWeaponUpgradeHover(class UClass* UpgradeClass, bool HoverValue, bool InSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeHover");
		
		UBP_InGameMenu_KitSelect_C_OnWeaponUpgradeHover_Params params {};
		params.UpgradeClass = UpgradeClass;
		params.HoverValue = HoverValue;
		params.InSelected = InSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutUpgradeHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      UpgradeClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ParentItemClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoverValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSubslot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnLoadoutUpgradeHover(class UClass* UpgradeClass, class UClass* ParentItemClass, bool HoverValue, EItemSlot ItemSlot, int32_t ItemSubslot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutUpgradeHover");
		
		UBP_InGameMenu_KitSelect_C_OnLoadoutUpgradeHover_Params params {};
		params.UpgradeClass = UpgradeClass;
		params.ParentItemClass = ParentItemClass;
		params.HoverValue = HoverValue;
		params.ItemSlot = ItemSlot;
		params.ItemSubslot = ItemSubslot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutUpgradeUnequipHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      UpgradeClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoverValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::OnLoadoutUpgradeUnequipHover(class UClass* UpgradeClass, bool HoverValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutUpgradeUnequipHover");
		
		UBP_InGameMenu_KitSelect_C_OnLoadoutUpgradeUnequipHover_Params params {};
		params.UpgradeClass = UpgradeClass;
		params.HoverValue = HoverValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotUnequipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InItemSubslot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnItemSlotUnequipped(class UClass* InItem, EItemSlot InSlot, int32_t InItemSubslot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotUnequipped");
		
		UBP_InGameMenu_KitSelect_C_OnItemSlotUnequipped_Params params {};
		params.InItem = InItem;
		params.InSlot = InSlot;
		params.InItemSubslot = InItemSubslot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemUnequip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          InItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InItemSubslot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnItemUnequip(class UClass* InItemClass, EItemSlot InItemSlot, int32_t InItemSubslot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemUnequip");
		
		UBP_InGameMenu_KitSelect_C_OnItemUnequip_Params params {};
		params.InItemClass = InItemClass;
		params.InItemSlot = InItemSlot;
		params.InItemSubslot = InItemSubslot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnEmptyItemSlotHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDisabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::OnEmptyItemSlotHovered(EItemSlot ItemSlot, int32_t SubSlot, bool bDisabled, bool bHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnEmptyItemSlotHovered");
		
		UBP_InGameMenu_KitSelect_C_OnEmptyItemSlotHovered_Params params {};
		params.ItemSlot = ItemSlot;
		params.SubSlot = SubSlot;
		params.bDisabled = bDisabled;
		params.bHovered = bHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__ConfirmKeyHintPC_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__ConfirmKeyHintPC_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__ConfirmKeyHintPC_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__ConfirmKeyHintPC_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPanelClosed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnPanelClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPanelClosed");
		
		UBP_InGameMenu_KitSelect_C_OnPanelClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Destruct");
		
		UBP_InGameMenu_KitSelect_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_3_OnResupplyButtonPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_3_OnResupplyButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_3_OnResupplyButtonPressed__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_3_OnResupplyButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_SavedLoadoutButton_K2Node_ComponentBoundEvent_4_OnLoadoutClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OutLoadoutIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__BP_SavedLoadoutButton_K2Node_ComponentBoundEvent_4_OnLoadoutClicked__DelegateSignature(int32_t OutLoadoutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_SavedLoadoutButton_K2Node_ComponentBoundEvent_4_OnLoadoutClicked__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__BP_SavedLoadoutButton_K2Node_ComponentBoundEvent_4_OnLoadoutClicked__DelegateSignature_Params params {};
		params.OutLoadoutIndex = OutLoadoutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_5_OnLoadoutClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OutLoadoutIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_5_OnLoadoutClicked__DelegateSignature(int32_t OutLoadoutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_5_OnLoadoutClicked__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_5_OnLoadoutClicked__DelegateSignature_Params params {};
		params.OutLoadoutIndex = OutLoadoutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_SaveNewLoadoutPresetButton_K2Node_ComponentBoundEvent_6_OnNewPresetClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__BP_SaveNewLoadoutPresetButton_K2Node_ComponentBoundEvent_6_OnNewPresetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_SaveNewLoadoutPresetButton_K2Node_ComponentBoundEvent_6_OnNewPresetClicked__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__BP_SaveNewLoadoutPresetButton_K2Node_ComponentBoundEvent_6_OnNewPresetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EConfirmableEvent                                  ButtonEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature(EConfirmableEvent ButtonEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature_Params params {};
		params.ButtonEvent = ButtonEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_9_OnUnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EConfirmableEvent                                  ButtonEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_9_OnUnHover__DelegateSignature(EConfirmableEvent ButtonEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_9_OnUnHover__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__SupplyInfoButton_K2Node_ComponentBoundEvent_9_OnUnHover__DelegateSignature_Params params {};
		params.ButtonEvent = ButtonEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnEmptyItemSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnEmptyItemSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnEmptyItemSelected");
		
		UBP_InGameMenu_KitSelect_C_OnEmptyItemSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ConfirmedPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::ConfirmedPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ConfirmedPressed");
		
		UBP_InGameMenu_KitSelect_C_ConfirmedPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InventoryItemLoaded_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::InventoryItemLoaded_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.InventoryItemLoaded_Event_1");
		
		UBP_InGameMenu_KitSelect_C_InventoryItemLoaded_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.load
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::load()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.load");
		
		UBP_InGameMenu_KitSelect_C_load_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnItemSelected(class UClass* Class, int32_t SubSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSelected");
		
		UBP_InGameMenu_KitSelect_C_OnItemSelected_Params params {};
		params.Class = Class;
		params.SubSlot = SubSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LoadoutCategoryIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnItemSlotSelected(EItemSlot Slot, int32_t SubSlot, int32_t LoadoutCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotSelected");
		
		UBP_InGameMenu_KitSelect_C_OnItemSlotSelected_Params params {};
		params.Slot = Slot;
		params.SubSlot = SubSlot;
		params.LoadoutCategoryIndex = LoadoutCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Tick");
		
		UBP_InGameMenu_KitSelect_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DoSaveDirtyProfile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::DoSaveDirtyProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.DoSaveDirtyProfile");
		
		UBP_InGameMenu_KitSelect_C_DoSaveDirtyProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnPanelOpened");
		
		UBP_InGameMenu_KitSelect_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnLoadoutChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutChanged");
		
		UBP_InGameMenu_KitSelect_C_OnLoadoutChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.Construct");
		
		UBP_InGameMenu_KitSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeDisplayUnequipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnWeaponUpgradeDisplayUnequipped(class UClass* Upgrade, EItemSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponUpgradeDisplayUnequipped");
		
		UBP_InGameMenu_KitSelect_C_OnWeaponUpgradeDisplayUnequipped_Params params {};
		params.Upgrade = Upgrade;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BackButton_1_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__BackButton_1_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BackButton_1_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__BackButton_1_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnResupply
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnResupply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnResupply");
		
		UBP_InGameMenu_KitSelect_C_OnResupply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SaveLoadoutButton_K2Node_ComponentBoundEvent_0_OnNewPresetHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__SaveLoadoutButton_K2Node_ComponentBoundEvent_0_OnNewPresetHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SaveLoadoutButton_K2Node_ComponentBoundEvent_0_OnNewPresetHovered__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__SaveLoadoutButton_K2Node_ComponentBoundEvent_0_OnNewPresetHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_10_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SupportRemoval                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_10_OnHover__DelegateSignature(int32_t NewParam, bool SupportRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_10_OnHover__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__DefaultPresetButton_K2Node_ComponentBoundEvent_10_OnHover__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		params.SupportRemoval = SupportRemoval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_11_OnDeployButtonPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_11_OnDeployButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_11_OnDeployButtonPressed__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__SupplyRemainingIndication_K2Node_ComponentBoundEvent_11_OnDeployButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PopulateUpgradesList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWeaponUpgradeSlot                                 UpgradeSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::PopulateUpgradesList(EWeaponUpgradeSlot UpgradeSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.PopulateUpgradesList");
		
		UBP_InGameMenu_KitSelect_C_PopulateUpgradesList_Params params {};
		params.UpgradeSlot = UpgradeSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_12_OnUpgradeListBgHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_12_OnUpgradeListBgHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_12_OnUpgradeListBgHover__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_12_OnUpgradeListBgHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_13_OnUpgradeListBgUnhover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_13_OnUpgradeListBgUnhover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_13_OnUpgradeListBgUnhover__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__BP_KitSelect_ItemsBackground_K2Node_ComponentBoundEvent_13_OnUpgradeListBgUnhover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeSlotClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWeaponUpgradeSlot                                 UpgradeSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnUpgradeSlotClicked(EWeaponUpgradeSlot UpgradeSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeSlotClicked");
		
		UBP_InGameMenu_KitSelect_C_OnUpgradeSlotClicked_Params params {};
		params.UpgradeSlot = UpgradeSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeAddHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWeaponUpgradeSlot                                 UpgradeSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnUpgradeAddHover(EWeaponUpgradeSlot UpgradeSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeAddHover");
		
		UBP_InGameMenu_KitSelect_C_OnUpgradeAddHover_Params params {};
		params.UpgradeSlot = UpgradeSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeAddUnhover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWeaponUpgradeSlot                                 UpgradeSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnUpgradeAddUnhover(EWeaponUpgradeSlot UpgradeSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeAddUnhover");
		
		UBP_InGameMenu_KitSelect_C_OnUpgradeAddUnhover_Params params {};
		params.UpgradeSlot = UpgradeSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetUpgradesListVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::SetUpgradesListVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.SetUpgradesListVisibility");
		
		UBP_InGameMenu_KitSelect_C_SetUpgradesListVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ShoppingListAnimationFinshed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::ShoppingListAnimationFinshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ShoppingListAnimationFinshed");
		
		UBP_InGameMenu_KitSelect_C_ShoppingListAnimationFinshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_BtnBack_353_K2Node_ComponentBoundEvent_12_Click__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__BP_BtnBack_353_K2Node_ComponentBoundEvent_12_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_BtnBack_353_K2Node_ComponentBoundEvent_12_Click__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__BP_BtnBack_353_K2Node_ComponentBoundEvent_12_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_13_Click__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_13_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_13_Click__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_BndEvt__BP_BtnBack_K2Node_ComponentBoundEvent_13_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ShoppingListAnimFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::ShoppingListAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ShoppingListAnimFinished");
		
		UBP_InGameMenu_KitSelect_C_ShoppingListAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ExecuteUbergraph_BP_InGameMenu_KitSelect
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::ExecuteUbergraph_BP_InGameMenu_KitSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.ExecuteUbergraph_BP_InGameMenu_KitSelect");
		
		UBP_InGameMenu_KitSelect_C_ExecuteUbergraph_BP_InGameMenu_KitSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnClassBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnClassBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnClassBack__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnClassBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnUpgradeUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpgradeUpdated__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnUpgradeUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnShoppingListClose__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnShoppingListClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnShoppingListClose__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnShoppingListClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnShoppingListOpen__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnShoppingListOpen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnShoppingListOpen__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnShoppingListOpen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnRemoveButtonChange__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   RemoveKeyVisibility                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        HintText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_KitSelect_C::OnRemoveButtonChange__DelegateSignature(ESlateVisibility RemoveKeyVisibility, const class FText& HintText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnRemoveButtonChange__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnRemoveButtonChange__DelegateSignature_Params params {};
		params.RemoveKeyVisibility = RemoveKeyVisibility;
		params.HintText = HintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotSelectedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EItemSlot                                          ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSoldierCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::OnItemSlotSelectedDelegate__DelegateSignature(EItemSlot ItemSlot, int32_t SubSlot, bool bSoldierCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnItemSlotSelectedDelegate__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnItemSlotSelectedDelegate__DelegateSignature_Params params {};
		params.ItemSlot = ItemSlot;
		params.SubSlot = SubSlot;
		params.bSoldierCamera = bSoldierCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnCharacterRotated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::OnCharacterRotated__DelegateSignature(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnCharacterRotated__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnCharacterRotated__DelegateSignature_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponRotated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_KitSelect_C::OnWeaponRotated__DelegateSignature(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnWeaponRotated__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnWeaponRotated__DelegateSignature_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnSetSoldierCamera__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnSetSoldierCamera__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnSetSoldierCamera__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnSetSoldierCamera__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnSetWeaponCamera__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnSetWeaponCamera__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnSetWeaponCamera__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnSetWeaponCamera__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutConfirmed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnLoadoutConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnLoadoutConfirmed__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnLoadoutConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnSupplyInfoButtonPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EConfirmableEvent                                  Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnSupplyInfoButtonPressed__DelegateSignature(EConfirmableEvent Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnSupplyInfoButtonPressed__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnSupplyInfoButtonPressed__DelegateSignature_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpdateWeight__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              WeightValueToShow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EquippedWeight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_KitSelect_C::OnUpdateWeight__DelegateSignature(float WeightValueToShow, float EquippedWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnUpdateWeight__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnUpdateWeight__DelegateSignature_Params params {};
		params.WeightValueToShow = WeightValueToShow;
		params.EquippedWeight = EquippedWeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_KitSelect_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C.OnNavigateBack__DelegateSignature");
		
		UBP_InGameMenu_KitSelect_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InGameMenu_KitSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InGameMenu_KitSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_InGameMenu_KitSelect.BP_InGameMenu_KitSelect_C");
		return ptr;
	}

}


