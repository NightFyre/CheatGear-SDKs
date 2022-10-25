/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction AStationAirlockDockingArea_Art_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStationAirlockDockingArea_Art_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StationAirlockDockingArea_Art.StationAirlockDockingArea_Art_C");
		return ptr;
	}

}


