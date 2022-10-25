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
	 * 		Name   -> PredefinedFunction UBP_CT_Rank_0_XMarks_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CT_Rank_0_XMarks_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CT_Rank_0_Xmarks.BP_CT_Rank_0_XMarks_C");
		return ptr;
	}

}


