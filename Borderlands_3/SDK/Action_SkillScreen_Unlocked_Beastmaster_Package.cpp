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
	 * 		Name   -> Function Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_SkillScreen_Unlocked_Beastmaster_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C.OnEnd");
		
		UAction_SkillScreen_Unlocked_Beastmaster_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C.ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_SkillScreen_Unlocked_Beastmaster_C::ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C.ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster");
		
		UAction_SkillScreen_Unlocked_Beastmaster_C_ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_SkillScreen_Unlocked_Beastmaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_SkillScreen_Unlocked_Beastmaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C");
		return ptr;
	}

}


