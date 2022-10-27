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
	 * 		Name   -> PredefinedFunction URunningSkillUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URunningSkillUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RunningSkillUIData.RunningSkillUIData_C");
		return ptr;
	}

}


