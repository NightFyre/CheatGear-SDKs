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
	 * 		Name   -> PredefinedFunction UEffectCollection_Shield_Spike_3p_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffectCollection_Shield_Spike_3p_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EffectCollection_Shield_Spike_3p.EffectCollection_Shield_Spike_3p_C");
		return ptr;
	}

}


