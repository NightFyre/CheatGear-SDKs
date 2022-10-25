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
	 * Class ServerMigration.MigrationControlChannel
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	class UMigrationControlChannel : public UChannel
	{
	public:
		unsigned char                                              UnknownData_BAWP[0x48];                                  // 0x0068(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.MigrationRelevancyClusterActor
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class AMigrationRelevancyClusterActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.NetworkTestingBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetworkTestingBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SwitchNetworkClusterForActor(class AActor* TargetActor, class AActor* NewOwner);
		void STATIC_SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime);
		void STATIC_ResumePropertyTracking(class AActor* TargetActor);
		void STATIC_PausePropertyTrackingOnNextSend(class AActor* TargetActor);
		bool STATIC_IsComponentNetDormant(int32_t ClientConnectionIdx, class UActorComponent* TargetComponent);
		bool STATIC_IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController);
		bool STATIC_IsActorNetDormant(class AActor* TargetActor);
		bool STATIC_IsActorInNetworkClusterGlobal(class AActor* TargetActor);
		bool STATIC_IsActorInNetworkCluster(class AActor* TargetActor, class AActor* NetworkClusterOwner);
		bool STATIC_IsActorInLevelNetworkClusterOnOwner(class AActor* TargetActor, class AActor* LevelOwner);
		bool STATIC_IsActorInLevelNetworkCluster(class AActor* TargetActor, const class FName& Level);
		bool STATIC_HasComponentReplicator(int32_t ClientConnectionIdx, class UActorComponent* TargetComponent);
		int32_t STATIC_GetReliableBufferBunchCount(class AActor* TargetActor);
		bool STATIC_FlushComponentNetDormancy(class UActorComponent* TargetComponent);
		void STATIC_ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController);
		void STATIC_ClearRecentRelevanceTimer(class AActor* TargetActor);
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UServerMigrationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		void STATIC_WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor);
		void STATIC_WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		void STATIC_WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor);
		TArray<unsigned char> STATIC_TestSerialiseActorToBuffer(class AActor* TargetActor);
		TArray<unsigned char> STATIC_TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup);
		class AActor* STATIC_TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset);
		TArray<class AActor*> STATIC_TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset);
		TArray<class AActor*> STATIC_TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
		class AActor* STATIC_TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
		void STATIC_SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings);
		void STATIC_SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings);
		void STATIC_SetPacketSimulationSettings(class UObject* WorldContextObject, int32_t PacketLag, int32_t PacketLagVariance, int32_t PacketLoss);
		void STATIC_ResumeReplication(class AActor* TargetActor);
		void STATIC_RegisterPersistentDynamicActor(class AActor* TargetActor, const class FString& IdentificationName);
		void STATIC_PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused);
		bool STATIC_HasActorChannelFromServer(class AActor* TargetActor);
		bool STATIC_ClientsHaveDormantActor(class AActor* TargetActor);
		bool STATIC_ClientsHaveActorChannel(class AActor* TargetActor);
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UServerMigrationSerialisationDetailsTestsActorRef : public UObject
	{
	public:
		class AActor*                                              ActorReferenceWithMigrationMarkup;                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay : public AActor
	{
	public:
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsActorWithChild : public AActor
	{
	public:
		class UChildActorComponent*                                ChildActorComponent;                                     // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithReplicatedChild
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsActorWithReplicatedChild : public AActor
	{
	public:
		class UChildActorComponent*                                ChildActorComponent;                                     // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithDynamicComponent
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsActorWithDynamicComponent : public AActor
	{
	public:
		class UServerMigrationSerialisationDetailsTestsMigratableComponent* SubObject;                                               // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UServerMigrationSerialisationDetailsTestsMigratableComponent* ActorComponent;                                          // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UServerMigrationSerialisationDetailsTestsMigratableComponent* Subobject2;                                              // 0x03D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsActorWithNetActorPtr : public AActor
	{
	public:
		struct FNetActorPtr                                        ActorPtr;                                                // 0x03C8(0x0014)
		unsigned char                                              UnknownData_PZTC[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsActorWithUniqueNetId : public AActor
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x03C8(0x0018)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UServerMigrationSerialisationDetailsTestsMigratableComponent : public UActorComponent
	{
	public:
		float                                                      FloatWithMigrationMarkup;                                // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IntWithNoMarkup;                                         // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsMigratableComponentActor : public AActor
	{
	public:
		class UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                            // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor : public AActor
	{
	public:
		class UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                            // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_H56D[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor : public AActor
	{
	public:
		class UChildActorComponent*                                Component;                                               // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor : public AActor
	{
	public:
		struct FServerMigrationCustomMigrationSerialisationStruct  TestStruct;                                              // 0x03C8(0x0004)
		unsigned char                                              UnknownData_3KD6[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseReplicatingActor
	 * Size -> 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
	 */
	class AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseReplicatingActor : public AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor : public AActor
	{
	public:
		class AActor*                                              DependentActor;                                          // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class AServerMigrationSerialisationDetailsTestsMigrationReferenceActor : public AActor
	{
	public:
		class AActor*                                              ActorReferenceWithMigrationMarkup;                       // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HWR2[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsPropertyMarkup
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UServerMigrationSerialisationDetailsTestsPropertyMarkup : public UObject
	{
	public:
		int32_t                                                    Int32NoMarkup;                                           // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BoolWithMigrationMarkup;                                 // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WCD4[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringWithSaveGameMarkup;                                // 0x0030(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash
		float                                                      FloatWithMigrationAndReplicationMarkup;                  // 0x0040(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BIDO[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsTArrayProperty
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UServerMigrationSerialisationDetailsTestsTArrayProperty : public UObject
	{
	public:
		TArray<int32_t>                                            IntegerArrayWithMigrationMarkup;                         // 0x0028(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSerialisationDetailsTestsUStructProperty
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UServerMigrationSerialisationDetailsTestsUStructProperty : public UObject
	{
	public:
		struct FServerMigrationSerialisationDetailsTestsUStruct    SubStructWithMigrationMarkup;                            // 0x0028(0x000C)
		unsigned char                                              UnknownData_YCJD[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.ServerMigrationSettings
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UServerMigrationSettings : public UObject
	{
	public:
		int32_t                                                    MaxSimultaneousMigrations;                               // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9TBG[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TransportImplementation;                                 // 0x0030(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		int32_t                                                    ServerDefaultListenPort;                                 // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ServerListenPortRangeSize;                               // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AutomationServerDefaultListenPort;                       // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P9R0[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InstanceImplementation;                                  // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		float                                                      MigrationConnectionTimeoutSeconds;                       // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaitForClientActorRemappingTimeoutLength;                // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaitForTransferOwnershipAcknowledgementTimeoutLength;    // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeserialisationTimeSliceLength;                          // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.TestActorWithUObjectProperty
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class ATestActorWithUObjectProperty : public AActor
	{
	public:
		class UObject*                                             ObjectProperty;                                          // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServerMigration.TestUObjectWithObjectProperty
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTestUObjectWithObjectProperty : public UObject
	{
	public:
		class UObject*                                             ObjectProperty;                                          // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
