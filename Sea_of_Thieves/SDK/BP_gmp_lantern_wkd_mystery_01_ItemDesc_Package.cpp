/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UBP_gmp_lantern_wkd_mystery_01_ItemDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_gmp_lantern_wkd_mystery_01_ItemDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_gmp_lantern_wkd_mystery_01_ItemDesc.BP_gmp_lantern_wkd_mystery_01_ItemDesc_C");
		return ptr;
	}

}


