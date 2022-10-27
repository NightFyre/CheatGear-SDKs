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
	 * 		Name   -> PredefinedFunction ADriving_Gloves_04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADriving_Gloves_04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Driving_Gloves_04.Driving_Gloves_04_C");
		return ptr;
	}

}


