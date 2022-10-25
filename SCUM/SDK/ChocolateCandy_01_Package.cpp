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
	 * 		Name   -> PredefinedFunction AChocolateCandy_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChocolateCandy_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChocolateCandy_01.ChocolateCandy_01_C");
		return ptr;
	}

}


