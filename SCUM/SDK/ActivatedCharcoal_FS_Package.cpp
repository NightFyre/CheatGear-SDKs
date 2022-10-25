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
	 * 		Name   -> PredefinedFunction UActivatedCharcoal_FS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivatedCharcoal_FS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActivatedCharcoal_FS.ActivatedCharcoal_FS_C");
		return ptr;
	}

}


