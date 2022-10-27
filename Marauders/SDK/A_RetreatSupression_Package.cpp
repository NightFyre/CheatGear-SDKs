/**
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
	 * 		Name   -> Function A_RetreatSupression.A_RetreatSupression_C.checkProceduralPrecondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UA_RetreatSupression_C::checkProceduralPrecondition(class ARaidGOAPController* P)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_RetreatSupression.A_RetreatSupression_C.checkProceduralPrecondition");
		
		UA_RetreatSupression_C_checkProceduralPrecondition_Params params {};
		params.P = P;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_RetreatSupression.A_RetreatSupression_C.MoveInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     atLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveRequest                                       Branches                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_RetreatSupression_C::MoveInfo(const struct FVector& atLocation, EMoveRequest Branches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_RetreatSupression.A_RetreatSupression_C.MoveInfo");
		
		UA_RetreatSupression_C_MoveInfo_Params params {};
		params.atLocation = atLocation;
		params.Branches = Branches;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_RetreatSupression.A_RetreatSupression_C.StartAction
	 * 		Flags  -> ()
	 */
	void UA_RetreatSupression_C::StartAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_RetreatSupression.A_RetreatSupression_C.StartAction");
		
		UA_RetreatSupression_C_StartAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_RetreatSupression.A_RetreatSupression_C.LookTowardsTarget
	 * 		Flags  -> ()
	 */
	void UA_RetreatSupression_C::LookTowardsTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_RetreatSupression.A_RetreatSupression_C.LookTowardsTarget");
		
		UA_RetreatSupression_C_LookTowardsTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_RetreatSupression.A_RetreatSupression_C.ShootAtPlayer
	 * 		Flags  -> ()
	 */
	void UA_RetreatSupression_C::ShootAtPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_RetreatSupression.A_RetreatSupression_C.ShootAtPlayer");
		
		UA_RetreatSupression_C_ShootAtPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_RetreatSupression.A_RetreatSupression_C.RunToCover
	 * 		Flags  -> ()
	 */
	void UA_RetreatSupression_C::RunToCover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_RetreatSupression.A_RetreatSupression_C.RunToCover");
		
		UA_RetreatSupression_C_RunToCover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_RetreatSupression.A_RetreatSupression_C.CleanupAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_RetreatSupression_C::CleanupAction(class ARaidGOAPController* P)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_RetreatSupression.A_RetreatSupression_C.CleanupAction");
		
		UA_RetreatSupression_C_CleanupAction_Params params {};
		params.P = P;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_RetreatSupression.A_RetreatSupression_C.ResetDoOnce
	 * 		Flags  -> ()
	 */
	void UA_RetreatSupression_C::ResetDoOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_RetreatSupression.A_RetreatSupression_C.ResetDoOnce");
		
		UA_RetreatSupression_C_ResetDoOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function A_RetreatSupression.A_RetreatSupression_C.ExecuteUbergraph_A_RetreatSupression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_RetreatSupression_C::ExecuteUbergraph_A_RetreatSupression(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_RetreatSupression.A_RetreatSupression_C.ExecuteUbergraph_A_RetreatSupression");
		
		UA_RetreatSupression_C_ExecuteUbergraph_A_RetreatSupression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_RetreatSupression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_RetreatSupression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_RetreatSupression.A_RetreatSupression_C");
		return ptr;
	}

}


