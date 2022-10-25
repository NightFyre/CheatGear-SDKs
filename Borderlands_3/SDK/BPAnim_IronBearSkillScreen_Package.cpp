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
	 * 		Name   -> Function BPAnim_IronBearSkillScreen.BPAnim_IronBearSkillScreen_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBearSkillScreen_AnimGraphNode_TwoWayBlend_A14E310843BA75C3029B8F92A9984510
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronBearSkillScreen_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBearSkillScreen_AnimGraphNode_TwoWayBlend_A14E310843BA75C3029B8F92A9984510()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBearSkillScreen.BPAnim_IronBearSkillScreen_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBearSkillScreen_AnimGraphNode_TwoWayBlend_A14E310843BA75C3029B8F92A9984510");
		
		UBPAnim_IronBearSkillScreen_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBearSkillScreen_AnimGraphNode_TwoWayBlend_A14E310843BA75C3029B8F92A9984510_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBearSkillScreen.BPAnim_IronBearSkillScreen_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBearSkillScreen_AnimGraphNode_BlendListByBool_9CB5B98D40FBCB963015E48236C674A3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronBearSkillScreen_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBearSkillScreen_AnimGraphNode_BlendListByBool_9CB5B98D40FBCB963015E48236C674A3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBearSkillScreen.BPAnim_IronBearSkillScreen_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBearSkillScreen_AnimGraphNode_BlendListByBool_9CB5B98D40FBCB963015E48236C674A3");
		
		UBPAnim_IronBearSkillScreen_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBearSkillScreen_AnimGraphNode_BlendListByBool_9CB5B98D40FBCB963015E48236C674A3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBearSkillScreen.BPAnim_IronBearSkillScreen_C.ExecuteUbergraph_BPAnim_IronBearSkillScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_IronBearSkillScreen_C::ExecuteUbergraph_BPAnim_IronBearSkillScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBearSkillScreen.BPAnim_IronBearSkillScreen_C.ExecuteUbergraph_BPAnim_IronBearSkillScreen");
		
		UBPAnim_IronBearSkillScreen_C_ExecuteUbergraph_BPAnim_IronBearSkillScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_IronBearSkillScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_IronBearSkillScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_IronBearSkillScreen.BPAnim_IronBearSkillScreen_C");
		return ptr;
	}

}


