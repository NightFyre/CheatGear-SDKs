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
	 * 		Name   -> Function AIAction_Wait.AIAction_Wait_C.ExecuteUbergraph_AIAction_Wait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_Wait_C::ExecuteUbergraph_AIAction_Wait(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_Wait.AIAction_Wait_C.ExecuteUbergraph_AIAction_Wait");
		
		UAIAction_Wait_C_ExecuteUbergraph_AIAction_Wait_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Wait_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Wait_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_Wait.AIAction_Wait_C");
		return ptr;
	}

}


