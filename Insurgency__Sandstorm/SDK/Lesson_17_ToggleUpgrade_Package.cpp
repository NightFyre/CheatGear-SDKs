/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction ULesson_17_ToggleUpgrade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_17_ToggleUpgrade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_17_ToggleUpgrade.Lesson_17_ToggleUpgrade_C");
		return ptr;
	}

}


