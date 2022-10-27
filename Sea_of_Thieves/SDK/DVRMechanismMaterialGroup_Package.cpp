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
	 * 		Name   -> PredefinedFunction UDVRMechanismMaterialGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDVRMechanismMaterialGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DVRMechanismMaterialGroup.DVRMechanismMaterialGroup_C");
		return ptr;
	}

}


