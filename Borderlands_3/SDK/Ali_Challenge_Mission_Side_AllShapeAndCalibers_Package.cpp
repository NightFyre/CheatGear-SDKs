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
	 * 		Name   -> PredefinedFunction UAli_Challenge_Mission_Side_AllShapeAndCalibers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAli_Challenge_Mission_Side_AllShapeAndCalibers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ali_Challenge_Mission_Side_AllShapeAndCalibers.Ali_Challenge_Mission_Side_AllShapeAndCalibers_C");
		return ptr;
	}

}


