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
	 * 		Name   -> Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_AR_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F");
		
		UBPAnim_AR_TOR_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_AR_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5");
		
		UBPAnim_AR_TOR_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.ExecuteUbergraph_BPAnim_AR_TOR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_AR_TOR_C::ExecuteUbergraph_BPAnim_AR_TOR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_AR_TOR.BPAnim_AR_TOR_C.ExecuteUbergraph_BPAnim_AR_TOR");
		
		UBPAnim_AR_TOR_C_ExecuteUbergraph_BPAnim_AR_TOR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_AR_TOR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_AR_TOR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_AR_TOR.BPAnim_AR_TOR_C");
		return ptr;
	}

}


