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
	 * 		Name   -> Function BPChar_StandIn_Gunner.BPChar_StandIn_Gunner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_StandIn_Gunner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Gunner.BPChar_StandIn_Gunner_C.UserConstructionScript");
		
		ABPChar_StandIn_Gunner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_StandIn_Gunner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_StandIn_Gunner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_StandIn_Gunner.BPChar_StandIn_Gunner_C");
		return ptr;
	}

}


