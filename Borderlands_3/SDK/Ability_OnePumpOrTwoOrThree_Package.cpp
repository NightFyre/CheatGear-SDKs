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
	 * 		Name   -> Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_OnePumpOrTwoOrThree_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.OnActivated");
		
		UAbility_OnePumpOrTwoOrThree_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.WeaponFired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_OnePumpOrTwoOrThree_C::WeaponFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.WeaponFired");
		
		UAbility_OnePumpOrTwoOrThree_C_WeaponFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.ExecuteUbergraph_Ability_OnePumpOrTwoOrThree
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_OnePumpOrTwoOrThree_C::ExecuteUbergraph_Ability_OnePumpOrTwoOrThree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C.ExecuteUbergraph_Ability_OnePumpOrTwoOrThree");
		
		UAbility_OnePumpOrTwoOrThree_C_ExecuteUbergraph_Ability_OnePumpOrTwoOrThree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_OnePumpOrTwoOrThree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_OnePumpOrTwoOrThree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_OnePumpOrTwoOrThree.Ability_OnePumpOrTwoOrThree_C");
		return ptr;
	}

}


