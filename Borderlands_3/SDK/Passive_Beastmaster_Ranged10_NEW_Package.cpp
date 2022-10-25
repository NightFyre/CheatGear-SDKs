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
	 * 		Name   -> Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.GetProjectileComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     InWeapon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponFireProjectileComponent*              FireComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged10_NEW_C::GetProjectileComponent(class AWeapon* InWeapon, class UWeaponFireProjectileComponent** FireComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.GetProjectileComponent");
		
		UPassive_Beastmaster_Ranged10_NEW_C_GetProjectileComponent_Params params {};
		params.InWeapon = InWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FireComponent != nullptr)
			*FireComponent = params.FireComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.RandomChanceByGrade
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UPassive_Beastmaster_Ranged10_NEW_C::RandomChanceByGrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.RandomChanceByGrade");
		
		UPassive_Beastmaster_Ranged10_NEW_C_RandomChanceByGrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponUsed_Ranged10
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged10_NEW_C::OnWeaponUsed_Ranged10(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponUsed_Ranged10");
		
		UPassive_Beastmaster_Ranged10_NEW_C_OnWeaponUsed_Ranged10_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponChanged_Ranged10
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeapon*                                     LastWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged10_NEW_C::OnWeaponChanged_Ranged10(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnWeaponChanged_Ranged10");
		
		UPassive_Beastmaster_Ranged10_NEW_C_OnWeaponChanged_Ranged10_Params params {};
		params.NewWeapon = NewWeapon;
		params.LastWeapon = LastWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Ranged10_NEW_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnActivated");
		
		UPassive_Beastmaster_Ranged10_NEW_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.TryAddProjectileToNextShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     InWeapon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged10_NEW_C::TryAddProjectileToNextShot(class AWeapon* InWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.TryAddProjectileToNextShot");
		
		UPassive_Beastmaster_Ranged10_NEW_C_TryAddProjectileToNextShot_Params params {};
		params.InWeapon = InWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Ranged10_NEW_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnPaused");
		
		UPassive_Beastmaster_Ranged10_NEW_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Ranged10_NEW_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.OnDeactivated");
		
		UPassive_Beastmaster_Ranged10_NEW_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged10_NEW_C::ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C.ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW");
		
		UPassive_Beastmaster_Ranged10_NEW_C_ExecuteUbergraph_Passive_Beastmaster_Ranged10_NEW_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_Ranged10_NEW_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_Ranged10_NEW_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Ranged10_NEW.Passive_Beastmaster_Ranged10_NEW_C");
		return ptr;
	}

}


