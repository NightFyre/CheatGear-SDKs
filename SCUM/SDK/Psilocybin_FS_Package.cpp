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
	 * 		Name   -> PredefinedFunction UPsilocybin_FS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPsilocybin_FS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Psilocybin_FS.Psilocybin_FS_C");
		return ptr;
	}

}


