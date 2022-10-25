/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UBP_UG_SECGreaseGunSuppressor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UG_SECGreaseGunSuppressor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_UG_SECGreaseGunSuppressor.BP_UG_SECGreaseGunSuppressor_C");
		return ptr;
	}

}


