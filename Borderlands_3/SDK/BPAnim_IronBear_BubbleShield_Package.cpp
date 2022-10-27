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
	 * 		Name   -> Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.SetBlendPose
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Pose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_IronBear_BubbleShield_C::SetBlendPose(int32_t Pose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.SetBlendPose");
		
		UBPAnim_IronBear_BubbleShield_C_SetBlendPose_Params params {};
		params.Pose = Pose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_ModifyBone_205B69CA40CD25BBCF3F7F8B566A2442
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronBear_BubbleShield_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_ModifyBone_205B69CA40CD25BBCF3F7F8B566A2442()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_ModifyBone_205B69CA40CD25BBCF3F7F8B566A2442");
		
		UBPAnim_IronBear_BubbleShield_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_ModifyBone_205B69CA40CD25BBCF3F7F8B566A2442_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_BlendListByInt_727D640B47E78EAB60B8CEABDAF763D5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronBear_BubbleShield_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_BlendListByInt_727D640B47E78EAB60B8CEABDAF763D5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_BlendListByInt_727D640B47E78EAB60B8CEABDAF763D5");
		
		UBPAnim_IronBear_BubbleShield_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_BlendListByInt_727D640B47E78EAB60B8CEABDAF763D5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.ExecuteUbergraph_BPAnim_IronBear_BubbleShield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_IronBear_BubbleShield_C::ExecuteUbergraph_BPAnim_IronBear_BubbleShield(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C.ExecuteUbergraph_BPAnim_IronBear_BubbleShield");
		
		UBPAnim_IronBear_BubbleShield_C_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_IronBear_BubbleShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_IronBear_BubbleShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C");
		return ptr;
	}

}


