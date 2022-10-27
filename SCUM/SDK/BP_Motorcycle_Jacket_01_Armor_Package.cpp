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
	 * 		Name   -> PredefinedFunction ABP_Motorcycle_Jacket_01_Armor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Motorcycle_Jacket_01_Armor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Motorcycle_Jacket_01_Armor.BP_Motorcycle_Jacket_01_Armor_C");
		return ptr;
	}

}


