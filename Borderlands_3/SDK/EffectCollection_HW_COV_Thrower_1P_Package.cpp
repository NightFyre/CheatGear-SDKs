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
	 * 		Name   -> PredefinedFunction UEffectCollection_HW_COV_Thrower_1P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffectCollection_HW_COV_Thrower_1P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EffectCollection_HW_COV_Thrower_1P.EffectCollection_HW_COV_Thrower_1P_C");
		return ptr;
	}

}


