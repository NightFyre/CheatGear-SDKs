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
	 * 		Name   -> PredefinedFunction ULesson_34_MachineGunTurret_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_34_MachineGunTurret_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_34_MachineGunTurret.Lesson_34_MachineGunTurret_C");
		return ptr;
	}

}


