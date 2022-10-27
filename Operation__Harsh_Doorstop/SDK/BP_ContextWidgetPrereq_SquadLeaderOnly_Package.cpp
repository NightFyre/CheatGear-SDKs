/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ContextWidgetPrereq_SquadLeaderOnly.BP_ContextWidgetPrereq_SquadLeaderOnly_C.IsValidContext
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bValidData                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ContextWidgetPrereq_SquadLeaderOnly_C::IsValidContext(bool* bValidData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextWidgetPrereq_SquadLeaderOnly.BP_ContextWidgetPrereq_SquadLeaderOnly_C.IsValidContext");
		
		UBP_ContextWidgetPrereq_SquadLeaderOnly_C_IsValidContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidData != nullptr)
			*bValidData = params.bValidData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ContextWidgetPrereq_SquadLeaderOnly.BP_ContextWidgetPrereq_SquadLeaderOnly_C.SatisfiesPrerequisite
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UBP_ContextWidgetPrereq_SquadLeaderOnly_C::SatisfiesPrerequisite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextWidgetPrereq_SquadLeaderOnly.BP_ContextWidgetPrereq_SquadLeaderOnly_C.SatisfiesPrerequisite");
		
		UBP_ContextWidgetPrereq_SquadLeaderOnly_C_SatisfiesPrerequisite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_ContextWidgetPrereq_SquadLeaderOnly.BP_ContextWidgetPrereq_SquadLeaderOnly_C.SetupContext
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               InMemberSQState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              InMemberPSToTest                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ContextWidgetPrereq_SquadLeaderOnly_C::SetupContext(class AHDSquadState* InMemberSQState, class AHDPlayerState* InMemberPSToTest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextWidgetPrereq_SquadLeaderOnly.BP_ContextWidgetPrereq_SquadLeaderOnly_C.SetupContext");
		
		UBP_ContextWidgetPrereq_SquadLeaderOnly_C_SetupContext_Params params {};
		params.InMemberSQState = InMemberSQState;
		params.InMemberPSToTest = InMemberPSToTest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ContextWidgetPrereq_SquadLeaderOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ContextWidgetPrereq_SquadLeaderOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ContextWidgetPrereq_SquadLeaderOnly.BP_ContextWidgetPrereq_SquadLeaderOnly_C");
		return ptr;
	}

}


