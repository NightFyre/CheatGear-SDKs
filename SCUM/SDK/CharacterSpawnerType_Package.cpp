/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UCharacterSpawnerType_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSpawnerType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CharacterSpawnerType.CharacterSpawnerType_C");
		return ptr;
	}

}


