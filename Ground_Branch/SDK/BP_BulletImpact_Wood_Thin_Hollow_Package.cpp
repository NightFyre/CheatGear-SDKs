/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> PredefinedFunction ABP_BulletImpact_Wood_Thin_Hollow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BulletImpact_Wood_Thin_Hollow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BulletImpact_Wood_Thin_Hollow.BP_BulletImpact_Wood_Thin_Hollow_C");
		return ptr;
	}

}


