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
	 * 		Name   -> PredefinedFunction UCustomEmoteInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomEmoteInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomEmotes.CustomEmoteInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomEmoteService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomEmoteService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomEmotes.CustomEmoteService");
		return ptr;
	}

}


