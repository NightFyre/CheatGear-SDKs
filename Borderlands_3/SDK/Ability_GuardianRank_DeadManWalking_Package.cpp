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
	 * 		Name   -> Function Ability_GuardianRank_DeadManWalking.Ability_GuardianRank_DeadManWalking_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_GuardianRank_DeadManWalking_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_DeadManWalking.Ability_GuardianRank_DeadManWalking_C.OnDeactivated");
		
		UAbility_GuardianRank_DeadManWalking_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_GuardianRank_DeadManWalking.Ability_GuardianRank_DeadManWalking_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_GuardianRank_DeadManWalking_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_DeadManWalking.Ability_GuardianRank_DeadManWalking_C.OnActivated");
		
		UAbility_GuardianRank_DeadManWalking_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_GuardianRank_DeadManWalking.Ability_GuardianRank_DeadManWalking_C.ExecuteUbergraph_Ability_GuardianRank_DeadManWalking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_GuardianRank_DeadManWalking_C::ExecuteUbergraph_Ability_GuardianRank_DeadManWalking(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_DeadManWalking.Ability_GuardianRank_DeadManWalking_C.ExecuteUbergraph_Ability_GuardianRank_DeadManWalking");
		
		UAbility_GuardianRank_DeadManWalking_C_ExecuteUbergraph_Ability_GuardianRank_DeadManWalking_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_GuardianRank_DeadManWalking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_GuardianRank_DeadManWalking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_DeadManWalking.Ability_GuardianRank_DeadManWalking_C");
		return ptr;
	}

}


