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
	 * 		Name   -> PredefinedFunction AGbxBlockingVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxBlockingVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxBlockingVolumes.GbxBlockingVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxBlockingVolumeUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxBlockingVolumeUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxBlockingVolumes.GbxBlockingVolumeUserSettings");
		return ptr;
	}

}


