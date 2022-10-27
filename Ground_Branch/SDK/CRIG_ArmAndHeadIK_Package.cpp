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
	 * 		Name   -> PredefinedFunction UCRIG_ArmAndHeadIK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCRIG_ArmAndHeadIK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("ControlRigBlueprintGeneratedClass CRIG_ArmAndHeadIK.CRIG_ArmAndHeadIK_C");
		return ptr;
	}

}


