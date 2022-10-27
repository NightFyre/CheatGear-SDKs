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
	 * 		Name   -> Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SR_HYP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906");
		
		UBPAnim_SR_HYP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SR_HYP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857");
		
		UBPAnim_SR_HYP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.ExecuteUbergraph_BPAnim_SR_HYP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_SR_HYP_C::ExecuteUbergraph_BPAnim_SR_HYP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SR_HYP.BPAnim_SR_HYP_C.ExecuteUbergraph_BPAnim_SR_HYP");
		
		UBPAnim_SR_HYP_C_ExecuteUbergraph_BPAnim_SR_HYP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_SR_HYP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_SR_HYP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SR_HYP.BPAnim_SR_HYP_C");
		return ptr;
	}

}


