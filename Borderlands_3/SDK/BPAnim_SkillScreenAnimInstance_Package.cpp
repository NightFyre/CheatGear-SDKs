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
	 * 		Name   -> Function BPAnim_SkillScreenAnimInstance.BPAnim_SkillScreenAnimInstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_AnimGraphNode_BlendListByBool_4CEEC3F448DB023E5912B8B84D9F9BBE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_SkillScreenAnimInstance_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_AnimGraphNode_BlendListByBool_4CEEC3F448DB023E5912B8B84D9F9BBE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SkillScreenAnimInstance.BPAnim_SkillScreenAnimInstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_AnimGraphNode_BlendListByBool_4CEEC3F448DB023E5912B8B84D9F9BBE");
		
		UBPAnim_SkillScreenAnimInstance_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_AnimGraphNode_BlendListByBool_4CEEC3F448DB023E5912B8B84D9F9BBE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_SkillScreenAnimInstance.BPAnim_SkillScreenAnimInstance_C.ExecuteUbergraph_BPAnim_SkillScreenAnimInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_SkillScreenAnimInstance_C::ExecuteUbergraph_BPAnim_SkillScreenAnimInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SkillScreenAnimInstance.BPAnim_SkillScreenAnimInstance_C.ExecuteUbergraph_BPAnim_SkillScreenAnimInstance");
		
		UBPAnim_SkillScreenAnimInstance_C_ExecuteUbergraph_BPAnim_SkillScreenAnimInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_SkillScreenAnimInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_SkillScreenAnimInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SkillScreenAnimInstance.BPAnim_SkillScreenAnimInstance_C");
		return ptr;
	}

}


