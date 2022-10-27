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
	 * 		Name   -> PredefinedFunction UListForeignSubstances_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UListForeignSubstances_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ListForeignSubstances.ListForeignSubstances_C");
		return ptr;
	}

}


