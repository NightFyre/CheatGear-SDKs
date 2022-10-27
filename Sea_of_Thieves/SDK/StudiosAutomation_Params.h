#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function StudiosAutomation.TestLevelScriptActor.YieldToServer
	 */
	struct ATestLevelScriptActor_YieldToServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
	 */
	struct ATestLevelScriptActor_YieldToOriginalServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
	 */
	struct ATestLevelScriptActor_YieldToDynamicServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
		int32_t                                                    ServerIndex;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.YieldToClient
	 */
	struct ATestLevelScriptActor_YieldToClient_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
		int32_t                                                    ClientId;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
	 */
	struct ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
	 */
	struct ATestLevelScriptActor_WaitForOtherServers_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
		int32_t                                                    NumberOfServers;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.WaitForClients
	 */
	struct ATestLevelScriptActor_WaitForClients_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
		int32_t                                                    NumberOfClients;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
	 */
	struct ATestLevelScriptActor_TestTriggerServerMigration_Params
	{
	public:
		TArray<class AActor*>                                      ActorGroup;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    TargetServerIndex;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection
	 */
	struct ATestLevelScriptActor_TestCloseConnection_Params
	{
	public:
		int32_t                                                    ConnectionIdx;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
	 */
	struct ATestLevelScriptActor_SyncClientServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
		int32_t                                                    NumClients;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RegisterPawnsForMPTesting;                               // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
		bool                                                       ClearPawnInputBindings;                                  // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
	 */
	struct ATestLevelScriptActor_SpawnActorForMPTesting_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FVector                                             SpawnLocation;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            SpawnRotation;                                           // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
		class AActor*                                              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
	 */
	struct ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params
	{
	public:
		int32_t                                                    TestValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
	 */
	struct ATestLevelScriptActor_RegisterPawnsForMPTesting_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
	 */
	struct ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
	 */
	struct ATestLevelScriptActor_RegisterActorForMPTesting_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
	 */
	struct ATestLevelScriptActor_PostTestCleanup_Params
	{	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
	 */
	struct ATestLevelScriptActor_OnServerMigrationTestValueInt32Received_Params
	{
	public:
		int32_t                                                    TestValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
	 */
	struct ATestLevelScriptActor_OnOutgoingServerMigrationStarted_Params
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class APlayerController*>                           Players;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
	 */
	struct ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
	 */
	struct ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
	 */
	struct ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumPlayers;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
	 */
	struct ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class APlayerController*>                           Players;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class AActor*>                                      Actors;                                                  // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
	 */
	struct ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
	 */
	struct ATestLevelScriptActor_OnClientServerMigrationStarted_Params
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
	 */
	struct ATestLevelScriptActor_OnClientServerMigrationCompleted_Params
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
	 */
	struct ATestLevelScriptActor_OnClientServerMigrationAborted_Params
	{
	public:
		struct FGuid                                               MigrationId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
	 */
	struct ATestLevelScriptActor_GetServerIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
	 */
	struct ATestLevelScriptActor_GetRemoteServerMigrationURL_Params
	{
	public:
		int32_t                                                    TargetServerIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HI65[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId
	 */
	struct ATestLevelScriptActor_GetPlayerIndexFromClientId_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest
	 */
	struct ATestLevelScriptActor_GetNumClientsForMultiplayerTest_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients
	 */
	struct ATestLevelScriptActor_GetNumAutomationClients_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.GetClientPawn
	 */
	struct ATestLevelScriptActor_GetClientPawn_Params
	{
	public:
		int32_t                                                    ClientId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SplitScreenIndex;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		class APawn*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.GetClientId
	 */
	struct ATestLevelScriptActor_GetClientId_Params
	{
	public:
		bool                                                       ErrorOnFailure;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_27TI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
	 */
	struct ATestLevelScriptActor_DoServerPostTestCleanup_Params
	{	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
	 */
	struct ATestLevelScriptActor_ClearPawnInputBindings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap
	 */
	struct ATestLevelScriptActor_AddServerOnNewMap_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              MapPath;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.AddServer
	 */
	struct ATestLevelScriptActor_AddServer_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestLevelScriptActor.AddClient
	 */
	struct ATestLevelScriptActor_AddClient_Params
	{
	public:
		int32_t                                                    Port;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YLKM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
	 */
	struct UAutomationBlueprintFunctionLibrary_TestFinished_Params
	{
	public:
		class UObject*                                             ContextObject;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
	 */
	struct UAutomationBlueprintFunctionLibrary_TestFailed_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
	 */
	struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
		class ACameraActor*                                        Camera;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              NameOverride;                                            // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      DelayBeforeScreenshotSeconds;                            // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
	 */
	struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
		class FString                                              Name;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
	 */
	struct UAutomationBlueprintFunctionLibrary_StepStarted_Params
	{
	public:
		class FString                                              StepName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
	 */
	struct UAutomationBlueprintFunctionLibrary_StepFinished_Params
	{	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal
	 */
	struct UAutomationBlueprintFunctionLibrary_SetTestTimeoutAsFatal_Params
	{
	public:
		bool                                                       TimeoutIsFatal;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection
	 */
	struct UAutomationBlueprintFunctionLibrary_PreventGarbageCollection_Params
	{	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
	 */
	struct UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                LevelName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              GameMode;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       Absolute;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats
	 */
	struct UAutomationBlueprintFunctionLibrary_LogPlatformMemoryStats_Params
	{	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
	 */
	struct UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor
	 */
	struct UAutomationBlueprintFunctionLibrary_IsEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsAutomationBuild
	 */
	struct UAutomationBlueprintFunctionLibrary_IsAutomationBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured
	 */
	struct UAutomationBlueprintFunctionLibrary_HasPerformanceDataBeenCaptured_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
	 */
	struct UAutomationBlueprintFunctionLibrary_GetTestLevelScriptActor_Params
	{
	public:
		bool                                                       ErrorOnFailure;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S37Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATestLevelScriptActor*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
	 */
	struct UAutomationBlueprintFunctionLibrary_GetPlayerId_Params
	{
	public:
		class APlayerState*                                        State;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
	 */
	struct UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
	 */
	struct UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
	 */
	struct UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params
	{
	public:
		bool                                                       DumpMemReport;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed
	 */
	struct UAutomationBlueprintFunctionLibrary_DumpFullMemReportDelayed_Params
	{
	public:
		int32_t                                                    FrameDelay;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
	 */
	struct UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params
	{	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
	 */
	struct UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
		int32_t                                                    NumFrames;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BHBT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Description;                                             // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
	 */
	struct UAutomationBlueprintFunctionLibrary_DelayForFrames_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
		int32_t                                                    NumFrames;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow
	 */
	struct UAutomationBlueprintFunctionLibrary_CollectGarbageNow_Params
	{
	public:
		bool                                                       FullPurge;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading
	 */
	struct UAutomationBlueprintFunctionLibrary_BlockAsyncLoading_Params
	{
	public:
		bool                                                       EnableBlock;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
	 */
	struct UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params
	{
	public:
		class FString                                              FolderName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       DumpMemReport;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PreventGarbageCollection;                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params
	{
	public:
		int32_t                                                    Actual;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EComparisonMethod                                          ShouldBe;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QD4S[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Expected;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WX20[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              What;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params
	{
	public:
		float                                                      Actual;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EComparisonMethod                                          ShouldBe;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3OEF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Expected;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SRSB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              What;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params
	{
	public:
		struct FDateTime                                           Actual;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor)
		EComparisonMethod                                          ShouldBe;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I3LA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           Expected;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertTrue_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UFN7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertObjectMatchesStringAssetReference
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertObjectMatchesStringAssetReference_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStringAssetReference                               Reference;                                               // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params
	{
	public:
		struct FVector                                             Actual;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NotExpected;                                             // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params
	{
	public:
		struct FTransform                                          Actual;                                                  // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor)
		struct FTransform                                          NotExpected;                                             // 0x0030(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor)
		class FString                                              What;                                                    // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0070(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params
	{
	public:
		class FString                                              Actual;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              NotExpected;                                             // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              What;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params
	{
	public:
		struct FRotator                                            Actual;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            NotExpected;                                             // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertIsValid_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertFalse_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y8O5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params
	{
	public:
		class FString                                              ErrorMessage;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params
	{
	public:
		struct FVector2D                                           Actual;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           Expected;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              What;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Tolerance;                                               // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L78O[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ContextObject;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params
	{
	public:
		struct FVector                                             Actual;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Expected;                                                // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Tolerance;                                               // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DS4N[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ContextObject;                                           // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params
	{
	public:
		struct FTransform                                          Actual;                                                  // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor)
		struct FTransform                                          Expected;                                                // 0x0030(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor)
		class FString                                              What;                                                    // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0070(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params
	{
	public:
		class FString                                              Actual;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Expected;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              What;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params
	{
	public:
		struct FRotator                                            Actual;                                                  // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Expected;                                                // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              What;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             ContextObject;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
	 */
	struct UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params
	{
	public:
		float                                                      Actual;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Expected;                                                // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              What;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Tolerance;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W3WK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ContextObject;                                           // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
	 */
	struct UAutomationBlueprintFunctionLibrary_AddExpectedError_Params
	{
	public:
		class FString                                              ErrorMessage;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
	 */
	struct UAutomationLatentActionCallback_LatentCallback_Params
	{
	public:
		int32_t                                                    Linkage;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StudiosAutomation.TestablePlayerControllerComponent.YieldToServer
	 */
	struct UTestablePlayerControllerComponent_YieldToServer_Params
	{	};

	/**
	 * Function StudiosAutomation.TestablePlayerControllerComponent.PerformPostTestCleanup
	 */
	struct UTestablePlayerControllerComponent_PerformPostTestCleanup_Params
	{	};

	/**
	 * Function StudiosAutomation.TestablePlayerControllerComponent.DisconnectClientFromTest
	 */
	struct UTestablePlayerControllerComponent_DisconnectClientFromTest_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
