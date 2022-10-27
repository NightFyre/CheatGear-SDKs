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
	 * 		Name   -> PredefinedFunction UBP_WeaponModelViewer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WeaponModelViewer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_WeaponModelViewer.BP_WeaponModelViewer_C");
		return ptr;
	}

}


