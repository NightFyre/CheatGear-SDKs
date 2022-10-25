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
	 * 		Name   -> Function BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SM_Hyperion_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4");
		
		UBPAnim_SM_Hyperion_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SM_Hyperion_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993");
		
		UBPAnim_SM_Hyperion_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C.ExecuteUbergraph_BPAnim_SM_Hyperion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_SM_Hyperion_C::ExecuteUbergraph_BPAnim_SM_Hyperion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C.ExecuteUbergraph_BPAnim_SM_Hyperion");
		
		UBPAnim_SM_Hyperion_C_ExecuteUbergraph_BPAnim_SM_Hyperion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_SM_Hyperion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_SM_Hyperion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C");
		return ptr;
	}

}


