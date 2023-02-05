/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * 		Name   -> PredefinedFunction UGA_BattleAxeAttack02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_BattleAxeAttack02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_BattleAxeAttack02.GA_BattleAxeAttack02_C");
		return ptr;
	}

}


