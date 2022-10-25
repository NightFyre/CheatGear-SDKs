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
	 * 		Name   -> Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_PS_Jakobs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574");
		
		UBPAnim_PS_Jakobs_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_PS_Jakobs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958");
		
		UBPAnim_PS_Jakobs_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.ExecuteUbergraph_BPAnim_PS_Jakobs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_PS_Jakobs_C::ExecuteUbergraph_BPAnim_PS_Jakobs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C.ExecuteUbergraph_BPAnim_PS_Jakobs");
		
		UBPAnim_PS_Jakobs_C_ExecuteUbergraph_BPAnim_PS_Jakobs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_PS_Jakobs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_PS_Jakobs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C");
		return ptr;
	}

}


