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
	 * 		Name   -> PredefinedFunction USetFamePointsToAllOnline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetFamePointsToAllOnline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SetFamePointsToAllOnline.SetFamePointsToAllOnline_C");
		return ptr;
	}

}


