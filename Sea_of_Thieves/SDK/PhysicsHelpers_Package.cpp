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
	 * 		Name   -> PredefinedFunction UPostPhysicsTickerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostPhysicsTickerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsHelpers.PostPhysicsTickerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockPostPhysicsTickerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockPostPhysicsTickerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsHelpers.MockPostPhysicsTickerComponent");
		return ptr;
	}

}


