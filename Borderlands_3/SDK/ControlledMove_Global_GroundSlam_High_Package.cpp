/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UControlledMove_Global_GroundSlam_High_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlledMove_Global_GroundSlam_High_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Global_GroundSlam_High.ControlledMove_Global_GroundSlam_High_C");
		return ptr;
	}

}


