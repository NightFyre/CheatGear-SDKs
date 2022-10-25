#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function Time.TimeInterface.GetTime
	 */
	struct UTimeInterface_GetTime_Params
	{
	public:
		struct FGameTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Time.TimeInterface.GetSmoothRealWorldTime
	 */
	struct UTimeInterface_GetSmoothRealWorldTime_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Time.TimeInterface.GetPreciseRealWorldTime
	 */
	struct UTimeInterface_GetPreciseRealWorldTime_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime
	 */
	struct UTimeInterface_ConvertRealWorldTimeToGameWorldTime_Params
	{
	public:
		struct FDateTime                                           RealWorldTime;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor)
		struct FGameTime                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime
	 */
	struct UTimeInterface_ConvertGameWorldTimeToRealWorldTime_Params
	{
	public:
		struct FGameTime                                           GameWorldTime;                                           // 0x0000(0x0008)  (ConstParm, Parm)
		struct FDateTime                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Time.CustomizableTimeInterface.SetTimeScalar
	 */
	struct UCustomizableTimeInterface_SetTimeScalar_Params
	{
	public:
		int32_t                                                    RequestedTimeScalar;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Time.CustomizableTimeInterface.SetSunset
	 */
	struct UCustomizableTimeInterface_SetSunset_Params
	{
	public:
		float                                                      SunsetHours;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Time.CustomizableTimeInterface.SetSunrise
	 */
	struct UCustomizableTimeInterface_SetSunrise_Params
	{
	public:
		float                                                      SunriseHours;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Time.CustomizableTimeInterface.SetGameWorldTime
	 */
	struct UCustomizableTimeInterface_SetGameWorldTime_Params
	{
	public:
		struct FGameTime                                           RequestedTime;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Time.CustomizableTimeInterface.GetTimeScalar
	 */
	struct UCustomizableTimeInterface_GetTimeScalar_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Time.CustomizableTimeInterface.EnableQueryServiceTime
	 */
	struct UCustomizableTimeInterface_EnableQueryServiceTime_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Time.DebugTimeInterface.SetTimeScalar
	 */
	struct UDebugTimeInterface_SetTimeScalar_Params
	{
	public:
		int32_t                                                    RequestedTimeScalar;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Time.DebugTimeInterface.SetSunset
	 */
	struct UDebugTimeInterface_SetSunset_Params
	{
	public:
		float                                                      SunsetHours;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Time.DebugTimeInterface.SetSunrise
	 */
	struct UDebugTimeInterface_SetSunrise_Params
	{
	public:
		float                                                      SunriseHours;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Time.DebugTimeInterface.SetGameWorldTime
	 */
	struct UDebugTimeInterface_SetGameWorldTime_Params
	{
	public:
		struct FGameTime                                           RequestedTime;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Time.DebugTimeInterface.GetTimeScalar
	 */
	struct UDebugTimeInterface_GetTimeScalar_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Time.DebugTimeInterface.EnableQueryServiceTime
	 */
	struct UDebugTimeInterface_EnableQueryServiceTime_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
	 */
	struct UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params
	{
	public:
		struct FDateTime                                           InDateTime;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor)
		struct FReplicatedDateTime                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
	 */
	struct UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params
	{
	public:
		struct FReplicatedDateTime                                 InDateTime;                                              // 0x0000(0x0008)  (Parm)
		struct FDateTime                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw
	 */
	struct UTimeBlueprintLibrary_MakeDateTimeFromRaw_Params
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Day;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Hour;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Minute;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Second;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Millisecond;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9GPV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
	 */
	struct UTimeBlueprintLibrary_DateTimesWithinTolerance_Params
	{
	public:
		struct FDateTime                                           FirstDateTime;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor)
		struct FDateTime                                           SecondDateTime;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor)
		struct FTimespan                                           Tolerance;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Time.TimeService.OnRep_ReplicatedServerTime
	 */
	struct ATimeService_OnRep_ReplicatedServerTime_Params
	{	};

	/**
	 * Function Time.TimeService.MulticastOnServiceTimeChangedRPC
	 */
	struct ATimeService_MulticastOnServiceTimeChangedRPC_Params
	{
	public:
		int64_t                                                    ServiceTimeInTicks;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC
	 */
	struct ADebugTimeService_MulticastOnTimeScalarOffsetRPC_Params
	{
	public:
		int32_t                                                    Scalar;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3Z3R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int64_t                                                    Offset;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC
	 */
	struct ACustomizableTimeService_MulticastOnTimeScalarOffsetRPC_Params
	{
	public:
		int32_t                                                    Scalar;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V09N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int64_t                                                    Offset;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
