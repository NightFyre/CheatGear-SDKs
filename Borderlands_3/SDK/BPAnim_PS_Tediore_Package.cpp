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
	 * 		Name   -> Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_PS_Tediore_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D");
		
		UBPAnim_PS_Tediore_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_PS_Tediore_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82");
		
		UBPAnim_PS_Tediore_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.ExecuteUbergraph_BPAnim_PS_Tediore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_PS_Tediore_C::ExecuteUbergraph_BPAnim_PS_Tediore(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PS_Tediore.BPAnim_PS_Tediore_C.ExecuteUbergraph_BPAnim_PS_Tediore");
		
		UBPAnim_PS_Tediore_C_ExecuteUbergraph_BPAnim_PS_Tediore_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_PS_Tediore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_PS_Tediore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_PS_Tediore.BPAnim_PS_Tediore_C");
		return ptr;
	}

}


