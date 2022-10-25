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
	 * 		Name   -> PredefinedFunction UZoomedInOnWieldableItemActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZoomedInOnWieldableItemActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ZoomInOnWieldableItems.ZoomedInOnWieldableItemActionStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZoomInOnWieldableItemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZoomInOnWieldableItemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ZoomInOnWieldableItems.ZoomInOnWieldableItemComponent");
		return ptr;
	}

}


