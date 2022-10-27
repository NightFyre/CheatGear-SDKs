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
	 * 		Name   -> PredefinedFunction UARand_Beastmaster_DLCSkill_Start_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARand_Beastmaster_DLCSkill_Start_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ARand_Beastmaster_DLCSkill_Start.ARand_Beastmaster_DLCSkill_Start_C");
		return ptr;
	}

}


