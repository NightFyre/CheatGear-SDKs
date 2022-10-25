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
	 * 		Name   -> PredefinedFunction UShipTitle_ServantOfTheFlame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipTitle_ServantOfTheFlame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShipTitle_ServantOfTheFlame.ShipTitle_ServantOfTheFlame_C");
		return ptr;
	}

}


