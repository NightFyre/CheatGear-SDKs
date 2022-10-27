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
	 * 		Name   -> PredefinedFunction UHCLetter_ExclusionEntitlementCampaign019_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHCLetter_ExclusionEntitlementCampaign019_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HCLetter_ExclusionEntitlementCampaign019.HCLetter_ExclusionEntitlementCampaign019_C");
		return ptr;
	}

}


