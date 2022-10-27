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
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.OnDialogSequenceFinished_5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMission_Ixora_VarkidBoss_C::OnDialogSequenceFinished_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.OnDialogSequenceFinished_5");
		
		UMission_Ixora_VarkidBoss_C_OnDialogSequenceFinished_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.OnDialogSequenceFinished_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMission_Ixora_VarkidBoss_C::OnDialogSequenceFinished_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.OnDialogSequenceFinished_4");
		
		UMission_Ixora_VarkidBoss_C_OnDialogSequenceFinished_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_FindBoss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Set_FindBoss(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_FindBoss");
		
		UMission_Ixora_VarkidBoss_C_Set_FindBoss_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_FindBoss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_FindBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_FindBoss");
		
		UMission_Ixora_VarkidBoss_C_Obj_FindBoss_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_FindBoss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::MCE_Update_FindBoss(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_FindBoss");
		
		UMission_Ixora_VarkidBoss_C_MCE_Update_FindBoss_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_OpenEridiumDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Set_OpenEridiumDoor(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_OpenEridiumDoor");
		
		UMission_Ixora_VarkidBoss_C_Set_OpenEridiumDoor_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_OpenEridiumDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_OpenEridiumDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_OpenEridiumDoor");
		
		UMission_Ixora_VarkidBoss_C_Obj_OpenEridiumDoor_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.[Obj_FindBoss_Objective] PROXY
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_FindBoss_Objective_PROXY()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.[Obj_FindBoss_Objective] PROXY");
		
		UMission_Ixora_VarkidBoss_C_Obj_FindBoss_Objective_PROXY_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_FindEridiumDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_FindEridiumDoor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_FindEridiumDoor");
		
		UMission_Ixora_VarkidBoss_C_Obj_FindEridiumDoor_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_KillBoss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::MCE_Update_KillBoss(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_KillBoss");
		
		UMission_Ixora_VarkidBoss_C_MCE_Update_KillBoss_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_KillBoss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_KillBoss");
		
		UMission_Ixora_VarkidBoss_C_Obj_KillBoss_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_OpenEridiumDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::MCE_Update_OpenEridiumDoor(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_OpenEridiumDoor");
		
		UMission_Ixora_VarkidBoss_C_MCE_Update_OpenEridiumDoor_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_FindEridiumDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::MCE_Update_FindEridiumDoor(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_FindEridiumDoor");
		
		UMission_Ixora_VarkidBoss_C_MCE_Update_FindEridiumDoor_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_GoToMap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::MCE_Update_GoToMap(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_GoToMap");
		
		UMission_Ixora_VarkidBoss_C_MCE_Update_GoToMap_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_GoToMap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_GoToMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_GoToMap");
		
		UMission_Ixora_VarkidBoss_C_Obj_GoToMap_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_KillBoss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_KillBoss");
		
		UMission_Ixora_VarkidBoss_C_Set_KillBoss_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_GoToMap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Set_GoToMap(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_GoToMap");
		
		UMission_Ixora_VarkidBoss_C_Set_GoToMap_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MissionKickoff
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMission_Ixora_VarkidBoss_C::MissionKickoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MissionKickoff");
		
		UMission_Ixora_VarkidBoss_C_MissionKickoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_EnterBossArena
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Set_EnterBossArena(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_EnterBossArena");
		
		UMission_Ixora_VarkidBoss_C_Set_EnterBossArena_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.[Obj_FindBoss_Objective] PROXY_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_FindBoss_Objective_PROXY_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.[Obj_FindBoss_Objective] PROXY_1");
		
		UMission_Ixora_VarkidBoss_C_Obj_FindBoss_Objective_PROXY_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_BC1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_BC1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_BC1");
		
		UMission_Ixora_VarkidBoss_C_Obj_BC1_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_BC2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_BC2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_BC2");
		
		UMission_Ixora_VarkidBoss_C_Obj_BC2_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_BC1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::MCE_Update_BC1(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_BC1");
		
		UMission_Ixora_VarkidBoss_C_MCE_Update_BC1_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_BC2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::MCE_Update_BC2(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_BC2");
		
		UMission_Ixora_VarkidBoss_C_MCE_Update_BC2_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_StartingEridium
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_StartingEridium(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_StartingEridium");
		
		UMission_Ixora_VarkidBoss_C_Obj_StartingEridium_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_StartingEridium
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::MCE_Update_StartingEridium(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_StartingEridium");
		
		UMission_Ixora_VarkidBoss_C_MCE_Update_StartingEridium_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_DoorUnlock_INV
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::Obj_DoorUnlock_INV(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_DoorUnlock_INV");
		
		UMission_Ixora_VarkidBoss_C_Obj_DoorUnlock_INV_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_DoorUnlock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::MCE_Update_DoorUnlock(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_DoorUnlock");
		
		UMission_Ixora_VarkidBoss_C_MCE_Update_DoorUnlock_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.ExecuteUbergraph_Mission_Ixora_VarkidBoss
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Ixora_VarkidBoss_C::ExecuteUbergraph_Mission_Ixora_VarkidBoss(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.ExecuteUbergraph_Mission_Ixora_VarkidBoss");
		
		UMission_Ixora_VarkidBoss_C_ExecuteUbergraph_Mission_Ixora_VarkidBoss_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMission_Ixora_VarkidBoss_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMission_Ixora_VarkidBoss_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C");
		return ptr;
	}

}


