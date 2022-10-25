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
	 * 		Name   -> PredefinedFunction UHallucinations_nm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHallucinations_nm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hallucinations_nm.Hallucinations_nm_C");
		return ptr;
	}

}


