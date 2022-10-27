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
	 * 		Name   -> Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointTriggerEffect
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TriggerEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Gunner_NextMag_Parent_C::AnointTriggerEffect(bool TriggerEffect, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointTriggerEffect");
		
		UAbility_Gunner_NextMag_Parent_C_AnointTriggerEffect_Params params {};
		params.TriggerEffect = TriggerEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Gunner_NextMag_Parent_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.OnActivated");
		
		UAbility_Gunner_NextMag_Parent_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ReloadedWeapon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Gunner_NextMag_Parent_C::ReloadedWeapon(class AWeapon* EventWeapon, bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ReloadedWeapon");
		
		UAbility_Gunner_NextMag_Parent_C_ReloadedWeapon_Params params {};
		params.EventWeapon = EventWeapon;
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointAutoBearStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Gunner_NextMag_Parent_C::AnointAutoBearStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.AnointAutoBearStarted");
		
		UAbility_Gunner_NextMag_Parent_C_AnointAutoBearStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ExecuteUbergraph_Ability_Gunner_NextMag_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Gunner_NextMag_Parent_C::ExecuteUbergraph_Ability_Gunner_NextMag_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C.ExecuteUbergraph_Ability_Gunner_NextMag_Parent");
		
		UAbility_Gunner_NextMag_Parent_C_ExecuteUbergraph_Ability_Gunner_NextMag_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Gunner_NextMag_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Gunner_NextMag_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C");
		return ptr;
	}

}


