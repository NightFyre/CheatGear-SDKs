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
	 * 		Name   -> Function IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C.TrapFailedToSpawn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIActionSkill_Beastmaster_DLCSkill_C::TrapFailedToSpawn(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C.TrapFailedToSpawn");
		
		UIActionSkill_Beastmaster_DLCSkill_C_TrapFailedToSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C.EndTrapEarly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIActionSkill_Beastmaster_DLCSkill_C::EndTrapEarly(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C.EndTrapEarly");
		
		UIActionSkill_Beastmaster_DLCSkill_C_EndTrapEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIActionSkill_Beastmaster_DLCSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIActionSkill_Beastmaster_DLCSkill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C");
		return ptr;
	}

}


