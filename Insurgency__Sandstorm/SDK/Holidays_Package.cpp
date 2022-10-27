/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UHolidaySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHolidaySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Holidays.HolidaySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0503D2C0
	 * 		Name   -> Function Holidays.HolidayStatics.IsHolidayDefinitionActive
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHolidayDefinition                          InHolidayDefinition                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UHolidayStatics::STATIC_IsHolidayDefinitionActive(const struct FHolidayDefinition& InHolidayDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holidays.HolidayStatics.IsHolidayDefinitionActive");
		
		UHolidayStatics_IsHolidayDefinitionActive_Params params {};
		params.InHolidayDefinition = InHolidayDefinition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0503D240
	 * 		Name   -> Function Holidays.HolidayStatics.IsHolidayActive
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Holiday                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHolidayStatics::STATIC_IsHolidayActive(const class FName& Holiday)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holidays.HolidayStatics.IsHolidayActive");
		
		UHolidayStatics_IsHolidayActive_Params params {};
		params.Holiday = Holiday;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0503D1A0
	 * 		Name   -> Function Holidays.HolidayStatics.GetActiveHolidays
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FName>                                OutActiveHolidays                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHolidayStatics::STATIC_GetActiveHolidays(TArray<class FName>* OutActiveHolidays)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holidays.HolidayStatics.GetActiveHolidays");
		
		UHolidayStatics_GetActiveHolidays_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActiveHolidays != nullptr)
			*OutActiveHolidays = params.OutActiveHolidays;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0503D050
	 * 		Name   -> Function Holidays.HolidayStatics.FindHolidayDefinition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Holiday                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHolidayDefinition                          OutHolidayDefinition                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UHolidayStatics::STATIC_FindHolidayDefinition(const class FName& Holiday, struct FHolidayDefinition* OutHolidayDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holidays.HolidayStatics.FindHolidayDefinition");
		
		UHolidayStatics_FindHolidayDefinition_Params params {};
		params.Holiday = Holiday;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHolidayDefinition != nullptr)
			*OutHolidayDefinition = params.OutHolidayDefinition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHolidayStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHolidayStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Holidays.HolidayStatics");
		return ptr;
	}

}


