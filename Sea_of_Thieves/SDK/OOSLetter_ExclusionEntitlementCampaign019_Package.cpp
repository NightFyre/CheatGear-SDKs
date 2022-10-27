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
	 * 		Name   -> PredefinedFunction UOOSLetter_ExclusionEntitlementCampaign019_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOOSLetter_ExclusionEntitlementCampaign019_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OOSLetter_ExclusionEntitlementCampaign019.OOSLetter_ExclusionEntitlementCampaign019_C");
		return ptr;
	}

}


