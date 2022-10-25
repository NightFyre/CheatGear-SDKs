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
	 * 		Name   -> Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SR_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D");
		
		UBPAnim_SR_JAK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SR_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2");
		
		UBPAnim_SR_JAK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.ExecuteUbergraph_BPAnim_SR_JAK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_SR_JAK_C::ExecuteUbergraph_BPAnim_SR_JAK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SR_JAK.BPAnim_SR_JAK_C.ExecuteUbergraph_BPAnim_SR_JAK");
		
		UBPAnim_SR_JAK_C_ExecuteUbergraph_BPAnim_SR_JAK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_SR_JAK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_SR_JAK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SR_JAK.BPAnim_SR_JAK_C");
		return ptr;
	}

}


