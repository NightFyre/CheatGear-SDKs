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
	 * 		Name   -> PredefinedFunction ULesson_05_PickingUpWeaponsWindows_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_05_PickingUpWeaponsWindows_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_05_PickingUpWeaponsWindows.Lesson_05_PickingUpWeaponsWindows_C");
		return ptr;
	}

}


