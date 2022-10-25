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
	 * 		Name   -> PredefinedFunction AOpen_Finger_Gloves_05_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOpen_Finger_Gloves_05_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Open_Finger_Gloves_05.Open_Finger_Gloves_05_C");
		return ptr;
	}

}


