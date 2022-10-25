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
	 * 		Name   -> PredefinedFunction UAviationSkillUI_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAviationSkillUI_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AviationSkillUI_Data.AviationSkillUI_Data_C");
		return ptr;
	}

}


