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
	 * 		Name   -> PredefinedFunction AMainWorldNodeManager_Alpha_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainWorldNodeManager_Alpha_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainWorldNodeManager_Alpha.MainWorldNodeManager_Alpha_C");
		return ptr;
	}

}


