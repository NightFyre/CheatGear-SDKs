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
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_BlastRequests_C::OnDialogSequenceFinished_9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_9");
		
		UALI_SM_BlastRequests_C_OnDialogSequenceFinished_9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_BlastRequests_C::OnDialogSequenceFinished_8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_8");
		
		UALI_SM_BlastRequests_C_OnDialogSequenceFinished_8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_BlastRequests_C::OnDialogSequenceFinished_7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_7");
		
		UALI_SM_BlastRequests_C_OnDialogSequenceFinished_7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_BlastRequests_C::OnDialogSequenceFinished_6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.OnDialogSequenceFinished_6");
		
		UALI_SM_BlastRequests_C_OnDialogSequenceFinished_6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_Stay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::SET_Stay(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_Stay");
		
		UALI_SM_BlastRequests_C_SET_Stay_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_Stay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::Obj_Stay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_Stay");
		
		UALI_SM_BlastRequests_C_Obj_Stay_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Stayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::MCE_Stayed(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Stayed");
		
		UALI_SM_BlastRequests_C_MCE_Stayed_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MissionKickoff
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UALI_SM_BlastRequests_C::MissionKickoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MissionKickoff");
		
		UALI_SM_BlastRequests_C_MissionKickoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_Respawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::INV_Obj_Respawned(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_Respawned");
		
		UALI_SM_BlastRequests_C_INV_Obj_Respawned_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Respawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::MCE_Respawned(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_Respawned");
		
		UALI_SM_BlastRequests_C_MCE_Respawned_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_ReachOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::SET_ReachOut(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.SET_ReachOut");
		
		UALI_SM_BlastRequests_C_SET_ReachOut_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_ReachOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::Obj_ReachOut(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.Obj_ReachOut");
		
		UALI_SM_BlastRequests_C_Obj_ReachOut_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReachedOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::MCE_ReachedOut(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReachedOut");
		
		UALI_SM_BlastRequests_C_MCE_ReachedOut_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_KriegReadyToBlowUp_Stay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::INV_Obj_KriegReadyToBlowUp_Stay(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_KriegReadyToBlowUp_Stay");
		
		UALI_SM_BlastRequests_C_INV_Obj_KriegReadyToBlowUp_Stay_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToRespawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::INV_Obj_ReadyToRespawn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToRespawn");
		
		UALI_SM_BlastRequests_C_INV_Obj_ReadyToRespawn_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_ReadyToRespawn_Objective] PROXY
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_BlastRequests_C::INV_Obj_ReadyToRespawn_Objective_PROXY()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_ReadyToRespawn_Objective] PROXY");
		
		UALI_SM_BlastRequests_C_INV_Obj_ReadyToRespawn_Objective_PROXY_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_Respawned_Objective] PROXY_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_BlastRequests_C::INV_Obj_Respawned_Objective_PROXY_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.[INV_Obj_Respawned_Objective] PROXY_1");
		
		UALI_SM_BlastRequests_C_INV_Obj_Respawned_Objective_PROXY_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReadytoRespawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::MCE_ReadytoRespawn(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.MCE_ReadytoRespawn");
		
		UALI_SM_BlastRequests_C_MCE_ReadytoRespawn_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToDespawnAtEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::INV_Obj_ReadyToDespawnAtEnd(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.INV_Obj_ReadyToDespawnAtEnd");
		
		UALI_SM_BlastRequests_C_INV_Obj_ReadyToDespawnAtEnd_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.ExecuteUbergraph_ALI_SM_BlastRequests
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_BlastRequests_C::ExecuteUbergraph_ALI_SM_BlastRequests(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_BlastRequests.ALI_SM_BlastRequests_C.ExecuteUbergraph_ALI_SM_BlastRequests");
		
		UALI_SM_BlastRequests_C_ExecuteUbergraph_ALI_SM_BlastRequests_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UALI_SM_BlastRequests_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALI_SM_BlastRequests_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_BlastRequests.ALI_SM_BlastRequests_C");
		return ptr;
	}

}


