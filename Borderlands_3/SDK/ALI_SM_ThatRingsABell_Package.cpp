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
	 * 		Name   -> Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_ThatRingsABell_C::OnDialogSequenceFinished_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_5");
		
		UALI_SM_ThatRingsABell_C_OnDialogSequenceFinished_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_ThatRingsABell_C::OnDialogSequenceFinished_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.OnDialogSequenceFinished_4");
		
		UALI_SM_ThatRingsABell_C_OnDialogSequenceFinished_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MCE_RingABell
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ThatRingsABell_C::MCE_RingABell(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MCE_RingABell");
		
		UALI_SM_ThatRingsABell_C_MCE_RingABell_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.Obj_RingABell
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ThatRingsABell_C::Obj_RingABell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.Obj_RingABell");
		
		UALI_SM_ThatRingsABell_C_Obj_RingABell_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.SET_RingABell
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ThatRingsABell_C::SET_RingABell(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.SET_RingABell");
		
		UALI_SM_ThatRingsABell_C_SET_RingABell_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MissionKickoff
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UALI_SM_ThatRingsABell_C::MissionKickoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.MissionKickoff");
		
		UALI_SM_ThatRingsABell_C_MissionKickoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.ExecuteUbergraph_ALI_SM_ThatRingsABell
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_ThatRingsABell_C::ExecuteUbergraph_ALI_SM_ThatRingsABell(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C.ExecuteUbergraph_ALI_SM_ThatRingsABell");
		
		UALI_SM_ThatRingsABell_C_ExecuteUbergraph_ALI_SM_ThatRingsABell_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UALI_SM_ThatRingsABell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALI_SM_ThatRingsABell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_ThatRingsABell.ALI_SM_ThatRingsABell_C");
		return ptr;
	}

}


