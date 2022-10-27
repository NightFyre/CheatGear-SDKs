/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> PredefinedFunction UCRIG_AimAndCollision_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCRIG_AimAndCollision_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("ControlRigBlueprintGeneratedClass CRIG_AimAndCollision.CRIG_AimAndCollision_C");
		return ptr;
	}

}


