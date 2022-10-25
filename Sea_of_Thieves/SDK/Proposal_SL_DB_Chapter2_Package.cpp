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
	 * 		Name   -> PredefinedFunction UProposal_SL_DB_Chapter2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProposal_SL_DB_Chapter2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proposal_SL_DB_Chapter2.Proposal_SL_DB_Chapter2_C");
		return ptr;
	}

}


