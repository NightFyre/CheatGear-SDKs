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
	 * 		Name   -> PredefinedFunction UADodgePicker_Ape_Bullet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UADodgePicker_Ape_Bullet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ADodgePicker_Ape_Bullet.ADodgePicker_Ape_Bullet_C");
		return ptr;
	}

}


