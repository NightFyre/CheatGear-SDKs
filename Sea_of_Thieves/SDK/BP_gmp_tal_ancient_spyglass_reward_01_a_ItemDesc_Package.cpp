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
	 * 		Name   -> PredefinedFunction UBP_gmp_tal_ancient_spyglass_reward_01_a_ItemDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_gmp_tal_ancient_spyglass_reward_01_a_ItemDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_gmp_tal_ancient_spyglass_reward_01_a_ItemDesc.BP_gmp_tal_ancient_spyglass_reward_01_a_ItemDesc_C");
		return ptr;
	}

}


