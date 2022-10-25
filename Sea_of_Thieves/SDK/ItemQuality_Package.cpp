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
	 * 		Name   -> PredefinedFunction UItemQualityInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemQualityInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ItemQuality.ItemQualityInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemQualityComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemQualityComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ItemQuality.ItemQualityComponent");
		return ptr;
	}

}


