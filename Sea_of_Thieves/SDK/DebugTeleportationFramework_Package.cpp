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
	 * 		Name   -> PredefinedFunction UDebugTeleportationLookupInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTeleportationLookupInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugTeleportationFramework.DebugTeleportationLookupInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugTeleportationPresentationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTeleportationPresentationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugTeleportationFramework.DebugTeleportationPresentationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugTeleportationRegistrationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTeleportationRegistrationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugTeleportationFramework.DebugTeleportationRegistrationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugTeleportationDestinationService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugTeleportationDestinationService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugTeleportationFramework.DebugTeleportationDestinationService");
		return ptr;
	}

}


