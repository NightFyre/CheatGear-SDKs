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
	 * 		Name   -> Function BPAnim_HW_TOR.BPAnim_HW_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_HW_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_HW_TOR.BPAnim_HW_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6");
		
		UBPAnim_HW_TOR_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_HW_TOR.BPAnim_HW_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_HW_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_HW_TOR.BPAnim_HW_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3");
		
		UBPAnim_HW_TOR_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_HW_TOR.BPAnim_HW_TOR_C.ExecuteUbergraph_BPAnim_HW_TOR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_HW_TOR_C::ExecuteUbergraph_BPAnim_HW_TOR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_HW_TOR.BPAnim_HW_TOR_C.ExecuteUbergraph_BPAnim_HW_TOR");
		
		UBPAnim_HW_TOR_C_ExecuteUbergraph_BPAnim_HW_TOR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_HW_TOR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_HW_TOR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_HW_TOR.BPAnim_HW_TOR_C");
		return ptr;
	}

}


