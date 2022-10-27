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
	 * 		Name   -> PredefinedFunction UBPAnointedFreezeComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnointedFreezeComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPAnointedFreezeComponent.BPAnointedFreezeComponent_C");
		return ptr;
	}

}


