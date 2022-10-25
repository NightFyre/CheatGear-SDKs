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
	 * 		Name   -> Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.FootIK
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InLocoPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   FootIK                                                     (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_SharedIK_C::FootIK(const struct FPoseLink& InLocoPose, struct FPoseLink* FootIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.FootIK");
		
		UABP_HDPlayerCharacter_SharedIK_C_FootIK_Params params {};
		params.InLocoPose = InLocoPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FootIK != nullptr)
			*FootIK = params.FootIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.HandIK
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InLocoPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   HandIK                                                     (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_SharedIK_C::HandIK(const struct FPoseLink& InLocoPose, struct FPoseLink* HandIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.HandIK");
		
		UABP_HDPlayerCharacter_SharedIK_C_HandIK_Params params {};
		params.InLocoPose = InLocoPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HandIK != nullptr)
			*HandIK = params.HandIK;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDPlayerCharacter_SharedIK_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.AnimGraph");
		
		UABP_HDPlayerCharacter_SharedIK_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDPlayerCharacter_SharedIK_C::ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK");
		
		UABP_HDPlayerCharacter_SharedIK_C_ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_HDPlayerCharacter_SharedIK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_HDPlayerCharacter_SharedIK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C");
		return ptr;
	}

}


