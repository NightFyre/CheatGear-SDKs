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
	 * 		Name   -> PredefinedFunction UOoSLetter_ExclusionEntitlementCampaign018_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOoSLetter_ExclusionEntitlementCampaign018_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OoSLetter_ExclusionEntitlementCampaign018.OoSLetter_ExclusionEntitlementCampaign018_C");
		return ptr;
	}

}


