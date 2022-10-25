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
	 * 		Name   -> Function BPMenuActor_StatusMenuStandIn.BPMenuActor_StatusMenuStandIn_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPMenuActor_StatusMenuStandIn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPMenuActor_StatusMenuStandIn.BPMenuActor_StatusMenuStandIn_C.UserConstructionScript");
		
		ABPMenuActor_StatusMenuStandIn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPMenuActor_StatusMenuStandIn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPMenuActor_StatusMenuStandIn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPMenuActor_StatusMenuStandIn.BPMenuActor_StatusMenuStandIn_C");
		return ptr;
	}

}


