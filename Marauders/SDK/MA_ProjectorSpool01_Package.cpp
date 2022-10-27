/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction AMA_ProjectorSpool01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMA_ProjectorSpool01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MA_ProjectorSpool01.MA_ProjectorSpool01_C");
		return ptr;
	}

}


