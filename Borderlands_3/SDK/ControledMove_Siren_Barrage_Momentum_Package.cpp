/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UControledMove_Siren_Barrage_Momentum_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControledMove_Siren_Barrage_Momentum_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControledMove_Siren_Barrage_Momentum.ControledMove_Siren_Barrage_Momentum_C");
		return ptr;
	}

}


