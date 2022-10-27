/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UBP_MountTypeWeapon_WeaverRail_Short_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MountTypeWeapon_WeaverRail_Short_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MountTypeWeapon_WeaverRail_Short.BP_MountTypeWeapon_WeaverRail_Short_C");
		return ptr;
	}

}


