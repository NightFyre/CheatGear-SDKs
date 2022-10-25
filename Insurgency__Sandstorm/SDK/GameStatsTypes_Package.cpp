/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UGameStatsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameStatsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameStatsTypes.GameStatsSettings");
		return ptr;
	}

}


