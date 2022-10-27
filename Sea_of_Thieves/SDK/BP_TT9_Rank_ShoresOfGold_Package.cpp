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
	 * 		Name   -> PredefinedFunction UBP_TT9_Rank_ShoresOfGold_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TT9_Rank_ShoresOfGold_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TT9_Rank_ShoresOfGold.BP_TT9_Rank_ShoresOfGold_C");
		return ptr;
	}

}


