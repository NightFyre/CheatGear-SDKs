/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UCB_BattlewornDissidentBundle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCB_BattlewornDissidentBundle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CB_BattlewornDissidentBundle.CB_BattlewornDissidentBundle_C");
		return ptr;
	}

}


