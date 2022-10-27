#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GbxTravelStation.ETravelStatus
	 */
	enum class ETravelStatus : uint8_t
	{
		None                   = 0,
		Queued                 = 1,
		Cancelled_OpenMenu     = 2,
		Cancelled_DownState    = 3,
		Cancelled_Cinamatic    = 4,
		Cancelled_DLCOwnership = 5,
		MAX                    = 6
	};

	/**
	 * Enum GbxTravelStation.EFastTravelDirection
	 */
	enum class EFastTravelDirection : uint8_t
	{
		SendAndReceive = 0,
		SendOnly       = 1,
		ReceiveOnly    = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxTravelStation.ExternalGraphLevelLinks
	 * Size -> 0x0038
	 */
	struct FExternalGraphLevelLinks
	{
	public:
		unsigned char                                              LevelData[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxTravelStation.ExternalGraphLevelLinks.LevelData
		unsigned char                                              LinksToOtherLevel[0x10];                                 // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxTravelStation.ExternalGraphLevelLinks.LinksToOtherLevel
	};

	/**
	 * ScriptStruct GbxTravelStation.ActiveFastTravelData
	 * Size -> 0x0010
	 */
	struct FActiveFastTravelData
	{
	public:
		class UFastTravelStationData*                              FastTravelData;                                          // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHighlightDiscovery;                                     // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZX9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTravelStation.TravelCountdownInfo
	 * Size -> 0x0010
	 */
	struct FTravelCountdownInfo
	{
	public:
		class UTravelStationData*                                  TravelStationDestination;                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingTime;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETravelStatus                                              Status;                                                  // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisallowLocalTravel;                                    // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUCT[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTravelStation.AvailableTravelStation
	 * Size -> 0x0020
	 */
	struct FAvailableTravelStation
	{
	public:
		class FString                                              StationToTravelTo;                                       // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFastTravelStationDebugButton*                       OptionButton;                                            // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6AG[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTravelStation.TravelDataConditional
	 * Size -> 0x0030
	 */
	struct FTravelDataConditional
	{
	public:
		class FString                                              TravelDataSelection;                                     // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelTravelStationData*                             LevelTravelData;                                         // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MovieToPlayDuringTravelMap;                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIA9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       ConditionToPlayMovie;                                    // 0x0020(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       Condition;                                               // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxTravelStation.ActiveFastTravelSaveData
	 * Size -> 0x0018
	 */
	struct FActiveFastTravelSaveData
	{
	public:
		class FString                                              FastTravelStationName;                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlacklisted;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN2Q[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTravelStation.FastTravelStationActiveEntry
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FFastTravelStationActiveEntry : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_C5LB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFastTravelStationData*                              FastTravelData;                                          // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxTravelStation.FastTravelStationActiveContainer
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	struct FFastTravelStationActiveContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FFastTravelStationActiveEntry>               ActiveFastTravelStations;                                // 0x00B0(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_402B[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxTravelStation.SpawnPointTracker
	 * Size -> 0x0028
	 */
	struct FSpawnPointTracker
	{
	public:
		unsigned char                                              SpawnPoint[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxTravelStation.SpawnPointTracker.SpawnPoint
		int32_t                                                    LastSpawnedAtCounter;                                    // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8RI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssignedToActor;                                         // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F025[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
