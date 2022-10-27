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
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.GetSlamDamage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_Base_C::GetSlamDamage(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.GetSlamDamage");
		
		UAction_Phasetrance_Slam_Base_C_GetSlamDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.SlamFeedbackLaunch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAction_Phasetrance_Slam_Base_C::SlamFeedbackLaunch(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.SlamFeedbackLaunch");
		
		UAction_Phasetrance_Slam_Base_C_SlamFeedbackLaunch_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::InnerDoSlam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlam");
		
		UAction_Phasetrance_Slam_Base_C_InnerDoSlam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlamDamage
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::InnerDoSlamDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerDoSlamDamage");
		
		UAction_Phasetrance_Slam_Base_C_InnerDoSlamDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerShowSlamLandFX
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::InnerShowSlamLandFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerShowSlamLandFX");
		
		UAction_Phasetrance_Slam_Base_C_InnerShowSlamLandFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamEnded
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::InnerOnSlamEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamEnded");
		
		UAction_Phasetrance_Slam_Base_C_InnerOnSlamEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamStarted
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::InnerOnSlamStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.InnerOnSlamStarted");
		
		UAction_Phasetrance_Slam_Base_C_InnerOnSlamStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_Base_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBegin");
		
		UAction_Phasetrance_Slam_Base_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_StartDive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::AN_StartDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_StartDive");
		
		UAction_Phasetrance_Slam_Base_C_AN_StartDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_Base_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnEnd");
		
		UAction_Phasetrance_Slam_Base_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnFallEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::OnFallEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnFallEnded");
		
		UAction_Phasetrance_Slam_Base_C_OnFallEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_Base_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnServerEnd");
		
		UAction_Phasetrance_Slam_Base_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_DoSlam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::AN_DoSlam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.AN_DoSlam");
		
		UAction_Phasetrance_Slam_Base_C_AN_DoSlam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_Base_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.OnBeginBringUpWeapon");
		
		UAction_Phasetrance_Slam_Base_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.HandlePlayerLanded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::HandlePlayerLanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.HandlePlayerLanded");
		
		UAction_Phasetrance_Slam_Base_C_HandlePlayerLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillReactDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::TriggerActionSkillReactDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillReactDialogue");
		
		UAction_Phasetrance_Slam_Base_C_TriggerActionSkillReactDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillUseDialogue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::TriggerActionSkillUseDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.TriggerActionSkillUseDialogue");
		
		UAction_Phasetrance_Slam_Base_C_TriggerActionSkillUseDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Begin Dialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::Trigger_Slam_Begin_Dialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Begin Dialogue");
		
		UAction_Phasetrance_Slam_Base_C_Trigger_Slam_Begin_Dialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Impact Dialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::Trigger_Slam_Impact_Dialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger Slam Impact Dialogue");
		
		UAction_Phasetrance_Slam_Base_C_Trigger_Slam_Impact_Dialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger slam Taunt Dialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_Base_C::Trigger_slam_Taunt_Dialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.Trigger slam Taunt Dialogue");
		
		UAction_Phasetrance_Slam_Base_C_Trigger_slam_Taunt_Dialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.ExecuteUbergraph_Action_Phasetrance_Slam_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_Base_C::ExecuteUbergraph_Action_Phasetrance_Slam_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C.ExecuteUbergraph_Action_Phasetrance_Slam_Base");
		
		UAction_Phasetrance_Slam_Base_C_ExecuteUbergraph_Action_Phasetrance_Slam_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Phasetrance_Slam_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Phasetrance_Slam_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_Slam_Base.Action_Phasetrance_Slam_Base_C");
		return ptr;
	}

}


