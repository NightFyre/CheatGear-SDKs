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
	 * Function AthenaAI.AthenaAIFormComponent.OnRep_FormData
	 */
	struct UAthenaAIFormComponent_OnRep_FormData_Params
	{	};

	/**
	 * Function AthenaAI.AISpawner.GetNumOfSpawnRequests
	 */
	struct UAISpawner_GetNumOfSpawnRequests_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AICreatureCharacter.SetAIStrategy
	 */
	struct AAICreatureCharacter_SetAIStrategy_Params
	{
	public:
		class UClass*                                              InStrategy;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy
	 */
	struct AAICreatureCharacter_OnRep_CurrentAIStrategy_Params
	{
	public:
		class UClass*                                              OldAIStrategy;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC
	 */
	struct AAICreatureCharacter_Multicast_DespawnRPC_Params
	{	};

	/**
	 * Function AthenaAI.AICreatureCharacter.GetAIStrategy
	 */
	struct AAICreatureCharacter_GetAIStrategy_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
	 */
	struct UAIFaunaSpawner_SpawnFaunaGroup_Params
	{	};

	/**
	 * Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam
	 */
	struct AAthenaAIControllerBase_SetNamedControllerParam_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam
	 */
	struct AAthenaAIControllerBase_FindNamedWeightedRangesControllerParam_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FWeightedProbabilityRangeOfRanges                   ReturnValue;                                             // 0x0008(0x0030)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam
	 */
	struct AAthenaAIControllerBase_FindNamedControllerParam_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams
	 */
	struct AAthenaAIControllerBase_ApplyControllerParams_Params
	{
	public:
		class UAthenaAIControllerParamsDataAsset*                  ParamsAsset;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               InPawn;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIController.StopBehaviourLogic
	 */
	struct AAthenaAIController_StopBehaviourLogic_Params
	{	};

	/**
	 * Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
	 */
	struct AAthenaAIController_SetPerceptionExpirationAgeForActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ExpirationAge;                                           // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6K1G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Sense;                                                   // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
	 */
	struct AAthenaAIController_RegisterSpawnTriggerActorAsStimulus_Params
	{
	public:
		class AActor*                                              TriggerActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIController.OnPerceptionUpdated
	 */
	struct AAthenaAIController_OnPerceptionUpdated_Params
	{
	public:
		TArray<class AActor*>                                      ChangedPerceivedActors;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function AthenaAI.AthenaAIController.OnNewlySpawned
	 */
	struct AAthenaAIController_OnNewlySpawned_Params
	{	};

	/**
	 * Function AthenaAI.AthenaAIController.OnFinishDespawn
	 */
	struct AAthenaAIController_OnFinishDespawn_Params
	{	};

	/**
	 * Function AthenaAI.AthenaAIController.IsActorPerceived
	 */
	struct AAthenaAIController_IsActorPerceived_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AthenaAIController.GetTargetActor
	 */
	struct AAthenaAIController_GetTargetActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
	 */
	struct AAthenaAIController_GetAthenaAIPerceptionComponent_Params
	{
	public:
		class UAthenaAIPerceptionComponent*                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIController.GetAllSeenActors
	 */
	struct AAthenaAIController_GetAllSeenActors_Params
	{
	public:
		TArray<class AActor*>                                      SeenActors;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function AthenaAI.AthenaAIController.ApplyControllerParams
	 */
	struct AAthenaAIController_ApplyControllerParams_Params
	{
	public:
		class UAthenaAIControllerParamsDataAsset*                  ParamsAsset;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               InPawn;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled
	 */
	struct AAthenaFaunaAIController_SetDormancyCheckingEnabled_Params
	{
	public:
		bool                                                       InDormancyCheckingEnabledInAutomation;                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
	 */
	struct AAthenaFaunaAIController_LeaderDestroyed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaFaunaAIController.GetLeader
	 */
	struct AAthenaFaunaAIController_GetLeader_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaFaunaAIController.GetCourage
	 */
	struct AAthenaFaunaAIController_GetCourage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
	 */
	struct AAthenaFaunaAIController_GetAthenaAICharPathFollowingComp_Params
	{
	public:
		class UAthenaAICharacterPathFollowingComponent*            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.Fauna.TestingSetWaterState
	 */
	struct AFauna_TestingSetWaterState_Params
	{
	public:
		EFaunaInWaterState                                         NewInState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.Fauna.OnRep_TargetTurnAngle
	 */
	struct AFauna_OnRep_TargetTurnAngle_Params
	{	};

	/**
	 * Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim
	 */
	struct AFauna_OnRep_IsPlayingStarvingAnim_Params
	{	};

	/**
	 * Function AthenaAI.Fauna.OnRep_IsCalm
	 */
	struct AFauna_OnRep_IsCalm_Params
	{	};

	/**
	 * Function AthenaAI.Fauna.OnRep_IsAgitated
	 */
	struct AFauna_OnRep_IsAgitated_Params
	{	};

	/**
	 * Function AthenaAI.Fauna.OnRep_InWaterState
	 */
	struct AFauna_OnRep_InWaterState_Params
	{	};

	/**
	 * Function AthenaAI.Fauna.OnRep_CratedState
	 */
	struct AFauna_OnRep_CratedState_Params
	{
	public:
		EFaunaCratedState                                          PreviousCratedState;                                     // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC
	 */
	struct AFauna_Multicast_PlayPutInCrateEffectsRPC_Params
	{
	public:
		class AActor*                                              Crate;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.Fauna.Multicast_JustBeenFedRPC
	 */
	struct AFauna_Multicast_JustBeenFedRPC_Params
	{
	public:
		class AActor*                                              FedBy;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.Fauna.Multicast_HightlightLeader
	 */
	struct AFauna_Multicast_HightlightLeader_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed
	 */
	struct AFauna_GenerateNewRandomAnimationSeed_Params
	{	};

	/**
	 * Function AthenaAI.Fauna.ActivateResponseRPC
	 */
	struct AFauna_ActivateResponseRPC_Params
	{
	public:
		float                                                      InTargetTurnAngle;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIDebugSpawnActor.StartSpawning
	 */
	struct AAIDebugSpawnActor_StartSpawning_Params
	{	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnMultipleAI
	 */
	struct UAthenaAIDebugFunctionLibrary_SpawnMultipleAI_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SJZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAIEncounterSettings*                                EncounterSettings;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Pos;                                                     // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x001C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Delay;                                                   // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MakeAIPermanentlyNetRelevant;                            // 0x002C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L3TL[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstancedNavMesh;                                        // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FAIEncounterSpecification>                   ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings
	 */
	struct UAthenaAIDebugFunctionLibrary_SpawnAIWithSettings_Params
	{
	public:
		TAssetPtr<class UClass>                                    AIType;                                                  // 0x0000(0x001C)  (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
		TAssetPtr<class UAthenaAIControllerParamsDataAsset>        Skillset;                                                // 0x0020(0x001C)  (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
		TAssetPtr<class ULoadoutAsset>                             Loadout;                                                 // 0x0040(0x001C)  (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
		TAssetPtr<class UAthenaAIFormDataAsset>                    Form;                                                    // 0x0060(0x001C)  (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
		TAssetPtr<class UClass>                                    AIItemSpawnComponent;                                    // 0x0080(0x001C)  (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              ClassId;                                                 // 0x00A0(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		TAssetPtr<class UAthenaAIAmmoDataAsset>                    Ammo;                                                    // 0x00A8(0x001C)  (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
		struct FVector                                             Pos;                                                     // 0x00C8(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x00D4(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class FName                                                Region;                                                  // 0x00E0(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              TriggerActor;                                            // 0x00E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NavMeshOverride;                                         // 0x00F0(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Delay;                                                   // 0x00F8(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI
	 */
	struct UAthenaAIDebugFunctionLibrary_SpawnAI_Params
	{
	public:
		class UAIEncounterSettings*                                EncounterSettings;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Pos;                                                     // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Delay;                                                   // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MakeAIPermanentlyNetRelevant;                            // 0x0024(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K889[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstancedNavMesh;                                        // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIEncounterSpecification                           ReturnValue;                                             // 0x0030(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
	 */
	struct UAthenaAIDebugFunctionLibrary_SetEnvQueryManagerMaxAllowedSeconds_Params
	{
	public:
		float                                                      InMaxAllowedSeconds;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AG9H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             QueryOwner;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners
	 */
	struct UAthenaAIDebugFunctionLibrary_KillAllDebugAISpawners_Params
	{	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
	 */
	struct UAthenaAIDebugFunctionLibrary_GetEnvQueryManagerNumRunningQueries_Params
	{
	public:
		class UObject*                                             QueryOwner;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
	 */
	struct UAthenaAIDebugFunctionLibrary_EnableMaximumSightSettings_Params
	{
	public:
		class AAthenaAIController*                                 AIController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
	 */
	struct UAthenaAIDebugFunctionLibrary_EnableBehaviorTreeLogging_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
	 */
	struct UAthenaAIDebugFunctionLibrary_DespawnAIPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition
	 */
	struct UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtPosition_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAISpawner*                                          SpawnerAsset;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Pos;                                                     // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor
	 */
	struct UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtActor_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAISpawner*                                          SpawnerAsset;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              SpawnLocationActor;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation
	 */
	struct UAthenaAIDebugFunctionLibrary_CanProjectPointToNavigation_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Point;                                                   // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0C5L[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ANavigationData*                                     NavData;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              FilterClass;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FVector                                             QueryExtent;                                             // 0x0028(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AINameplateComponent.OnRep_Title
	 */
	struct UAINameplateComponent_OnRep_Title_Params
	{	};

	/**
	 * Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString
	 */
	struct UAINameplateComponent_OnRep_DisplayNameAsString_Params
	{	};

	/**
	 * Function AthenaAI.AINameplateComponent.OnRep_DisplayName
	 */
	struct UAINameplateComponent_OnRep_DisplayName_Params
	{	};

	/**
	 * Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText
	 */
	struct UAINameplateComponent_OnRep_DebugDisplayText_Params
	{	};

	/**
	 * Function AthenaAI.Pet.SetExitTakeOffFlag
	 */
	struct APet_SetExitTakeOffFlag_Params
	{
	public:
		bool                                                       InExitTakeOffFlag;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.Pet.OnShipDestroyed
	 */
	struct APet_OnShipDestroyed_Params
	{
	public:
		class AActor*                                              InShip;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.Pet.OnRep_RollRequest
	 */
	struct APet_OnRep_RollRequest_Params
	{	};

	/**
	 * Function AthenaAI.Pet.OnRep_ResetRollAndZOffset
	 */
	struct APet_OnRep_ResetRollAndZOffset_Params
	{	};

	/**
	 * Function AthenaAI.Pet.OnRep_PetTurnToFaceData
	 */
	struct APet_OnRep_PetTurnToFaceData_Params
	{	};

	/**
	 * Function AthenaAI.Pet.OnRep_PetOwner
	 */
	struct APet_OnRep_PetOwner_Params
	{	};

	/**
	 * Function AthenaAI.Pet.OnRep_PetIsSad
	 */
	struct APet_OnRep_PetIsSad_Params
	{	};

	/**
	 * Function AthenaAI.Pet.OnRep_PerchedInHangout
	 */
	struct APet_OnRep_PerchedInHangout_Params
	{	};

	/**
	 * Function AthenaAI.Pet.OnRep_MovementRequest
	 */
	struct APet_OnRep_MovementRequest_Params
	{	};

	/**
	 * Function AthenaAI.Pet.OnRep_InHangout
	 */
	struct APet_OnRep_InHangout_Params
	{	};

	/**
	 * Function AthenaAI.Pet.OnOwnerDestroyed
	 */
	struct APet_OnOwnerDestroyed_Params
	{
	public:
		class AActor*                                              InOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.Pet.Multicast_DitherOut
	 */
	struct APet_Multicast_DitherOut_Params
	{	};

	/**
	 * Function AthenaAI.Pet.Multicast_DitherIn
	 */
	struct APet_Multicast_DitherIn_Params
	{	};

	/**
	 * Function AthenaAI.Pet.GetFloorMeshOffsetZ
	 */
	struct APet_GetFloorMeshOffsetZ_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams
	 */
	struct AAthenaSwimmingAIController_ApplyControllerParams_Params
	{
	public:
		class UAthenaAIControllerParamsDataAsset*                  InControllerParametersAsset;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               InPawn;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed
	 */
	struct ATinySharkExperience_TinySharkPawnDestroyed_Params
	{
	public:
		class AActor*                                              InDestroyedActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn
	 */
	struct ATinySharkExperience_OnRep_TinySharkPawn_Params
	{
	public:
		class ASharkPawn*                                          LastTinySharkPawn;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.TinySharkExperience.GetTrackedShip
	 */
	struct ATinySharkExperience_GetTrackedShip_Params
	{
	public:
		class AShip*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.TinySharkExperience.GetCurrentState
	 */
	struct ATinySharkExperience_GetCurrentState_Params
	{
	public:
		ETinySharkState                                            ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.TinySharkExperience.GetActiveState
	 */
	struct ATinySharkExperience_GetActiveState_Params
	{
	public:
		ETinySharkActiveState                                      ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.TinySharkService.RequestTinySharkWithShip
	 */
	struct ATinySharkService_RequestTinySharkWithShip_Params
	{
	public:
		class AShip*                                               InTrackedShip;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OverrideControllerParamIndex;                            // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PartIndex;                                               // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.TinySharkService.RequestTinySharkWithLocation
	 */
	struct ATinySharkService_RequestTinySharkWithLocation_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    PartIndex;                                               // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.TinySharkService.DismissAllTinySharks
	 */
	struct ATinySharkService_DismissAllTinySharks_Params
	{	};

	/**
	 * Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience
	 */
	struct ATinySharkService_CanSpawnTinySharkExperience_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
	 */
	struct UAIEncounterServiceInterface_RegisterLoadedSkillsetProgression_Params
	{
	public:
		TAssetPtr<class UAISkillsetRankProgression>                Progression;                                             // 0x0000(0x001C)  (Parm, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset
	 */
	struct UAIEncounterServiceInterface_RegisterLoadedSkillset_Params
	{
	public:
		TAssetPtr<class UAthenaAIControllerParamsDataAsset>        Skillset;                                                // 0x0000(0x001C)  (Parm, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout
	 */
	struct UAIEncounterServiceInterface_RegisterLoadedLoadout_Params
	{
	public:
		TAssetPtr<class ULoadoutAsset>                             Loadout;                                                 // 0x0000(0x001C)  (Parm, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm
	 */
	struct UAIEncounterServiceInterface_RegisterLoadedForm_Params
	{
	public:
		TAssetPtr<class UAthenaAIFormDataAsset>                    Form;                                                    // 0x0000(0x001C)  (Parm, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter
	 */
	struct UAIEncounterServiceInterface_RegisterLoadedEncounter_Params
	{
	public:
		TAssetPtr<class UAIEncounterSettings>                      Encounter;                                               // 0x0000(0x001C)  (Parm, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered
	 */
	struct UAICombatEncounterInterface_OnVulnerabilityStateEntered_Params
	{	};

	/**
	 * Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
	 */
	struct AAIEncounterService_RegisterLoadedSkillsetProgression_Params
	{
	public:
		TAssetPtr<class UAISkillsetRankProgression>                Progression;                                             // 0x0000(0x001C)  (Parm, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIEncounterService.RegisterLoadedSkillset
	 */
	struct AAIEncounterService_RegisterLoadedSkillset_Params
	{
	public:
		TAssetPtr<class UAthenaAIControllerParamsDataAsset>        Skillset;                                                // 0x0000(0x001C)  (Parm, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIEncounterService.RegisterLoadedLoadout
	 */
	struct AAIEncounterService_RegisterLoadedLoadout_Params
	{
	public:
		TAssetPtr<class ULoadoutAsset>                             Loadout;                                                 // 0x0000(0x001C)  (Parm, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIEncounterService.RegisterLoadedForm
	 */
	struct AAIEncounterService_RegisterLoadedForm_Params
	{
	public:
		TAssetPtr<class UAthenaAIFormDataAsset>                    Form;                                                    // 0x0000(0x001C)  (Parm, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIEncounterService.RegisterLoadedEncounter
	 */
	struct AAIEncounterService_RegisterLoadedEncounter_Params
	{
	public:
		TAssetPtr<class UAIEncounterSettings>                      Encounter;                                               // 0x0000(0x001C)  (Parm, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI
	 */
	struct UAIManagerBlueprintFunctionLibrary_SpawnItemFromAI_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ItemDesc;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class AItemInfo*                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter
	 */
	struct UAIManagerBlueprintFunctionLibrary_GetFrameCounter_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName
	 */
	struct UAIManagerBlueprintFunctionLibrary_AddNameplateToAIWithLocalisedName_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                DisplayName;                                             // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI
	 */
	struct UAIManagerBlueprintFunctionLibrary_AddNameplateToAI_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              DisplayName;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
	 */
	struct UAIManagerServiceInterface_StartDespawnAI_Params
	{
	public:
		class APawn*                                               AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterDeathType                                        DeathType;                                               // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns
	 */
	struct UAIManagerServiceInterface_GetNumOfSpawnedPawns_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIManagerService.TickService
	 */
	struct AAIManagerService_TickService_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIManagerService.StartDespawnAI
	 */
	struct AAIManagerService_StartDespawnAI_Params
	{
	public:
		class APawn*                                               AIActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterDeathType                                        DeathType;                                               // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
	 */
	struct UDebugAIManagerServiceInterface_SetMaxNumOfSpawnedActors_Params
	{
	public:
		int32_t                                                    InMaxNumOfSpawnedActors;                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion
	 */
	struct UDebugAIManagerServiceInterface_SetMaxAICostUnitsPerRegion_Params
	{
	public:
		int32_t                                                    InMaxAICostUnitsPerRegion;                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld
	 */
	struct UDebugAIManagerServiceInterface_SetMaxAICostUnitsForWorld_Params
	{
	public:
		int32_t                                                    InMaxAICostUnitsForWorld;                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits
	 */
	struct UDebugAIManagerServiceInterface_SetIgnoreCharacterLimits_Params
	{
	public:
		bool                                                       Ignore;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority
	 */
	struct UDebugAIManagerServiceInterface_SetDistanceToPlayerToRaiseSpawnPriority_Params
	{
	public:
		float                                                      InDistanceToPlayerToRaiseSpawnPriority;                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer
	 */
	struct UDebugAIManagerServiceInterface_SetCharacterWorldDensityCheckTimer_Params
	{
	public:
		float                                                      InCharacterWorldDensityCheckTimer;                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer
	 */
	struct UDebugAIManagerServiceInterface_SetCharacterRegionDensityCheckTimer_Params
	{
	public:
		float                                                      InCharacterRegionDensityCheckTimer;                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy
	 */
	struct UDebugAIManagerServiceInterface_SetCharacterNetRelevancy_Params
	{
	public:
		float                                                      InCloseByCharactersRadius;                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility
	 */
	struct UDebugAIManagerServiceInterface_BlockAIAbility_Params
	{
	public:
		class UClass*                                              InExclusive;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       InBlockState;                                            // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
	 */
	struct ADebugAIManagerService_SetMaxNumOfSpawnedActors_Params
	{
	public:
		int32_t                                                    InMaxNumOfSpawnedActors;                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion
	 */
	struct ADebugAIManagerService_SetMaxAICostUnitsPerRegion_Params
	{
	public:
		int32_t                                                    InMaxAICostUnitsPerRegion;                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld
	 */
	struct ADebugAIManagerService_SetMaxAICostUnitsForWorld_Params
	{
	public:
		int32_t                                                    InMaxAICostUnitsForWorld;                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits
	 */
	struct ADebugAIManagerService_SetIgnoreCharacterLimits_Params
	{
	public:
		bool                                                       Ignore;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority
	 */
	struct ADebugAIManagerService_SetDistanceToPlayerToRaiseSpawnPriority_Params
	{
	public:
		float                                                      InDistanceToPlayerToRaiseSpawnPriority;                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer
	 */
	struct ADebugAIManagerService_SetCharacterWorldDensityCheckTimer_Params
	{
	public:
		float                                                      InCharacterWorldDensityCheckTimer;                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer
	 */
	struct ADebugAIManagerService_SetCharacterRegionDensityCheckTimer_Params
	{
	public:
		float                                                      InCharacterRegionDensityCheckTimer;                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy
	 */
	struct ADebugAIManagerService_SetCharacterNetRelevancy_Params
	{
	public:
		float                                                      InCloseByCharactersRadius;                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.DebugAIManagerService.BlockAIAbility
	 */
	struct ADebugAIManagerService_BlockAIAbility_Params
	{
	public:
		class UClass*                                              InExclusive;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       InBlockState;                                            // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts
	 */
	struct UAIPartsRetrievalComponent_RequestNewAIParts_Params
	{
	public:
		class UAIPartsCategory*                                    AssignedPartsCategory;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PartsIndexToUse;                                         // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamColorIndex;                                          // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData
	 */
	struct UAIPartsRetrievalComponent_OnRep_ReplicatedAIPartsData_Params
	{	};

	/**
	 * Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
	 */
	struct UAIPerPlayerSpawner_PlayerDeath_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
	 */
	struct UAITargetWeaponInterface_FindAimConfigToHitTarget_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       CheckYaw;                                                // 0x000C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0VPB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            OutAimConfig;                                            // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath
	 */
	struct AAmbientWaterSpawnerManager_OnPlayerDeath_Params
	{
	public:
		class AActor*                                              InActorDying;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan
	 */
	struct ABurrowCrack_OnRep_StartFadeAndLifeSpan_Params
	{	};

	/**
	 * Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft
	 */
	struct ABurrowCrack_OnLifeSpanPercentLeft_Params
	{
	public:
		float                                                      PercentLeft;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies
	 */
	struct AAthenaAICharacterController_SetOverridePrioritiseInteractablesBeforeEnemies_Params
	{
	public:
		bool                                                       InPrioritiseInteractablesBeforeEnemies;                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
	 */
	struct AAthenaAICharacterController_SetItemSpecificNamedControllerParam_Params
	{
	public:
		class UClass*                                              InItemCategory;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class FName                                                ParamName;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest
	 */
	struct AAthenaAICharacterController_SetDisableTurningForTest_Params
	{
	public:
		bool                                                       InDisableTurningForTest;                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies
	 */
	struct AAthenaAICharacterController_ClearOverridePrioritiseInteractablesBeforeEnemies_Params
	{	};

	/**
	 * Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled
	 */
	struct UAthenaAIPerceptionComponent_IsPerceptionSenseEnabled_Params
	{
	public:
		class UClass*                                              Sense;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled
	 */
	struct UAthenaAIPerceptionComponent_IsAnyPerceptionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
	 */
	struct UAthenaAIPerceptionComponent_EnablePerceptionSense_Params
	{
	public:
		class UClass*                                              Sense;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       Enable;                                                  // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception
	 */
	struct UAthenaAIPerceptionComponent_EnableAllPerception_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole
	 */
	struct UCoralShieldVFXComponent_OnRep_CurrentCoralShieldRole_Params
	{	};

	/**
	 * Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget
	 */
	struct ASpawnContextProviderZone_RemoveContextsFromTarget_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InComponent;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InOtherBodyIndex;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget
	 */
	struct ASpawnContextProviderZone_AddContextsToTarget_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InComponent;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InOtherBodyIndex;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InFromSweep;                                             // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ASWV[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          InSweepResult;                                           // 0x0018(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
