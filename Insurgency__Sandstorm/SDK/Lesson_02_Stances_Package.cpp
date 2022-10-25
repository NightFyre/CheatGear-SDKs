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
	 * 		Name   -> PredefinedFunction ULesson_02_Stances_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_02_Stances_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_02_Stances.Lesson_02_Stances_C");
		return ptr;
	}

}


