/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UDarkTides_HexingSkullSoldEntitlement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDarkTides_HexingSkullSoldEntitlement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DarkTides_HexingSkullSoldEntitlement.DarkTides_HexingSkullSoldEntitlement_C");
		return ptr;
	}

}


