/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction ABroken_OneShot_ElectricSmall_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABroken_OneShot_ElectricSmall_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Broken_OneShot_ElectricSmall_Child.Broken_OneShot_ElectricSmall_Child_C");
		return ptr;
	}

}


