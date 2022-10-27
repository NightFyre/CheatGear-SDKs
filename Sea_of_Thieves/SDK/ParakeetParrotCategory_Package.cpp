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
	 * 		Name   -> PredefinedFunction UParakeetParrotCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParakeetParrotCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ParakeetParrotCategory.ParakeetParrotCategory_C");
		return ptr;
	}

}


