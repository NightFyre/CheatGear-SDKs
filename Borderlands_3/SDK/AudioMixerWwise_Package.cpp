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
	 * 		Name   -> PredefinedFunction UAudioMixerWwiseSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioMixerWwiseSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixerWwise.AudioMixerWwiseSettings");
		return ptr;
	}

}


