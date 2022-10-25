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
	 * 		Name   -> Function BPMenuStandIn_TyphonLog.BPMenuStandIn_TyphonLog_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPMenuStandIn_TyphonLog_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPMenuStandIn_TyphonLog.BPMenuStandIn_TyphonLog_C.UserConstructionScript");
		
		ABPMenuStandIn_TyphonLog_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPMenuStandIn_TyphonLog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPMenuStandIn_TyphonLog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPMenuStandIn_TyphonLog.BPMenuStandIn_TyphonLog_C");
		return ptr;
	}

}


