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
	 * 		Name   -> Function AIAction_ScriptedFollow.AIAction_ScriptedFollow_C.ExecuteUbergraph_AIAction_ScriptedFollow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_ScriptedFollow_C::ExecuteUbergraph_AIAction_ScriptedFollow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedFollow.AIAction_ScriptedFollow_C.ExecuteUbergraph_AIAction_ScriptedFollow");
		
		UAIAction_ScriptedFollow_C_ExecuteUbergraph_AIAction_ScriptedFollow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_ScriptedFollow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_ScriptedFollow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_ScriptedFollow.AIAction_ScriptedFollow_C");
		return ptr;
	}

}


