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
	 * 		Name   -> PredefinedFunction UAnimAction_Handgun_Mag_Check_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimAction_Handgun_Mag_Check_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimAction_Handgun_Mag_Check.AnimAction_Handgun_Mag_Check_C");
		return ptr;
	}

}


