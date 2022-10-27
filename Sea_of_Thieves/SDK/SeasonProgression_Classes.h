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
	 * Class SeasonProgression.IsExcludedFromSeasonProgressionStatCondition
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UIsExcludedFromSeasonProgressionStatCondition : public UTargetedStatCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SeasonProgression.PlayerSeasonProgressionComponent
	 * Size -> 0x00C0 (FullSize[0x0188] - InheritedSize[0x00C8])
	 */
	class UPlayerSeasonProgressionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_EN3T[0xC0];                                  // 0x00C8(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
