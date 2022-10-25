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
	 * 		Name   -> PredefinedFunction UAntibioticsReaction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAntibioticsReaction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AntibioticsReaction.AntibioticsReaction_C");
		return ptr;
	}

}


