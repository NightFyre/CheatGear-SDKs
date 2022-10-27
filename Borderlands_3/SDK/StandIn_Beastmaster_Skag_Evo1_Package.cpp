/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction AStandIn_Beastmaster_Skag_Evo1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandIn_Beastmaster_Skag_Evo1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Beastmaster_Skag_Evo1.StandIn_Beastmaster_Skag_Evo1_C");
		return ptr;
	}

}


