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
	 * 		Name   -> PredefinedFunction UADodge_Spiderant_Bullet_Moving_BL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UADodge_Spiderant_Bullet_Moving_BL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ADodge_Spiderant_Bullet_Moving_BL.ADodge_Spiderant_Bullet_Moving_BL_C");
		return ptr;
	}

}


