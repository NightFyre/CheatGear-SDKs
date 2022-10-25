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
	 * 		Name   -> PredefinedFunction ULesson_35_ShootingLadders_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_35_ShootingLadders_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_35_ShootingLadders.Lesson_35_ShootingLadders_C");
		return ptr;
	}

}


