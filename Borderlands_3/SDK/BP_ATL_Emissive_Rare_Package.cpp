/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UBP_ATL_Emissive_Rare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ATL_Emissive_Rare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ATL_Emissive_Rare.BP_ATL_Emissive_Rare_C");
		return ptr;
	}

}


