/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BP_BlackHawk_CheckAmmo.BP_BlackHawk_CheckAmmo_C.CanExecute
	 * 		Flags  -> ()
	 */
	bool UBP_BlackHawk_CheckAmmo_C::CanExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlackHawk_CheckAmmo.BP_BlackHawk_CheckAmmo_C.CanExecute");
		
		UBP_BlackHawk_CheckAmmo_C_CanExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BlackHawk_CheckAmmo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BlackHawk_CheckAmmo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlackHawk_CheckAmmo.BP_BlackHawk_CheckAmmo_C");
		return ptr;
	}

}


