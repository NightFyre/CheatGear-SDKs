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
	 * 		Name   -> Function BPAnim_EFabricator.BPAnim_EFabricator_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EFabricator_AnimGraphNode_SequenceEvaluator_F2EBB1D54E3068EA2E8880B390087E6A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_EFabricator_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EFabricator_AnimGraphNode_SequenceEvaluator_F2EBB1D54E3068EA2E8880B390087E6A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_EFabricator.BPAnim_EFabricator_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EFabricator_AnimGraphNode_SequenceEvaluator_F2EBB1D54E3068EA2E8880B390087E6A");
		
		UBPAnim_EFabricator_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EFabricator_AnimGraphNode_SequenceEvaluator_F2EBB1D54E3068EA2E8880B390087E6A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_EFabricator.BPAnim_EFabricator_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EFabricator_AnimGraphNode_SequenceEvaluator_5CAE9E1842A68ABF1DBDD49BEC15DAC6
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_EFabricator_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EFabricator_AnimGraphNode_SequenceEvaluator_5CAE9E1842A68ABF1DBDD49BEC15DAC6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_EFabricator.BPAnim_EFabricator_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EFabricator_AnimGraphNode_SequenceEvaluator_5CAE9E1842A68ABF1DBDD49BEC15DAC6");
		
		UBPAnim_EFabricator_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EFabricator_AnimGraphNode_SequenceEvaluator_5CAE9E1842A68ABF1DBDD49BEC15DAC6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_EFabricator.BPAnim_EFabricator_C.ExecuteUbergraph_BPAnim_EFabricator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_EFabricator_C::ExecuteUbergraph_BPAnim_EFabricator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_EFabricator.BPAnim_EFabricator_C.ExecuteUbergraph_BPAnim_EFabricator");
		
		UBPAnim_EFabricator_C_ExecuteUbergraph_BPAnim_EFabricator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_EFabricator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_EFabricator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_EFabricator.BPAnim_EFabricator_C");
		return ptr;
	}

}


