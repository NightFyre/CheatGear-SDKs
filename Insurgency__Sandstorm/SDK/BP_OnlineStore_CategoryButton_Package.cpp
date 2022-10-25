/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UBP_OnlineStore_CategoryButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OnlineStore_CategoryButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OnlineStore_CategoryButton.BP_OnlineStore_CategoryButton_C");
		return ptr;
	}

}


