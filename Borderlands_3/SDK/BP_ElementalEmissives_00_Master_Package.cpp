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
	 * 		Name   -> PredefinedFunction UBP_ElementalEmissives_00_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ElementalEmissives_00_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElementalEmissives_00_Master.BP_ElementalEmissives_00_Master_C");
		return ptr;
	}

}


