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
	 * 		Name   -> PredefinedFunction UBP_SVD_LoadMagazine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SVD_LoadMagazine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SVD_LoadMagazine.BP_SVD_LoadMagazine_C");
		return ptr;
	}

}


