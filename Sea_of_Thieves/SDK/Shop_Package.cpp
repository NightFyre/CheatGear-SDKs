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
	 * 		Name   -> PredefinedFunction UCatalogOfferLicence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCatalogOfferLicence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Shop.CatalogOfferLicence");
		return ptr;
	}

}


