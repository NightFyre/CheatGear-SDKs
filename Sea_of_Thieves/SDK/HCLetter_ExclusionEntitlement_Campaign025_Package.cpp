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
	 * 		Name   -> PredefinedFunction UHCLetter_ExclusionEntitlement_Campaign025_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHCLetter_ExclusionEntitlement_Campaign025_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HCLetter_ExclusionEntitlement_Campaign025.HCLetter_ExclusionEntitlement_Campaign025_C");
		return ptr;
	}

}


