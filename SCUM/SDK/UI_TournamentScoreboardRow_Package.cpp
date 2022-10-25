/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> PredefinedFunction UUI_TournamentScoreboardRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TournamentScoreboardRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TournamentScoreboardRow.UI_TournamentScoreboardRow_C");
		return ptr;
	}

}


