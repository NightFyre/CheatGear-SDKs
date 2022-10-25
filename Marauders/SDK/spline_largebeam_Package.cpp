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
	 * 		Name   -> Function spline_largebeam.spline_largebeam_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void Aspline_largebeam_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function spline_largebeam.spline_largebeam_C.UserConstructionScript");
		
		Aspline_largebeam_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Aspline_largebeam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Aspline_largebeam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass spline_largebeam.spline_largebeam_C");
		return ptr;
	}

}


