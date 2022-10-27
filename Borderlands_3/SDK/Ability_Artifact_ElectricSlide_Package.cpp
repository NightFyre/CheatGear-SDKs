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
	 * 		Name   -> Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_ElectricSlide_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.OnActivated");
		
		UAbility_Artifact_ElectricSlide_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StartSlide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Artifact_ElectricSlide_C::StartSlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StartSlide");
		
		UAbility_Artifact_ElectricSlide_C_StartSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StopSlide
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlideEndedDetails                          Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_Artifact_ElectricSlide_C::StopSlide(const struct FSlideEndedDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StopSlide");
		
		UAbility_Artifact_ElectricSlide_C_StopSlide_Params params {};
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.QueryEnemies
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Artifact_ElectricSlide_C::QueryEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.QueryEnemies");
		
		UAbility_Artifact_ElectricSlide_C_QueryEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.ExecuteUbergraph_Ability_Artifact_ElectricSlide
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Artifact_ElectricSlide_C::ExecuteUbergraph_Ability_Artifact_ElectricSlide(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.ExecuteUbergraph_Ability_Artifact_ElectricSlide");
		
		UAbility_Artifact_ElectricSlide_C_ExecuteUbergraph_Ability_Artifact_ElectricSlide_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Artifact_ElectricSlide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Artifact_ElectricSlide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C");
		return ptr;
	}

}


