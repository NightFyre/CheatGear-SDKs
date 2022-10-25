/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01BBB490
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.YieldToServer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 */
	void ATestLevelScriptActor::STATIC_YieldToServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToServer");
		
		ATestLevelScriptActor_YieldToServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBB3A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 */
	void ATestLevelScriptActor::YieldToOriginalServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer");
		
		ATestLevelScriptActor_YieldToOriginalServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBB270
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		int32_t                                            ServerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::YieldToDynamicServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t ServerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer");
		
		ATestLevelScriptActor_YieldToDynamicServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.ServerIndex = ServerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBB150
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.YieldToClient
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		int32_t                                            ClientId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::STATIC_YieldToClient(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToClient");
		
		ATestLevelScriptActor_YieldToClient_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBB070
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 */
	void ATestLevelScriptActor::STATIC_WaitForPossessionAcknowledgement(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement");
		
		ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBAF40
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		int32_t                                            NumberOfServers                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::WaitForOtherServers(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t NumberOfServers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers");
		
		ATestLevelScriptActor_WaitForOtherServers_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.NumberOfServers = NumberOfServers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBAE20
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.WaitForClients
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		int32_t                                            NumberOfClients                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::STATIC_WaitForClients(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t NumberOfClients)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.WaitForClients");
		
		ATestLevelScriptActor_WaitForClients_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.NumberOfClients = NumberOfClients;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBAD20
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorGroup                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            TargetServerIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::TestTriggerServerMigration(TArray<class AActor*> ActorGroup, int32_t TargetServerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration");
		
		ATestLevelScriptActor_TestTriggerServerMigration_Params params {};
		params.ActorGroup = ActorGroup;
		params.TargetServerIndex = TargetServerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBAB50
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ConnectionIdx                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATestLevelScriptActor::TestCloseConnection(int32_t ConnectionIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection");
		
		ATestLevelScriptActor_TestCloseConnection_Params params {};
		params.ConnectionIdx = ConnectionIdx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA6B0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		int32_t                                            NumClients                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RegisterPawnsForMPTesting                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 * 		bool                                               ClearPawnInputBindings                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 */
	void ATestLevelScriptActor::STATIC_SyncClientServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.SyncClientServer");
		
		ATestLevelScriptActor_SyncClientServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.NumClients = NumClients;
		params.RegisterPawnsForMPTesting = RegisterPawnsForMPTesting;
		params.ClearPawnInputBindings = ClearPawnInputBindings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA490
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FVector                                     SpawnLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    SpawnRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 */
	class AActor* ATestLevelScriptActor::STATIC_SpawnActorForMPTesting(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting");
		
		ATestLevelScriptActor_SpawnActorForMPTesting_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.SpawnLocation = SpawnLocation;
		params.SpawnRotation = SpawnRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA390
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TestValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::SendServerMigrationTestValueInt32(int32_t TestValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32");
		
		ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params params {};
		params.TestValue = TestValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA320
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::STATIC_RegisterPawnsForMPTesting(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting");
		
		ATestLevelScriptActor_RegisterPawnsForMPTesting_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA2A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::RegisterActorForMPTestingRecursively(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively");
		
		ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA220
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::RegisterActorForMPTesting(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting");
		
		ATestLevelScriptActor_RegisterActorForMPTesting_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATestLevelScriptActor::PostTestCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup");
		
		ATestLevelScriptActor_PostTestCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TestValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::OnServerMigrationTestValueInt32Received(int32_t TestValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received");
		
		ATestLevelScriptActor_OnServerMigrationTestValueInt32Received_Params params {};
		params.TestValue = TestValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class APlayerController*>                   Players                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ATestLevelScriptActor::OnOutgoingServerMigrationStarted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted");
		
		ATestLevelScriptActor_OnOutgoingServerMigrationStarted_Params params {};
		params.MigrationId = MigrationId;
		params.Players = Players;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestLevelScriptActor::OnOutgoingServerMigrationCompleted(const struct FGuid& MigrationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted");
		
		ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params params {};
		params.MigrationId = MigrationId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestLevelScriptActor::OnOutgoingServerMigrationAborted(const struct FGuid& MigrationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted");
		
		ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params params {};
		params.MigrationId = MigrationId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::OnIncomingServerMigrationStarted(const struct FGuid& MigrationId, int32_t NumPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted");
		
		ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params params {};
		params.MigrationId = MigrationId;
		params.NumPlayers = NumPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class APlayerController*>                   Players                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ATestLevelScriptActor::OnIncomingServerMigrationCompleted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players, TArray<class AActor*> Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted");
		
		ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params params {};
		params.MigrationId = MigrationId;
		params.Players = Players;
		params.Actors = Actors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestLevelScriptActor::OnIncomingServerMigrationAborted(const struct FGuid& MigrationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted");
		
		ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params params {};
		params.MigrationId = MigrationId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestLevelScriptActor::OnClientServerMigrationStarted(const struct FGuid& MigrationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted");
		
		ATestLevelScriptActor_OnClientServerMigrationStarted_Params params {};
		params.MigrationId = MigrationId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestLevelScriptActor::OnClientServerMigrationCompleted(const struct FGuid& MigrationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted");
		
		ATestLevelScriptActor_OnClientServerMigrationCompleted_Params params {};
		params.MigrationId = MigrationId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATestLevelScriptActor::OnClientServerMigrationAborted(const struct FGuid& MigrationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted");
		
		ATestLevelScriptActor_OnClientServerMigrationAborted_Params params {};
		params.MigrationId = MigrationId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9DE0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ATestLevelScriptActor::GetServerIndex(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetServerIndex");
		
		ATestLevelScriptActor_GetServerIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9CF0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TargetServerIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString ATestLevelScriptActor::GetRemoteServerMigrationURL(int32_t TargetServerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL");
		
		ATestLevelScriptActor_GetRemoteServerMigrationURL_Params params {};
		params.TargetServerIndex = TargetServerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9C60
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ATestLevelScriptActor::GetPlayerIndexFromClientId(int32_t ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId");
		
		ATestLevelScriptActor_GetPlayerIndexFromClientId_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9BB0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATestLevelScriptActor::GetNumClientsForMultiplayerTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest");
		
		ATestLevelScriptActor_GetNumClientsForMultiplayerTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9B80
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATestLevelScriptActor::GetNumAutomationClients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients");
		
		ATestLevelScriptActor_GetNumAutomationClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9940
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetClientPawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SplitScreenIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 */
	class APawn* ATestLevelScriptActor::GetClientPawn(int32_t ClientId, int32_t SplitScreenIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetClientPawn");
		
		ATestLevelScriptActor_GetClientPawn_Params params {};
		params.ClientId = ClientId;
		params.SplitScreenIndex = SplitScreenIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB98B0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetClientId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               ErrorOnFailure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ATestLevelScriptActor::GetClientId(bool ErrorOnFailure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetClientId");
		
		ATestLevelScriptActor_GetClientId_Params params {};
		params.ErrorOnFailure = ErrorOnFailure;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9780
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void ATestLevelScriptActor::DoServerPostTestCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup");
		
		ATestLevelScriptActor_DoServerPostTestCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB93E0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::STATIC_ClearPawnInputBindings(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings");
		
		ATestLevelScriptActor_ClearPawnInputBindings_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB74C0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MapPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::AddServerOnNewMap(const class FString& Name, const class FString& MapPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap");
		
		ATestLevelScriptActor_AddServerOnNewMap_Params params {};
		params.Name = Name;
		params.MapPath = MapPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB7420
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.AddServer
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::AddServer(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.AddServer");
		
		ATestLevelScriptActor_AddServer_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB72B0
	 * 		Name   -> Function StudiosAutomation.TestLevelScriptActor.AddClient
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ATestLevelScriptActor::AddClient(int32_t Port, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.AddClient");
		
		ATestLevelScriptActor_AddClient_Params params {};
		params.Port = Port;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestLevelScriptActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestLevelScriptActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.TestLevelScriptActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AActorThatLogsErrorWhenTicked.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActorThatLogsErrorWhenTicked::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.ActorThatLogsErrorWhenTicked");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetAuditSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetAuditSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.AssetAuditSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBACB0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_TestFinished(class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished");
		
		UAutomationBlueprintFunctionLibrary_TestFinished_Params params {};
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBABE0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_TestFailed(const class FString& Message, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed");
		
		UAutomationBlueprintFunctionLibrary_TestFailed_Params params {};
		params.Message = Message;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA990
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		class ACameraActor*                                Camera                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      NameOverride                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              DelayBeforeScreenshotSeconds                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const class FString& NameOverride, float DelayBeforeScreenshotSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera");
		
		UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Camera = Camera;
		params.NameOverride = NameOverride;
		params.DelayBeforeScreenshotSeconds = DelayBeforeScreenshotSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA850
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot");
		
		UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA620
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StepName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_StepStarted(const class FString& StepName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted");
		
		UAutomationBlueprintFunctionLibrary_StepStarted_Params params {};
		params.StepName = StepName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA600
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_StepFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished");
		
		UAutomationBlueprintFunctionLibrary_StepFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA410
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               TimeoutIsFatal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_SetTestTimeoutAsFatal(bool TimeoutIsFatal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal");
		
		UAutomationBlueprintFunctionLibrary_SetTestTimeoutAsFatal_Params params {};
		params.TimeoutIsFatal = TimeoutIsFatal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA200
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_PreventGarbageCollection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection");
		
		UAutomationBlueprintFunctionLibrary_PreventGarbageCollection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA0B0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        LevelName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_OpenLevelWithGameMode(class UObject* WorldContextObject, const class FName& LevelName, class UClass* GameMode, bool Absolute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode");
		
		UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LevelName = LevelName;
		params.GameMode = GameMode;
		params.Absolute = Absolute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA090
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_LogPlatformMemoryStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats");
		
		UAutomationBlueprintFunctionLibrary_LogPlatformMemoryStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9F90
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UAutomationBlueprintFunctionLibrary::STATIC_IsTravelFinished(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished");
		
		UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9F60
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UAutomationBlueprintFunctionLibrary::STATIC_IsEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor");
		
		UAutomationBlueprintFunctionLibrary_IsEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9F30
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsAutomationBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UAutomationBlueprintFunctionLibrary::STATIC_IsAutomationBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsAutomationBuild");
		
		UAutomationBlueprintFunctionLibrary_IsAutomationBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9F00
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UAutomationBlueprintFunctionLibrary::STATIC_HasPerformanceDataBeenCaptured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured");
		
		UAutomationBlueprintFunctionLibrary_HasPerformanceDataBeenCaptured_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9E70
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ErrorOnFailure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class ATestLevelScriptActor* UAutomationBlueprintFunctionLibrary::STATIC_GetTestLevelScriptActor(bool ErrorOnFailure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor");
		
		UAutomationBlueprintFunctionLibrary_GetTestLevelScriptActor_Params params {};
		params.ErrorOnFailure = ErrorOnFailure;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9BE0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UAutomationBlueprintFunctionLibrary::STATIC_GetPlayerId(class APlayerState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId");
		
		UAutomationBlueprintFunctionLibrary_GetPlayerId_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9AA0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UAutomationBlueprintFunctionLibrary::STATIC_GetLevelUrl(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl");
		
		UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9A00
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UAutomationBlueprintFunctionLibrary::STATIC_GetCurrentMapTestName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName");
		
		UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9830
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               DumpMemReport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_EndPerformanceCapture(bool DumpMemReport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture");
		
		UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params params {};
		params.DumpMemReport = DumpMemReport;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB97C0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            FrameDelay                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_DumpFullMemReportDelayed(int32_t FrameDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed");
		
		UAutomationBlueprintFunctionLibrary_DumpFullMemReportDelayed_Params params {};
		params.FrameDelay = FrameDelay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB97A0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_DumpFullMemReport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport");
		
		UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB95F0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		int32_t                                            NumFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_DelayForFramesWithDesc(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t NumFrames, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc");
		
		UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.NumFrames = NumFrames;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB94D0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		int32_t                                            NumFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_DelayForFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32_t NumFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames");
		
		UAutomationBlueprintFunctionLibrary_DelayForFrames_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.NumFrames = NumFrames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9450
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               FullPurge                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_CollectGarbageNow(bool FullPurge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow");
		
		UAutomationBlueprintFunctionLibrary_CollectGarbageNow_Params params {};
		params.FullPurge = FullPurge;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9360
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               EnableBlock                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_BlockAsyncLoading(bool EnableBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading");
		
		UAutomationBlueprintFunctionLibrary_BlockAsyncLoading_Params params {};
		params.EnableBlock = EnableBlock;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9230
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FolderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               DumpMemReport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PreventGarbageCollection                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_BeginPerformanceCapture(const class FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture");
		
		UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params params {};
		params.FolderName = FolderName;
		params.DumpMemReport = DumpMemReport;
		params.PreventGarbageCollection = PreventGarbageCollection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9090
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EComparisonMethod                                  ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertValue_Int(int32_t Actual, EComparisonMethod ShouldBe, int32_t Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int");
		
		UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params params {};
		params.Actual = Actual;
		params.ShouldBe = ShouldBe;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB8EE0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EComparisonMethod                                  ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertValue_Float(float Actual, EComparisonMethod ShouldBe, float Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float");
		
		UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params params {};
		params.Actual = Actual;
		params.ShouldBe = ShouldBe;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB8D40
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FDateTime                                   Actual                                                     (Parm, ZeroConstructor)
	 * 		EComparisonMethod                                  ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   Expected                                                   (Parm, ZeroConstructor)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertValue_DateTime(const struct FDateTime& Actual, EComparisonMethod ShouldBe, const struct FDateTime& Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime");
		
		UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params params {};
		params.Actual = Actual;
		params.ShouldBe = ShouldBe;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB8C10
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertTrue(bool Condition, const class FString& Message, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue");
		
		UAutomationBlueprintFunctionLibrary_AssertTrue_Params params {};
		params.Condition = Condition;
		params.Message = Message;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB8A80
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertObjectMatchesStringAssetReference
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStringAssetReference                       Reference                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertObjectMatchesStringAssetReference(class UObject* Object, const struct FStringAssetReference& Reference, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertObjectMatchesStringAssetReference");
		
		UAutomationBlueprintFunctionLibrary_AssertObjectMatchesStringAssetReference_Params params {};
		params.Object = Object;
		params.Reference = Reference;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB8910
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NotExpected                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector");
		
		UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params params {};
		params.Actual = Actual;
		params.NotExpected = NotExpected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB8710
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  Actual                                                     (ConstParm, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  NotExpected                                                (ConstParm, Parm, IsPlainOldData, NoDestructor)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform");
		
		UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params params {};
		params.Actual = Actual;
		params.NotExpected = NotExpected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB8560
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Actual                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      NotExpected                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_String(const class FString& Actual, const class FString& NotExpected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String");
		
		UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params params {};
		params.Actual = Actual;
		params.NotExpected = NotExpected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB83F0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    NotExpected                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator");
		
		UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params params {};
		params.Actual = Actual;
		params.NotExpected = NotExpected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB82D0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertIsValid(class UObject* Object, const class FString& Message, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid");
		
		UAutomationBlueprintFunctionLibrary_AssertIsValid_Params params {};
		params.Object = Object;
		params.Message = Message;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB81B0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertIsNotValid(class UObject* Object, const class FString& Message, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid");
		
		UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params params {};
		params.Object = Object;
		params.Message = Message;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB8080
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertFalse(bool Condition, const class FString& Message, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse");
		
		UAutomationBlueprintFunctionLibrary_AssertFalse_Params params {};
		params.Condition = Condition;
		params.Message = Message;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB7FF0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ErrorMessage                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertErrorOccurred(const class FString& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred");
		
		UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params params {};
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB7C90
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Tolerance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D");
		
		UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.Tolerance = Tolerance;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB7E30
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Tolerance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector");
		
		UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.Tolerance = Tolerance;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB7A90
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  Actual                                                     (ConstParm, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Expected                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform");
		
		UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB78E0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Actual                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Expected                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String");
		
		UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB7770
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& What, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator");
		
		UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB75C0
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Float(float Actual, float Expected, const class FString& What, float Tolerance, class UObject* ContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float");
		
		UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params params {};
		params.Actual = Actual;
		params.Expected = Expected;
		params.What = What;
		params.Tolerance = Tolerance;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB7390
	 * 		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ErrorMessage                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAutomationBlueprintFunctionLibrary::STATIC_AddExpectedError(const class FString& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError");
		
		UAutomationBlueprintFunctionLibrary_AddExpectedError_Params params {};
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutomationBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomationBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.AutomationBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA010
	 * 		Name   -> Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            Linkage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAutomationLatentActionCallback::LatentCallback(int32_t Linkage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback");
		
		UAutomationLatentActionCallback_LatentCallback_Params params {};
		params.Linkage = Linkage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutomationLatentActionCallback.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomationLatentActionCallback::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.AutomationLatentActionCallback");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPNamedObjectMock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPNamedObjectMock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.BPNamedObjectMock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADummyReplicatedActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADummyReplicatedActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.DummyReplicatedActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMapFixtureTestGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMapFixtureTestGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.MapFixtureTestGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectWithSettableWorld.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectWithSettableWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.ObjectWithSettableWorld");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestUObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestUObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.TestUObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOtherTestUObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOtherTestUObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.OtherTestUObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URunUnitTestsCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URunUnitTestsCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.RunUnitTestsCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestablePlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestablePlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.TestablePlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestablePlayerControllerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestablePlayerControllerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.TestablePlayerControllerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBB570
	 * 		Name   -> Function StudiosAutomation.TestablePlayerControllerComponent.YieldToServer
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 */
	void UTestablePlayerControllerComponent::YieldToServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestablePlayerControllerComponent.YieldToServer");
		
		UTestablePlayerControllerComponent_YieldToServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BBA1E0
	 * 		Name   -> Function StudiosAutomation.TestablePlayerControllerComponent.PerformPostTestCleanup
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void UTestablePlayerControllerComponent::PerformPostTestCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestablePlayerControllerComponent.PerformPostTestCleanup");
		
		UTestablePlayerControllerComponent_PerformPostTestCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01BB9760
	 * 		Name   -> Function StudiosAutomation.TestablePlayerControllerComponent.DisconnectClientFromTest
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void UTestablePlayerControllerComponent::DisconnectClientFromTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestablePlayerControllerComponent.DisconnectClientFromTest");
		
		UTestablePlayerControllerComponent_DisconnectClientFromTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestablePlayerControllerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestablePlayerControllerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.TestablePlayerControllerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestAbstractActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestAbstractActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.TestAbstractActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.TestSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextureAuditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextureAuditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StudiosAutomation.TextureAuditorSettings");
		return ptr;
	}

}


