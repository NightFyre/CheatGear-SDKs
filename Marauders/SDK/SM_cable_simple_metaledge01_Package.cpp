/**
 * Name: Marauders
 * Version: 642675-attempt2
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SM_cable_simple_metaledge01.SM_cable_simple_metaledge01_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASM_cable_simple_metaledge01_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_cable_simple_metaledge01.SM_cable_simple_metaledge01_C.UserConstructionScript");
		
		ASM_cable_simple_metaledge01_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASM_cable_simple_metaledge01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASM_cable_simple_metaledge01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SM_cable_simple_metaledge01.SM_cable_simple_metaledge01_C");
		return ptr;
	}

}


