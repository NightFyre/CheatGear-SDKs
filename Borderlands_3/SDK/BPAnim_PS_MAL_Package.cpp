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
	 * 		Name   -> Function BPAnim_PS_MAL.BPAnim_PS_MAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_MAL_AnimGraphNode_SequenceEvaluator_CB21E8844ADFB9D42985849B85A1A18E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_PS_MAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_MAL_AnimGraphNode_SequenceEvaluator_CB21E8844ADFB9D42985849B85A1A18E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_MAL.BPAnim_PS_MAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_MAL_AnimGraphNode_SequenceEvaluator_CB21E8844ADFB9D42985849B85A1A18E");
		
		UBPAnim_PS_MAL_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_MAL_AnimGraphNode_SequenceEvaluator_CB21E8844ADFB9D42985849B85A1A18E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_PS_MAL.BPAnim_PS_MAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_MAL_AnimGraphNode_SequenceEvaluator_570623C2490A645BA98039BE822A9CD9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_PS_MAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_MAL_AnimGraphNode_SequenceEvaluator_570623C2490A645BA98039BE822A9CD9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_MAL.BPAnim_PS_MAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_MAL_AnimGraphNode_SequenceEvaluator_570623C2490A645BA98039BE822A9CD9");
		
		UBPAnim_PS_MAL_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_MAL_AnimGraphNode_SequenceEvaluator_570623C2490A645BA98039BE822A9CD9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_PS_MAL.BPAnim_PS_MAL_C.ExecuteUbergraph_BPAnim_PS_MAL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_PS_MAL_C::ExecuteUbergraph_BPAnim_PS_MAL(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_MAL.BPAnim_PS_MAL_C.ExecuteUbergraph_BPAnim_PS_MAL");
		
		UBPAnim_PS_MAL_C_ExecuteUbergraph_BPAnim_PS_MAL_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_PS_MAL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_PS_MAL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_PS_MAL.BPAnim_PS_MAL_C");
		return ptr;
	}

}


