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
	 * 		Name   -> PredefinedFunction UListSilencedPlayers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UListSilencedPlayers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ListSilencedPlayers.ListSilencedPlayers_C");
		return ptr;
	}

}


