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
	 * 		Name   -> PredefinedFunction UAlphaAmanitin_FS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlphaAmanitin_FS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AlphaAmanitin_FS.AlphaAmanitin_FS_C");
		return ptr;
	}

}


