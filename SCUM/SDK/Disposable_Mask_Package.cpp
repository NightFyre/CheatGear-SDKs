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
	 * 		Name   -> PredefinedFunction ADisposable_Mask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADisposable_Mask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Disposable_Mask.Disposable_Mask_C");
		return ptr;
	}

}


