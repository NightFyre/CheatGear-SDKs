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
	 * 		Name   -> PredefinedFunction ULesson_20_GrabAmmoCrateWindows_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_20_GrabAmmoCrateWindows_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_20_GrabAmmoCrateWindows.Lesson_20_GrabAmmoCrateWindows_C");
		return ptr;
	}

}


