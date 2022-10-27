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
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AssembleActivationCombo
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FPhaseTranceActivationComboData UAction_Phasetrance_Common_C::AssembleActivationCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AssembleActivationCombo");
		
		UAction_Phasetrance_Common_C_AssembleActivationCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.PlayPhaseTranceHandEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Common_C::PlayPhaseTranceHandEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.PlayPhaseTranceHandEffects");
		
		UAction_Phasetrance_Common_C_PlayPhaseTranceHandEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillReactDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Common_C::TriggerActionSkillReactDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillReactDialogue");
		
		UAction_Phasetrance_Common_C_TriggerActionSkillReactDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillUseDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Common_C::TriggerActionSkillUseDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.TriggerActionSkillUseDialogue");
		
		UAction_Phasetrance_Common_C_TriggerActionSkillUseDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Common_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.Cleanup");
		
		UAction_Phasetrance_Common_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Common_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnEnd");
		
		UAction_Phasetrance_Common_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Common_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerEnd");
		
		UAction_Phasetrance_Common_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryEffectComponents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Common_C::AN_TryEffectComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryEffectComponents");
		
		UAction_Phasetrance_Common_C_AN_TryEffectComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Common_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnServerBegin");
		
		UAction_Phasetrance_Common_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Common_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.OnBegin");
		
		UAction_Phasetrance_Common_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryImpulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Common_C::AN_TryImpulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryImpulse");
		
		UAction_Phasetrance_Common_C_AN_TryImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryNova
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Common_C::AN_TryNova()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_TryNova");
		
		UAction_Phasetrance_Common_C_AN_TryNova_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove3pGhostArms
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Common_C::AN_Remove3pGhostArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove3pGhostArms");
		
		UAction_Phasetrance_Common_C_AN_Remove3pGhostArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove1pGhostArms
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Common_C::AN_Remove1pGhostArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.AN_Remove1pGhostArms");
		
		UAction_Phasetrance_Common_C_AN_Remove1pGhostArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.ExecuteUbergraph_Action_Phasetrance_Common
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Common_C::ExecuteUbergraph_Action_Phasetrance_Common(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Common.Action_Phasetrance_Common_C.ExecuteUbergraph_Action_Phasetrance_Common");
		
		UAction_Phasetrance_Common_C_ExecuteUbergraph_Action_Phasetrance_Common_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Phasetrance_Common_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Phasetrance_Common_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_Common.Action_Phasetrance_Common_C");
		return ptr;
	}

}


