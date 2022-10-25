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
	 * Enum Sessions.ESessionStyle
	 */
	enum class ESessionStyle : uint8_t
	{
		Invalid       = 0,
		Standard      = 1,
		BeachNPCSpawn = 2,
		Max           = 3,
		MAX           = 4
	};

	/**
	 * Enum Sessions.ESessionGrouping
	 */
	enum class ESessionGrouping : uint8_t
	{
		Invalid         = 0,
		Default         = 1,
		MediumLargeShip = 2,
		Max             = 3,
		MAX             = 4
	};

	/**
	 * Enum Sessions.ECrewSessionType
	 */
	enum class ECrewSessionType : uint8_t
	{
		Invalid     = 0,
		SmallShip   = 1,
		MediumShip  = 2,
		LargeShip   = 3,
		ServerLarge = 4,
		SloopSolo   = 5,
		Lobby       = 6,
		MAX         = 7
	};

	/**
	 * Enum Sessions.ESessionVisibility
	 */
	enum class ESessionVisibility : uint8_t
	{
		Invalid = 0,
		Open    = 1,
		Closed  = 2,
		MAX     = 3
	};

	/**
	 * Enum Sessions.ECrewSessionQoSServerResolveResult
	 */
	enum class ECrewSessionQoSServerResolveResult : uint8_t
	{
		Success         = 0,
		InvalidLocation = 1,
		TimedOut        = 2,
		Failed          = 3,
		MAX             = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Sessions.SessionTemplate
	 * Size -> 0x0018
	 */
	struct FSessionTemplate
	{
	public:
		class FString                                              TemplateName;                                            // 0x0000(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash
		ECrewSessionType                                           SessionType;                                             // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_M4VV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxPlayers;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Sessions.CrewSessionTemplate
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FCrewSessionTemplate : public FSessionTemplate
	{
	public:
		class FString                                              MatchmakingHopper;                                       // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
		class UClass*                                              ShipSize;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    MaxMatchmakingPlayers;                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I1R3[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sessions.OnlineSessionMemberLostEvent
	 * Size -> 0x0028
	 */
	struct FOnlineSessionMemberLostEvent
	{
	public:
		unsigned char                                              UnknownData_F0WC[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sessions.SessionLostEvent
	 * Size -> 0x0001
	 */
	struct FSessionLostEvent
	{
	public:
		unsigned char                                              UnknownData_90GF[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sessions.SessionDetailsChangedEvent
	 * Size -> 0x0020
	 */
	struct FSessionDetailsChangedEvent
	{
	public:
		unsigned char                                              UnknownData_QRHG[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sessions.SessionInfoUpdateAvailableEvent
	 * Size -> 0x0010
	 */
	struct FSessionInfoUpdateAvailableEvent
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Sessions.CrewSessionKeepAliveFailedTelemetryEvent
	 * Size -> 0x0028
	 */
	struct FCrewSessionKeepAliveFailedTelemetryEvent
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              UserStatus;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    ErrorCode;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    KeepAliveCounter;                                        // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Sessions.CrewSessionOperationFailedTelemetryEvent
	 * Size -> 0x0018
	 */
	struct FCrewSessionOperationFailedTelemetryEvent
	{
	public:
		class FString                                              ErrorMessage;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    OperationTypeCode;                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasCancelled;                                            // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G7TJ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sessions.CrewSessionBaseTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FCrewSessionBaseTelemetryEvent
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Sessions.CrewSessionMemberTelemetry
	 * Size -> 0x0028
	 */
	struct FCrewSessionMemberTelemetry
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              StatusString;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		bool                                                       IsSessionHost;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6ZOZ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sessions.CrewSessionTelemetry
	 * Size -> 0x0040
	 */
	struct FCrewSessionTelemetry
	{
	public:
		TArray<struct FCrewSessionMemberTelemetry>                 SessionMembers;                                          // 0x0000(0x0010) ZeroConstructor
		class FString                                              SessionTemplate;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              SessionVisibility;                                       // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              PlayMode;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Sessions.CrewSessionBaseSessionTelemetryEvent
	 * Size -> 0x0040 (FullSize[0x0050] - InheritedSize[0x0010])
	 */
	struct FCrewSessionBaseSessionTelemetryEvent : public FCrewSessionBaseTelemetryEvent
	{
	public:
		struct FCrewSessionTelemetry                               Session;                                                 // 0x0010(0x0040)
	};

	/**
	 * ScriptStruct Sessions.CrewSessionMatchmakingFollowedTelemetryEvent
	 * Size -> 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
	 */
	struct FCrewSessionMatchmakingFollowedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
	{
	public:
		struct FGuid                                               NewCrewId;                                               // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ResultCode;                                              // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XCPW[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Sessions.CrewSessionMatchmakingEndedTelemetryEvent
	 * Size -> 0x0088 (FullSize[0x0098] - InheritedSize[0x0010])
	 */
	struct FCrewSessionMatchmakingEndedTelemetryEvent : public FCrewSessionBaseTelemetryEvent
	{
	public:
		struct FGuid                                               NewCrewId;                                               // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               CrewMatchmakingAttemptId;                                // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              SessionType;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              MatchmakingHopper;                                       // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              MatchmakingType;                                         // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              MatchmakingResult;                                       // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              ErrorMessage;                                            // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<int32_t>                                            CrewSegmentValues;                                       // 0x0080(0x0010) ZeroConstructor
		int32_t                                                    CurrentCrewCount;                                        // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalWaitTime;                                           // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Sessions.CrewSessionMatchmakingStartedTelemetryEvent
	 * Size -> 0x0060 (FullSize[0x0070] - InheritedSize[0x0010])
	 */
	struct FCrewSessionMatchmakingStartedTelemetryEvent : public FCrewSessionBaseTelemetryEvent
	{
	public:
		struct FGuid                                               CrewMatchmakingAttemptId;                                // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              SessionType;                                             // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              MatchmakingHopper;                                       // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              MatchmakingType;                                         // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<int32_t>                                            CrewSegmentValues;                                       // 0x0050(0x0010) ZeroConstructor
		int32_t                                                    CurrentCrewCount;                                        // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EstimatedWaitTime;                                       // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxWaitTime;                                             // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J9P0[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sessions.CrewSessionLeaveTelemetryEvent
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FCrewSessionLeaveTelemetryEvent : public FCrewSessionBaseTelemetryEvent
	{	};

	/**
	 * ScriptStruct Sessions.CrewSessionQoSMeasurementTelemetry
	 * Size -> 0x0020
	 */
	struct FCrewSessionQoSMeasurementTelemetry
	{
	public:
		class FString                                              Location;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		uint32_t                                                   AvgLatency;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumReceivedPings;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumFailedPings;                                          // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECrewSessionQoSServerResolveResult                         ResolveResult;                                           // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LocationWasConsidered;                                   // 0x001D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OK36[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Sessions.CrewSessionJoinedTelemetryEvent
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	struct FCrewSessionJoinedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
	{
	public:
		class FString                                              JoinMethod;                                              // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<struct FCrewSessionQoSMeasurementTelemetry>         QoSTelemetry;                                            // 0x0060(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Sessions.CrewSessionCreatedTelemetryEvent
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	struct FCrewSessionCreatedTelemetryEvent : public FCrewSessionBaseSessionTelemetryEvent
	{
	public:
		TArray<struct FCrewSessionQoSMeasurementTelemetry>         QoSTelemetry;                                            // 0x0050(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
