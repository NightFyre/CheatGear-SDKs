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
	 * 		Name   -> PredefinedFunction UExtentEstimationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtentEstimationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Damage.ExtentEstimationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitNotificationTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitNotificationTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Damage.HitNotificationTargetInterface");
		return ptr;
	}

}


