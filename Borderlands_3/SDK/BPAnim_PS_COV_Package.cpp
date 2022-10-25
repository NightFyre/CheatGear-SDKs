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
	 * 		Name   -> Function BPAnim_PS_COV.BPAnim_PS_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_PS_COV_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_COV.BPAnim_PS_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB");
		
		UBPAnim_PS_COV_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_PS_COV.BPAnim_PS_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_PS_COV_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_COV.BPAnim_PS_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8");
		
		UBPAnim_PS_COV_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_PS_COV.BPAnim_PS_COV_C.ExecuteUbergraph_BPAnim_PS_COV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_PS_COV_C::ExecuteUbergraph_BPAnim_PS_COV(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_COV.BPAnim_PS_COV_C.ExecuteUbergraph_BPAnim_PS_COV");
		
		UBPAnim_PS_COV_C_ExecuteUbergraph_BPAnim_PS_COV_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_PS_COV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_PS_COV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_PS_COV.BPAnim_PS_COV_C");
		return ptr;
	}

}


