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
	 * 		Name   -> Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.RefillOtherWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeapon*                                     EquippedWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Kaleidoscope_C::RefillOtherWeapon(class AOakCharacter* Character, class UInventorySlotData* InventorySlot, class AWeapon* EquippedWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.RefillOtherWeapon");
		
		UAbility_Kaleidoscope_C_RefillOtherWeapon_Params params {};
		params.Character = Character;
		params.InventorySlot = InventorySlot;
		params.EquippedWeapon = EquippedWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Kaleidoscope_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnActivated");
		
		UAbility_Kaleidoscope_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Kaleidoscope_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnDeactivated");
		
		UAbility_Kaleidoscope_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnUnregistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Kaleidoscope_C::OnUnregistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnUnregistered");
		
		UAbility_Kaleidoscope_C_OnUnregistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Kaleidoscope_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.OnPaused");
		
		UAbility_Kaleidoscope_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedIn_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Kaleidoscope_C::NotifyZoomedIn_Event(unsigned char Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedIn_Event");
		
		UAbility_Kaleidoscope_C_NotifyZoomedIn_Event_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedOut_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Kaleidoscope_C::NotifyZoomedOut_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifyZoomedOut_Event");
		
		UAbility_Kaleidoscope_C_NotifyZoomedOut_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifySwitchedMode_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Kaleidoscope_C::NotifySwitchedMode_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.NotifySwitchedMode_Event");
		
		UAbility_Kaleidoscope_C_NotifySwitchedMode_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.ExecuteUbergraph_Ability_Kaleidoscope
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Kaleidoscope_C::ExecuteUbergraph_Ability_Kaleidoscope(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Kaleidoscope.Ability_Kaleidoscope_C.ExecuteUbergraph_Ability_Kaleidoscope");
		
		UAbility_Kaleidoscope_C_ExecuteUbergraph_Ability_Kaleidoscope_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Kaleidoscope_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Kaleidoscope_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Kaleidoscope.Ability_Kaleidoscope_C");
		return ptr;
	}

}


