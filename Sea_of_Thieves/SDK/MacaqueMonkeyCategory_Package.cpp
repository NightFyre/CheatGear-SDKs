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
	 * 		Name   -> PredefinedFunction UMacaqueMonkeyCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMacaqueMonkeyCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MacaqueMonkeyCategory.MacaqueMonkeyCategory_C");
		return ptr;
	}

}


