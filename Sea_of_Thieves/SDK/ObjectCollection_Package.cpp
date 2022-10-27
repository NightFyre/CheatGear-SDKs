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
	 * 		Name   -> PredefinedFunction UObjectCollectorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectCollectorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectCollection.ObjectCollectorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestCollector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestCollector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectCollection.TestCollector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestObjectForCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestObjectForCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectCollection.TestObjectForCollection");
		return ptr;
	}

}


