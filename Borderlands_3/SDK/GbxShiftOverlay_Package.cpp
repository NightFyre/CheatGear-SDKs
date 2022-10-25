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
	 * 		Name   -> PredefinedFunction UGbxShiftOverlay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxShiftOverlay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxShiftOverlay.GbxShiftOverlay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxShiftSaveGameInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxShiftSaveGameInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxShiftOverlay.GbxShiftSaveGameInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxShiftOverlaySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxShiftOverlaySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxShiftOverlay.GbxShiftOverlaySettings");
		return ptr;
	}

}


