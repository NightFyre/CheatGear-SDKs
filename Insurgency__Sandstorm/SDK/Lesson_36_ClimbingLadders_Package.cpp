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
	 * 		Name   -> PredefinedFunction ULesson_36_ClimbingLadders_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_36_ClimbingLadders_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_36_ClimbingLadders.Lesson_36_ClimbingLadders_C");
		return ptr;
	}

}


