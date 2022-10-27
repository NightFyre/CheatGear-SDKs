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
	 * 		Name   -> PredefinedFunction UHeraldOfTheFlame_Chapter2Complete_Entitlement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeraldOfTheFlame_Chapter2Complete_Entitlement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HeraldOfTheFlame_Chapter2Complete_Entitlement.HeraldOfTheFlame_Chapter2Complete_Entitlement_C");
		return ptr;
	}

}


