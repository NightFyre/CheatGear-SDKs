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
	 * 		Name   -> PredefinedFunction AKnife_Combat_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKnife_Combat_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Knife_Combat_Child.Knife_Combat_Child_C");
		return ptr;
	}

}


