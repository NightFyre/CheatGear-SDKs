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
	 * 		Name   -> PredefinedFunction UBP_TT8_Rank_RevengeOfTheMorningstar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TT8_Rank_RevengeOfTheMorningstar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TT8_Rank_RevengeOfTheMorningstar.BP_TT8_Rank_RevengeOfTheMorningstar_C");
		return ptr;
	}

}


