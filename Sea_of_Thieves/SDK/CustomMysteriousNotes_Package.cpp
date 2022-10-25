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
	 * 		Name   -> PredefinedFunction UCustomMysteriousNotesInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMysteriousNotesInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMysteriousNotes.CustomMysteriousNotesInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomMysteriousNotesService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomMysteriousNotesService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMysteriousNotes.CustomMysteriousNotesService");
		return ptr;
	}

}


