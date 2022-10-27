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
	 * 		Name   -> PredefinedFunction URemoteEmergentVoyageInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteEmergentVoyageInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteEmergentVoyage.RemoteEmergentVoyageInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteEmergentVoyageService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteEmergentVoyageService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteEmergentVoyage.RemoteEmergentVoyageService");
		return ptr;
	}

}


