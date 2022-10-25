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
	 * 		Name   -> PredefinedFunction UBP_ClassSelect_GameRule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ClassSelect_GameRule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ClassSelect_GameRule.BP_ClassSelect_GameRule_C");
		return ptr;
	}

}


