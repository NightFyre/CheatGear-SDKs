/**
 * Name: The_Complex
 * Version: 9349459
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
	 * 		Name   -> PredefinedFunction AFoundFootage_PlayerCharacterGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFoundFootage_PlayerCharacterGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FoundFootage_PlayerCharacterGameMode.FoundFootage_PlayerCharacterGameMode_C");
		return ptr;
	}

}


