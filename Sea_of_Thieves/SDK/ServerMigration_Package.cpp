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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMigrationControlChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMigrationControlChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.MigrationControlChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMigrationRelevancyClusterActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMigrationRelevancyClusterActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.MigrationRelevancyClusterActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360970
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      NewOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNetworkTestingBlueprintFunctionLibrary::STATIC_SwitchNetworkClusterForActor(class AActor* TargetActor, class AActor* NewOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor");
		
		UNetworkTestingBlueprintFunctionLibrary_SwitchNetworkClusterForActor_Params params {};
		params.TargetActor = TargetActor;
		params.NewOwner = NewOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033605E0
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OffsetFromDriverTime                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNetworkTestingBlueprintFunctionLibrary::STATIC_SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime");
		
		UNetworkTestingBlueprintFunctionLibrary_SetConnectionLastReceiveTime_Params params {};
		params.PlayerController = PlayerController;
		params.OffsetFromDriverTime = OffsetFromDriverTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360500
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNetworkTestingBlueprintFunctionLibrary::STATIC_ResumePropertyTracking(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking");
		
		UNetworkTestingBlueprintFunctionLibrary_ResumePropertyTracking_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360300
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNetworkTestingBlueprintFunctionLibrary::STATIC_PausePropertyTrackingOnNextSend(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend");
		
		UNetworkTestingBlueprintFunctionLibrary_PausePropertyTrackingOnNextSend_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360240
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ClientConnectionIdx                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorComponent*                             TargetComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsComponentNetDormant(int32_t ClientConnectionIdx, class UActorComponent* TargetComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant");
		
		UNetworkTestingBlueprintFunctionLibrary_IsComponentNetDormant_Params params {};
		params.ClientConnectionIdx = ClientConnectionIdx;
		params.TargetComponent = TargetComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360180
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor");
		
		UNetworkTestingBlueprintFunctionLibrary_IsActorNetRelevantFor_Params params {};
		params.TargetActor = TargetActor;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360100
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorNetDormant(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant");
		
		UNetworkTestingBlueprintFunctionLibrary_IsActorNetDormant_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360080
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInNetworkClusterGlobal(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal");
		
		UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkClusterGlobal_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335FFC0
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      NetworkClusterOwner                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInNetworkCluster(class AActor* TargetActor, class AActor* NetworkClusterOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster");
		
		UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkCluster_Params params {};
		params.TargetActor = TargetActor;
		params.NetworkClusterOwner = NetworkClusterOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335FF00
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      LevelOwner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInLevelNetworkClusterOnOwner(class AActor* TargetActor, class AActor* LevelOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner");
		
		UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkClusterOnOwner_Params params {};
		params.TargetActor = TargetActor;
		params.LevelOwner = LevelOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335FE40
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInLevelNetworkCluster(class AActor* TargetActor, const class FName& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster");
		
		UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkCluster_Params params {};
		params.TargetActor = TargetActor;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335FD80
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ClientConnectionIdx                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorComponent*                             TargetComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UNetworkTestingBlueprintFunctionLibrary::STATIC_HasComponentReplicator(int32_t ClientConnectionIdx, class UActorComponent* TargetComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator");
		
		UNetworkTestingBlueprintFunctionLibrary_HasComponentReplicator_Params params {};
		params.ClientConnectionIdx = ClientConnectionIdx;
		params.TargetComponent = TargetComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335FC80
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UNetworkTestingBlueprintFunctionLibrary::STATIC_GetReliableBufferBunchCount(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount");
		
		UNetworkTestingBlueprintFunctionLibrary_GetReliableBufferBunchCount_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335FC00
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UActorComponent*                             TargetComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UNetworkTestingBlueprintFunctionLibrary::STATIC_FlushComponentNetDormancy(class UActorComponent* TargetComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy");
		
		UNetworkTestingBlueprintFunctionLibrary_FlushComponentNetDormancy_Params params {};
		params.TargetComponent = TargetComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335FA50
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNetworkTestingBlueprintFunctionLibrary::STATIC_ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer");
		
		UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimerForPlayer_Params params {};
		params.TargetActor = TargetActor;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335F9E0
	 * 		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNetworkTestingBlueprintFunctionLibrary::STATIC_ClearRecentRelevanceTimer(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer");
		
		UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimer_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkTestingBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkTestingBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.NetworkTestingBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03361430
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 */
	void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress");
		
		UServerMigrationBlueprintFunctionLibrary_WaitWhileMigrationInProgress_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03361310
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic");
		
		UServerMigrationBlueprintFunctionLibrary_WaitForPendingNetTraffic_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03361230
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 */
	void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent");
		
		UServerMigrationBlueprintFunctionLibrary_WaitForMigrationCompletedEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03361110
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel");
		
		UServerMigrationBlueprintFunctionLibrary_WaitForClientsToHaveActorChannel_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03361030
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::STATIC_TestSerialiseActorToBuffer(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer");
		
		UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorToBuffer_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360F30
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorGroup                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::STATIC_TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer");
		
		UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorGroupToBuffer_Params params {};
		params.ActorGroup = ActorGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360DE0
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     Offset                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	class AActor* UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer");
		
		UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorWithOffsetFromBuffer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Buffer = Buffer;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360C50
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     Offset                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer");
		
		UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupWithOffsetFromBuffer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Buffer = Buffer;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360B10
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer");
		
		UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupFromBuffer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360A20
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	class AActor* UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer");
		
		UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorFromBuffer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033608A0
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FServerSettings                             Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UServerMigrationBlueprintFunctionLibrary::STATIC_SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings");
		
		UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestServerSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033607D0
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FClientSettings                             Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UServerMigrationBlueprintFunctionLibrary::STATIC_SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings");
		
		UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestClientSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033606A0
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PacketLag                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PacketLagVariance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PacketLoss                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerMigrationBlueprintFunctionLibrary::STATIC_SetPacketSimulationSettings(class UObject* WorldContextObject, int32_t PacketLag, int32_t PacketLagVariance, int32_t PacketLoss)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings");
		
		UServerMigrationBlueprintFunctionLibrary_SetPacketSimulationSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PacketLag = PacketLag;
		params.PacketLagVariance = PacketLagVariance;
		params.PacketLoss = PacketLoss;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360570
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerMigrationBlueprintFunctionLibrary::STATIC_ResumeReplication(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication");
		
		UServerMigrationBlueprintFunctionLibrary_ResumeReplication_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360430
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      IdentificationName                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UServerMigrationBlueprintFunctionLibrary::STATIC_RegisterPersistentDynamicActor(class AActor* TargetActor, const class FString& IdentificationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor");
		
		UServerMigrationBlueprintFunctionLibrary_RegisterPersistentDynamicActor_Params params {};
		params.TargetActor = TargetActor;
		params.IdentificationName = IdentificationName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03360370
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDropUnreliableRPCsWhilePaused                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UServerMigrationBlueprintFunctionLibrary::STATIC_PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication");
		
		UServerMigrationBlueprintFunctionLibrary_PauseReplication_Params params {};
		params.TargetActor = TargetActor;
		params.bDropUnreliableRPCsWhilePaused = bDropUnreliableRPCsWhilePaused;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335FD00
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UServerMigrationBlueprintFunctionLibrary::STATIC_HasActorChannelFromServer(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer");
		
		UServerMigrationBlueprintFunctionLibrary_HasActorChannelFromServer_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335FB80
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UServerMigrationBlueprintFunctionLibrary::STATIC_ClientsHaveDormantActor(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor");
		
		UServerMigrationBlueprintFunctionLibrary_ClientsHaveDormantActor_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0335FB00
	 * 		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UServerMigrationBlueprintFunctionLibrary::STATIC_ClientsHaveActorChannel(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel");
		
		UServerMigrationBlueprintFunctionLibrary_ClientsHaveActorChannel_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerMigrationBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerMigrationBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerMigrationSerialisationDetailsTestsActorRef.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerMigrationSerialisationDetailsTestsActorRef::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsActorWithChild.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsActorWithChild::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsActorWithReplicatedChild.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsActorWithReplicatedChild::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithReplicatedChild");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsActorWithDynamicComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsActorWithDynamicComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithDynamicComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsActorWithNetActorPtr.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsActorWithNetActorPtr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsActorWithUniqueNetId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsActorWithUniqueNetId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerMigrationSerialisationDetailsTestsMigratableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerMigrationSerialisationDetailsTestsMigratableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsMigratableComponentActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsMigratableComponentActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseReplicatingActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseReplicatingActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseReplicatingActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AServerMigrationSerialisationDetailsTestsMigrationReferenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerMigrationSerialisationDetailsTestsMigrationReferenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerMigrationSerialisationDetailsTestsPropertyMarkup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerMigrationSerialisationDetailsTestsPropertyMarkup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsPropertyMarkup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerMigrationSerialisationDetailsTestsTArrayProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerMigrationSerialisationDetailsTestsTArrayProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsTArrayProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerMigrationSerialisationDetailsTestsUStructProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerMigrationSerialisationDetailsTestsUStructProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsUStructProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerMigrationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerMigrationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestActorWithUObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestActorWithUObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.TestActorWithUObjectProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestUObjectWithObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestUObjectWithObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ServerMigration.TestUObjectWithObjectProperty");
		return ptr;
	}

}


