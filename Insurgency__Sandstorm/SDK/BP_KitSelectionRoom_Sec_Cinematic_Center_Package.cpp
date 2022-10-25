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
	 * 		Name   -> PredefinedFunction ABP_KitSelectionRoom_Sec_Cinematic_Center_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_KitSelectionRoom_Sec_Cinematic_Center_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_KitSelectionRoom_Sec_Cinematic_Center.BP_KitSelectionRoom_Sec_Cinematic_Center_C");
		return ptr;
	}

}


