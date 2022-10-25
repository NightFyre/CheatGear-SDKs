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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ContestMatchmaking.EPvPFaction
	 */
	enum class EPvPFaction : uint8_t
	{
		NotApplicable = 0,
		Flameheart    = 1,
		PirateLord    = 2,
		MAX           = 3
	};

	/**
	 * Enum ContestMatchmaking.EClientMatchmakingRequestReason
	 */
	enum class EClientMatchmakingRequestReason : uint8_t
	{
		NewCrews               = 0,
		LoadBalancingMigration = 1,
		PvPMigration           = 2,
		StarlightMigration     = 3,
		MAX                    = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ContestMatchmaking.ContestMatchmakingFactionMapEntry
	 * Size -> 0x0010
	 */
	struct FContestMatchmakingFactionMapEntry
	{
	public:
		class UClass*                                              GameFaction;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPvPFaction                                                MatchmakingFaction;                                      // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FY3S[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ContestMatchmaking.ServerQueueWaitTimeModel
	 * Size -> 0x0020
	 */
	struct FServerQueueWaitTimeModel
	{
	public:
		class FString                                              QueueScopeId;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FTimespan                                           AvgWaitTime;                                             // 0x0010(0x0008) ZeroConstructor
		struct FTimespan                                           MaxWaitTime;                                             // 0x0018(0x0008) ZeroConstructor
	};

	/**
	 * ScriptStruct ContestMatchmaking.ServerQueueWaitTimesResponseModel
	 * Size -> 0x0010
	 */
	struct FServerQueueWaitTimesResponseModel
	{
	public:
		TArray<struct FServerQueueWaitTimeModel>                   QueueWaitTimes;                                          // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ContestMatchmaking.ServerQueueWaitTimesRequestModel
	 * Size -> 0x0048
	 */
	struct FServerQueueWaitTimesRequestModel
	{
	public:
		class FString                                              ServerLocation;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		uint32_t                                                   FeatureHash;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HI45[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PrivateServerId;                                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<class FString>                                      PlayModeTags;                                            // 0x0028(0x0010) ZeroConstructor
		class FString                                              PlayModeState;                                           // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ContestMatchmaking.ServerCrewModel
	 * Size -> 0x0090
	 */
	struct FServerCrewModel
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FUniqueNetIdRepl                                    UserId;                                                  // 0x0010(0x0018)
		struct FGuid                                               ServerId;                                                // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              ServerAddress;                                           // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    SessionType;                                             // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FLLZ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   Positions;                                               // 0x0050(0x0010) ZeroConstructor
		TArray<uint32_t>                                           Resources;                                               // 0x0060(0x0010) ZeroConstructor
		EPvPFaction                                                PvPFaction;                                              // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_88PD[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PvPSkillLevel;                                           // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               RivalCrewId;                                             // 0x0078(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		EClientMatchmakingRequestReason                            MatchmakingRequestReason;                                // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IXQK[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ContestMatchmaking.ContestMatchmakingServerRequestModel
	 * Size -> 0x00A0
	 */
	struct FContestMatchmakingServerRequestModel
	{
	public:
		struct FGuid                                               ServerId;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              ServerAddress;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              VmId;                                                    // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              PrivateServerId;                                         // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              ServerLocation;                                          // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash
		uint32_t                                                   FeatureHash;                                             // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HRGX[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PlayModeTags;                                            // 0x0058(0x0010) ZeroConstructor
		TArray<class FString>                                      PlayModeStates;                                          // 0x0068(0x0010) ZeroConstructor
		TArray<struct FServerCrewModel>                            Crews;                                                   // 0x0078(0x0010) ZeroConstructor
		EClientMatchmakingRequestReason                            MatchmakingRequestReason;                                // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HTSX[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               RequestCorrelationId;                                    // 0x008C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_78LQ[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ContestMatchmaking.ServerCrewResponseModel
	 * Size -> 0x0078
	 */
	struct FServerCrewResponseModel
	{
	public:
		TArray<struct FServerCrewModel>                            Crews;                                                   // 0x0000(0x0010) ZeroConstructor
		TMap<class FString, class FString>                         OptionalPlayModeInfo;                                    // 0x0010(0x0050) ZeroConstructor
		struct FTimespan                                           RetryAfter;                                              // 0x0060(0x0008) ZeroConstructor
		struct FTimespan                                           MigrationThreshold;                                      // 0x0068(0x0008) ZeroConstructor
		struct FTimespan                                           ExpireAfter;                                             // 0x0070(0x0008) ZeroConstructor
	};

	/**
	 * ScriptStruct ContestMatchmaking.OptionalPlayModeModel
	 * Size -> 0x0050
	 */
	struct FOptionalPlayModeModel
	{
	public:
		TMap<class FString, class FString>                         OptionalPlayModeMap;                                     // 0x0000(0x0050) ZeroConstructor
	};

	/**
	 * ScriptStruct ContestMatchmaking.ExistingServerCrewModel
	 * Size -> 0x0028
	 */
	struct FExistingServerCrewModel
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    SessionType;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPvPFaction                                                AlignedFaction;                                          // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0NKK[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PvPSkillLevel;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_73X3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           TimeInMatchmaking;                                       // 0x0020(0x0008) ZeroConstructor
	};

	/**
	 * ScriptStruct ContestMatchmaking.ServerRegionModel
	 * Size -> 0x000C
	 */
	struct FServerRegionModel
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ContestMatchmaking.ServerContendedModel
	 * Size -> 0x0030
	 */
	struct FServerContendedModel
	{
	public:
		TArray<struct FVector2D>                                   Positions;                                               // 0x0000(0x0010) ZeroConstructor
		TArray<struct FServerRegionModel>                          Regions;                                                 // 0x0010(0x0010) ZeroConstructor
		TArray<uint32_t>                                           Resources;                                               // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ContestMatchmaking.ServerCrewRequestModel
	 * Size -> 0x00D0
	 */
	struct FServerCrewRequestModel
	{
	public:
		struct FGuid                                               ServerId;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              VmId;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              PrivateServerId;                                         // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              ServerLocation;                                          // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		uint32_t                                                   FeatureHash;                                             // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X3OV[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PlayModeTags;                                            // 0x0048(0x0010) ZeroConstructor
		class FString                                              PlayModeState;                                           // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    CrewCount;                                               // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CrewCountBucket;                                         // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CrewMin;                                                 // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CrewMax;                                                 // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            CrewSessionTypes;                                        // 0x0078(0x0010) ZeroConstructor
		TArray<struct FExistingServerCrewModel>                    Crews;                                                   // 0x0088(0x0010) ZeroConstructor
		struct FTimespan                                           Uptime;                                                  // 0x0098(0x0008) ZeroConstructor
		struct FServerContendedModel                               Contended;                                               // 0x00A0(0x0030)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
