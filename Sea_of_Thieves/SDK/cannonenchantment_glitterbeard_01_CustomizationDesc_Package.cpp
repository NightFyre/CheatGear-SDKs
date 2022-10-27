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
	 * 		Name   -> PredefinedFunction Ucannonenchantment_glitterbeard_01_CustomizationDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Ucannonenchantment_glitterbeard_01_CustomizationDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass cannonenchantment_glitterbeard_01_CustomizationDesc.cannonenchantment_glitterbeard_01_CustomizationDesc_C");
		return ptr;
	}

}


