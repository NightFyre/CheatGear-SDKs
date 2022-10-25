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
	 * 		Name   -> PredefinedFunction UBPGameInstance_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPGameInstance_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPGameInstance_Default.BPGameInstance_Default_C");
		return ptr;
	}

}


