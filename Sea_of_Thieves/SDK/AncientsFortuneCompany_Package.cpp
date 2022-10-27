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
	 * 		Name   -> PredefinedFunction UAncientsFortuneCompany_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAncientsFortuneCompany_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AncientsFortuneCompany.AncientsFortuneCompany_C");
		return ptr;
	}

}


