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
	 * 		Name   -> Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_EG_GrenadeThrow_GlobalDamage_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.OnActivated");
		
		UAbility_EG_GrenadeThrow_GlobalDamage_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.GrenadeThrown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_EG_GrenadeThrow_GlobalDamage_C::GrenadeThrown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.GrenadeThrown");
		
		UAbility_EG_GrenadeThrow_GlobalDamage_C_GrenadeThrown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.ApplyCDM
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_EG_GrenadeThrow_GlobalDamage_C::ApplyCDM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.ApplyCDM");
		
		UAbility_EG_GrenadeThrow_GlobalDamage_C_ApplyCDM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.RemoveCDM
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_EG_GrenadeThrow_GlobalDamage_C::RemoveCDM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.RemoveCDM");
		
		UAbility_EG_GrenadeThrow_GlobalDamage_C_RemoveCDM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.ExecuteUbergraph_Ability_EG_GrenadeThrow_GlobalDamage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_EG_GrenadeThrow_GlobalDamage_C::ExecuteUbergraph_Ability_EG_GrenadeThrow_GlobalDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C.ExecuteUbergraph_Ability_EG_GrenadeThrow_GlobalDamage");
		
		UAbility_EG_GrenadeThrow_GlobalDamage_C_ExecuteUbergraph_Ability_EG_GrenadeThrow_GlobalDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_EG_GrenadeThrow_GlobalDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_EG_GrenadeThrow_GlobalDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_GrenadeThrow_GlobalDamage.Ability_EG_GrenadeThrow_GlobalDamage_C");
		return ptr;
	}

}


