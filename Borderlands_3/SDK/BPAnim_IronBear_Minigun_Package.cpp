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
	 * 		Name   -> Function BPAnim_IronBear_Minigun.BPAnim_IronBear_Minigun_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_Minigun_AnimGraphNode_ModifyBone_7B95BC804D8408BEA7A97686010AEBD5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronBear_Minigun_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_Minigun_AnimGraphNode_ModifyBone_7B95BC804D8408BEA7A97686010AEBD5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_Minigun.BPAnim_IronBear_Minigun_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_Minigun_AnimGraphNode_ModifyBone_7B95BC804D8408BEA7A97686010AEBD5");
		
		UBPAnim_IronBear_Minigun_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_Minigun_AnimGraphNode_ModifyBone_7B95BC804D8408BEA7A97686010AEBD5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBear_Minigun.BPAnim_IronBear_Minigun_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_Minigun_AnimGraphNode_ModifyBone_9936D2BF4724625DE8208AACECF01AA4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronBear_Minigun_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_Minigun_AnimGraphNode_ModifyBone_9936D2BF4724625DE8208AACECF01AA4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_Minigun.BPAnim_IronBear_Minigun_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_Minigun_AnimGraphNode_ModifyBone_9936D2BF4724625DE8208AACECF01AA4");
		
		UBPAnim_IronBear_Minigun_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_Minigun_AnimGraphNode_ModifyBone_9936D2BF4724625DE8208AACECF01AA4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBear_Minigun.BPAnim_IronBear_Minigun_C.ExecuteUbergraph_BPAnim_IronBear_Minigun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_IronBear_Minigun_C::ExecuteUbergraph_BPAnim_IronBear_Minigun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_Minigun.BPAnim_IronBear_Minigun_C.ExecuteUbergraph_BPAnim_IronBear_Minigun");
		
		UBPAnim_IronBear_Minigun_C_ExecuteUbergraph_BPAnim_IronBear_Minigun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_IronBear_Minigun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_IronBear_Minigun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_IronBear_Minigun.BPAnim_IronBear_Minigun_C");
		return ptr;
	}

}


