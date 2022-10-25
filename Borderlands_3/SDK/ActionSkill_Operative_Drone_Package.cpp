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
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldStopAbilityOnPawnSlotComponentAttach
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UActionSkill_Operative_Drone_C::ShouldStopAbilityOnPawnSlotComponentAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldStopAbilityOnPawnSlotComponentAttach");
		
		UActionSkill_Operative_Drone_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.GetGoodMisfortuneRechargeValue
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		int32_t                                            TotalKills                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UActionSkill_Operative_Drone_C::GetGoodMisfortuneRechargeValue(int32_t TotalKills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.GetGoodMisfortuneRechargeValue");
		
		UActionSkill_Operative_Drone_C_GetGoodMisfortuneRechargeValue_Params params {};
		params.TotalKills = TotalKills;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TrySpawnPrimaryDrone
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class AOakDroneProjectile_GRMLN* UActionSkill_Operative_Drone_C::TrySpawnPrimaryDrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TrySpawnPrimaryDrone");
		
		UActionSkill_Operative_Drone_C_TrySpawnPrimaryDrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldAbortActivation
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		unsigned char                                      OutAbortCode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionSkill_Operative_Drone_C::ShouldAbortActivation(unsigned char* OutAbortCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldAbortActivation");
		
		UActionSkill_Operative_Drone_C_ShouldAbortActivation_Params params {};
		
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
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TryFindNewDroneTarget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_Drone_C::TryFindNewDroneTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TryFindNewDroneTarget");
		
		UActionSkill_Operative_Drone_C_TryFindNewDroneTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_Drone_C::OnStartActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartActionAbility");
		
		UActionSkill_Operative_Drone_C_OnStartActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartCalledShot
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_Drone_C::OnStartCalledShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartCalledShot");
		
		UActionSkill_Operative_Drone_C_OnStartCalledShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopCalledShot
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_Drone_C::OnStopCalledShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopCalledShot");
		
		UActionSkill_Operative_Drone_C_OnStopCalledShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.StopButtonPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Operative_Drone_C::StopButtonPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.StopButtonPress");
		
		UActionSkill_Operative_Drone_C_StopButtonPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_Drone_C::OnStopActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopActionAbility");
		
		UActionSkill_Operative_Drone_C_OnStopActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ExecuteUbergraph_ActionSkill_Operative_Drone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_Drone_C::ExecuteUbergraph_ActionSkill_Operative_Drone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ExecuteUbergraph_ActionSkill_Operative_Drone");
		
		UActionSkill_Operative_Drone_C_ExecuteUbergraph_ActionSkill_Operative_Drone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionSkill_Operative_Drone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSkill_Operative_Drone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C");
		return ptr;
	}

}


