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
	 * 		Name   -> PredefinedFunction UCRIG_DynamicLeftHandIKRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCRIG_DynamicLeftHandIKRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("ControlRigBlueprintGeneratedClass CRIG_DynamicLeftHandIKRoot.CRIG_DynamicLeftHandIKRoot_C");
		return ptr;
	}

}


