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
	 * 		Name   -> Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.AnointAutoBearEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasValidTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ChargeTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Gunner_AutoBear_FireDamage_C::AnointAutoBearEnded(bool HasValidTarget, class AActor* ChargeTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.AnointAutoBearEnded");
		
		UAbility_Gunner_AutoBear_FireDamage_C_AnointAutoBearEnded_Params params {};
		params.HasValidTarget = HasValidTarget;
		params.ChargeTarget = ChargeTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Gunner_AutoBear_FireDamage_C::ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage");
		
		UAbility_Gunner_AutoBear_FireDamage_C_ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Gunner_AutoBear_FireDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Gunner_AutoBear_FireDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C");
		return ptr;
	}

}


