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
	 * 		Name   -> PredefinedFunction UBP_HC_Rank09_RankDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HC_Rank09_RankDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HC_Rank09_RankDesc.BP_HC_Rank09_RankDesc_C");
		return ptr;
	}

}


