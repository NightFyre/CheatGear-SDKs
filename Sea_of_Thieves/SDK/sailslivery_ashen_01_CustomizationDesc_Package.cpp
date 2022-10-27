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
	 * 		Name   -> PredefinedFunction Usailslivery_ashen_01_CustomizationDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Usailslivery_ashen_01_CustomizationDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sailslivery_ashen_01_CustomizationDesc.sailslivery_ashen_01_CustomizationDesc_C");
		return ptr;
	}

}


