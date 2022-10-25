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
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.StopSlamLoopFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_C::StopSlamLoopFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.StopSlamLoopFeedback");
		
		UAction_Phasetrance_Slam_C_StopSlamLoopFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamControlledMove
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_C::GetSlamControlledMove(class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamControlledMove");
		
		UAction_Phasetrance_Slam_C_GetSlamControlledMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamTargetLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     res                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_C::GetSlamTargetLocation(struct FVector* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.GetSlamTargetLocation");
		
		UAction_Phasetrance_Slam_C_GetSlamTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerBegin");
		
		UAction_Phasetrance_Slam_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.InnerDoSlamDamage
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_C::InnerDoSlamDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.InnerDoSlamDamage");
		
		UAction_Phasetrance_Slam_C_InnerDoSlamDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_Unlockmovement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_C::AN_Unlockmovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_Unlockmovement");
		
		UAction_Phasetrance_Slam_C_AN_Unlockmovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnServerEnd");
		
		UAction_Phasetrance_Slam_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBeginBringUpWeapon");
		
		UAction_Phasetrance_Slam_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_SlamMoveLock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_C::AN_SlamMoveLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_SlamMoveLock");
		
		UAction_Phasetrance_Slam_C_AN_SlamMoveLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.OnBegin");
		
		UAction_Phasetrance_Slam_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_C::AN_FeedbackSlamLand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLand");
		
		UAction_Phasetrance_Slam_C_AN_FeedbackSlamLand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Phasetrance_Slam_C::AN_FeedbackSlamLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.AN_FeedbackSlamLoop");
		
		UAction_Phasetrance_Slam_C_AN_FeedbackSlamLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.ExecuteUbergraph_Action_Phasetrance_Slam
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Phasetrance_Slam_C::ExecuteUbergraph_Action_Phasetrance_Slam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Phasetrance_Slam.Action_Phasetrance_Slam_C.ExecuteUbergraph_Action_Phasetrance_Slam");
		
		UAction_Phasetrance_Slam_C_ExecuteUbergraph_Action_Phasetrance_Slam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Phasetrance_Slam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Phasetrance_Slam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_Slam.Action_Phasetrance_Slam_C");
		return ptr;
	}

}


