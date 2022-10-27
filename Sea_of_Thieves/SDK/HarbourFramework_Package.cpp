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
	 * 		Name   -> PredefinedFunction UHarbourInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarbourInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HarbourFramework.HarbourInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHarbourComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarbourComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HarbourFramework.HarbourComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHarbourServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarbourServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HarbourFramework.HarbourServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHarbourService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarbourService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HarbourFramework.HarbourService");
		return ptr;
	}

}


