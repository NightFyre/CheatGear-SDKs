/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UMulticastSparseDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMulticastSparseDelegateProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoreUObject_1.MulticastSparseDelegateProperty");
		return ptr;
	}

}


