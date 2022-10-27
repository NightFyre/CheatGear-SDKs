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
	 * 		Name   -> PredefinedFunction AProj_VLA_PS_TaserTether_Leech_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_VLA_PS_TaserTether_Leech_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_VLA_PS_TaserTether_Leech.Proj_VLA_PS_TaserTether_Leech_C");
		return ptr;
	}

}


