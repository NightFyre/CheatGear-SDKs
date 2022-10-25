/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_WMLx_Rifle.BP_WMLx_Rifle_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_WMLx_Rifle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WMLx_Rifle.BP_WMLx_Rifle_C.UserConstructionScript");
		
		ABP_WMLx_Rifle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WMLx_Rifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WMLx_Rifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WMLx_Rifle.BP_WMLx_Rifle_C");
		return ptr;
	}

}


