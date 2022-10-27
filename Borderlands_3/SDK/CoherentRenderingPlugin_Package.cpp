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
	 * 		Name   -> PredefinedFunction UCoherentRenderingSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoherentRenderingSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentRenderingPlugin.CoherentRenderingSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCohTextureUserWrapData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCohTextureUserWrapData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoherentRenderingPlugin.CohTextureUserWrapData");
		return ptr;
	}

}


