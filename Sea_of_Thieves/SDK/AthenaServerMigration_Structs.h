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
	 * ScriptStruct AthenaServerMigration.IncomingMigrationPreventionZone
	 * Size -> 0x000C
	 */
	struct FIncomingMigrationPreventionZone
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaServerMigration.ServerMigrationSetupCompleteEvent
	 * Size -> 0x0001
	 */
	struct FServerMigrationSetupCompleteEvent
	{
	public:
		unsigned char                                              UnknownData_L6EE[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaServerMigration.ServerMigrationSetupRequestEvent
	 * Size -> 0x0001
	 */
	struct FServerMigrationSetupRequestEvent
	{
	public:
		unsigned char                                              UnknownData_X69D[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaServerMigration.ServerMigrationReadyToTransferActors
	 * Size -> 0x0090
	 */
	struct FServerMigrationReadyToTransferActors
	{
	public:
		unsigned char                                              UnknownData_0VQ3[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaServerMigration.ServerMigrationAboutToStartEvent
	 * Size -> 0x0020
	 */
	struct FServerMigrationAboutToStartEvent
	{
	public:
		unsigned char                                              UnknownData_7UZ7[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaServerMigration.ServerMigrationAbortEvent
	 * Size -> 0x0010
	 */
	struct FServerMigrationAbortEvent
	{
	public:
		unsigned char                                              UnknownData_1OAB[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaServerMigration.ServerMigrationCompleteEvent
	 * Size -> 0x0001
	 */
	struct FServerMigrationCompleteEvent
	{
	public:
		unsigned char                                              UnknownData_LC9Z[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaServerMigration.ServerMigrationRefusedEvent
	 * Size -> 0x0020
	 */
	struct FServerMigrationRefusedEvent
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FGuid>                                       CrewIds;                                                 // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaServerMigration.ServerMigrationInstanceEventBase
	 * Size -> 0x0020
	 */
	struct FServerMigrationInstanceEventBase
	{
	public:
		struct FGuid                                               ServerId;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               MigrationId;                                             // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaServerMigration.OutgoingServerMigrationAbortedEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FOutgoingServerMigrationAbortedEvent : public FServerMigrationInstanceEventBase
	{	};

	/**
	 * ScriptStruct AthenaServerMigration.OutgoingServerMigrationCompletedEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FOutgoingServerMigrationCompletedEvent : public FServerMigrationInstanceEventBase
	{	};

	/**
	 * ScriptStruct AthenaServerMigration.OutgoingServerMigrationStartedEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FOutgoingServerMigrationStartedEvent : public FServerMigrationInstanceEventBase
	{	};

	/**
	 * ScriptStruct AthenaServerMigration.ServerMigrationRequestEvent
	 * Size -> 0x0050
	 */
	struct FServerMigrationRequestEvent
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              DestinationAddress;                                      // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<struct FGuid>                                       CrewIds;                                                 // 0x0020(0x0010) ZeroConstructor
		class FString                                              SubMode;                                                 // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<EClientMatchmakingRequestReason>                    MatchmakingReasons;                                      // 0x0040(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaServerMigration.ServerMigrationRequestBroadcastEvent
	 * Size -> 0x0020
	 */
	struct FServerMigrationRequestBroadcastEvent
	{
	public:
		class FString                                              DestinationAddress;                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FGuid                                               CrewId;                                                  // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaServerMigration.PrepareForWorldSwitchRpc
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FPrepareForWorldSwitchRpc : public FBoxedRpc
	{	};

	/**
	 * ScriptStruct AthenaServerMigration.AthenaServerMigrationClientContext
	 * Size -> 0x0010
	 */
	struct FAthenaServerMigrationClientContext
	{
	public:
		class FString                                              StampId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
