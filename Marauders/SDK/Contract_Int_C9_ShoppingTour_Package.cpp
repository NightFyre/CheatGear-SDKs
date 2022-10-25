/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction AContract_Int_C9_ShoppingTour_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContract_Int_C9_ShoppingTour_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Contract_Int_C9_ShoppingTour.Contract_Int_C9_ShoppingTour_C");
		return ptr;
	}

}


