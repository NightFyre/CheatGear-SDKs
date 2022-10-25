/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * 		Name   -> PredefinedFunction AHighrise_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHighrise_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Highrise.Highrise_C");
		return ptr;
	}

}


