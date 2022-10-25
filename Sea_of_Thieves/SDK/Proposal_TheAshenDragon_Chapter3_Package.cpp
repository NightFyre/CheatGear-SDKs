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
	 * 		Name   -> PredefinedFunction UProposal_TheAshenDragon_Chapter3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProposal_TheAshenDragon_Chapter3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proposal_TheAshenDragon_Chapter3.Proposal_TheAshenDragon_Chapter3_C");
		return ptr;
	}

}


