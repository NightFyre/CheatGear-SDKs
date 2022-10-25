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
	 * 		Name   -> PredefinedFunction UCustomWeatherServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomWeatherServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomWeather.CustomWeatherServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomWeatherService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomWeatherService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomWeather.CustomWeatherService");
		return ptr;
	}

}


