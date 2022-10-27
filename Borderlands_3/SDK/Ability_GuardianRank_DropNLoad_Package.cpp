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
	 * 		Name   -> Function Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_GuardianRank_DropNLoad_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C.OnActivated");
		
		UAbility_GuardianRank_DropNLoad_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_GuardianRank_DropNLoad_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C.OnDeactivated");
		
		UAbility_GuardianRank_DropNLoad_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C.OnDownStateStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_GuardianRank_DropNLoad_C::OnDownStateStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C.OnDownStateStart");
		
		UAbility_GuardianRank_DropNLoad_C_OnDownStateStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C.ExecuteUbergraph_Ability_GuardianRank_DropNLoad
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_GuardianRank_DropNLoad_C::ExecuteUbergraph_Ability_GuardianRank_DropNLoad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C.ExecuteUbergraph_Ability_GuardianRank_DropNLoad");
		
		UAbility_GuardianRank_DropNLoad_C_ExecuteUbergraph_Ability_GuardianRank_DropNLoad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_GuardianRank_DropNLoad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_GuardianRank_DropNLoad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_DropNLoad.Ability_GuardianRank_DropNLoad_C");
		return ptr;
	}

}


