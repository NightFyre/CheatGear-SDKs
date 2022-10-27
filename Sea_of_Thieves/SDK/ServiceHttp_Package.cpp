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
	 * 		Name   -> PredefinedFunction UServiceHttpSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServiceHttpSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServiceHttp.ServiceHttpSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDevelopmentAuthenticationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDevelopmentAuthenticationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServiceHttp.DevelopmentAuthenticationSettings");
		return ptr;
	}

}


