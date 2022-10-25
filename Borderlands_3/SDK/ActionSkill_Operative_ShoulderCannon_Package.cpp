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
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::StartShoulderCannonMod3Timer(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer");
		
		UActionSkill_Operative_ShoulderCannon_C_StartShoulderCannonMod3Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EShoulderCannonMods                                Mod                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::IsShouldCannonModSlotted(EShoulderCannonMods Mod, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted");
		
		UActionSkill_Operative_ShoulderCannon_C_IsShouldCannonModSlotted_Params params {};
		params.Mod = Mod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.GetCannonRef
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::GetCannonRef(class AActor** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.GetCannonRef");
		
		UActionSkill_Operative_ShoulderCannon_C_GetCannonRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ShouldAbortActivation
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		unsigned char                                      OutAbortCode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionSkill_Operative_ShoulderCannon_C::ShouldAbortActivation(unsigned char* OutAbortCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ShouldAbortActivation");
		
		UActionSkill_Operative_ShoulderCannon_C_ShouldAbortActivation_Params params {};
		
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
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.TrySpawnCannon
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class AInteractiveObject* UActionSkill_Operative_ShoulderCannon_C::TrySpawnCannon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.TrySpawnCannon");
		
		UActionSkill_Operative_ShoulderCannon_C_TrySpawnCannon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsActionSkillValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UActionSkill_Operative_ShoulderCannon_C::IsActionSkillValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsActionSkillValid");
		
		UActionSkill_Operative_ShoulderCannon_C_IsActionSkillValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnPaused");
		
		UActionSkill_Operative_ShoulderCannon_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnResumed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::OnResumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnResumed");
		
		UActionSkill_Operative_ShoulderCannon_C_OnResumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnChargeCountChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OldCharge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::OnChargeCountChanged(int32_t OldCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnChargeCountChanged");
		
		UActionSkill_Operative_ShoulderCannon_C_OnChargeCountChanged_Params params {};
		params.OldCharge = OldCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnActivated");
		
		UActionSkill_Operative_ShoulderCannon_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.SpawnShoulderCannon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::SpawnShoulderCannon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.SpawnShoulderCannon");
		
		UActionSkill_Operative_ShoulderCannon_C_SpawnShoulderCannon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnStartActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::OnStartActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnStartActionAbility");
		
		UActionSkill_Operative_ShoulderCannon_C_OnStartActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnDeactivated");
		
		UActionSkill_Operative_ShoulderCannon_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::OnRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnRegistered");
		
		UActionSkill_Operative_ShoulderCannon_C_OnRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnUnregistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::OnUnregistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnUnregistered");
		
		UActionSkill_Operative_ShoulderCannon_C_OnUnregistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_ShoulderCannon_C::ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon");
		
		UActionSkill_Operative_ShoulderCannon_C_ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionSkill_Operative_ShoulderCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSkill_Operative_ShoulderCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C");
		return ptr;
	}

}


