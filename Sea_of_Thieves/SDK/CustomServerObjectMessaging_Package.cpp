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
	 * 		Name   -> PredefinedFunction UCustomServerDispatcherProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomServerDispatcherProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomServerObjectMessaging.CustomServerDispatcherProviderInterface");
		return ptr;
	}

}


