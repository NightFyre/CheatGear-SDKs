/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x006D5B10
	 * 		Name   -> Function RCON.RCONServerSystem.Shutdown
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void URCONServerSystem::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RCON.RCONServerSystem.Shutdown");
		
		URCONServerSystem_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007C2680
	 * 		Name   -> Function RCON.RCONServerSystem.Init
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void URCONServerSystem::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RCON.RCONServerSystem.Init");
		
		URCONServerSystem_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URCONServerSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URCONServerSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RCON.RCONServerSystem");
		return ptr;
	}

}


