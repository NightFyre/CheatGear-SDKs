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
	 * 		Name   -> Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.OnDialogSequenceFinished_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMission_CitizenScience_Intro_C::OnDialogSequenceFinished_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.OnDialogSequenceFinished_3");
		
		UMission_CitizenScience_Intro_C_OnDialogSequenceFinished_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Set_InteractWithMachine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_CitizenScience_Intro_C::Set_InteractWithMachine(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Set_InteractWithMachine");
		
		UMission_CitizenScience_Intro_C_Set_InteractWithMachine_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Obj_InteractWithMachine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_CitizenScience_Intro_C::Obj_InteractWithMachine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.Obj_InteractWithMachine");
		
		UMission_CitizenScience_Intro_C_Obj_InteractWithMachine_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MissionKickoff
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMission_CitizenScience_Intro_C::MissionKickoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MissionKickoff");
		
		UMission_CitizenScience_Intro_C_MissionKickoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MCE_InteractedWithMachine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_CitizenScience_Intro_C::MCE_InteractedWithMachine(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.MCE_InteractedWithMachine");
		
		UMission_CitizenScience_Intro_C_MCE_InteractedWithMachine_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.ExecuteUbergraph_Mission_CitizenScience_Intro
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_CitizenScience_Intro_C::ExecuteUbergraph_Mission_CitizenScience_Intro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C.ExecuteUbergraph_Mission_CitizenScience_Intro");
		
		UMission_CitizenScience_Intro_C_ExecuteUbergraph_Mission_CitizenScience_Intro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMission_CitizenScience_Intro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMission_CitizenScience_Intro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mission_CitizenScience_Intro.Mission_CitizenScience_Intro_C");
		return ptr;
	}

}


