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
	 * 		Name   -> Function BPAnim_AR_COV.BPAnim_AR_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_AR_COV_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_AR_COV.BPAnim_AR_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786");
		
		UBPAnim_AR_COV_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_AR_COV.BPAnim_AR_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_AR_COV_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_AR_COV.BPAnim_AR_COV_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6");
		
		UBPAnim_AR_COV_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_AR_COV.BPAnim_AR_COV_C.ExecuteUbergraph_BPAnim_AR_COV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_AR_COV_C::ExecuteUbergraph_BPAnim_AR_COV(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_AR_COV.BPAnim_AR_COV_C.ExecuteUbergraph_BPAnim_AR_COV");
		
		UBPAnim_AR_COV_C_ExecuteUbergraph_BPAnim_AR_COV_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_AR_COV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_AR_COV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_AR_COV.BPAnim_AR_COV_C");
		return ptr;
	}

}


