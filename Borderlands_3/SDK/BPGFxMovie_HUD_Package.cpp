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
	 * 		Name   -> PredefinedFunction UBPGFxMovie_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPGFxMovie_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPGFxMovie_HUD.BPGFxMovie_HUD_C");
		return ptr;
	}

}


