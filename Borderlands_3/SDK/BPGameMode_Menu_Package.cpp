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
	 * 		Name   -> PredefinedFunction ABPGameMode_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPGameMode_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPGameMode_Menu.BPGameMode_Menu_C");
		return ptr;
	}

}


