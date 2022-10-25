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
	 * 		Name   -> PredefinedFunction UCampaign038_VoyageEntitlement6_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCampaign038_VoyageEntitlement6_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Campaign038_VoyageEntitlement6.Campaign038_VoyageEntitlement6_C");
		return ptr;
	}

}


