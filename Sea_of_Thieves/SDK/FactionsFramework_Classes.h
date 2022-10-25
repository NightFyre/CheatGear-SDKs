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
	 * Class FactionsFramework.FactionCurseInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFactionCurseInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FactionsFramework.FactionServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFactionServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FactionsFramework.IsTargetWearingGhostCurseStatCondition
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UIsTargetWearingGhostCurseStatCondition : public UTargetedStatCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FactionsFramework.IsTargetWearingSkeletonCurseStatCondition
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UIsTargetWearingSkeletonCurseStatCondition : public UTargetedStatCondition
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
