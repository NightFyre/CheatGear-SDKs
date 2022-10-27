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
	 * 		Name   -> PredefinedFunction AMA_Spacestation_FanBlade01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMA_Spacestation_FanBlade01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MA_Spacestation_FanBlade01.MA_Spacestation_FanBlade01_C");
		return ptr;
	}

}


