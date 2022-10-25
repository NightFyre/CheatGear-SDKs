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
	 * 		Name   -> PredefinedFunction UEntityEnumerationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEntityEnumerationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomServerEntityEnumeration.EntityEnumerationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEntityEnumerationService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEntityEnumerationService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomServerEntityEnumeration.EntityEnumerationService");
		return ptr;
	}

}


