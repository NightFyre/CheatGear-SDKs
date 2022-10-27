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
	 * 		Name   -> PredefinedFunction UBP_MAL_ElemPrimary_04_Slag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MAL_ElemPrimary_04_Slag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MAL_ElemPrimary_04_Slag.BP_MAL_ElemPrimary_04_Slag_C");
		return ptr;
	}

}


