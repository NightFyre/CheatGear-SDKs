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
	 * 		Name   -> PredefinedFunction USeasonProgressionExclusionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonProgressionExclusionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionFramework.SeasonProgressionExclusionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeasonProgressionExclusionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonProgressionExclusionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionFramework.SeasonProgressionExclusionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeasonSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SeasonProgressionFramework.SeasonSettings");
		return ptr;
	}

}


