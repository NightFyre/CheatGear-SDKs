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
	 * 		Name   -> PredefinedFunction ABP_BulletImpact_Concrete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BulletImpact_Concrete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BulletImpact_Concrete.BP_BulletImpact_Concrete_C");
		return ptr;
	}

}


