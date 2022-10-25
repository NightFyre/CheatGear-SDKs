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
	 * 		Name   -> PredefinedFunction UCRIG_DynamicRightHandIKRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCRIG_DynamicRightHandIKRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("ControlRigBlueprintGeneratedClass CRIG_DynamicRightHandIKRoot.CRIG_DynamicRightHandIKRoot_C");
		return ptr;
	}

}


