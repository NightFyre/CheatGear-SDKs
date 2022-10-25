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
	 * 		Name   -> PredefinedFunction UPirateLegendCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPirateLegendCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PirateLegendCategory.PirateLegendCategory_C");
		return ptr;
	}

}


