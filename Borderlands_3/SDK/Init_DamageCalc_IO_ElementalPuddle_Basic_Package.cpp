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
	 * 		Name   -> PredefinedFunction UInit_DamageCalc_IO_ElementalPuddle_Basic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_DamageCalc_IO_ElementalPuddle_Basic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_DamageCalc_IO_ElementalPuddle_Basic.Init_DamageCalc_IO_ElementalPuddle_Basic_C");
		return ptr;
	}

}


