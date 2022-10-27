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
	 * 		Name   -> Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_CausticCoast_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.OnActivated");
		
		UAbility_Artifact_CausticCoast_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StartSlide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Artifact_CausticCoast_C::StartSlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StartSlide");
		
		UAbility_Artifact_CausticCoast_C_StartSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.FireCorrosiveProjectile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Artifact_CausticCoast_C::FireCorrosiveProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.FireCorrosiveProjectile");
		
		UAbility_Artifact_CausticCoast_C_FireCorrosiveProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StoppedSliding
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlideEndedDetails                          Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_Artifact_CausticCoast_C::StoppedSliding(const struct FSlideEndedDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StoppedSliding");
		
		UAbility_Artifact_CausticCoast_C_StoppedSliding_Params params {};
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.ExecuteUbergraph_Ability_Artifact_CausticCoast
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Artifact_CausticCoast_C::ExecuteUbergraph_Ability_Artifact_CausticCoast(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.ExecuteUbergraph_Ability_Artifact_CausticCoast");
		
		UAbility_Artifact_CausticCoast_C_ExecuteUbergraph_Ability_Artifact_CausticCoast_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Artifact_CausticCoast_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Artifact_CausticCoast_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C");
		return ptr;
	}

}


