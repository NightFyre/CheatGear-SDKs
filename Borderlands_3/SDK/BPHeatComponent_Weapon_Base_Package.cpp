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
	 * 		Name   -> PredefinedFunction UBPHeatComponent_Weapon_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPHeatComponent_Weapon_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPHeatComponent_Weapon_Base.BPHeatComponent_Weapon_Base_C");
		return ptr;
	}

}


