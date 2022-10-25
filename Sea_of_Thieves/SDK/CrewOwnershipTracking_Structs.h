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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CrewOwnershipTracking.OwnerListEntry
	 * Size -> 0x0010
	 */
	struct FOwnerListEntry
	{
	public:
		TArray<struct FGuid>                                       OwnerList;                                               // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct CrewOwnershipTracking.CrewTrackedItemOwnershipSet
	 * Size -> 0x0018
	 */
	struct FCrewTrackedItemOwnershipSet
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               CrewId;                                                  // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CrewOwnershipTracking.CrewTrackedItemOwnershipChanged
	 * Size -> 0x0030
	 */
	struct FCrewTrackedItemOwnershipChanged
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               CrewId;                                                  // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               PreviousCrewId;                                          // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsFirstTimeOwnedByThisCrew;                              // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5564[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CrewOwnershipTracking.TrackItemOwnershipEvent
	 * Size -> 0x0018
	 */
	struct FTrackItemOwnershipEvent
	{
	public:
		class AActor*                                              TrackedItem;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CrewMembershipInterface[0x10];                           // 0x0008(0x0010) UNKNOWN PROPERTY: InterfaceProperty CrewOwnershipTracking.TrackItemOwnershipEvent.CrewMembershipInterface
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
