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
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_StrongBones_C::OnDialogSequenceFinished_9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_9");
		
		UALI_SM_StrongBones_C_OnDialogSequenceFinished_9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_StrongBones_C::OnDialogSequenceFinished_8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_8");
		
		UALI_SM_StrongBones_C_OnDialogSequenceFinished_8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_StrongBones_C::OnDialogSequenceFinished_7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_7");
		
		UALI_SM_StrongBones_C_OnDialogSequenceFinished_7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UALI_SM_StrongBones_C::OnDialogSequenceFinished_6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.OnDialogSequenceFinished_6");
		
		UALI_SM_StrongBones_C_OnDialogSequenceFinished_6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MCE_DrinkYourMilk_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_StrongBones_C::MCE_DrinkYourMilk_2(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MCE_DrinkYourMilk_2");
		
		UALI_SM_StrongBones_C_MCE_DrinkYourMilk_2_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.Obj_DrinkYourMilk_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_StrongBones_C::Obj_DrinkYourMilk_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.Obj_DrinkYourMilk_2");
		
		UALI_SM_StrongBones_C_Obj_DrinkYourMilk_2_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.SET_DrinkYourMilk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_StrongBones_C::SET_DrinkYourMilk(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.SET_DrinkYourMilk");
		
		UALI_SM_StrongBones_C_SET_DrinkYourMilk_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MissionKickoff
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UALI_SM_StrongBones_C::MissionKickoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MissionKickoff");
		
		UALI_SM_StrongBones_C_MissionKickoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.Obj_DrinkYourMilk_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_StrongBones_C::Obj_DrinkYourMilk_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.Obj_DrinkYourMilk_3");
		
		UALI_SM_StrongBones_C_Obj_DrinkYourMilk_3_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MCE_DrinkYourMilk_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_StrongBones_C::MCE_DrinkYourMilk_3(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MCE_DrinkYourMilk_3");
		
		UALI_SM_StrongBones_C_MCE_DrinkYourMilk_3_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.Obj_DrinkYourMilk_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_StrongBones_C::Obj_DrinkYourMilk_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.Obj_DrinkYourMilk_4");
		
		UALI_SM_StrongBones_C_Obj_DrinkYourMilk_4_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MCE_DrinkYourMilk_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_StrongBones_C::MCE_DrinkYourMilk_4(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.MCE_DrinkYourMilk_4");
		
		UALI_SM_StrongBones_C_MCE_DrinkYourMilk_4_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.ExecuteUbergraph_ALI_SM_StrongBones
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALI_SM_StrongBones_C::ExecuteUbergraph_ALI_SM_StrongBones(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ALI_SM_StrongBones.ALI_SM_StrongBones_C.ExecuteUbergraph_ALI_SM_StrongBones");
		
		UALI_SM_StrongBones_C_ExecuteUbergraph_ALI_SM_StrongBones_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UALI_SM_StrongBones_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALI_SM_StrongBones_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALI_SM_StrongBones.ALI_SM_StrongBones_C");
		return ptr;
	}

}


