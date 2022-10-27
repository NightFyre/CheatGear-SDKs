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
	 * 		Name   -> PredefinedFunction ACal_22_Ammobox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACal_22_Ammobox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cal_22_Ammobox.Cal_22_Ammobox_C");
		return ptr;
	}

}


