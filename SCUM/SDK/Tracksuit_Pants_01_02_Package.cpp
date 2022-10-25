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
	 * 		Name   -> PredefinedFunction ATracksuit_Pants_01_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATracksuit_Pants_01_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tracksuit_Pants_01_02.Tracksuit_Pants_01_02_C");
		return ptr;
	}

}


