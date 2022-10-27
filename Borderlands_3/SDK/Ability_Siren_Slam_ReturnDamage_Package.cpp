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
	 * 		Name   -> Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Siren_Slam_ReturnDamage_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnActivated");
		
		UAbility_Siren_Slam_ReturnDamage_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.SlamEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Siren_Slam_ReturnDamage_C::SlamEnded(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.SlamEnded");
		
		UAbility_Siren_Slam_ReturnDamage_C_SlamEnded_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Siren_Slam_ReturnDamage_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.OnDeactivated");
		
		UAbility_Siren_Slam_ReturnDamage_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.UnregisterCDM
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Siren_Slam_ReturnDamage_C::UnregisterCDM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.UnregisterCDM");
		
		UAbility_Siren_Slam_ReturnDamage_C_UnregisterCDM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Siren_Slam_ReturnDamage_C::ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C.ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage");
		
		UAbility_Siren_Slam_ReturnDamage_C_ExecuteUbergraph_Ability_Siren_Slam_ReturnDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Siren_Slam_ReturnDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Siren_Slam_ReturnDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_Slam_ReturnDamage.Ability_Siren_Slam_ReturnDamage_C");
		return ptr;
	}

}


