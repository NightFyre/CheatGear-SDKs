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
	 * 		Name   -> PredefinedFunction UDemolitionSkillDebug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemolitionSkillDebug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DemolitionSkillDebug.DemolitionSkillDebug_C");
		return ptr;
	}

}


