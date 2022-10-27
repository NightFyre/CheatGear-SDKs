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
	 * 		Name   -> PredefinedFunction UBP_MerrickPaintingAdventure6Memento_01_a_TrinketDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MerrickPaintingAdventure6Memento_01_a_TrinketDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerrickPaintingAdventure6Memento_01_a_TrinketDesc.BP_MerrickPaintingAdventure6Memento_01_a_TrinketDesc_C");
		return ptr;
	}

}


