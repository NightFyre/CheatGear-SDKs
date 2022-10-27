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
	 * 		Name   -> PredefinedFunction UAD_FrontendPirate_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAD_FrontendPirate_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AD_FrontendPirate_Large.AD_FrontendPirate_Large_C");
		return ptr;
	}

}


