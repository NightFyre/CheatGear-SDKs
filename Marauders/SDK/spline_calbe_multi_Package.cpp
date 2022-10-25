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
	 * 		Name   -> Function spline_calbe_multi.spline_calbe_multi_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void Aspline_calbe_multi_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function spline_calbe_multi.spline_calbe_multi_C.UserConstructionScript");
		
		Aspline_calbe_multi_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Aspline_calbe_multi_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Aspline_calbe_multi_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass spline_calbe_multi.spline_calbe_multi_C");
		return ptr;
	}

}


