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
	 * 		Name   -> PredefinedFunction AParty_Glasses_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AParty_Glasses_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Party_Glasses_02.Party_Glasses_02_C");
		return ptr;
	}

}


