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
	 * 		Name   -> Function Ability_GuardianRank_CCCombo.Ability_GuardianRank_CCCombo_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_GuardianRank_CCCombo_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_CCCombo.Ability_GuardianRank_CCCombo_C.OnActivated");
		
		UAbility_GuardianRank_CCCombo_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_GuardianRank_CCCombo.Ability_GuardianRank_CCCombo_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_GuardianRank_CCCombo_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_CCCombo.Ability_GuardianRank_CCCombo_C.OnDeactivated");
		
		UAbility_GuardianRank_CCCombo_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_GuardianRank_CCCombo.Ability_GuardianRank_CCCombo_C.ExecuteUbergraph_Ability_GuardianRank_CCCombo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_GuardianRank_CCCombo_C::ExecuteUbergraph_Ability_GuardianRank_CCCombo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_CCCombo.Ability_GuardianRank_CCCombo_C.ExecuteUbergraph_Ability_GuardianRank_CCCombo");
		
		UAbility_GuardianRank_CCCombo_C_ExecuteUbergraph_Ability_GuardianRank_CCCombo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_GuardianRank_CCCombo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_GuardianRank_CCCombo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_CCCombo.Ability_GuardianRank_CCCombo_C");
		return ptr;
	}

}


