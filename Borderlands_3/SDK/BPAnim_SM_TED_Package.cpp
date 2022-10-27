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
	 * 		Name   -> Function BPAnim_SM_TED.BPAnim_SM_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SM_TED_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SM_TED.BPAnim_SM_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D");
		
		UBPAnim_SM_TED_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_DA62D8B042FAE64A846B128EFFA8651D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SM_TED.BPAnim_SM_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SM_TED_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SM_TED.BPAnim_SM_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087");
		
		UBPAnim_SM_TED_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_TED_AnimGraphNode_SequenceEvaluator_A7F60B404A5B97825FEC2B8BFE63D087_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SM_TED.BPAnim_SM_TED_C.ExecuteUbergraph_BPAnim_SM_TED
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_SM_TED_C::ExecuteUbergraph_BPAnim_SM_TED(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SM_TED.BPAnim_SM_TED_C.ExecuteUbergraph_BPAnim_SM_TED");
		
		UBPAnim_SM_TED_C_ExecuteUbergraph_BPAnim_SM_TED_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_SM_TED_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_SM_TED_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SM_TED.BPAnim_SM_TED_C");
		return ptr;
	}

}


