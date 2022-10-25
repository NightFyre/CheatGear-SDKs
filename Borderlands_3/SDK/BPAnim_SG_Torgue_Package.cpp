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
	 * 		Name   -> Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SG_Torgue_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C");
		
		UBPAnim_SG_Torgue_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SG_Torgue_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D");
		
		UBPAnim_SG_Torgue_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.ExecuteUbergraph_BPAnim_SG_Torgue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_SG_Torgue_C::ExecuteUbergraph_BPAnim_SG_Torgue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SG_Torgue.BPAnim_SG_Torgue_C.ExecuteUbergraph_BPAnim_SG_Torgue");
		
		UBPAnim_SG_Torgue_C_ExecuteUbergraph_BPAnim_SG_Torgue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_SG_Torgue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_SG_Torgue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SG_Torgue.BPAnim_SG_Torgue_C");
		return ptr;
	}

}


