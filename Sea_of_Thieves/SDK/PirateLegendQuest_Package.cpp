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
	 * 		Name   -> PredefinedFunction AVeilOfTheAncients.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVeilOfTheAncients::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateLegendQuest.VeilOfTheAncients");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVeilService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVeilService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateLegendQuest.VeilService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetVeilOfTheAncientsStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetVeilOfTheAncientsStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateLegendQuest.GetVeilOfTheAncientsStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVeilOfTheAncientsServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVeilOfTheAncientsServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateLegendQuest.VeilOfTheAncientsServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetVeilOfTheAncientsStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetVeilOfTheAncientsStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateLegendQuest.GetVeilOfTheAncientsStepDesc");
		return ptr;
	}

}


