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
	 * Class AthenaStatusResponse.StatusResponseApplyOneShotStatus
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UStatusResponseApplyOneShotStatus : public UStatusResponse
	{
	public:
		struct FStatus                                             StatusToApply;                                           // 0x0030(0x0018) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaStatusResponse.StatusResponseApplyPersistentStatus
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UStatusResponseApplyPersistentStatus : public UStatusResponse
	{
	public:
		struct FStatus                                             StatusToApply;                                           // 0x0030(0x0018) Edit, DisableEditOnInstance
		float                                                      DurationMultiplier;                                      // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2W9D[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaStatusResponse.StatusResponseCancelStatus
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UStatusResponseCancelStatus : public UStatusResponse
	{
	public:
		TArray<class UClass*>                                      Status;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaStatusResponse.StatusResponseCook
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatusResponseCook : public UStatusResponse
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaStatusResponse.StatusResponseHealthRegenerationPoolChange
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UStatusResponseHealthRegenerationPoolChange : public UStatusResponse
	{
	public:
		float                                                      HealthPoolChangeIntensityMultiplier;                     // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z9AE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaStatusResponse.StatusResponseReportNoiseEvent
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UStatusResponseReportNoiseEvent : public UStatusResponse
	{
	public:
		class UClass*                                              NoiseInstigator;                                         // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                NoiseTag;                                                // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NoiseRange;                                              // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NoiseLoudness;                                           // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoiseMultipleTicks;                                      // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5TU8[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NoiseTimerTick;                                          // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KJWS[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaStatusResponse.StatusResponseSetScalarParamOnCharacter
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UStatusResponseSetScalarParamOnCharacter : public UStatusResponse
	{
	public:
		TArray<struct FScalarParamInfo>                            ParamsToChange;                                          // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaStatusResponse.StatusResponseSuspendStatus
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UStatusResponseSuspendStatus : public UStatusResponse
	{
	public:
		TArray<class UClass*>                                      Status;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
