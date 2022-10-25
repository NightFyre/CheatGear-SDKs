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
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.OnDialogSequenceFinished_7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::OnDialogSequenceFinished_7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.OnDialogSequenceFinished_7");
		
		USideMission_DLC2_Bounty_DebtCollector_C_OnDialogSequenceFinished_7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.OnDialogSequenceFinished_6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::OnDialogSequenceFinished_6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.OnDialogSequenceFinished_6");
		
		USideMission_DLC2_Bounty_DebtCollector_C_OnDialogSequenceFinished_6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.OnDialogSequenceFinished_5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::OnDialogSequenceFinished_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.OnDialogSequenceFinished_5");
		
		USideMission_DLC2_Bounty_DebtCollector_C_OnDialogSequenceFinished_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_FindGideon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::MCE_FindGideon(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_FindGideon");
		
		USideMission_DLC2_Bounty_DebtCollector_C_MCE_FindGideon_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Set_DestroyBottles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::Set_DestroyBottles(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Set_DestroyBottles");
		
		USideMission_DLC2_Bounty_DebtCollector_C_Set_DestroyBottles_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_DestroyBottles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::Obj_DestroyBottles(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_DestroyBottles");
		
		USideMission_DLC2_Bounty_DebtCollector_C_Obj_DestroyBottles_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_DestroyBottles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::MCE_DestroyBottles(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_DestroyBottles");
		
		USideMission_DLC2_Bounty_DebtCollector_C_MCE_DestroyBottles_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MissionKickoff
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::MissionKickoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MissionKickoff");
		
		USideMission_DLC2_Bounty_DebtCollector_C_MissionKickoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_FindGideon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::Obj_FindGideon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_FindGideon");
		
		USideMission_DLC2_Bounty_DebtCollector_C_Obj_FindGideon_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Set_KillGideon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::Set_KillGideon(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Set_KillGideon");
		
		USideMission_DLC2_Bounty_DebtCollector_C_Set_KillGideon_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_KillGideon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::Obj_KillGideon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_KillGideon");
		
		USideMission_DLC2_Bounty_DebtCollector_C_Obj_KillGideon_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_KillGideon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::MCE_KillGideon(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_KillGideon");
		
		USideMission_DLC2_Bounty_DebtCollector_C_MCE_KillGideon_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Set_FindGideon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::Set_FindGideon(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Set_FindGideon");
		
		USideMission_DLC2_Bounty_DebtCollector_C_Set_FindGideon_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_INV_DestroyBottles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::Obj_INV_DestroyBottles(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.Obj_INV_DestroyBottles");
		
		USideMission_DLC2_Bounty_DebtCollector_C_Obj_INV_DestroyBottles_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_INV_DestroyBottles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::MCE_INV_DestroyBottles(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.MCE_INV_DestroyBottles");
		
		USideMission_DLC2_Bounty_DebtCollector_C_MCE_INV_DestroyBottles_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.ExecuteUbergraph_SideMission_DLC2_Bounty_DebtCollector
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USideMission_DLC2_Bounty_DebtCollector_C::ExecuteUbergraph_SideMission_DLC2_Bounty_DebtCollector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C.ExecuteUbergraph_SideMission_DLC2_Bounty_DebtCollector");
		
		USideMission_DLC2_Bounty_DebtCollector_C_ExecuteUbergraph_SideMission_DLC2_Bounty_DebtCollector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USideMission_DLC2_Bounty_DebtCollector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USideMission_DLC2_Bounty_DebtCollector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SideMission_DLC2_Bounty_DebtCollector.SideMission_DLC2_Bounty_DebtCollector_C");
		return ptr;
	}

}


