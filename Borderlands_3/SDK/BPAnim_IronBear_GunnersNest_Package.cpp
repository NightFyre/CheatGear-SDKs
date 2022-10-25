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
	 * 		Name   -> Function BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_AnimGraphNode_ModifyBone_907DB10242B86506529614948CCDC685
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronBear_GunnersNest_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_AnimGraphNode_ModifyBone_907DB10242B86506529614948CCDC685()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_AnimGraphNode_ModifyBone_907DB10242B86506529614948CCDC685");
		
		UBPAnim_IronBear_GunnersNest_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_AnimGraphNode_ModifyBone_907DB10242B86506529614948CCDC685_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C.ExecuteUbergraph_BPAnim_IronBear_GunnersNest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_IronBear_GunnersNest_C::ExecuteUbergraph_BPAnim_IronBear_GunnersNest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C.ExecuteUbergraph_BPAnim_IronBear_GunnersNest");
		
		UBPAnim_IronBear_GunnersNest_C_ExecuteUbergraph_BPAnim_IronBear_GunnersNest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_IronBear_GunnersNest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_IronBear_GunnersNest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_IronBear_GunnersNest.BPAnim_IronBear_GunnersNest_C");
		return ptr;
	}

}


