/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction USCLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SCUE4.SCLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USCUE4Settings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCUE4Settings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SCUE4.SCUE4Settings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USafeGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USafeGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SCUE4.SafeGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USafeGameInstanceSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USafeGameInstanceSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SCUE4.SafeGameInstanceSubsystem");
		return ptr;
	}

}


