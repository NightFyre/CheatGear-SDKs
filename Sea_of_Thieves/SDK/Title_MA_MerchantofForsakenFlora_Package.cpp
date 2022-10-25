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
	 * 		Name   -> PredefinedFunction UTitle_MA_MerchantofForsakenFlora_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_MA_MerchantofForsakenFlora_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Title_MA_MerchantofForsakenFlora.Title_MA_MerchantofForsakenFlora_C");
		return ptr;
	}

}


