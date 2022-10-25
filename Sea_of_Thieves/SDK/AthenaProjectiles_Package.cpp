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
	 * 		Name   -> PredefinedFunction UAthenaProjectilesThrottledTickCollectionAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaProjectilesThrottledTickCollectionAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectileLauncherSpecificSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectileLauncherSpecificSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaProjectiles.ProjectileLauncherSpecificSettings");
		return ptr;
	}

}


