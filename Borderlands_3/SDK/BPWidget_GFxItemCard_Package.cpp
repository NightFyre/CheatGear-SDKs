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
	 * 		Name   -> PredefinedFunction UBPWidget_GFxItemCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWidget_GFxItemCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_GFxItemCard.BPWidget_GFxItemCard_C");
		return ptr;
	}

}


