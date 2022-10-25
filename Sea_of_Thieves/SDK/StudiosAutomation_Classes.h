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
	 * Class StudiosAutomation.TestLevelScriptActor
	 * Size -> 0x00C0 (FullSize[0x0490] - InheritedSize[0x03D0])
	 */
	class ATestLevelScriptActor : public ALevelScriptActor
	{
	public:
		unsigned char                                              UnknownData_7KU9[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETestCategory                                              Category;                                                // 0x03D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETestArea                                                  Area;                                                    // 0x03D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VisualTest;                                              // 0x03DA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RunInEditor;                                             // 0x03DB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RunOnServer;                                             // 0x03DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RequiresServices;                                        // 0x03DD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7JXX[0x2];                                   // 0x03DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTestLevelMetadataEntry>                     AdditionalMetadata;                                      // 0x03E0(0x0010) Edit, ZeroConstructor, AdvancedDisplay
		EPerformanceCaptureType                                    CaptureType;                                             // 0x03F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETestAutomationPlayModeOverride                            PlayModeOverride;                                        // 0x03F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_476L[0x2];                                   // 0x03F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TestTimeout;                                             // 0x03F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TestPausedTimeout;                                       // 0x03F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VWI6[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      VerboseLogCategories;                                    // 0x0400(0x0010) Edit, ZeroConstructor
		TArray<int32_t>                                            ClientsRunning;                                          // 0x0410(0x0010) Net, ZeroConstructor
		TArray<int32_t>                                            ClientIds;                                               // 0x0420(0x0010) Net, ZeroConstructor
		TArray<struct FClientPawnDetails>                          ClientPawns;                                             // 0x0430(0x0010) Net, ZeroConstructor
		TArray<class AActor*>                                      SpawnedActors;                                           // 0x0440(0x0010) Net, ZeroConstructor
		int32_t                                                    NextSpawnedActorIndex;                                   // 0x0450(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T3C5[0x3C];                                  // 0x0454(0x003C) MISSED OFFSET (PADDING)

	public:
		void STATIC_YieldToServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		void YieldToOriginalServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		void YieldToDynamicServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t ServerIndex);
		void STATIC_YieldToClient(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t ClientId);
		void STATIC_WaitForPossessionAcknowledgement(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		void WaitForOtherServers(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t NumberOfServers);
		void STATIC_WaitForClients(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t NumberOfClients);
		void TestTriggerServerMigration(TArray<class AActor*> ActorGroup, int32_t TargetServerIndex);
		bool TestCloseConnection(int32_t ConnectionIdx);
		void STATIC_SyncClientServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings);
		class AActor* STATIC_SpawnActorForMPTesting(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
		void SendServerMigrationTestValueInt32(int32_t TestValue);
		void STATIC_RegisterPawnsForMPTesting(class UObject* WorldContextObject);
		void RegisterActorForMPTestingRecursively(class AActor* TargetActor);
		void RegisterActorForMPTesting(class AActor* TargetActor);
		void PostTestCleanup();
		void OnServerMigrationTestValueInt32Received(int32_t TestValue);
		void OnOutgoingServerMigrationStarted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players);
		void OnOutgoingServerMigrationCompleted(const struct FGuid& MigrationId);
		void OnOutgoingServerMigrationAborted(const struct FGuid& MigrationId);
		void OnIncomingServerMigrationStarted(const struct FGuid& MigrationId, int32_t NumPlayers);
		void OnIncomingServerMigrationCompleted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players, TArray<class AActor*> Actors);
		void OnIncomingServerMigrationAborted(const struct FGuid& MigrationId);
		void OnClientServerMigrationStarted(const struct FGuid& MigrationId);
		void OnClientServerMigrationCompleted(const struct FGuid& MigrationId);
		void OnClientServerMigrationAborted(const struct FGuid& MigrationId);
		int32_t GetServerIndex(class UObject* WorldContextObject);
		class FString GetRemoteServerMigrationURL(int32_t TargetServerIndex);
		int32_t GetPlayerIndexFromClientId(int32_t ClientId);
		int32_t GetNumClientsForMultiplayerTest();
		int32_t GetNumAutomationClients();
		class APawn* GetClientPawn(int32_t ClientId, int32_t SplitScreenIndex);
		int32_t GetClientId(bool ErrorOnFailure);
		void DoServerPostTestCleanup();
		void STATIC_ClearPawnInputBindings(class UObject* WorldContextObject);
		void AddServerOnNewMap(const class FString& Name, const class FString& MapPath);
		void AddServer(const class FString& Name);
		void AddClient(int32_t Port, const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.ActorThatLogsErrorWhenTicked
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class AActorThatLogsErrorWhenTicked : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.AssetAuditSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAssetAuditSettings : public UDeveloperSettings
	{
	public:
		TArray<class FString>                                      PathsToAuditOnSave;                                      // 0x0038(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.AutomationBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutomationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TestFinished(class UObject* ContextObject);
		void STATIC_TestFailed(const class FString& Message, class UObject* ContextObject);
		void STATIC_TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const class FString& NameOverride, float DelayBeforeScreenshotSeconds);
		void STATIC_TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name);
		void STATIC_StepStarted(const class FString& StepName);
		void STATIC_StepFinished();
		void STATIC_SetTestTimeoutAsFatal(bool TimeoutIsFatal);
		void STATIC_PreventGarbageCollection();
		void STATIC_OpenLevelWithGameMode(class UObject* WorldContextObject, const class FName& LevelName, class UClass* GameMode, bool Absolute);
		void STATIC_LogPlatformMemoryStats();
		bool STATIC_IsTravelFinished(class UObject* WorldContextObject);
		bool STATIC_IsEditor();
		bool STATIC_IsAutomationBuild();
		bool STATIC_HasPerformanceDataBeenCaptured();
		class ATestLevelScriptActor* STATIC_GetTestLevelScriptActor(bool ErrorOnFailure);
		int32_t STATIC_GetPlayerId(class APlayerState* State);
		class FString STATIC_GetLevelUrl(class UObject* WorldContextObject);
		class FString STATIC_GetCurrentMapTestName();
		void STATIC_EndPerformanceCapture(bool DumpMemReport);
		void STATIC_DumpFullMemReportDelayed(int32_t FrameDelay);
		void STATIC_DumpFullMemReport();
		void STATIC_DelayForFramesWithDesc(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t NumFrames, const class FString& Description);
		void STATIC_DelayForFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t NumFrames);
		void STATIC_CollectGarbageNow(bool FullPurge);
		void STATIC_BlockAsyncLoading(bool EnableBlock);
		void STATIC_BeginPerformanceCapture(const class FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection);
		void STATIC_AssertValue_Int(int32_t Actual, EComparisonMethod ShouldBe, int32_t Expected, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertValue_Float(float Actual, EComparisonMethod ShouldBe, float Expected, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertValue_DateTime(const struct FDateTime& Actual, EComparisonMethod ShouldBe, const struct FDateTime& Expected, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertTrue(bool Condition, const class FString& Message, class UObject* ContextObject);
		void STATIC_AssertObjectMatchesStringAssetReference(class UObject* Object, const struct FStringAssetReference& Reference, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertNotEqual_String(const class FString& Actual, const class FString& NotExpected, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertIsValid(class UObject* Object, const class FString& Message, class UObject* ContextObject);
		void STATIC_AssertIsNotValid(class UObject* Object, const class FString& Message, class UObject* ContextObject);
		void STATIC_AssertFalse(bool Condition, const class FString& Message, class UObject* ContextObject);
		void STATIC_AssertErrorOccurred(const class FString& ErrorMessage);
		void STATIC_AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
		void STATIC_AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
		void STATIC_AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& What, class UObject* ContextObject);
		void STATIC_AssertEqual_Float(float Actual, float Expected, const class FString& What, float Tolerance, class UObject* ContextObject);
		void STATIC_AddExpectedError(const class FString& ErrorMessage);
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.AutomationLatentActionCallback
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAutomationLatentActionCallback : public UObject
	{
	public:
		unsigned char                                              UnknownData_S6IZ[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		void LatentCallback(int32_t Linkage);
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.BPNamedObjectMock
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPNamedObjectMock : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.DummyReplicatedActor
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class ADummyReplicatedActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.MapFixtureTestGameMode
	 * Size -> 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
	 */
	class AMapFixtureTestGameMode : public AGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.ObjectWithSettableWorld
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UObjectWithSettableWorld : public UObject
	{
	public:
		class UWorld*                                              World;                                                   // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.TestUObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestUObject : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.OtherTestUObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOtherTestUObject : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.RunUnitTestsCommandlet
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class URunUnitTestsCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.TestablePlayerController
	 * Size -> 0x0000 (FullSize[0x0770] - InheritedSize[0x0770])
	 */
	class ATestablePlayerController : public APlayerController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.TestablePlayerControllerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestablePlayerControllerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.TestablePlayerControllerComponent
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	class UTestablePlayerControllerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2Q62[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (PADDING)

	public:
		void YieldToServer();
		void PerformPostTestCleanup();
		void DisconnectClientFromTest();
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.TestAbstractActor
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class ATestAbstractActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.TestSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UTestSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StudiosAutomation.TextureAuditorSettings
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UTextureAuditorSettings : public UTestSettings
	{
	public:
		TArray<struct FStringAssetReference>                       SpecificTexturesToNotAudit;                              // 0x0038(0x0010) Edit, ZeroConstructor, Config
		TArray<struct FDirectoryPath>                              TextureDirectoriesToNotAudit;                            // 0x0048(0x0010) Edit, ZeroConstructor, Config
		struct FTextureAuditorProperties                           DefaultTextureProperties;                                // 0x0058(0x0020) Edit, Config
		TArray<struct FTextureAuditorGroupProperties>              PerTextureGroupPropertiesOverrides;                      // 0x0078(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
