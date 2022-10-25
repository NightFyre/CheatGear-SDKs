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
	 * 		Name   -> PredefinedFunction UBP_BaseWeaponTrinketData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BaseWeaponTrinketData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseWeaponTrinketData.BP_BaseWeaponTrinketData_C");
		return ptr;
	}

}


