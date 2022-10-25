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
	 * 		Name   -> PredefinedFunction UBP_Camera_Shake_Recoil_Rifle_556_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Camera_Shake_Recoil_Rifle_556_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Camera_Shake_Recoil_Rifle_557.BP_Camera_Shake_Recoil_Rifle_556_C");
		return ptr;
	}

}


