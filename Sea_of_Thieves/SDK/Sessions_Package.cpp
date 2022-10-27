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
	 * 		Name   -> PredefinedFunction UServerCrewSessionManagerProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerCrewSessionManagerProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sessions.ServerCrewSessionManagerProviderInterface");
		return ptr;
	}

}


