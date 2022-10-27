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
	 * 		Name   -> PredefinedFunction UBP_TT_SL4_Rank_DB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TT_SL4_Rank_DB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TT_SL4_Rank_DB.BP_TT_SL4_Rank_DB_C");
		return ptr;
	}

}


