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
	 * Class CrewOwnershipTracking.CrewOwnershipTrackingInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrewOwnershipTrackingInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CrewOwnershipTracking.CrewSpawnOwnershipTrackingInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrewSpawnOwnershipTrackingInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CrewOwnershipTracking.CustomCrewTrackingInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomCrewTrackingInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CrewOwnershipTracking.CrewOwnershipTrackingComponent
	 * Size -> 0x00A8 (FullSize[0x0170] - InheritedSize[0x00C8])
	 */
	class UCrewOwnershipTrackingComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_W5S7[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               SpawningCrewId;                                          // 0x00E0(0x0010) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               CurrentOwnedByCrewId;                                    // 0x00F0(0x0010) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FOwnerListEntry                                     PreviousOwnedByCrewIdList;                               // 0x0100(0x0010) Net
		TMap<class FName, struct FOwnerListEntry>                  CustomTrackingMap;                                       // 0x0110(0x0050) ZeroConstructor
		unsigned char                                              UnknownData_D0NI[0x10];                                  // 0x0160(0x0010) MISSED OFFSET (PADDING)

	public:
		struct FGuid GetSpawningCrewIdByCopy();
		static UClass* StaticClass();
	};

	/**
	 * Class CrewOwnershipTracking.CrewOwnershipTrackingControlInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrewOwnershipTrackingControlInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
