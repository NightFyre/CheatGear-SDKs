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
	 * 		Name   -> Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SG_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9");
		
		UBPAnim_SG_JAK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SG_JAK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368");
		
		UBPAnim_SG_JAK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.ExecuteUbergraph_BPAnim_SG_JAK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_SG_JAK_C::ExecuteUbergraph_BPAnim_SG_JAK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SG_JAK.BPAnim_SG_JAK_C.ExecuteUbergraph_BPAnim_SG_JAK");
		
		UBPAnim_SG_JAK_C_ExecuteUbergraph_BPAnim_SG_JAK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_SG_JAK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_SG_JAK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SG_JAK.BPAnim_SG_JAK_C");
		return ptr;
	}

}


