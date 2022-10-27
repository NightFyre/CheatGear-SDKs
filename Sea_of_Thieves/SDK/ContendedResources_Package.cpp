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
	 * 		Name   -> PredefinedFunction UContendedResourceInfoInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContendedResourceInfoInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContendedResources.ContendedResourceInfoInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContendedResourceServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContendedResourceServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContendedResources.ContendedResourceServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReservableContendedResourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReservableContendedResourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContendedResources.ReservableContendedResourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldResourceRegistryInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldResourceRegistryInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ContendedResources.WorldResourceRegistryInterface");
		return ptr;
	}

}


