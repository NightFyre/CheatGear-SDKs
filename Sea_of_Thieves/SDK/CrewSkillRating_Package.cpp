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
	 * 		Name   -> PredefinedFunction UCrewSkillRatingServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrewSkillRatingServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CrewSkillRating.CrewSkillRatingServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrewSkillRatingService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrewSkillRatingService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CrewSkillRating.CrewSkillRatingService");
		return ptr;
	}

}


