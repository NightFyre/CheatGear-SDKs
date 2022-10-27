#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Holidays.HolidayStatics.IsHolidayDefinitionActive
	 */
	struct UHolidayStatics_IsHolidayDefinitionActive_Params
	{
	public:
		struct FHolidayDefinition                                  InHolidayDefinition;                                     // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Holidays.HolidayStatics.IsHolidayActive
	 */
	struct UHolidayStatics_IsHolidayActive_Params
	{
	public:
		class FName                                                Holiday;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Holidays.HolidayStatics.GetActiveHolidays
	 */
	struct UHolidayStatics_GetActiveHolidays_Params
	{
	public:
		TArray<class FName>                                        OutActiveHolidays;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Holidays.HolidayStatics.FindHolidayDefinition
	 */
	struct UHolidayStatics_FindHolidayDefinition_Params
	{
	public:
		class FName                                                Holiday;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHolidayDefinition                                  OutHolidayDefinition;                                    // 0x0008(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
