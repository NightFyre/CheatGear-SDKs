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
	 * 		Name   -> Function AIAction_ScriptedCover.AIAction_ScriptedCover_C.ExecuteUbergraph_AIAction_ScriptedCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_ScriptedCover_C::ExecuteUbergraph_AIAction_ScriptedCover(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_ScriptedCover.AIAction_ScriptedCover_C.ExecuteUbergraph_AIAction_ScriptedCover");
		
		UAIAction_ScriptedCover_C_ExecuteUbergraph_AIAction_ScriptedCover_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_ScriptedCover_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_ScriptedCover_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_ScriptedCover.AIAction_ScriptedCover_C");
		return ptr;
	}

}


