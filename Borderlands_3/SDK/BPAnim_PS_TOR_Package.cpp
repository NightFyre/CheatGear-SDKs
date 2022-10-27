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
	 * 		Name   -> Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_PS_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8");
		
		UBPAnim_PS_TOR_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_PS_TOR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E");
		
		UBPAnim_PS_TOR_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.ExecuteUbergraph_BPAnim_PS_TOR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_PS_TOR_C::ExecuteUbergraph_BPAnim_PS_TOR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_TOR.BPAnim_PS_TOR_C.ExecuteUbergraph_BPAnim_PS_TOR");
		
		UBPAnim_PS_TOR_C_ExecuteUbergraph_BPAnim_PS_TOR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_PS_TOR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_PS_TOR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_PS_TOR.BPAnim_PS_TOR_C");
		return ptr;
	}

}


