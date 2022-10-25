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
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.IsHoldingBarrier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Operative_DeployBarrier_C::IsHoldingBarrier(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.IsHoldingBarrier");
		
		UActionSkill_Operative_DeployBarrier_C_IsHoldingBarrier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.RefillBarrierHealth
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Operative_DeployBarrier_C::RefillBarrierHealth(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.RefillBarrierHealth");
		
		UActionSkill_Operative_DeployBarrier_C_RefillBarrierHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GiveBarrierHealth
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              New_Health                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DeployBarrier_C::GiveBarrierHealth(float Health, float* New_Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GiveBarrierHealth");
		
		UActionSkill_Operative_DeployBarrier_C_GiveBarrierHealth_Params params {};
		params.Health = Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (New_Health != nullptr)
			*New_Health = params.New_Health;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierReference
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Barrier                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DeployBarrier_C::GetBarrierReference(class AActor** Barrier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierReference");
		
		UActionSkill_Operative_DeployBarrier_C_GetBarrierReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Barrier != nullptr)
			*Barrier = params.Barrier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierHealthPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HealthPercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DeployBarrier_C::GetBarrierHealthPercent(float* HealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierHealthPercent");
		
		UActionSkill_Operative_DeployBarrier_C_GetBarrierHealthPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthPercent != nullptr)
			*HealthPercent = params.HealthPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ShouldStopAbilityOnPawnSlotComponentAttach
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UActionSkill_Operative_DeployBarrier_C::ShouldStopAbilityOnPawnSlotComponentAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ShouldStopAbilityOnPawnSlotComponentAttach");
		
		UActionSkill_Operative_DeployBarrier_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.SpawnNewBarrier
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	class AOperativeBarrier* UActionSkill_Operative_DeployBarrier_C::SpawnNewBarrier(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.SpawnNewBarrier");
		
		UActionSkill_Operative_DeployBarrier_C_SpawnNewBarrier_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetCooldownRestartPercent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	float UActionSkill_Operative_DeployBarrier_C::GetCooldownRestartPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetCooldownRestartPercent");
		
		UActionSkill_Operative_DeployBarrier_C_GetCooldownRestartPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.StartHoldingBarrier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DeployBarrier_C::StartHoldingBarrier(class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.StartHoldingBarrier");
		
		UActionSkill_Operative_DeployBarrier_C_StartHoldingBarrier_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Operative_DeployBarrier_C::ActivateHighlyUnstable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstable");
		
		UActionSkill_Operative_DeployBarrier_C_ActivateHighlyUnstable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Operative_DeployBarrier_C::ActivateHighlyUnstableFromCarry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry");
		
		UActionSkill_Operative_DeployBarrier_C_ActivateHighlyUnstableFromCarry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStartActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DeployBarrier_C::OnStartActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStartActionAbility");
		
		UActionSkill_Operative_DeployBarrier_C_OnStartActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierInHand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DeployBarrier_C::DeployNewBarrierInHand(class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierInHand");
		
		UActionSkill_Operative_DeployBarrier_C_DeployNewBarrierInHand_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.TryDropPickup
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DeployBarrier_C::TryDropPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.TryDropPickup");
		
		UActionSkill_Operative_DeployBarrier_C_TryDropPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Operative_DeployBarrier_C::DeployNewBarrierAroundPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer");
		
		UActionSkill_Operative_DeployBarrier_C_DeployNewBarrierAroundPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStopActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DeployBarrier_C::OnStopActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStopActionAbility");
		
		UActionSkill_Operative_DeployBarrier_C_OnStopActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ExecuteUbergraph_ActionSkill_Operative_DeployBarrier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DeployBarrier_C::ExecuteUbergraph_ActionSkill_Operative_DeployBarrier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ExecuteUbergraph_ActionSkill_Operative_DeployBarrier");
		
		UActionSkill_Operative_DeployBarrier_C_ExecuteUbergraph_ActionSkill_Operative_DeployBarrier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionSkill_Operative_DeployBarrier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSkill_Operative_DeployBarrier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C");
		return ptr;
	}

}


