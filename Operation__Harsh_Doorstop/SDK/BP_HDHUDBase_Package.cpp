/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.IsTextChatHistoryVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::IsTextChatHistoryVisible(bool* bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.IsTextChatHistoryVisible");
		
		ABP_HDHUDBase_C_IsTextChatHistoryVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bVisible != nullptr)
			*bVisible = params.bVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.SetTextChatHistoryVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::SetTextChatHistoryVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.SetTextChatHistoryVisibility");
		
		ABP_HDHUDBase_C_SetTextChatHistoryVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.SetMedicHealingEffectVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::SetMedicHealingEffectVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.SetMedicHealingEffectVisibility");
		
		ABP_HDHUDBase_C_SetMedicHealingEffectVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.SetAmmoResupplyEffectVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::SetAmmoResupplyEffectVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.SetAmmoResupplyEffectVisibility");
		
		ABP_HDHUDBase_C_SetAmmoResupplyEffectVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ResetPlayerStatusEffectsUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::ResetPlayerStatusEffectsUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ResetPlayerStatusEffectsUI");
		
		ABP_HDHUDBase_C_ResetPlayerStatusEffectsUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ClearOwningPawnReferences
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::ClearOwningPawnReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ClearOwningPawnReferences");
		
		ABP_HDHUDBase_C_ClearOwningPawnReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ForceUpdateOwningPawnReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::ForceUpdateOwningPawnReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ForceUpdateOwningPawnReferences");
		
		ABP_HDHUDBase_C_ForceUpdateOwningPawnReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ClearAllOwningPlayerReferences
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::ClearAllOwningPlayerReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ClearAllOwningPlayerReferences");
		
		ABP_HDHUDBase_C_ClearAllOwningPlayerReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ForceUpdateAllOwningPlayerReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::ForceUpdateAllOwningPlayerReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ForceUpdateAllOwningPlayerReferences");
		
		ABP_HDHUDBase_C_ForceUpdateAllOwningPlayerReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.CleanupDelegatesForHDPawn
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDPlayerCharacterBase_C*                 PlayerChar                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::CleanupDelegatesForHDPawn(class ABP_HDPlayerCharacterBase_C* PlayerChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.CleanupDelegatesForHDPawn");
		
		ABP_HDHUDBase_C_CleanupDelegatesForHDPawn_Params params {};
		params.PlayerChar = PlayerChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.InitOwningHDPawnDelegates
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::InitOwningHDPawnDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.InitOwningHDPawnDelegates");
		
		ABP_HDHUDBase_C_InitOwningHDPawnDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.CleanupOwningHDPCDelegates
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::CleanupOwningHDPCDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.CleanupOwningHDPCDelegates");
		
		ABP_HDHUDBase_C_CleanupOwningHDPCDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.InitOwningHDPCDelegates
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::InitOwningHDPCDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.InitOwningHDPCDelegates");
		
		ABP_HDHUDBase_C_InitOwningHDPCDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.UpdateHUDVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDestroyOnHide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::UpdateHUDVisibility(bool bDestroyOnHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.UpdateHUDVisibility");
		
		ABP_HDHUDBase_C_UpdateHUDVisibility_Params params {};
		params.bDestroyOnHide = bDestroyOnHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.HideHUDWidget
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDestroyWidgetOnHide                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::HideHUDWidget(bool bDestroyWidgetOnHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.HideHUDWidget");
		
		ABP_HDHUDBase_C_HideHUDWidget_Params params {};
		params.bDestroyWidgetOnHide = bDestroyWidgetOnHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ShowHUDWidget
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::ShowHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ShowHUDWidget");
		
		ABP_HDHUDBase_C_ShowHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectEquippedItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDKit*                                      CurrentLoadout                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDBaseWeapon*                               EquippedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::EquipmentSelectEquippedItem(class UHDKit* CurrentLoadout, class AHDBaseWeapon* EquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectEquippedItem");
		
		ABP_HDHUDBase_C_EquipmentSelectEquippedItem_Params params {};
		params.CurrentLoadout = CurrentLoadout;
		params.EquippedItem = EquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectItemBySlotNum
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOutNewSelection                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::EquipmentSelectItemBySlotNum(int32_t SlotNum, bool* bOutNewSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectItemBySlotNum");
		
		ABP_HDHUDBase_C_EquipmentSelectItemBySlotNum_Params params {};
		params.SlotNum = SlotNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutNewSelection != nullptr)
			*bOutNewSelection = params.bOutNewSelection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentGetSelectedItemSlotNum
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            OutSlotNum                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFoundItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::EquipmentGetSelectedItemSlotNum(int32_t* OutSlotNum, bool* bFoundItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentGetSelectedItemSlotNum");
		
		ABP_HDHUDBase_C_EquipmentGetSelectedItemSlotNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotNum != nullptr)
			*OutSlotNum = params.OutSlotNum;
		if (bFoundItem != nullptr)
			*bFoundItem = params.bFoundItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentGetSelectedItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AHDBaseWeapon*                               OutItemToEquip                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFoundItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::EquipmentGetSelectedItem(class AHDBaseWeapon** OutItemToEquip, bool* bFoundItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentGetSelectedItem");
		
		ABP_HDHUDBase_C_EquipmentGetSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItemToEquip != nullptr)
			*OutItemToEquip = params.OutItemToEquip;
		if (bFoundItem != nullptr)
			*bFoundItem = params.bFoundItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentAddItemsFromLoadout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDKit*                                      NewLoadout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDFInventoryComponent*                       PlayerInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBaseWeapon*                               EquippedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::EquipmentAddItemsFromLoadout(class UHDKit* NewLoadout, class UDFInventoryComponent* PlayerInventory, class ADFBaseWeapon* EquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentAddItemsFromLoadout");
		
		ABP_HDHUDBase_C_EquipmentAddItemsFromLoadout_Params params {};
		params.NewLoadout = NewLoadout;
		params.PlayerInventory = PlayerInventory;
		params.EquippedItem = EquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::EquipmentSelectItem(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectItem");
		
		ABP_HDHUDBase_C_EquipmentSelectItem_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectPrevItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::EquipmentSelectPrevItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectPrevItem");
		
		ABP_HDHUDBase_C_EquipmentSelectPrevItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectNextItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::EquipmentSelectNextItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.EquipmentSelectNextItem");
		
		ABP_HDHUDBase_C_EquipmentSelectNextItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ToggleWeaponStatusUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShown                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::ToggleWeaponStatusUI(bool bShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ToggleWeaponStatusUI");
		
		ABP_HDHUDBase_C_ToggleWeaponStatusUI_Params params {};
		params.bShown = bShown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ToggleEquipmentUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShown                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDHUDBase_C::ToggleEquipmentUI(bool bShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ToggleEquipmentUI");
		
		ABP_HDHUDBase_C_ToggleEquipmentUI_Params params {};
		params.bShown = bShown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveDrawHUD
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SizeX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SizeY                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::ReceiveDrawHUD(int32_t SizeX, int32_t SizeY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveDrawHUD");
		
		ABP_HDHUDBase_C_ReceiveDrawHUD_Params params {};
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDHUDBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveBeginPlay");
		
		ABP_HDHUDBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveEndPlay");
		
		ABP_HDHUDBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ReceiveTick");
		
		ABP_HDHUDBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPawnUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewOwningPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       PrevOwningPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::OwningPawnUpdated(class APawn* NewOwningPawn, class APawn* PrevOwningPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPawnUpdated");
		
		ABP_HDHUDBase_C_OwningPawnUpdated_Params params {};
		params.NewOwningPawn = NewOwningPawn;
		params.PrevOwningPawn = PrevOwningPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPawnEquipmentItemChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBaseItem*                                 NewEquippedItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBaseItem*                                 PrevEquippedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::OwningPawnEquipmentItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPawnEquipmentItemChanged");
		
		ABP_HDHUDBase_C_OwningPawnEquipmentItemChanged_Params params {};
		params.Character = Character;
		params.NewEquippedItem = NewEquippedItem;
		params.PrevEquippedItem = PrevEquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPlayerPossessPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::OwningPlayerPossessPawn(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPlayerPossessPawn");
		
		ABP_HDHUDBase_C_OwningPlayerPossessPawn_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPlayerUnpossessPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::OwningPlayerUnpossessPawn(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.OwningPlayerUnpossessPawn");
		
		ABP_HDHUDBase_C_OwningPlayerUnpossessPawn_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDHUDBase.BP_HDHUDBase_C.ExecuteUbergraph_BP_HDHUDBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDHUDBase_C::ExecuteUbergraph_BP_HDHUDBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDHUDBase.BP_HDHUDBase_C.ExecuteUbergraph_BP_HDHUDBase");
		
		ABP_HDHUDBase_C_ExecuteUbergraph_BP_HDHUDBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDHUDBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDHUDBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDHUDBase.BP_HDHUDBase_C");
		return ptr;
	}

}


