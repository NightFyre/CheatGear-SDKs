/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UCaffeine_FS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaffeine_FS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Caffeine_FS.Caffeine_FS_C");
		return ptr;
	}

}


