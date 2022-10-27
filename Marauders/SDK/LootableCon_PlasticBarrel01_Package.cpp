/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> PredefinedFunction ALootableCon_PlasticBarrel01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALootableCon_PlasticBarrel01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootableCon_PlasticBarrel01.LootableCon_PlasticBarrel01_C");
		return ptr;
	}

}


