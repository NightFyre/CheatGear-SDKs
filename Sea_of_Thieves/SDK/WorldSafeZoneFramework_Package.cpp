/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UWorldSafeZoneHostInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldSafeZoneHostInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorldSafeZoneFramework.WorldSafeZoneHostInterface");
		return ptr;
	}

}


