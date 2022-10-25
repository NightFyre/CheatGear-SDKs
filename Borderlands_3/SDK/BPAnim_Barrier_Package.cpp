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
	 * 		Name   -> Function BPAnim_Barrier.BPAnim_Barrier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Barrier_AnimGraphNode_BlendSpacePlayer_95EE5F524324C95887375287635C72F7
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_Barrier_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Barrier_AnimGraphNode_BlendSpacePlayer_95EE5F524324C95887375287635C72F7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_Barrier.BPAnim_Barrier_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Barrier_AnimGraphNode_BlendSpacePlayer_95EE5F524324C95887375287635C72F7");
		
		UBPAnim_Barrier_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Barrier_AnimGraphNode_BlendSpacePlayer_95EE5F524324C95887375287635C72F7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_Barrier.BPAnim_Barrier_C.AnimNotify_EnableGraphLocomotion
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPAnim_Barrier_C::AnimNotify_EnableGraphLocomotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_Barrier.BPAnim_Barrier_C.AnimNotify_EnableGraphLocomotion");
		
		UBPAnim_Barrier_C_AnimNotify_EnableGraphLocomotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_Barrier.BPAnim_Barrier_C.AnimNotify_DisableGraphLocomotion
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPAnim_Barrier_C::AnimNotify_DisableGraphLocomotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_Barrier.BPAnim_Barrier_C.AnimNotify_DisableGraphLocomotion");
		
		UBPAnim_Barrier_C_AnimNotify_DisableGraphLocomotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_Barrier.BPAnim_Barrier_C.ExecuteUbergraph_BPAnim_Barrier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_Barrier_C::ExecuteUbergraph_BPAnim_Barrier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_Barrier.BPAnim_Barrier_C.ExecuteUbergraph_BPAnim_Barrier");
		
		UBPAnim_Barrier_C_ExecuteUbergraph_BPAnim_Barrier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_Barrier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_Barrier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Barrier.BPAnim_Barrier_C");
		return ptr;
	}

}


