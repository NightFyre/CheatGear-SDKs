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
	 * 		Name   -> PredefinedFunction UBP_Challenge_Siren_SoulSap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Challenge_Siren_SoulSap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_Siren_SoulSap.BP_Challenge_Siren_SoulSap_C");
		return ptr;
	}

}


