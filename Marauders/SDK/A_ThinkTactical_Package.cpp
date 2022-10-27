﻿/**
 * Name: Marauders
 * Version: 642675-attempt2
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_ThinkTactical.A_ThinkTactical_C.checkProceduralPrecondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UA_ThinkTactical_C::checkProceduralPrecondition(class ARaidGOAPController* P)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_ThinkTactical.A_ThinkTactical_C.checkProceduralPrecondition");
		
		UA_ThinkTactical_C_checkProceduralPrecondition_Params params {};
		params.P = P;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_ThinkTactical.A_ThinkTactical_C.LookTowardsTarget
	 * 		Flags  -> ()
	 */
	void UA_ThinkTactical_C::LookTowardsTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_ThinkTactical.A_ThinkTactical_C.LookTowardsTarget");
		
		UA_ThinkTactical_C_LookTowardsTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_ThinkTactical.A_ThinkTactical_C.StartAction
	 * 		Flags  -> ()
	 */
	void UA_ThinkTactical_C::StartAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_ThinkTactical.A_ThinkTactical_C.StartAction");
		
		UA_ThinkTactical_C_StartAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_ThinkTactical.A_ThinkTactical_C.CleanupAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_ThinkTactical_C::CleanupAction(class ARaidGOAPController* P)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_ThinkTactical.A_ThinkTactical_C.CleanupAction");
		
		UA_ThinkTactical_C_CleanupAction_Params params {};
		params.P = P;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_ThinkTactical.A_ThinkTactical_C.MoveInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     atLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveRequest                                       Branches                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_ThinkTactical_C::MoveInfo(const struct FVector& atLocation, EMoveRequest Branches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_ThinkTactical.A_ThinkTactical_C.MoveInfo");
		
		UA_ThinkTactical_C_MoveInfo_Params params {};
		params.atLocation = atLocation;
		params.Branches = Branches;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_ThinkTactical.A_ThinkTactical_C.ExecuteUbergraph_A_ThinkTactical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_ThinkTactical_C::ExecuteUbergraph_A_ThinkTactical(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_ThinkTactical.A_ThinkTactical_C.ExecuteUbergraph_A_ThinkTactical");
		
		UA_ThinkTactical_C_ExecuteUbergraph_A_ThinkTactical_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_ThinkTactical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_ThinkTactical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_ThinkTactical.A_ThinkTactical_C");
		return ptr;
	}

}


