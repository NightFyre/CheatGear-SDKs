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
	 * 		Name   -> PredefinedFunction UNeedToUrinateUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNeedToUrinateUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NeedToUrinateUIData.NeedToUrinateUIData_C");
		return ptr;
	}

}


