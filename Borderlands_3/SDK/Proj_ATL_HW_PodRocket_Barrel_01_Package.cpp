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
	 * 		Name   -> PredefinedFunction AProj_ATL_HW_PodRocket_Barrel_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_ATL_HW_PodRocket_Barrel_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_HW_PodRocket_Barrel_01.Proj_ATL_HW_PodRocket_Barrel_01_C");
		return ptr;
	}

}


