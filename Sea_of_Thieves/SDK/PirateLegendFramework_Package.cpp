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
	 * 		Name   -> PredefinedFunction UPirateLegendInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPirateLegendInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateLegendFramework.PirateLegendInterface");
		return ptr;
	}

}


