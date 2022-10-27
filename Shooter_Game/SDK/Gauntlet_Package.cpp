/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * 		Name   -> PredefinedFunction UGauntletTestController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGauntletTestController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gauntlet.GauntletTestController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGauntletTestControllerBootTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGauntletTestControllerBootTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gauntlet.GauntletTestControllerBootTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGauntletTestControllerErrorTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGauntletTestControllerErrorTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gauntlet.GauntletTestControllerErrorTest");
		return ptr;
	}

}


