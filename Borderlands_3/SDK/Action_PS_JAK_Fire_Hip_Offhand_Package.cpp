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
	 * 		Name   -> PredefinedFunction UAction_PS_JAK_Fire_Hip_Offhand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PS_JAK_Fire_Hip_Offhand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PS_JAK_Fire_Hip_Offhand.Action_PS_JAK_Fire_Hip_Offhand_C");
		return ptr;
	}

}


