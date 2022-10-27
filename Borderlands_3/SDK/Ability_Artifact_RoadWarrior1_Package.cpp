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
	 * 		Name   -> Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_RoadWarrior1_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnActivated");
		
		UAbility_Artifact_RoadWarrior1_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StartSlide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Artifact_RoadWarrior1_C::StartSlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StartSlide");
		
		UAbility_Artifact_RoadWarrior1_C_StartSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.FireProjectile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Artifact_RoadWarrior1_C::FireProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.FireProjectile");
		
		UAbility_Artifact_RoadWarrior1_C_FireProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StoppedSliding
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlideEndedDetails                          Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_Artifact_RoadWarrior1_C::StoppedSliding(const struct FSlideEndedDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StoppedSliding");
		
		UAbility_Artifact_RoadWarrior1_C_StoppedSliding_Params params {};
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_RoadWarrior1_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnDeactivated");
		
		UAbility_Artifact_RoadWarrior1_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.ExecuteUbergraph_Ability_Artifact_RoadWarrior1
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Artifact_RoadWarrior1_C::ExecuteUbergraph_Ability_Artifact_RoadWarrior1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.ExecuteUbergraph_Ability_Artifact_RoadWarrior1");
		
		UAbility_Artifact_RoadWarrior1_C_ExecuteUbergraph_Ability_Artifact_RoadWarrior1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Artifact_RoadWarrior1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Artifact_RoadWarrior1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C");
		return ptr;
	}

}


