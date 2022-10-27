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
	 * 		Name   -> PredefinedFunction AScum_Shirt_Supporter_Pack_Black_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScum_Shirt_Supporter_Pack_Black_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Scum_Shirt_Supporter_Pack_Black.Scum_Shirt_Supporter_Pack_Black_C");
		return ptr;
	}

}


