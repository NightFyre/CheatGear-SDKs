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
	 * 		Name   -> PredefinedFunction ULesson_51_ExplosivePenetration_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_51_ExplosivePenetration_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_51_ExplosivePenetration.Lesson_51_ExplosivePenetration_C");
		return ptr;
	}

}


