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
	 * 		Name   -> PredefinedFunction UBP_Widget_TacticalMap_EmptyVehicle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_TacticalMap_EmptyVehicle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_TacticalMap_EmptyVehicle.BP_Widget_TacticalMap_EmptyVehicle_C");
		return ptr;
	}

}


