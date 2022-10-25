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
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.GetNumberOfBonuses
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::GetNumberOfBonuses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.GetNumberOfBonuses");
		
		UPassive_Gunner_DLCSkill_5_C_GetNumberOfBonuses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.CleanupVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::CleanupVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.CleanupVariables");
		
		UPassive_Gunner_DLCSkill_5_C_CleanupVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.GetItemDamageType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InvSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_DLCSkill_5_C::GetItemDamageType(class AActor* InvSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.GetItemDamageType");
		
		UPassive_Gunner_DLCSkill_5_C_GetItemDamageType_Params params {};
		params.InvSlot = InvSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.OnActivated");
		
		UPassive_Gunner_DLCSkill_5_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.OnResumed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::OnResumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.OnResumed");
		
		UPassive_Gunner_DLCSkill_5_C_OnResumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DetermineTotalMatchingElements
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::DetermineTotalMatchingElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DetermineTotalMatchingElements");
		
		UPassive_Gunner_DLCSkill_5_C_DetermineTotalMatchingElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.ApplyBonuses
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::ApplyBonuses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.ApplyBonuses");
		
		UPassive_Gunner_DLCSkill_5_C_ApplyBonuses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.RemoveBonuses
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::RemoveBonuses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.RemoveBonuses");
		
		UPassive_Gunner_DLCSkill_5_C_RemoveBonuses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.OpenGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::OpenGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.OpenGate");
		
		UPassive_Gunner_DLCSkill_5_C_OpenGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_OnWeaponChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeapon*                                     LastWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_DLCSkill_5_C::DLCSkill5_OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_OnWeaponChanged");
		
		UPassive_Gunner_DLCSkill_5_C_DLCSkill5_OnWeaponChanged_Params params {};
		params.NewWeapon = NewWeapon;
		params.LastWeapon = LastWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.AddBonusStack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::AddBonusStack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.AddBonusStack");
		
		UPassive_Gunner_DLCSkill_5_C_AddBonusStack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_UpdateMatchingElements
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::DLCSkill5_UpdateMatchingElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_UpdateMatchingElements");
		
		UPassive_Gunner_DLCSkill_5_C_DLCSkill5_UpdateMatchingElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLC5_OnGrenadeSlotChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EquippedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_DLCSkill_5_C::DLC5_OnGrenadeSlotChanged(class AActor* EquippedActor, class UInventorySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLC5_OnGrenadeSlotChanged");
		
		UPassive_Gunner_DLCSkill_5_C_DLC5_OnGrenadeSlotChanged_Params params {};
		params.EquippedActor = EquippedActor;
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_IronBearExitedAndPlayerReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      IronBear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_DLCSkill_5_C::DLCSkill5_IronBearExitedAndPlayerReady(class AOakCharacter_IronBear* IronBear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_IronBearExitedAndPlayerReady");
		
		UPassive_Gunner_DLCSkill_5_C_DLCSkill5_IronBearExitedAndPlayerReady_Params params {};
		params.IronBear = IronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_OnDownStateStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Gunner_DLCSkill_5_C::DLCSkill5_OnDownStateStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.DLCSkill5_OnDownStateStart");
		
		UPassive_Gunner_DLCSkill_5_C_DLCSkill5_OnDownStateStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_6
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_DLCSkill_5_C::ExecuteUbergraph_Passive_Gunner_DLCSkill_6(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_6");
		
		UPassive_Gunner_DLCSkill_5_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_6_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Gunner_DLCSkill_5_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Gunner_DLCSkill_5_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C");
		return ptr;
	}

}


