/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function SunPosition.SunPositionFunctionLibrary.GetSunPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timezone                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsDaylightSavingTime                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Year                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Month                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Day                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Hours                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minutes                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSunPositionData                            SunPositionData                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USunPositionFunctionLibrary::GetSunPosition(float Latitude, float Longitude, float Timezone, bool bIsDaylightSavingTime, int32_t Year, int32_t Month, int32_t Day, int32_t Hours, int32_t Minutes, int32_t Seconds, struct FSunPositionData* SunPositionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunPosition.SunPositionFunctionLibrary.GetSunPosition");
		
		USunPositionFunctionLibrary_GetSunPosition_Params params {};
		params.Latitude = Latitude;
		params.Longitude = Longitude;
		params.Timezone = Timezone;
		params.bIsDaylightSavingTime = bIsDaylightSavingTime;
		params.Year = Year;
		params.Month = Month;
		params.Day = Day;
		params.Hours = Hours;
		params.Minutes = Minutes;
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SunPositionData != nullptr)
			*SunPositionData = params.SunPositionData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USunPositionFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USunPositionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SunPosition.SunPositionFunctionLibrary");
		return ptr;
	}

}


