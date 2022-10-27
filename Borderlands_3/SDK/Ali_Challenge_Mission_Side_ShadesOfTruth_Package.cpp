/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UAli_Challenge_Mission_Side_ShadesOfTruth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAli_Challenge_Mission_Side_ShadesOfTruth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ali_Challenge_Mission_Side_ShadesOfTruth.Ali_Challenge_Mission_Side_ShadesOfTruth_C");
		return ptr;
	}

}


