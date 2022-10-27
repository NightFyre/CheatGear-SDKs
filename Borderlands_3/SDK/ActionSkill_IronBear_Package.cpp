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
	 * 		Name   -> Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetActionSkillWidgetKeyframe
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UActionSkill_IronBear_C::GetActionSkillWidgetKeyframe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetActionSkillWidgetKeyframe");
		
		UActionSkill_IronBear_C_GetActionSkillWidgetKeyframe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_IronBear.ActionSkill_IronBear_C.CalculateAbilityState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UActionSkill_IronBear_C::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.CalculateAbilityState");
		
		UActionSkill_IronBear_C_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearClass
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UClass* UActionSkill_IronBear_C::GetIronBearClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearClass");
		
		UActionSkill_IronBear_C_GetIronBearClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnRotation
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FRotator UActionSkill_IronBear_C::GetIronBearSpawnRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnRotation");
		
		UActionSkill_IronBear_C_GetIronBearSpawnRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnLocation
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FVector UActionSkill_IronBear_C::GetIronBearSpawnLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetIronBearSpawnLocation");
		
		UActionSkill_IronBear_C_GetIronBearSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCooldownRestartPercent
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	float UActionSkill_IronBear_C::GetCooldownRestartPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCooldownRestartPercent");
		
		UActionSkill_IronBear_C_GetCooldownRestartPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_IronBear.ActionSkill_IronBear_C.ShouldAbortActivation
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		unsigned char                                      OutAbortCode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionSkill_IronBear_C::ShouldAbortActivation(unsigned char* OutAbortCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.ShouldAbortActivation");
		
		UActionSkill_IronBear_C_ShouldAbortActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAbortCode != nullptr)
			*OutAbortCode = params.OutAbortCode;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCameraYaw
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_IronBear_C::GetCameraYaw(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.GetCameraYaw");
		
		UActionSkill_IronBear_C_GetCameraYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_IronBear.ActionSkill_IronBear_C.StartSummoningIronCub
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_IronBear_C::StartSummoningIronCub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.StartSummoningIronCub");
		
		UActionSkill_IronBear_C_StartSummoningIronCub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_IronBear.ActionSkill_IronBear_C.ExecuteUbergraph_ActionSkill_IronBear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_IronBear_C::ExecuteUbergraph_ActionSkill_IronBear(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_IronBear.ActionSkill_IronBear_C.ExecuteUbergraph_ActionSkill_IronBear");
		
		UActionSkill_IronBear_C_ExecuteUbergraph_ActionSkill_IronBear_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionSkill_IronBear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSkill_IronBear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_IronBear.ActionSkill_IronBear_C");
		return ptr;
	}

}


