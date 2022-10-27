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
	 * 		Name   -> PredefinedFunction UTitle_SunkenKingdom_LegendOfTheSunkenKingdom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_SunkenKingdom_LegendOfTheSunkenKingdom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Title_SunkenKingdom_LegendOfTheSunkenKingdom.Title_SunkenKingdom_LegendOfTheSunkenKingdom_C");
		return ptr;
	}

}


