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
	 * 		Name   -> PredefinedFunction UAmbisonicsEncodingSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbisonicsEncodingSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundFields.AmbisonicsEncodingSettings");
		return ptr;
	}

}


