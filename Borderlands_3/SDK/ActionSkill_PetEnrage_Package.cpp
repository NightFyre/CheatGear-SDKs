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
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ShouldStopAbilityOnPawnSlotComponentAttach
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UActionSkill_PetEnrage_C::ShouldStopAbilityOnPawnSlotComponentAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ShouldStopAbilityOnPawnSlotComponentAttach");
		
		UActionSkill_PetEnrage_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UActionSkill_PetEnrage_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.CalculateAbilityState");
		
		UActionSkill_PetEnrage_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetActionRegisters
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGbxActionRegister>                  res                                                        (Parm, OutParm, ZeroConstructor)
	 */
	void UActionSkill_PetEnrage_C::GetActionRegisters(const struct FVector& InLocation, TArray<struct FGbxActionRegister>* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetActionRegisters");
		
		UActionSkill_PetEnrage_C_GetActionRegisters_Params params {};
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetCooldownRestartPercent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	float UActionSkill_PetEnrage_C::GetCooldownRestartPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetCooldownRestartPercent");
		
		UActionSkill_PetEnrage_C_GetCooldownRestartPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetMaxCooldownModifier
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		EGbxAttributeModifierType                          ModifierType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionSkill_PetEnrage_C::GetMaxCooldownModifier(EGbxAttributeModifierType* ModifierType, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetMaxCooldownModifier");
		
		UActionSkill_PetEnrage_C_GetMaxCooldownModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifierType != nullptr)
			*ModifierType = params.ModifierType;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UActionSkill_PetEnrage_C::GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A");
		
		UActionSkill_PetEnrage_C_GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UActionSkill_PetEnrage_C::GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A");
		
		UActionSkill_PetEnrage_C_GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStartActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_PetEnrage_C::OnStartActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStartActionAbility");
		
		UActionSkill_PetEnrage_C_OnStartActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.FindTargetLocationAsync
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_PetEnrage_C::FindTargetLocationAsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.FindTargetLocationAsync");
		
		UActionSkill_PetEnrage_C_FindTargetLocationAsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.LocationQueryComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_PetEnrage_C::LocationQueryComplete(const struct FVector& TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.LocationQueryComplete");
		
		UActionSkill_PetEnrage_C_LocationQueryComplete_Params params {};
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStopActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_PetEnrage_C::OnStopActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStopActionAbility");
		
		UActionSkill_PetEnrage_C_OnStopActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ExecuteUbergraph_ActionSkill_PetEnrage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_PetEnrage_C::ExecuteUbergraph_ActionSkill_PetEnrage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ExecuteUbergraph_ActionSkill_PetEnrage");
		
		UActionSkill_PetEnrage_C_ExecuteUbergraph_ActionSkill_PetEnrage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionSkill_PetEnrage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSkill_PetEnrage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_PetEnrage.ActionSkill_PetEnrage_C");
		return ptr;
	}

}


