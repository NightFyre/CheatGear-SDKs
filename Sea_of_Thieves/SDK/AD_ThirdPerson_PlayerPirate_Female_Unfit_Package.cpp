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
	 * 		Name   -> PredefinedFunction UAD_ThirdPerson_PlayerPirate_Female_Unfit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAD_ThirdPerson_PlayerPirate_Female_Unfit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Unfit.AD_ThirdPerson_PlayerPirate_Female_Unfit_C");
		return ptr;
	}

}


