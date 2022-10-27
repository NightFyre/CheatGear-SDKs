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
	 * 		Name   -> Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C");
		
		UBPAnim_SR_DAL_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SR_DAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F");
		
		UBPAnim_SR_DAL_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.ExecuteUbergraph_BPAnim_SR_DAL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_SR_DAL_C::ExecuteUbergraph_BPAnim_SR_DAL(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SR_DAL.BPAnim_SR_DAL_C.ExecuteUbergraph_BPAnim_SR_DAL");
		
		UBPAnim_SR_DAL_C_ExecuteUbergraph_BPAnim_SR_DAL_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_SR_DAL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_SR_DAL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SR_DAL.BPAnim_SR_DAL_C");
		return ptr;
	}

}


