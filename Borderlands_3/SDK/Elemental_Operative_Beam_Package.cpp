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
	 * 		Name   -> PredefinedFunction UElemental_Operative_Beam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElemental_Operative_Beam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Elemental_Operative_Beam.Elemental_Operative_Beam_C");
		return ptr;
	}

}


