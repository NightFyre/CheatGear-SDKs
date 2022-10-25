/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction AObj_WeaponCache_Ins_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AObj_WeaponCache_Ins_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Obj_WeaponCache_Ins.Obj_WeaponCache_Ins_C");
		return ptr;
	}

}


