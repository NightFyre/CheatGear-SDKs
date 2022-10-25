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
	 * 		Name   -> Function BPAnim_Op_Cannon_SkillScreen.BPAnim_Op_Cannon_SkillScreen_C.ExecuteUbergraph_BPAnim_Op_Cannon_SkillScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_Op_Cannon_SkillScreen_C::ExecuteUbergraph_BPAnim_Op_Cannon_SkillScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_Op_Cannon_SkillScreen.BPAnim_Op_Cannon_SkillScreen_C.ExecuteUbergraph_BPAnim_Op_Cannon_SkillScreen");
		
		UBPAnim_Op_Cannon_SkillScreen_C_ExecuteUbergraph_BPAnim_Op_Cannon_SkillScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_Op_Cannon_SkillScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_Op_Cannon_SkillScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Op_Cannon_SkillScreen.BPAnim_Op_Cannon_SkillScreen_C");
		return ptr;
	}

}


