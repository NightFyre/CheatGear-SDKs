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
	 * 		Name   -> PredefinedFunction UReviveGhostAnimationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveGhostAnimationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RevivingAnimation.ReviveGhostAnimationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveGhostAnimationDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveGhostAnimationDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RevivingAnimation.ReviveGhostAnimationDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveGhostAnimationInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveGhostAnimationInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RevivingAnimation.ReviveGhostAnimationInstance");
		return ptr;
	}

}


