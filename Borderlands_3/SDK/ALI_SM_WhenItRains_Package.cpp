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
	 * 		Name   -> Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.OnDialogSequenceFinished_5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_WhenItRains_C::OnDialogSequenceFinished_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.OnDialogSequenceFinished_5");
		
		UALI_SM_WhenItRains_C_OnDialogSequenceFinished_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.OnDialogSequenceFinished_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_WhenItRains_C::OnDialogSequenceFinished_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.OnDialogSequenceFinished_4");
		
		UALI_SM_WhenItRains_C_OnDialogSequenceFinished_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MCE_FindUmbrella
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_WhenItRains_C::MCE_FindUmbrella(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MCE_FindUmbrella");
		
		UALI_SM_WhenItRains_C_MCE_FindUmbrella_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.Obj_FindUmbrella
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_WhenItRains_C::Obj_FindUmbrella(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.Obj_FindUmbrella");
		
		UALI_SM_WhenItRains_C_Obj_FindUmbrella_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.SET_GiveUmbrella
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_WhenItRains_C::SET_GiveUmbrella(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.SET_GiveUmbrella");
		
		UALI_SM_WhenItRains_C_SET_GiveUmbrella_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.Obj_GiveUmbrella
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_WhenItRains_C::Obj_GiveUmbrella(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.Obj_GiveUmbrella");
		
		UALI_SM_WhenItRains_C_Obj_GiveUmbrella_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MCE_GiveUmbrella
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_WhenItRains_C::MCE_GiveUmbrella(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MCE_GiveUmbrella");
		
		UALI_SM_WhenItRains_C_MCE_GiveUmbrella_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.SET_FindUmbrella
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_WhenItRains_C::SET_FindUmbrella(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.SET_FindUmbrella");
		
		UALI_SM_WhenItRains_C_SET_FindUmbrella_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MissionKickoff
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UALI_SM_WhenItRains_C::MissionKickoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.MissionKickoff");
		
		UALI_SM_WhenItRains_C_MissionKickoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.ExecuteUbergraph_ALI_SM_WhenItRains
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_WhenItRains_C::ExecuteUbergraph_ALI_SM_WhenItRains(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_WhenItRains.ALI_SM_WhenItRains_C.ExecuteUbergraph_ALI_SM_WhenItRains");
		
		UALI_SM_WhenItRains_C_ExecuteUbergraph_ALI_SM_WhenItRains_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UALI_SM_WhenItRains_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALI_SM_WhenItRains_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_WhenItRains.ALI_SM_WhenItRains_C");
		return ptr;
	}

}


