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
	 * 		Name   -> PredefinedFunction UIsExcludedFromSeasonProgressionStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsExcludedFromSeasonProgressionStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgression.IsExcludedFromSeasonProgressionStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerSeasonProgressionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerSeasonProgressionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgression.PlayerSeasonProgressionComponent");
		return ptr;
	}

}


