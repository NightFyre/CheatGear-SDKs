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
	 * 		Name   -> Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_All_SlideRegenShields_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnActivated");
		
		UAbility_All_SlideRegenShields_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_All_SlideRegenShields_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnDeactivated");
		
		UAbility_All_SlideRegenShields_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.BuildEnergy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SlideRegenShields_C::BuildEnergy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.BuildEnergy");
		
		UAbility_All_SlideRegenShields_C_BuildEnergy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ReleaseEnergy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SlideRegenShields_C::ReleaseEnergy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ReleaseEnergy");
		
		UAbility_All_SlideRegenShields_C_ReleaseEnergy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SlideRegenShields_C::SlideStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideStart");
		
		UAbility_All_SlideRegenShields_C_SlideStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideEnd
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlideEndedDetails                          Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_All_SlideRegenShields_C::SlideEnd(const struct FSlideEndedDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideEnd");
		
		UAbility_All_SlideRegenShields_C_SlideEnd_Params params {};
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ExecuteUbergraph_Ability_All_SlideRegenShields
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_SlideRegenShields_C::ExecuteUbergraph_Ability_All_SlideRegenShields(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ExecuteUbergraph_Ability_All_SlideRegenShields");
		
		UAbility_All_SlideRegenShields_C_ExecuteUbergraph_Ability_All_SlideRegenShields_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_All_SlideRegenShields_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_All_SlideRegenShields_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C");
		return ptr;
	}

}


