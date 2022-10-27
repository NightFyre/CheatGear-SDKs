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
	 * 		Name   -> PredefinedFunction UOrderOfSouls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrderOfSouls_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OrderOfSouls.OrderOfSouls_C");
		return ptr;
	}

}


