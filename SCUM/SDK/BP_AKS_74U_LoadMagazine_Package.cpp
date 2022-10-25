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
	 * 		Name   -> PredefinedFunction UBP_AKS_74U_LoadMagazine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AKS_74U_LoadMagazine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AKS_74U_LoadMagazine.BP_AKS_74U_LoadMagazine_C");
		return ptr;
	}

}


