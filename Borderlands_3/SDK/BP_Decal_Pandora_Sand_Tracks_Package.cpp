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
	 * 		Name   -> PredefinedFunction ABP_Decal_Pandora_Sand_Tracks_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Decal_Pandora_Sand_Tracks_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decal_Pandora_Sand_Tracks.BP_Decal_Pandora_Sand_Tracks_C");
		return ptr;
	}

}


