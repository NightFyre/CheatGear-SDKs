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
	 * 		Name   -> PredefinedFunction UBPCS_Beastmaster_RakkAttack_RakkPortal_Var2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCS_Beastmaster_RakkAttack_RakkPortal_Var2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCS_Beastmaster_RakkAttack_RakkPortal_Var2.BPCS_Beastmaster_RakkAttack_RakkPortal_Var2_C");
		return ptr;
	}

}


