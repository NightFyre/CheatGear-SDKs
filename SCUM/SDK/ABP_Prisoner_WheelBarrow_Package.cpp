/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Prisoner_WheelBarrow_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.AnimGraph");
		
		UABP_Prisoner_WheelBarrow_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Prisoner_WheelBarrow_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.BlueprintUpdateAnimation");
		
		UABP_Prisoner_WheelBarrow_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_DD6FA0BF4B9A97E9720750AEE839BF93
	 * 		Flags  -> ()
	 */
	void UABP_Prisoner_WheelBarrow_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_DD6FA0BF4B9A97E9720750AEE839BF93()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_DD6FA0BF4B9A97E9720750AEE839BF93");
		
		UABP_Prisoner_WheelBarrow_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_DD6FA0BF4B9A97E9720750AEE839BF93_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_8E54C473464B65A805B3E48CC8E839DE
	 * 		Flags  -> ()
	 */
	void UABP_Prisoner_WheelBarrow_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_8E54C473464B65A805B3E48CC8E839DE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_8E54C473464B65A805B3E48CC8E839DE");
		
		UABP_Prisoner_WheelBarrow_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_8E54C473464B65A805B3E48CC8E839DE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.ExecuteUbergraph_ABP_Prisoner_WheelBarrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Prisoner_WheelBarrow_C::ExecuteUbergraph_ABP_Prisoner_WheelBarrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.ExecuteUbergraph_ABP_Prisoner_WheelBarrow");
		
		UABP_Prisoner_WheelBarrow_C_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Prisoner_WheelBarrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Prisoner_WheelBarrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C");
		return ptr;
	}

}


