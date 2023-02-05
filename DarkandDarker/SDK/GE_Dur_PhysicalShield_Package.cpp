/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
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
	 * 		Name   -> PredefinedFunction UGE_Dur_PhysicalShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Dur_PhysicalShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Dur_PhysicalShield.GE_Dur_PhysicalShield_C");
		return ptr;
	}

}


