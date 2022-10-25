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
	 * 		Name   -> PredefinedFunction AContract_Int_MerchantInspector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContract_Int_MerchantInspector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Contract_Int_MerchantInspector.Contract_Int_MerchantInspector_C");
		return ptr;
	}

}


