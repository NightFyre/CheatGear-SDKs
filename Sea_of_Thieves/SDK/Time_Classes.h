#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Time.TimeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTimeInterface : public UInterface
	{
	public:
		struct FGameTime GetTime();
		struct FDateTime GetSmoothRealWorldTime();
		struct FDateTime GetPreciseRealWorldTime();
		struct FGameTime ConvertRealWorldTimeToGameWorldTime(const struct FDateTime& RealWorldTime);
		struct FDateTime ConvertGameWorldTimeToRealWorldTime(const struct FGameTime& GameWorldTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Time.CustomizableTimeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomizableTimeInterface : public UInterface
	{
	public:
		void SetTimeScalar(int32_t RequestedTimeScalar);
		void SetSunset(float SunsetHours);
		void SetSunrise(float SunriseHours);
		void SetGameWorldTime(const struct FGameTime& RequestedTime);
		int32_t GetTimeScalar();
		void EnableQueryServiceTime(bool Enable);
		static UClass* StaticClass();
	};

	/**
	 * Class Time.DebugTimeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugTimeInterface : public UInterface
	{
	public:
		void SetTimeScalar(int32_t RequestedTimeScalar);
		void SetSunset(float SunsetHours);
		void SetSunrise(float SunriseHours);
		void SetGameWorldTime(const struct FGameTime& RequestedTime);
		int32_t GetTimeScalar();
		void EnableQueryServiceTime(bool Enable);
		static UClass* StaticClass();
	};

	/**
	 * Class Time.LocationProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULocationProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Time.TimeBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTimeBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FReplicatedDateTime STATIC_MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime);
		struct FDateTime STATIC_MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime);
		struct FDateTime STATIC_MakeDateTimeFromRaw(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond);
		bool STATIC_DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance);
		static UClass* StaticClass();
	};

	/**
	 * Class Time.TimeFormatterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTimeFormatterInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Time.TimeService
	 * Size -> 0x0128 (FullSize[0x04F0] - InheritedSize[0x03C8])
	 */
	class ATimeService : public AActor
	{
	public:
		unsigned char                                              UnknownData_MSX2[0x38];                                  // 0x03C8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           GameWorldTimeOffset;                                     // 0x0400(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected
		unsigned char                                              UnknownData_BUC1[0x4];                                   // 0x0408(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   TimeScalar;                                              // 0x040C(0x0004) Edit, Net, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		uint32_t                                                   NumberOfDaysInEachGameMonth;                             // 0x0410(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_VDCX[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ServiceTimeQueryRapidFrequencyOffsetMax;                 // 0x0418(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      ServiceTimeQueryRapidFrequencyInSeconds;                 // 0x0420(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      ServiceTimeQueryFrequencyInSeconds;                      // 0x0424(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      ClientTimeUpdateFrequencyInSeconds;                      // 0x0428(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      SunriseTimeHours;                                        // 0x042C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      SunsetTimeHours;                                         // 0x0430(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      LocalTimeUpdateAdjustMaxTimeDelta;                       // 0x0434(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      MinLocalTimeUpdateAdjustPercentageToSlowDown;            // 0x0438(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      MaxLocalTimeUpdateAdjustPercentageToSlowDown;            // 0x043C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      MinLocalTimeUpdateAdjustPercentageToSpeedUp;             // 0x0440(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      MaxLocalTimeUpdateAdjustPercentageToSpeedUp;             // 0x0444(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		uint32_t                                                   MaxNumReplicatedTimeEntriesToAverage;                    // 0x0448(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_UP06[0x4C];                                  // 0x044C(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReplicatedAuthoritativeTime                        ReplicatedServerTime;                                    // 0x0498(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify
		unsigned char                                              UnknownData_RSCO[0x48];                                  // 0x04A8(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnRep_ReplicatedServerTime();
		void MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks);
		static UClass* StaticClass();
	};

	/**
	 * Class Time.DebugTimeService
	 * Size -> 0x0008 (FullSize[0x04F8] - InheritedSize[0x04F0])
	 */
	class ADebugTimeService : public ATimeService
	{
	public:
		unsigned char                                              UnknownData_NDAP[0x8];                                   // 0x04F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void MulticastOnTimeScalarOffsetRPC(int32_t Scalar, int64_t Offset);
		static UClass* StaticClass();
	};

	/**
	 * Class Time.CustomizableTimeService
	 * Size -> 0x0008 (FullSize[0x0500] - InheritedSize[0x04F8])
	 */
	class ACustomizableTimeService : public ADebugTimeService
	{
	public:
		unsigned char                                              UnknownData_GJE8[0x8];                                   // 0x04F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void MulticastOnTimeScalarOffsetRPC(int32_t Scalar, int64_t Offset);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
