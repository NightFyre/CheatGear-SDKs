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
	 * 		Name   -> PredefinedFunction UBP_AK47_LoadMagazine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AK47_LoadMagazine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AK47_LoadMagazine.BP_AK47_LoadMagazine_C");
		return ptr;
	}

}


