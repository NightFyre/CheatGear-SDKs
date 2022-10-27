/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UPassive_Gunner_MatchedSet_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateAbilityState");
		
		UPassive_Gunner_MatchedSet_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetGearModifierPerInventorySlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInventorySlotData*                          SlotToUse                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NewModifyValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassive_Gunner_MatchedSet_C::SetGearModifierPerInventorySlot(class UInventorySlotData* SlotToUse, bool NewModifyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetGearModifierPerInventorySlot");
		
		UPassive_Gunner_MatchedSet_C_SetGearModifierPerInventorySlot_Params params {};
		params.SlotToUse = SlotToUse;
		params.NewModifyValue = NewModifyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateTotalGearModifierBonus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_MatchedSet_C::CalculateTotalGearModifierBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateTotalGearModifierBonus");
		
		UPassive_Gunner_MatchedSet_C_CalculateTotalGearModifierBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetIsNewRightHandWeapon?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ModifiedEquipment                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ItIs                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassive_Gunner_MatchedSet_C::GetIsNewRightHandWeapon(class AActor* ModifiedEquipment, bool* ItIs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetIsNewRightHandWeapon?");
		
		UPassive_Gunner_MatchedSet_C_GetIsNewRightHandWeapon_Params params {};
		params.ModifiedEquipment = ModifiedEquipment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItIs != nullptr)
			*ItIs = params.ItIs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CleanupGearBonus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_MatchedSet_C::CleanupGearBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CleanupGearBonus");
		
		UPassive_Gunner_MatchedSet_C_CleanupGearBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetRightHandManufacturer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_MatchedSet_C::SetRightHandManufacturer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetRightHandManufacturer");
		
		UPassive_Gunner_MatchedSet_C_SetRightHandManufacturer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetItemManufacturer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      GearToTest                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UManufacturerData*                           Manufacturer                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_MatchedSet_C::GetItemManufacturer(class AActor* GearToTest, class UManufacturerData** Manufacturer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetItemManufacturer");
		
		UPassive_Gunner_MatchedSet_C_GetItemManufacturer_Params params {};
		params.GearToTest = GearToTest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Manufacturer != nullptr)
			*Manufacturer = params.Manufacturer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.TryToModifyIndividualGearBonus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInventorySlotData*                          NewSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Add                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassive_Gunner_MatchedSet_C::TryToModifyIndividualGearBonus(class UInventorySlotData* NewSlot, bool Add)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.TryToModifyIndividualGearBonus");
		
		UPassive_Gunner_MatchedSet_C_TryToModifyIndividualGearBonus_Params params {};
		params.NewSlot = NewSlot;
		params.Add = Add;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_EquippedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EquippedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_MatchedSet_C::MatchedSet_EquippedItem(class AActor* EquippedActor, class UInventorySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_EquippedItem");
		
		UPassive_Gunner_MatchedSet_C_MatchedSet_EquippedItem_Params params {};
		params.EquippedActor = EquippedActor;
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_UnequippedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      UnequippedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_MatchedSet_C::MatchedSet_UnequippedItem(class AActor* UnequippedActor, class UInventorySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_UnequippedItem");
		
		UPassive_Gunner_MatchedSet_C_MatchedSet_UnequippedItem_Params params {};
		params.UnequippedActor = UnequippedActor;
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.DetermineTotalGearBonus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_MatchedSet_C::DetermineTotalGearBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.DetermineTotalGearBonus");
		
		UPassive_Gunner_MatchedSet_C_DetermineTotalGearBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.HandleNewEquippedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewModifiedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          NewSlotData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Add                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassive_Gunner_MatchedSet_C::HandleNewEquippedItem(class AActor* NewModifiedActor, class UInventorySlotData* NewSlotData, bool Add)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.HandleNewEquippedItem");
		
		UPassive_Gunner_MatchedSet_C_HandleNewEquippedItem_Params params {};
		params.NewModifiedActor = NewModifiedActor;
		params.NewSlotData = NewSlotData;
		params.Add = Add;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_MatchedSet_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnActivated");
		
		UPassive_Gunner_MatchedSet_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnResumed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_MatchedSet_C::OnResumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnResumed");
		
		UPassive_Gunner_MatchedSet_C_OnResumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_MatchedSet_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnPaused");
		
		UPassive_Gunner_MatchedSet_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_OnWeaponChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeapon*                                     LastWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_MatchedSet_C::MatchedSet_OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_OnWeaponChanged");
		
		UPassive_Gunner_MatchedSet_C_MatchedSet_OnWeaponChanged_Params params {};
		params.NewWeapon = NewWeapon;
		params.LastWeapon = LastWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnForcedRefresh
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_MatchedSet_C::OnForcedRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnForcedRefresh");
		
		UPassive_Gunner_MatchedSet_C_OnForcedRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.ExecuteUbergraph_Passive_Gunner_MatchedSet
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_MatchedSet_C::ExecuteUbergraph_Passive_Gunner_MatchedSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.ExecuteUbergraph_Passive_Gunner_MatchedSet");
		
		UPassive_Gunner_MatchedSet_C_ExecuteUbergraph_Passive_Gunner_MatchedSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Gunner_MatchedSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Gunner_MatchedSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C");
		return ptr;
	}

}


