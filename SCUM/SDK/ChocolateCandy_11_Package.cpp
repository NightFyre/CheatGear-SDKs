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
	 * 		Name   -> PredefinedFunction AChocolateCandy_10_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChocolateCandy_10_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChocolateCandy_11.ChocolateCandy_10_C");
		return ptr;
	}

}


