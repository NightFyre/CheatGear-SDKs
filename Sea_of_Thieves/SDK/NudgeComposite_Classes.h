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
	 * Class NudgeComposite.NudgeFromExplosionsPolicy
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UNudgeFromExplosionsPolicy : public UNudgePolicy
	{
	public:
		TArray<struct FNudgeChancePerDamagerType>                  AcceptedDamagerTypes;                                    // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NudgeComposite.NudgeFromShipCollisionPolicy
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UNudgeFromShipCollisionPolicy : public UNudgePolicy
	{
	public:
		int32_t                                                    DamageAmountRequiredToNudge;                             // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceOfNudge;                                           // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NudgeComposite.NudgeFromStormPolicy
	 * Size -> 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
	 */
	class UNudgeFromStormPolicy : public UNudgePolicy
	{
	public:
		float                                                      ChanceOfNudge;                                           // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T4LU[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   WeightedTimers;                                          // 0x00D0(0x0030) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_X098[0x60];                                  // 0x0100(0x0060) MISSED OFFSET (PADDING)

	public:
		void IncrementTimer();
		static UClass* StaticClass();
	};

	/**
	 * Class NudgeComposite.NudgeFromWaterLevelPolicy
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UNudgeFromWaterLevelPolicy : public UNudgePolicy
	{
	public:
		float                                                      WaterLevelDifferenceBetweenUpdates;                      // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZOffsetFromWaterToMountpoint;                            // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_31SO[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
