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
	 * 		Name   -> Function BPAnim_SkillScreenStandInAuxiliaryActor.BPAnim_SkillScreenStandInAuxiliaryActor_C.ExecuteUbergraph_BPAnim_SkillScreenStandInAuxiliaryActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_SkillScreenStandInAuxiliaryActor_C::ExecuteUbergraph_BPAnim_SkillScreenStandInAuxiliaryActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_SkillScreenStandInAuxiliaryActor.BPAnim_SkillScreenStandInAuxiliaryActor_C.ExecuteUbergraph_BPAnim_SkillScreenStandInAuxiliaryActor");
		
		UBPAnim_SkillScreenStandInAuxiliaryActor_C_ExecuteUbergraph_BPAnim_SkillScreenStandInAuxiliaryActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_SkillScreenStandInAuxiliaryActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_SkillScreenStandInAuxiliaryActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_SkillScreenStandInAuxiliaryActor.BPAnim_SkillScreenStandInAuxiliaryActor_C");
		return ptr;
	}

}


