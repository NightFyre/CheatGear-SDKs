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
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.OnDialogSequenceFinished_7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_ParadeHarpoon_C::OnDialogSequenceFinished_7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.OnDialogSequenceFinished_7");
		
		UALI_SM_ParadeHarpoon_C_OnDialogSequenceFinished_7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.OnDialogSequenceFinished_6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_ParadeHarpoon_C::OnDialogSequenceFinished_6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.OnDialogSequenceFinished_6");
		
		UALI_SM_ParadeHarpoon_C_OnDialogSequenceFinished_6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.OnDialogSequenceFinished_5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_ParadeHarpoon_C::OnDialogSequenceFinished_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.OnDialogSequenceFinished_5");
		
		UALI_SM_ParadeHarpoon_C_OnDialogSequenceFinished_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.SET_TakeHarpoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ParadeHarpoon_C::SET_TakeHarpoon(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.SET_TakeHarpoon");
		
		UALI_SM_ParadeHarpoon_C_SET_TakeHarpoon_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.Obj_TakeHarpoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ParadeHarpoon_C::Obj_TakeHarpoon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.Obj_TakeHarpoon");
		
		UALI_SM_ParadeHarpoon_C_Obj_TakeHarpoon_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MCE_TakeHarpoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ParadeHarpoon_C::MCE_TakeHarpoon(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MCE_TakeHarpoon");
		
		UALI_SM_ParadeHarpoon_C_MCE_TakeHarpoon_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MCE_FindHarpoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ParadeHarpoon_C::MCE_FindHarpoon(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MCE_FindHarpoon");
		
		UALI_SM_ParadeHarpoon_C_MCE_FindHarpoon_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.Obj_FindHarpoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ParadeHarpoon_C::Obj_FindHarpoon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.Obj_FindHarpoon");
		
		UALI_SM_ParadeHarpoon_C_Obj_FindHarpoon_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.SET_GiveHarpoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ParadeHarpoon_C::SET_GiveHarpoon(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.SET_GiveHarpoon");
		
		UALI_SM_ParadeHarpoon_C_SET_GiveHarpoon_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.Obj_GiveHarpoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ParadeHarpoon_C::Obj_GiveHarpoon(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.Obj_GiveHarpoon");
		
		UALI_SM_ParadeHarpoon_C_Obj_GiveHarpoon_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MCE_GiveHarpoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ParadeHarpoon_C::MCE_GiveHarpoon(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MCE_GiveHarpoon");
		
		UALI_SM_ParadeHarpoon_C_MCE_GiveHarpoon_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.SET_FindHarpoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ParadeHarpoon_C::SET_FindHarpoon(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.SET_FindHarpoon");
		
		UALI_SM_ParadeHarpoon_C_SET_FindHarpoon_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MissionKickoff
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UALI_SM_ParadeHarpoon_C::MissionKickoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.MissionKickoff");
		
		UALI_SM_ParadeHarpoon_C_MissionKickoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.ExecuteUbergraph_ALI_SM_ParadeHarpoon
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ParadeHarpoon_C::ExecuteUbergraph_ALI_SM_ParadeHarpoon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C.ExecuteUbergraph_ALI_SM_ParadeHarpoon");
		
		UALI_SM_ParadeHarpoon_C_ExecuteUbergraph_ALI_SM_ParadeHarpoon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UALI_SM_ParadeHarpoon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALI_SM_ParadeHarpoon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_ParadeHarpoon.ALI_SM_ParadeHarpoon_C");
		return ptr;
	}

}


