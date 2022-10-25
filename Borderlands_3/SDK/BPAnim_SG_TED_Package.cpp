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
	 * 		Name   -> Function BPAnim_SG_TED.BPAnim_SG_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SG_TED_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SG_TED.BPAnim_SG_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0");
		
		UBPAnim_SG_TED_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SG_TED.BPAnim_SG_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SG_TED_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SG_TED.BPAnim_SG_TED_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547");
		
		UBPAnim_SG_TED_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SG_TED.BPAnim_SG_TED_C.ExecuteUbergraph_BPAnim_SG_TED
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_SG_TED_C::ExecuteUbergraph_BPAnim_SG_TED(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SG_TED.BPAnim_SG_TED_C.ExecuteUbergraph_BPAnim_SG_TED");
		
		UBPAnim_SG_TED_C_ExecuteUbergraph_BPAnim_SG_TED_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_SG_TED_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_SG_TED_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SG_TED.BPAnim_SG_TED_C");
		return ptr;
	}

}


