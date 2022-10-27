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
	 * 		Name   -> Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_Vengeance_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.OnActivated");
		
		UAbility_Artifact_Vengeance_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.OnSlamEnd
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGroundSlamEndedDetails                     Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_Artifact_Vengeance_C::OnSlamEnd(const struct FGroundSlamEndedDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.OnSlamEnd");
		
		UAbility_Artifact_Vengeance_C_OnSlamEnd_Params params {};
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.ExecuteUbergraph_Ability_Artifact_Vengeance
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Artifact_Vengeance_C::ExecuteUbergraph_Ability_Artifact_Vengeance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.ExecuteUbergraph_Ability_Artifact_Vengeance");
		
		UAbility_Artifact_Vengeance_C_ExecuteUbergraph_Ability_Artifact_Vengeance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Artifact_Vengeance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Artifact_Vengeance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C");
		return ptr;
	}

}


