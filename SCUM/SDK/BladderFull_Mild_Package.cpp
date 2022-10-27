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
	 * 		Name   -> PredefinedFunction UBladderFull_Mild_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBladderFull_Mild_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BladderFull_Mild.BladderFull_Mild_C");
		return ptr;
	}

}


