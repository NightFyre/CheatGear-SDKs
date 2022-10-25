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
	 * Class AthenaAI.AthenaAIFormComponent
	 * Size -> 0x0070 (FullSize[0x0138] - InheritedSize[0x00C8])
	 */
	class UAthenaAIFormComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_T88M[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAthenaAIFormComponentVfxCustomisation>      VfxCustomisations;                                       // 0x00D0(0x0010) Edit, ZeroConstructor
		class UAthenaAIFormDataAsset*                              FormData;                                                // 0x00E0(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UCharacterHitReactionDamagerTypeToAnimTypeLayer*     HitReactionsLayer;                                       // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4F8B[0x48];                                  // 0x00F0(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnRep_FormData();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAIAbilityType : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIStrategyId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIStrategyId : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawner
	 * Size -> 0x0410 (FullSize[0x0438] - InheritedSize[0x0028])
	 */
	class UAISpawner : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_DMVC[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       HasSpawnerLevelEncounters;                               // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4PLH[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAISpawnTypeParamsCollection                        SpawnTypeParamsCollection;                               // 0x0040(0x0048) Edit
		class UAIEncounterSettings*                                DefaultEncounterSettings;                                // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAISpawnWaveSequenceRankProgression*                 DefaultSpawnWaveProgression;                             // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAISpawnContextIdEncounterSettingsPair>      SpawnContextSpecificEncounterSettings;                   // 0x0098(0x0010) Edit, ZeroConstructor
		bool                                                       ShouldSpawnFacingRegionCentre;                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EAthenaAISpawnType                                         DefaultSpawnType;                                        // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W5UA[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQuery*                                           FindSpawnPosQuery;                                       // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryRunMode                                           FindSpawnPosQueryRunMode;                                // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JF0V[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SpawnLocationType;                                       // 0x00BC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumOfSpawnedPawns;                                    // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PriorityForSpawnedPawns;                                 // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G7WY[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConditionalAISpawnOverride>                 SpawnOverrides;                                          // 0x00D0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		TArray<struct FAdditionalSpawnerBehaviour>                 AdditionalBehaviours;                                    // 0x00E0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		bool                                                       EnforceHomePosition;                                     // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_37SZ[0x27F];                                 // 0x00F1(0x027F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAthenaAISettings*                                   AthenaAISettings;                                        // 0x0370(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LRRH[0xC0];                                  // 0x0378(0x00C0) MISSED OFFSET (PADDING)

	public:
		int32_t GetNumOfSpawnRequests();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPerCrewSpawner
	 * Size -> 0x0140 (FullSize[0x0578] - InheritedSize[0x0438])
	 */
	class UAIPerCrewSpawner : public UAISpawner
	{
	public:
		class UAIWeightedProbabilityRangeOfRangesRankProgression*  DefaultRespawnTimerRanges;                               // 0x0438(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumOfCrewsToSpawnFor;                                 // 0x0440(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ActivateBySettingFootOnIsland;                           // 0x0444(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseRespawnTimerForFirstSpawn;                            // 0x0445(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AssociateSpawnsWithSpecificCrews;                        // 0x0446(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       PerceiveTriggerActorOnSpawn;                             // 0x0447(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       EnforceRespawnTimeAfterCrewLeaves;                       // 0x0448(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IgnoreSpawningGracePeriodForNewCrew;                     // 0x0449(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6V2R[0x6];                                   // 0x044A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPerCrewSpawnerSettingsStoryOverrideCollectionAsset* StoryOverrideRespawnSettingsAsset;                       // 0x0450(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_I6FE[0x120];                                 // 0x0458(0x0120) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIFormDataAsset
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UAthenaAIFormDataAsset : public UDataAsset
	{
	public:
		TArray<EHealthChangedReason>                               PreventHealthChangedReasons;                             // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<struct FAIFormDamageResponse>                       DamageResponses;                                         // 0x0038(0x0010) Edit, ZeroConstructor
		class UStatusRecipientResponseList*                        OverrideStatusRecipientResponseList;                     // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPhysicalMaterial*                                   SurfaceMaterial;                                         // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             KilledVfxTemplate;                                       // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              AICharacterAudioComponent;                               // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              AnimNotifyEmitterWithObservers;                          // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       HighPriorityFootstepAudio;                               // 0x0070(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HHFU[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementSpeedMultipler;                                  // 0x0074(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPlayerStat                                         StatToFireOnDeath;                                       // 0x0078(0x0004) Edit, DisableEditOnInstance
		class FName                                                FeatureName;                                             // 0x007C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CPDO[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FormComponentClass;                                      // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPlayerTracker
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPlayerTracker : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnerPlayerTracker
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAISpawnerPlayerTracker : public UAIPlayerTracker
	{
	public:
		unsigned char                                              UnknownData_S8UU[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIInteractableType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIInteractableType : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIWaveSpawner
	 * Size -> 0x0138 (FullSize[0x0570] - InheritedSize[0x0438])
	 */
	class UAIWaveSpawner : public UAISpawner
	{
	public:
		unsigned char                                              UnknownData_RDBV[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAISpawnerWave                                      SpawnedWave;                                             // 0x0440(0x0100) Edit
		float                                                      MinRespawnTime;                                          // 0x0540(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxRespawnTime;                                          // 0x0544(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P30W[0x28];                                  // 0x0548(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIAbilityStageParams
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAthenaAIAbilityStageParams : public UObject
	{
	public:
		float                                                      AbilityCooldownSpeedMultiplier;                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageRequiredForNextIntervalMultiplier;                 // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideParams;                                          // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AutoActivateOnStageTransition;                           // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XK9Y[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TypeClass;                                               // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIAbility
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAthenaAIAbility : public UObject
	{
	public:
		class UAthenaAIAbilityParams*                              AbilityParams;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class APawn*                                               Pawn;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AAthenaAIController*                                 Controller;                                              // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              AIPawnInterface[0x10];                                   // 0x0040(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.AthenaAIAbility.AIPawnInterface
		class UAthenaAIAbilityStageParams*                         CurrentAbilityStageParams;                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_9ZLI[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIAbilityParams
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UAthenaAIAbilityParams : public UObject
	{
	public:
		TArray<struct FAthenaAIControllerParamValue>               NamedControllerParams;                                   // 0x0028(0x0010) Edit, ZeroConstructor
		EAIAbilityDamageIntervalCounterMode                        DamageIntervalCountingMode;                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseTimeBetweenAbility;                                   // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XJFP[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAthenaAIAbilityPlayerBasedRanges                   ActivationTimerCooldown;                                 // 0x0040(0x0010) Edit
		struct FAthenaAIAbilityPlayerBasedRanges                   TimeBetweenAbility;                                      // 0x0050(0x0010) Edit
		bool                                                       UseDamageBetweenAbility;                                 // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_652G[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAthenaAIAbilityPlayerBasedRanges                   DamageBetweenAbility;                                    // 0x0068(0x0010) Edit
		float                                                      AbilityRadius;                                           // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseMinMaxAttackRange;                                    // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LXGM[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxAbilityRange                                 MinMaxAttackRange;                                       // 0x0080(0x0008) Edit
		TArray<struct FAIAbilityFollowUp>                          FollowUpAbilities;                                       // 0x0088(0x0010) Edit, ZeroConstructor
		float                                                      Weight;                                                  // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BA6H[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAbilityContinuousCooldownParameterData           ContinuousCooldownAbilityParameters;                     // 0x00A0(0x0020) Edit
		class UClass*                                              AIAbilityTypeClass;                                      // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIInteractableComponent
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	class UAIInteractableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BKN1[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Type;                                                    // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             DetachOffsetFromOwner;                                   // 0x00D8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanHaveTarget;                                           // 0x00E4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LOWV[0x1B];                                  // 0x00E5(0x001B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_BaseConditional
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_BaseConditional : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_TargetOnShip
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_TargetOnShip : public UBTDecorator_BaseConditional
	{
	public:
		bool                                                       Invert;                                                  // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EBT_ShipOwnership                                          ShipOwnership;                                           // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P3KC[0x36];                                  // 0x006A(0x0036) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_QueryShipsForTarget
	 * Size -> 0x0290 (FullSize[0x0300] - InheritedSize[0x0070])
	 */
	class UBTService_QueryShipsForTarget : public UBTService
	{
	public:
		struct FAIDataProviderFloatValue                           MaxShipDistanceFromHomePosition;                         // 0x0070(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MinDamageToSwitchTargets;                                // 0x00A0(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MinSecondsBeforeSwitchTargets;                           // 0x00D0(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderBoolValue                            SwitchTargetsAfterTimerExpires;                          // 0x0100(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           SecondsBeforeSwitchTargetsAfterTimerExpires;             // 0x0130(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           TimeBetweenDiceRolls;                                    // 0x0160(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           DiceRollForAggression;                                   // 0x0190(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MinTotalDamageToTurnDiceRollForAggression;               // 0x01C0(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           DiceRollForDamageAggression;                             // 0x01F0(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           DiceRollForDamageDormancy;                               // 0x0220(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           PlayerDistanceThresholdToTurnAggressive;                 // 0x0250(0x0030) Edit, ContainsInstancedReference
		bool                                                       IgnoreAI;                                                // 0x0280(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1T07[0x7F];                                  // 0x0281(0x007F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SwimAttackTargetActor
	 * Size -> 0x0058 (FullSize[0x00E0] - InheritedSize[0x0088])
	 */
	class UBTTask_SwimAttackTargetActor : public UBTTask_BlackboardBase
	{
	public:
		float                                                      DamageToApply;                                           // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxAngleToTargetToSuccessfullyAttack;                    // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAttackableTypeToAnimMapping>                AttackAnimMapping;                                       // 0x0090(0x0010) Edit, ZeroConstructor
		class FName                                                LoSTraceProfileName;                                     // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAIDataProviderFloatValue                           LosTraceRadius;                                          // 0x00A8(0x0030) Edit, ContainsInstancedReference
		float                                                      MaxDistanceToTargetToApplyDamage;                        // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BDU0[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SwimAttackTargetShip
	 * Size -> 0x01B0 (FullSize[0x0238] - InheritedSize[0x0088])
	 */
	class UBTTask_SwimAttackTargetShip : public UBTTask_BlackboardBase
	{
	public:
		float                                                      BiteRadiusOffsetToBeginAttackHeadOn;                     // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BiteRadiusOffsetToBeginAttackPerpendicular;              // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTimeToStartAttack;                                    // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2L7T[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       AttackAnim;                                              // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttackAnimLength;                                        // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToPerformAttack;                                     // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             AttackVFX;                                               // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttackVFXZOffset;                                        // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LoSTraceProfileName;                                     // 0x00B4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_025F[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           LosTraceRadius;                                          // 0x00C0(0x0030) Edit, ContainsInstancedReference
		TArray<struct FSwimAttackTargetShipImpulseData>            ImpulseData;                                             // 0x00F0(0x0010) Edit, ZeroConstructor
		struct FAIDataProviderIntValue                             MinDamageHolesToApply;                                   // 0x0100(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderIntValue                             MaxDamageHolesToApply;                                   // 0x0130(0x0030) Edit, ContainsInstancedReference
		int32_t                                                    LevelsOfHullDamage;                                      // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LJ0L[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageCauserType;                                        // 0x0168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FAIDataProviderFloatValue                           PlayerBiteRadius;                                        // 0x0170(0x0030) Edit, ContainsInstancedReference
		struct FKnockBackInfo                                      KnockbackParams;                                         // 0x01A0(0x0050) Edit
		struct FAIDataProviderFloatValue                           PlayerBiteDamage;                                        // 0x01F0(0x0030) Edit, ContainsInstancedReference
		unsigned char                                              UnknownData_BE7E[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShip*                                               TargetShip;                                              // 0x0230(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BurrowEruptBase
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class ABurrowEruptBase : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIAnimationStateId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIAnimationStateId : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SpawnerBehaviourStrategy
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class USpawnerBehaviourStrategy : public UObject
	{
	public:
		unsigned char                                              UnknownData_IJCA[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AICreatureCharacterMovementComponent
	 * Size -> 0x00C8 (FullSize[0x0620] - InheritedSize[0x0558])
	 */
	class UAICreatureCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		TArray<struct FAIStrategyMovementProperties>               AIStrategyMovementProperties;                            // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      BlendSpeed;                                              // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCreateDisturbance;                                      // 0x056C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0DX6[0x3];                                   // 0x056D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DisturbanceSize;                                         // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DisturbanceVelocityScale;                                // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrientationBlendSpeed;                                   // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrientationMaxPitch;                                     // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UpdateOrientationFrequency;                              // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinStairAngle;                                           // 0x0584(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinStairVelocityDampen;                                  // 0x0588(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E818[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      SubscribedStairClimbStrategies;                          // 0x0590(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		unsigned char                                              UnknownData_K9E4[0x80];                                  // 0x05A0(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AICreatureCharacter
	 * Size -> 0x0238 (FullSize[0x0810] - InheritedSize[0x05D8])
	 */
	class AAICreatureCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_WAHI[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_GIYJ[0x58];                                  // 0x05E0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayBeforeDestroying;                                   // 0x0638(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeforeFadingOut;                                     // 0x063C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PickupTime;                                              // 0x0640(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TooltipDisplayOffset;                                    // 0x0644(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UActionStateMachineComponent*                        ActionStateMachineComponent;                             // 0x0650(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionStatePriorityTableData*                       ActionStatePriorityTableData;                            // 0x0658(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ActionStateCreatorDefinition;                            // 0x0660(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAthenaAIControllerParamsDataAsset*                  AIControllerParams;                                      // 0x0668(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInteractableComponent*                              InteractableComponent;                                   // 0x0670(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWaterHeightProviderComponent*                       WaterHeightProviderComponent;                            // 0x0678(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimNotifyWwiseEmitterComponent*                    AnimNotifyWwiseEmitterComponent;                         // 0x0680(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URewindComponent*                                    RewindComponent;                                         // 0x0688(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionRulesComponent*                               ActionRulesComponent;                                    // 0x0690(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_M36O[0x100];                                 // 0x0698(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAICreatureCharacterMovementComponent*               AICreatureCharacterMovementComponent;                    // 0x0798(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_7G90[0x68];                                  // 0x07A0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CurrentAIStrategy;                                       // 0x0808(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void SetAIStrategy(class UClass* InStrategy);
		void OnRep_CurrentAIStrategy(class UClass* OldAIStrategy);
		void Multicast_DespawnRPC();
		class UClass* GetAIStrategy();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAICharacterPathFollowingComponent
	 * Size -> 0x0038 (FullSize[0x02F0] - InheritedSize[0x02B8])
	 */
	class UAthenaAICharacterPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		float                                                      ProportionOfTurnToMove;                                  // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinAngleToTurnOnSpot;                                    // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReachedGoalMaxSpeedToSlowDistanceFactor;                 // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AbortMoveMaxSpeedToSlowDistanceFactor;                   // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K32Y[0x4];                                   // 0x02C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinSlowDownSpeed;                                        // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NS41[0x20];                                  // 0x02D0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AICreatureCharacterPathFollowingComponent
	 * Size -> 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
	 */
	class UAICreatureCharacterPathFollowingComponent : public UAthenaAICharacterPathFollowingComponent
	{
	public:
		float                                                      LandingAngle;                                            // 0x02F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HopDistanceScale;                                        // 0x02F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaximumLandTime;                                         // 0x02F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinStairAngle;                                           // 0x02FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinStairVelocityDampen;                                  // 0x0300(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NQ2U[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      SubscribedStairClimbStrategies;                          // 0x0308(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		unsigned char                                              UnknownData_F4E4[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AICreatureMovementModifierInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAICreatureMovementModifierInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AICreatureMovementModifierParamsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAICreatureMovementModifierParamsDataAsset : public UDataAsset
	{
	public:
		float                                                      TurnRateMultiplier;                                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlyingTurnRateMultiplier;                                // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseTighterTurningCircle;                                 // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseHighResNavMesh;                                       // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0PJ2[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BehaviourTreeInterruptionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBehaviourTreeInterruptionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.ForcedIdleBehaviourInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UForcedIdleBehaviourInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDialogueStateProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIDialogueStateProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SimpleDialogueStateProvider
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USimpleDialogueStateProvider : public UObject
	{
	public:
		unsigned char                                              UnknownData_Y0EI[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BountySpawnerAudioZonesInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBountySpawnerAudioZonesInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIBountySpawner
	 * Size -> 0x0198 (FullSize[0x05D0] - InheritedSize[0x0438])
	 */
	class UAIBountySpawner : public UAISpawner
	{
	public:
		float                                                      MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup;        // 0x0438(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2936[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIBountySpawnerWaveGroup>                   WaveGroups;                                              // 0x0440(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		struct FStringAssetReference                               TeamColor;                                               // 0x0450(0x0010) Edit, ZeroConstructor
		struct FWeightedProbabilityRange                           WavesPerRelocate;                                        // 0x0460(0x0020) Edit
		struct FWeightedProbabilityRange                           WaveSplitChance;                                         // 0x0480(0x0020) Edit
		TArray<float>                                              WaveSuicideTime;                                         // 0x04A0(0x0010) Edit, ZeroConstructor
		float                                                      WaveSuicideMinDist;                                      // 0x04B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ImmediatelyPerceiveTargets;                              // 0x04B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_704H[0x3];                                   // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAICombatDialogue*                                   ActiveCombatDialogue;                                    // 0x04B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_XMMS[0x28];                                  // 0x04C0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CrewMembers;                                             // 0x04E8(0x0010) ZeroConstructor, Transient
		TArray<class AActor*>                                      NonCrewMembersInRegion;                                  // 0x04F8(0x0010) ZeroConstructor, Transient
		TArray<class AActor*>                                      AllParticipatingPlayers;                                 // 0x0508(0x0010) ZeroConstructor, Transient
		class UOverlapTriggerComponent*                            AudioZoneTriggerComponent;                               // 0x0518(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LR4H[0xB0];                                  // 0x0520(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PostBountyAIPawnSpawnedAction
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPostBountyAIPawnSpawnedAction : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UApplyNameplateToBountyWaveSpawnedAction : public UPostBountyAIPawnSpawnedAction
	{
	public:
		class FText                                                AIName;                                                  // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_098E[0x20];                                  // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIFaunaSpawner
	 * Size -> 0x0148 (FullSize[0x0580] - InheritedSize[0x0438])
	 */
	class UAIFaunaSpawner : public UAISpawner
	{
	public:
		struct FAIFaunaSpawnerWave                                 FaunaWave;                                               // 0x0438(0x0110) Edit
		unsigned char                                              UnknownData_R090[0x10];                                  // 0x0548(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              FaunaLeader;                                             // 0x0558(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_804I[0x10];                                  // 0x0560(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      PlayersInSpawnArea;                                      // 0x0570(0x0010) ZeroConstructor

	public:
		void SpawnFaunaGroup();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIControllerBase
	 * Size -> 0x0158 (FullSize[0x0610] - InheritedSize[0x04B8])
	 */
	class AAthenaAIControllerBase : public AAIController
	{
	public:
		unsigned char                                              UnknownData_H0ID[0x158];                                 // 0x04B8(0x0158) MISSED OFFSET (PADDING)

	public:
		void SetNamedControllerParam(const class FName& ParamName, float Value);
		struct FWeightedProbabilityRangeOfRanges FindNamedWeightedRangesControllerParam(const class FName& ParamName);
		float FindNamedControllerParam(const class FName& ParamName);
		void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIController
	 * Size -> 0x02E0 (FullSize[0x08F0] - InheritedSize[0x0610])
	 */
	class AAthenaAIController : public AAthenaAIControllerBase
	{
	public:
		unsigned char                                              UnknownData_EIXP[0x24];                                  // 0x0610(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentTargetPerceivedNotVisibleAge;                     // 0x0634(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UOX1[0x40];                                  // 0x0638(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAISenseConfig_Sight*                                SightConfig;                                             // 0x0678(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UAISenseConfig_Hearing*                              HearingConfig;                                           // 0x0680(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UAISenseConfig_Damage*                               DamageSenseConfig;                                       // 0x0688(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_29DG[0x48];                                  // 0x0690(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAthenaAIControllerSenseSettingOverride>     AIStrategySenseSettingOverrides;                         // 0x06D8(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_KWDZ[0x1D8];                                 // 0x06E8(0x01D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CurrentNotSeenPerceivedActor;                            // 0x08C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              PendingSpawnTriggerActor;                                // 0x08C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C2EV[0x20];                                  // 0x08D0(0x0020) MISSED OFFSET (PADDING)

	public:
		void StopBehaviourLogic();
		void SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense);
		void RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor);
		void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
		void OnNewlySpawned();
		void OnFinishDespawn();
		bool IsActorPerceived(class AActor* TargetActor);
		class AActor* GetTargetActor();
		class UAthenaAIPerceptionComponent* GetAthenaAIPerceptionComponent();
		void GetAllSeenActors(TArray<class AActor*>* SeenActors);
		void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaFaunaAIController
	 * Size -> 0x0198 (FullSize[0x0A88] - InheritedSize[0x08F0])
	 */
	class AAthenaFaunaAIController : public AAthenaAIController
	{
	public:
		float                                                      MaxTimeBetweenThreatDetermination;                       // 0x08F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultControlRotationInterpSpeed;                       // 0x08F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIStategyControllerMovementMod>             StrategyControllerMovementMods;                          // 0x08F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      MinAgentHalfHeightPctOverride;                           // 0x0908(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QC67[0x4];                                   // 0x090C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFaunaAIContollerParamsDataAsset*                    FaunaDataAsset;                                          // 0x0910(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AActor*                                              CarrierActor;                                            // 0x0918(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_4FHL[0xA8];                                  // 0x0920(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              HighestDangerActor;                                      // 0x09C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MS9C[0x88];                                  // 0x09D0(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFaunaAIPlayerTracker*                               PlayerTracker;                                           // 0x0A58(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0VCO[0x28];                                  // 0x0A60(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation);
		void LeaderDestroyed(class AActor* Actor);
		class AActor* GetLeader();
		float GetCourage();
		class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.CatchFaunaConditionalStatTrigger
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCatchFaunaConditionalStatTrigger : public UConditionalStatsTriggerType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_LeaderFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_LeaderFromBlackboard : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_Threat
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Threat : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.Fauna
	 * Size -> 0x03B0 (FullSize[0x0BC0] - InheritedSize[0x0810])
	 */
	class AFauna : public AAICreatureCharacter
	{
	public:
		unsigned char                                              UnknownData_5LX1[0x8];                                   // 0x0810(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0818(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_L0BD[0x20];                                  // 0x0830(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UClass*                                              FaunaSpecies;                                            // 0x0850(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              FaunaBreed;                                              // 0x0858(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             HeadOffset;                                              // 0x0860(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             MountedScale;                                            // 0x086C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NearToSurfaceDistance;                                   // 0x0878(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartDrowningTimePercentage;                             // 0x087C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrowningDeathTimeMin;                                    // 0x0880(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrowningDeathTimeMax;                                    // 0x0884(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PercentageStarvedToChangeAnimation;                      // 0x0888(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOutTime;                                             // 0x088C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             HitImpactParticleSystem;                                 // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             DeathParticleSystem;                                     // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             PutInCrateParticleSystem;                                // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PutInCrateSoundCue;                                      // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         TookDamageSoundCue;                                      // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         AgitationStartedSoundCue;                                // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         AgitationStoppedSoundCue;                                // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         CalmStartedSoundCue;                                     // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         CalmStoppedSoundCue;                                     // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             BreathBubblesParticleSystem;                             // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BreathBubblesSocketName;                                 // 0x08E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                UnderwaterRTPCName;                                      // 0x08E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UForceFeedbackEffect*                                OnFeedingForceFeedbackEffect;                            // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMountableComponent*                                 MountableComponent;                                      // 0x08F8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHealthComponent*                                    HealthComponent;                                         // 0x0900(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDamageableComponent*                                DamageableComponent;                                     // 0x0908(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 AttackHitVolume;                                         // 0x0910(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFaunaAnimationData*                                 Animations;                                              // 0x0918(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDitherComponent*                                    DitherComponent;                                         // 0x0920(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULightWeightStatusEffectManagerComponent*            StatusEffectManagerComponent;                            // 0x0928(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAthenaAIControllerParamsDataAsset*                  AIControllerParamsWhenInCrate;                           // 0x0930(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPeriodicAINoiseEventComponent*                      PeriodicAINoiseEventComponent;                           // 0x0938(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             FaunaAgitationResponseDelegate;                          // 0x0940(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             FaunaDirectedAgitationResponseDelegate;                  // 0x0950(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		int32_t                                                    AgitationResponseChance;                                 // 0x0960(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AgitationResponseTestFrequencyMin;                       // 0x0964(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AgitationResponseTestFrequencyMax;                       // 0x0968(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumFailedAgitationResponseTests;                      // 0x096C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AgitationResponseVFXDelay;                               // 0x0970(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AgitationResponseRange;                                  // 0x0974(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             AgitationResponseParticleSystem;                         // 0x0978(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AgitationResponseRangeParticleSystemAngle;               // 0x0980(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionChannel                                          AgitationCollisionChannel;                               // 0x0984(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StopMovementWhenAgitated;                                // 0x0985(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G39J[0x2];                                   // 0x0986(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ApproximateSpitTravelTime;                               // 0x0988(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StopMovementWhenCalm;                                    // 0x098C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JA2C[0x3];                                   // 0x098D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurningSpringAcceleration;                               // 0x0990(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurningSpringMaxVelocity;                                // 0x0994(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnResetDelay;                                          // 0x0998(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PivotPointOffset;                                        // 0x099C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShouldTurn;                                              // 0x09A8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y1EV[0x7];                                   // 0x09A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFeedingComponent*                                   FeedingComponent;                                        // 0x09B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UFaunaMovementComponent*                             FaunaMovementComponent;                                  // 0x09B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeUntilDrowned;                                        // 0x09C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomAnimationSeed;                                     // 0x09C4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5F02[0xC];                                   // 0x09C8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Drowned;                                                 // 0x09D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J5Q2[0x2];                                   // 0x09D5(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFaunaCratedState                                          CratedState;                                             // 0x09D7(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		EFaunaInWaterState                                         InWaterState;                                            // 0x09D8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WQ7A[0x7];                                   // 0x09D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Crate;                                                   // 0x09E0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            BreathBubblesParticleSystemComponent;                    // 0x09E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DrowningDeathTime;                                       // 0x09F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPlayingStarvingAnim;                                   // 0x09F4(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       IsAgitated;                                              // 0x09F5(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       IsCalm;                                                  // 0x09F6(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_5KER[0x1];                                   // 0x09F7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetTurnAngle;                                         // 0x09F8(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QJSY[0x12C];                                 // 0x09FC(0x012C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVenomComponent*                                     VenomComponent;                                          // 0x0B28(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAthenaAICharacterPathFollowingComponent*            PathFollowingComponent;                                  // 0x0B30(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              CurrentShip;                                             // 0x0B38(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CV0D[0x80];                                  // 0x0B40(0x0080) MISSED OFFSET (PADDING)

	public:
		void TestingSetWaterState(EFaunaInWaterState NewInState);
		void OnRep_TargetTurnAngle();
		void OnRep_IsPlayingStarvingAnim();
		void OnRep_IsCalm();
		void OnRep_IsAgitated();
		void OnRep_InWaterState();
		void OnRep_CratedState(EFaunaCratedState PreviousCratedState);
		void Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate);
		void Multicast_JustBeenFedRPC(class AActor* FedBy);
		void Multicast_HightlightLeader(bool bIsLeader);
		void GenerateNewRandomAnimationSeed();
		void ActivateResponseRPC(float InTargetTurnAngle);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.FaunaAIPlayerTracker
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UFaunaAIPlayerTracker : public UAIPlayerTracker
	{
	public:
		unsigned char                                              UnknownData_FF6H[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.FaunaAnimationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFaunaAnimationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.FaunaMovementComponent
	 * Size -> 0x0000 (FullSize[0x0620] - InheritedSize[0x0620])
	 */
	class UFaunaMovementComponent : public UAICreatureCharacterMovementComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.MerchantCrateMetaGenerator
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMerchantCrateMetaGenerator : public UItemSnapshotMetaGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDebugSpawnActor
	 * Size -> 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
	 */
	class AAIDebugSpawnActor : public AActor
	{
	public:
		struct FAthenaAIDebugCostDisplay                           DebugCostDisplay;                                        // 0x03C8(0x0001) Edit, EditConst
		unsigned char                                              UnknownData_IMR9[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIDebugSpawnConfiguration>                  SpawnConfigList;                                         // 0x03D0(0x0010) Edit, ZeroConstructor
		int32_t                                                    Seed;                                                    // 0x03E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QPIW[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APawn*>                                       SpawnedAIList;                                           // 0x03E8(0x0010) ZeroConstructor

	public:
		void StartSpawning();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIDebugFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAIDebugFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<struct FAIEncounterSpecification> STATIC_SpawnMultipleAI(int32_t Count, class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh);
		void STATIC_SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, TAssetPtr<class UClass> AIItemSpawnComponent, class UClass* ClassId, TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo, const struct FVector& Pos, const struct FRotator& Rot, const class FName& Region, class AActor* TriggerActor, const class FName& NavMeshOverride, float Delay);
		struct FAIEncounterSpecification STATIC_SpawnAI(class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh);
		void STATIC_SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner);
		void STATIC_KillAllDebugAISpawners();
		int32_t STATIC_GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner);
		void STATIC_EnableMaximumSightSettings(class AAthenaAIController* AIController);
		void STATIC_EnableBehaviorTreeLogging(class UObject* WorldContext);
		void STATIC_DespawnAIPawn(class APawn* Pawn);
		void STATIC_CreateAISpawnerAtPosition(class UObject* WorldContext, class UAISpawner* SpawnerAsset, const struct FVector& Pos);
		void STATIC_CreateAISpawnerAtActor(class UObject* WorldContext, class UAISpawner* SpawnerAsset, class AActor* SpawnLocationActor);
		struct FVector STATIC_CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.DebugAISpawnerCreator
	 * Size -> 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
	 */
	class ADebugAISpawnerCreator : public AActor
	{
	public:
		class UAISpawner*                                          SpawnerTemplate;                                         // 0x03C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TriggerRadius;                                           // 0x03D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FWA9[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAISpawner*                                          Spawner;                                                 // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UAIProximityPlayerTracker*                           ProximityPlayerTracker;                                  // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class USimpleAIRegion*                                     Region;                                                  // 0x03E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_1BOT[0x30];                                  // 0x03F0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDioramaLocationSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIDioramaLocationSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDiorama
	 * Size -> 0x0228 (FullSize[0x05F0] - InheritedSize[0x03C8])
	 */
	class AAIDiorama : public AActor
	{
	public:
		unsigned char                                              UnknownData_5791[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SceneComponent;                                          // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASceneDialogueCoordinator*                           SpawnedDialogueCoordinator;                              // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneDialogueData*                                  DialogueData;                                            // 0x03E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIDioramaPawn>                              LinkedActors;                                            // 0x03E8(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_N2NR[0x1F8];                                 // 0x03F8(0x01F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDioramaCategory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIDioramaCategory : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDioramaController
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UAIDioramaController : public UObject
	{
	public:
		unsigned char                                              UnknownData_NBB1[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIDioramaDesc*                                      AIDioramaDesc;                                           // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneDialogueData*                                  DialogueData;                                            // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIDioramaPawn>                              SpawnedDioramaPawns;                                     // 0x0040(0x0010) ZeroConstructor
		class AAIDiorama*                                          AIDiorama;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAISpawner*                                          Spawner;                                                 // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IDUC[0x48];                                  // 0x0060(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDioramaDesc
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIDioramaDesc : public UDataAsset
	{
	public:
		TArray<struct FAIDioramaRoleDesc>                          RoleList;                                                // 0x0028(0x0010) Edit, ZeroConstructor
		class USceneDialogueData*                                  DialogueData;                                            // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDioramaLocationSourceComponent
	 * Size -> 0x0090 (FullSize[0x0370] - InheritedSize[0x02E0])
	 */
	class UAIDioramaLocationSourceComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_LV8L[0x10];                                  // 0x02E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIDioramaLocationSourceComponentData>       DioramaRelativeLocations;                                // 0x02F0(0x0010) Edit, ZeroConstructor
		float                                                      DialogueTriggerRadius;                                   // 0x0300(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DialogueSubtitleBuffer;                                  // 0x0304(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AISenseRadiusForDebugDisplay;                            // 0x0308(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2BR8[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      Categories;                                              // 0x0310(0x0010) Edit, ZeroConstructor, UObjectWrapper
		class FName                                                FeatureToggle;                                           // 0x0320(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              DebugTriggerRadiusColor;                                 // 0x0328(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              DebugSubtitleRadiusColor;                                // 0x032C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              AISenseRadiusColor;                                      // 0x0330(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A2Z4[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    DialogueTriggerRadiusSphere;                             // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    DialogueSubtitleRadiusSphere;                            // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    AISenseRadiusSphere;                                     // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IT9L[0x20];                                  // 0x0350(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDioramaServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIDioramaServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDioramaService
	 * Size -> 0x0068 (FullSize[0x0430] - InheritedSize[0x03C8])
	 */
	class AAIDioramaService : public AActor
	{
	public:
		unsigned char                                              UnknownData_JKYQ[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, struct FDioramaCategoryEntries>        AllDioramasLocationsByCategory;                          // 0x03D0(0x0050) ZeroConstructor
		unsigned char                                              UnknownData_3GNP[0x10];                                  // 0x0420(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.DebugDioramaCreator
	 * Size -> 0x0018 (FullSize[0x0438] - InheritedSize[0x0420])
	 */
	class ADebugDioramaCreator : public ADebugAISpawnerCreator
	{
	public:
		class UAIDioramaDesc*                                      AIDioramaDesc;                                           // 0x0420(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIDioramaLocationSourceComponent*                   Location;                                                // 0x0428(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIDioramaController*                                AIDioramaController;                                     // 0x0430(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.InDioramaAIStrategyId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInDioramaAIStrategyId : public UAIStrategyId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AINameplateComponent
	 * Size -> 0x0168 (FullSize[0x0478] - InheritedSize[0x0310])
	 */
	class UAINameplateComponent : public UNameplateComponent
	{
	public:
		unsigned char                                              UnknownData_0YQS[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VisibleFromWorldDistance;                                // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VisibleUntilWorldDistance;                               // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VisibleAfterDeathDuration;                               // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2059[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0328(0x0018) ELEMENT_SIZE_MISMATCH Net, RepNotify
		unsigned char                                              UnknownData_MMH0[0x20];                                  // 0x0340(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                DisplayName;                                             // 0x0360(0x0018) ELEMENT_SIZE_MISMATCH Net, RepNotify
		unsigned char                                              UnknownData_WVLA[0x20];                                  // 0x0378(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              DisplayNameAsString;                                     // 0x0398(0x0010) Net, ZeroConstructor, RepNotify, HasGetValueTypeHash
		class FString                                              DebugDisplayText;                                        // 0x03A8(0x0010) Net, ZeroConstructor, RepNotify, HasGetValueTypeHash
		bool                                                       VisibilityDisabled;                                      // 0x03B8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JPH5[0xBF];                                  // 0x03B9(0x00BF) Fix size for supers

	public:
		void OnRep_Title();
		void OnRep_DisplayNameAsString();
		void OnRep_DisplayName();
		void OnRep_DebugDisplayText();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PetNameplateComponent
	 * Size -> 0x0028 (FullSize[0x04A0] - InheritedSize[0x0478])
	 */
	class UPetNameplateComponent : public UAINameplateComponent
	{
	public:
		class FString                                              DefaultPetName;                                          // 0x0478(0x0010) Net, ZeroConstructor, Transient, HasGetValueTypeHash
		unsigned char                                              UnknownData_43K1[0x18];                                  // 0x0488(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.Pet
	 * Size -> 0x0460 (FullSize[0x0C70] - InheritedSize[0x0810])
	 */
	class APet : public AAICreatureCharacter
	{
	public:
		unsigned char                                              UnknownData_6AJR[0xA0];                                  // 0x0810(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPetWieldableReactMappingsDataAsset*                 WieldableReactMappingsAsset;                             // 0x08B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxVelocityForLocomotionAnimation;                       // 0x08B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanFly;                                                  // 0x08BC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AK6A[0x3];                                   // 0x08BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPetFlyingStrategyProperties>                FlyingStrategyProperties;                                // 0x08C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      FlyingLandTime;                                          // 0x08D0(0x0004) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C6PY[0x4];                                   // 0x08D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         FlyingLandCurve;                                         // 0x08D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlyingTakeOffTime;                                       // 0x08E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_68TF[0x4];                                   // 0x08E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         FlyingTakeOffCurve;                                      // 0x08E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         MidFlightAdjustmentTimerRange;                           // 0x08F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         MidFlightAdjustmentCurve;                                // 0x0900(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         MidFlightTimeToDistanceAdjustmentCurve;                  // 0x0908(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FiredFromActorCollision;                                 // 0x0910(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         FiredFromActorSFX;                                       // 0x0918(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetDitherComponent*                                 DitherComponent;                                         // 0x0920(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumDamageForHealthReact;                             // 0x0928(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDistForWaterBucketToClean;                            // 0x092C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumDurationUntilPetCanDespawnConcealed;              // 0x0930(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultNamePlateHeight;                                  // 0x0934(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlternateNamePlateHeight;                                // 0x0938(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LOYC[0x4];                                   // 0x093C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EAthenaAnimationPetRoamingState>                    StatesToUseAlternateNamePlatePos;                        // 0x0940(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FFloatRange                                         PetTimeSpentSad;                                         // 0x0950(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EDebugPetStateDescriptor                                   DebugStateDescriptor;                                    // 0x0960(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SKTL[0x7];                                   // 0x0961(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPetNameplateComponent*                              AINameplateComponent;                                    // 0x0968(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UFeedingComponent*                                   FeedingComponent;                                        // 0x0970(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UStarvingComponent*                                  StarvingComponent;                                       // 0x0978(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UCleanlinessComponent*                               CleanlinessComponent;                                    // 0x0980(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UCannonSquashComponent*                              CannonSquashComponent;                                   // 0x0988(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FPetMovementRequest                                 ReplicatedMovementRequest;                               // 0x0990(0x000C) Net, RepNotify, Protected
		float                                                      TargetMeshRoll;                                          // 0x099C(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_KAMK[0x10];                                  // 0x09A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultShipTurnRateModifier;                             // 0x09B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_T92Y[0x4];                                   // 0x09B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPetTurnRateModifier>                        TurnRateModifierList;                                    // 0x09B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected
		TArray<EAthenaAnimationPetRoamingState>                    LocomotingMovementStates;                                // 0x09C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected
		TArray<EAthenaAnimationPetRoamingState>                    RequestIdleOrMovementValidMovementStates;                // 0x09D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected
		float                                                      MaxRollAngle;                                            // 0x09E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      DelayForDisablingMovementOnIdle;                         // 0x09EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      IslandDustRatePerSecond;                                 // 0x09F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FGuid                                               CrewId;                                                  // 0x09F4(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		bool                                                       InHangout;                                               // 0x0A04(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected
		bool                                                       PerchedInHangout;                                        // 0x0A05(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected
		bool                                                       ResetRollAndZOffset;                                     // 0x0A06(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected
		bool                                                       ShouldIgnoreTooltipDisplayOffset;                        // 0x0A07(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_LLRP[0x8];                                   // 0x0A08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPetTurnToFaceData                                  PetTurnToFaceData;                                       // 0x0A10(0x0020) Net, RepNotify, Protected
		float                                                      MaximumSubmergedWaterDepthBeforeDespawn;                 // 0x0A30(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_0G2R[0x24];                                  // 0x0A34(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPartsRetrievalComponent*                          AIPartsRetrievalComponent;                               // 0x0A58(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetPartCustomisationComponent*                      PetPartCustomisationComponent;                           // 0x0A60(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULightWeightStatusEffectManagerComponent*            LightWeightStatusEffectManagerComponent;                 // 0x0A68(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetTelemetryComponent*                              TelemetryComponent;                                      // 0x0A70(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetSicknessComponent*                               SicknessComponent;                                       // 0x0A78(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWaterExposureComponent*                             WaterExposureComponent;                                  // 0x0A80(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimationDataStoreComponent*                        AnimationDataStoreComponent;                             // 0x0A88(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              SpawnedForShip;                                          // 0x0A90(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              PetOwner;                                                // 0x0A98(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class AItemInfo*                                           PetInfo;                                                 // 0x0AA0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0JKZ[0x8];                                   // 0x0AA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDocker                                             Docker;                                                  // 0x0AB0(0x0050) Edit, DisableEditOnInstance
		struct FStartPickupObjectActionRuleParams                  StartPickupObjectActionRuleParams;                       // 0x0B00(0x0010) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_LVTP[0x10];                                  // 0x0B10(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CurrentlyPlayingParticleSystem;                          // 0x0B20(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              LandingStrategy;                                         // 0x0B28(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              PursuitStrategy;                                         // 0x0B30(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      DefaultRollLerpTime;                                     // 0x0B38(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LandingRollLerpTime;                                     // 0x0B3C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingDismissed;                                        // 0x0B40(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9TIA[0xEB];                                  // 0x0B41(0x00EB) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsInDisabledPetPerchHangout;                             // 0x0C2C(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       PetIsSad;                                                // 0x0C2D(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_6QQA[0x42];                                  // 0x0C2E(0x0042) MISSED OFFSET (PADDING)

	public:
		void SetExitTakeOffFlag(bool InExitTakeOffFlag);
		void OnShipDestroyed(class AActor* InShip);
		void OnRep_RollRequest();
		void OnRep_ResetRollAndZOffset();
		void OnRep_PetTurnToFaceData();
		void OnRep_PetOwner();
		void OnRep_PetIsSad();
		void OnRep_PerchedInHangout();
		void OnRep_MovementRequest();
		void OnRep_InHangout();
		void OnOwnerDestroyed(class AActor* InOwner);
		void Multicast_DitherOut();
		void Multicast_DitherIn();
		float GetFloorMeshOffsetZ();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetRoamingPetAnimationState
	 * Size -> 0x00A8 (FullSize[0x0130] - InheritedSize[0x0088])
	 */
	class UBTTask_SetRoamingPetAnimationState : public UBTTask_BlackboardBase
	{
	public:
		struct FWeightedPetAnimationSelector                       WeightedAnimationSelection;                              // 0x0088(0x00A0) Edit
		unsigned char                                              UnknownData_4ZR7[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_PositionFromBlackboard
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_PositionFromBlackboard : public UEnvQueryContext
	{
	public:
		unsigned char                                              UnknownData_Z69X[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PetDitherComponent
	 * Size -> 0x0070 (FullSize[0x0230] - InheritedSize[0x01C0])
	 */
	class UPetDitherComponent : public UDitherComponent
	{
	public:
		unsigned char                                              UnknownData_VSSL[0x70];                                  // 0x01C0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PetPartCustomisationComponent
	 * Size -> 0x00B8 (FullSize[0x0180] - InheritedSize[0x00C8])
	 */
	class UPetPartCustomisationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2FDA[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AnimationDataStoreId;                                    // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPetPartSizeMappingsDataAsset*                       SizeMappingsAsset;                                       // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPetLoadedMaterial>                          CurrentlyLoadedMaterials;                                // 0x00E8(0x0010) ZeroConstructor, Transient
		struct FStringAssetReference                               DefaultMeshRef;                                          // 0x00F8(0x0010) ZeroConstructor, Transient
		struct FStringAssetReference                               HighResMeshRef;                                          // 0x0108(0x0010) ZeroConstructor, Transient
		class USkeletalMesh*                                       CurrentlyLoadedMesh;                                     // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPetSize                                                   CurrentPetSize;                                          // 0x0120(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_37XK[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPetCustomisationOverrideDataAsset*                  CurrentlyLoadedOverrideAsset;                            // 0x0128(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XZVN[0x50];                                  // 0x0130(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PetPartSizeMappingsDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UPetPartSizeMappingsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FPetPartSizeMapping>                         Mappings;                                                // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FFloatRange                                         ConcealedScaleBounds;                                    // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PetSicknessComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UPetSicknessComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_ILWS[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPartsDesc
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAIPartsDesc : public UDataAsset
	{
	public:
		struct FAIPartId                                           AIPartId;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PetsPartsDesc
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UPetsPartsDesc : public UAIPartsDesc
	{
	public:
		struct FStringAssetReference                               Mesh;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FStringAssetReference                               HighResMesh;                                             // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FPetMaterialEntry>                           PetMaterials;                                            // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		EPetSize                                                   PetSize;                                                 // 0x0060(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U3MY[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPetCustomisationOverrideDataAsset*                  PetOverrideAsset;                                        // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PetTelemetryComponent
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	class UPetTelemetryComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_OT11[0x38];                                  // 0x00C8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PetWieldableReactMappingsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPetWieldableReactMappingsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FPetWieldableReactMapping>                   WieldableReactMappings;                                  // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PreviewPet
	 * Size -> 0x00E8 (FullSize[0x04B0] - InheritedSize[0x03C8])
	 */
	class APreviewPet : public AActor
	{
	public:
		unsigned char                                              UnknownData_LP62[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAthenaAnimationPetRoamingState                            InitialAnimState;                                        // 0x03D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_GLJ1[0x3];                                   // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIPartId                                           InitialPartIdToLoad;                                     // 0x03D4(0x0008) Edit, Protected
		unsigned char                                              UnknownData_LFK1[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPartsCategory*                                    PreviewPetPartsCategory;                                 // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class USkeletalMeshComponent*                              PreviewPetMesh;                                          // 0x03E8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FPetAnimationDataPreview                            PreviewPetAnimationData;                                 // 0x03F0(0x0010) Edit, DisableEditOnInstance, Protected
		class UAIPartsRetrievalComponent*                          AIPartsRetrievalComponent;                               // 0x0400(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPetPartCustomisationComponent*                      PetPartCustomisationComponent;                           // 0x0408(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XZ8D[0xA0];                                  // 0x0410(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaSwimmingAIController
	 * Size -> 0x00E0 (FullSize[0x09D0] - InheritedSize[0x08F0])
	 */
	class AAthenaSwimmingAIController : public AAthenaAIController
	{
	public:
		class USwimmingPathFollowingComponent*                     SwimmingPathFollowingComponent;                          // 0x08F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IgnoreTargetsOutOfWater;                                 // 0x08F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V8DJ[0x7];                                   // 0x08F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DistOfAttackerVsChanceToPursue;                          // 0x0900(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        TimersToZeroIfStartingRevengeAttack;                     // 0x0908(0x0010) Edit, ZeroConstructor
		class FName                                                DespawnRequiredBlackboardKey;                            // 0x0918(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DespawnRequiredReasonBlackboardKey;                      // 0x0920(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PathingFailedWeight;                                     // 0x0928(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PathingFailedThresholdToDespawn;                         // 0x092C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MCXS[0xA0];                                  // 0x0930(0x00A0) MISSED OFFSET (PADDING)

	public:
		void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* InControllerParametersAsset, class APawn* InPawn);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_NearSurfaceOfWater
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_NearSurfaceOfWater : public UBTDecorator
	{
	public:
		float                                                      DistanceFromSurface;                                     // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReverseLogic;                                            // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WKJ3[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_SetFloatToTheSurfaceWhileInBranch
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTService_SetFloatToTheSurfaceWhileInBranch : public UBTService
	{
	public:
		bool                                                       FloatToTheSurfaceWhileInBranch;                          // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D1TJ[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetFloatToTheSurface
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_SetFloatToTheSurface : public UBTTaskNode
	{
	public:
		bool                                                       ShouldFloatToTheSurface;                                 // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_23YQ[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SwimmingCreatureMovementAnimationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USwimmingCreatureMovementAnimationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SwimmingPathFollowingComponent
	 * Size -> 0x0128 (FullSize[0x01F0] - InheritedSize[0x00C8])
	 */
	class USwimmingPathFollowingComponent : public UActorComponent
	{
	public:
		float                                                      DirectSwimmingDotToTarget;                               // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArcToTargetDotToTarget;                                  // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTargetPitchFactor;                                    // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinPosDeltaSqToRepathToMovingTarget;                     // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinPosDeltaSqToInvalidateFixedLocation;                  // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchBezierControlPointsLengthFactor;                    // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeMovingAwayFromTargetPosToFlagFailure;                // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LineOfSightCollisionProfile;                             // 0x00E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LineOfSightSphereCastRadius;                             // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LineOfSightCheckInterval;                                // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FirstLoSTriggerTimeInNewPath;                            // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FirstLoSTriggerTimeInRePath;                             // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DrawDebugOnServer;                                       // 0x00FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EERD[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ECollisionChannel>                                  CollisionTypesToDoPathUpdate;                            // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class USwimmingCreatureMovementComponent*                  MovementComponent;                                       // 0x0110(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AAthenaSwimmingAIController*                         SwimmingAIController;                                    // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		EArcFollowingMode                                          ArcFollowingMode;                                        // 0x0120(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_VM3M[0x57];                                  // 0x0121(0x0057) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TargetActor;                                             // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_S6J1[0x70];                                  // 0x0180(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SwimTo
	 * Size -> 0x0078 (FullSize[0x0100] - InheritedSize[0x0088])
	 */
	class UBTTask_SwimTo : public UBTTask_BlackboardBase
	{
	public:
		bool                                                       WantsToReportPathFailure;                                // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DXCZ[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              PathFailureCounter;                                      // 0x0090(0x0028) Edit
		float                                                      AcceptableRadius;                                        // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESwimmingGoalCheckMode                                     GoalCheckMode;                                           // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESwimmingArcMode                                           ArcMode;                                                 // 0x00BD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EArcToTargetDirection                                      ArcToTargetDirection;                                    // 0x00BE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETaskReaction                                              Swim3DCrestingReaction;                                  // 0x00BF(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSpatialOffset                                      OffsetFromTargetActor;                                   // 0x00C0(0x0008) Edit
		ESwimmingSyncMode                                          SwimSyncMode;                                            // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrackTargetActor;                                        // 0x00C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WKXX[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              TrackedTargetActorKey;                                   // 0x00D0(0x0028) Edit
		float                                                      TimeToSlowDownAndStop;                                   // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESwimmingLineOfSightTest                                   LineOfSightTestMode;                                     // 0x00FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LMA4[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SwimTurnOnTheSpot
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UBTTask_SwimTurnOnTheSpot : public UBTTask_BlackboardBase
	{
	public:
		float                                                      MaxTurnSpringAccel;                                      // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeUntilMaxTurnSpringAccel;                             // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngleDeltaToAcceptFinalRotation;                         // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeout;                                                 // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIControllerParamsDataAsset
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAthenaAIControllerParamsDataAsset : public UDataAsset
	{
	public:
		struct FAthenaAIControllerSenseSettings                    DefaultSenseSettings;                                    // 0x0028(0x0014) Edit
		float                                                      AutoSuccessRangeFromLastSeenLocation;                    // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultPerceivedNotVisibleAge;                           // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanTargetNotSeenPerceivedActors;                         // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideTeamID;                                          // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EAthenaAITeam                                              TeamID;                                                  // 0x0046(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WVFK[0x1];                                   // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetSwitchScoreTolerance;                              // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P7ER[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              TargetLoadWeightingBias;                                 // 0x0050(0x0010) Edit, ZeroConstructor
		float                                                      DistanceToStartTargetPickingDecrease;                    // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetPickingDistScoreAtMaxSightRange;                   // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VisionAngleToStartTargetPickingDecrease;                 // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetPickingFacingScoreAtMaxPeripheralVisionAngle;      // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseDamageAsFactorInTargetScore;                          // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J7I1[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAthenaAIControllerDamageTargetScoreFromPerceivedTarget DamageTargetScores;                                      // 0x0074(0x0014) Edit
		TArray<class UAthenaAIControllerSharedParamValuesDataAsset*> SharedParamValues;                                       // 0x0088(0x0010) Edit, ZeroConstructor
		bool                                                       IndividualOverrideMeshScale;                             // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WTL7[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IndividualMeshScale;                                     // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAthenaAIControllerHealthCustomisation              IndividualHealthCustomisationValues;                     // 0x00A0(0x000C) Edit
		unsigned char                                              UnknownData_RJOG[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAthenaAIControllerParamValue>               IndividualInitialBlackboardValues;                       // 0x00B0(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAIControllerParamValue>               IndividualNamedControllerParams;                         // 0x00C0(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAIControllerWeightedRangesParamValue> IndividualNamedWeightedRangesControllerParams;           // 0x00D0(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAIControllerSenseSettingOverride>     IndividualAIStrategySenseSettingOverrides;               // 0x00E0(0x0010) Edit, ZeroConstructor
		bool                                                       IndividualOverrideCurrentTargetPerceivedNotVisibleAge;   // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UGZK[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IndividualCurrentTargetPerceivedNotVisibleAge;           // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FeatureName;                                             // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TaleQuestGetTinySharkExperienceParticipatingCrews
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestGetTinySharkExperienceParticipatingCrews : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_XNR8[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TaleQuestGetTinySharkExperienceParticipatingCrewsDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UTaleQuestGetTinySharkExperienceParticipatingCrewsDesc : public UTaleQuestStepDesc
	{
	public:
		class ATinySharkExperience*                                TinySharkExperience;                                     // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableGuidArray                             ParticipatingCrews;                                      // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TaleQuestGetTinySharkPawn
	 * Size -> 0x0078 (FullSize[0x0108] - InheritedSize[0x0090])
	 */
	class UTaleQuestGetTinySharkPawn : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_ZZIS[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_EZRP[0x70];                                  // 0x0098(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TaleQuestGetTinySharkPawnDesc
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UTaleQuestGetTinySharkPawnDesc : public UTaleQuestStepDesc
	{
	public:
		class ATinySharkExperience*                                TinySharkExperience;                                     // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuestVariableSharkPawn                             TinySharkPawn;                                           // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TaleQuestStartTinySharkExperienceStep
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTaleQuestStartTinySharkExperienceStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_NPER[0x8];                                   // 0x0090(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TaleQuestTinySharkService
	 * Size -> 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
	 */
	class UTaleQuestTinySharkService : public UTaleQuestService
	{
	public:
		TArray<class ATinySharkExperience*>                        ActiveExperiences;                                       // 0x0060(0x0010) ZeroConstructor, Transient
		TMap<class ATinySharkExperience*, struct FExperienceTracker> ExperienceTrackers;                                      // 0x0070(0x0050) ZeroConstructor, Transient
		unsigned char                                              UnknownData_BFES[0x18];                                  // 0x00C0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TaleQuestTinySharkServiceDesc
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaleQuestTinySharkServiceDesc : public UTaleQuestServiceDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TaleQuestStartTinySharkExperienceStepDesc
	 * Size -> 0x0120 (FullSize[0x01A0] - InheritedSize[0x0080])
	 */
	class UTaleQuestStartTinySharkExperienceStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0080(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PartIndex;                                               // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTinySharkParams                                    TinySharkParams;                                         // 0x0090(0x00B8) Edit
		TAssetPtr<class UAthenaAIControllerParamsDataAsset>        ControllerParams;                                        // 0x0148(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_PL8L[0x4];                                   // 0x0164(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class AShip*                                               TargetShip;                                              // 0x0168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTaleQuestTinySharkExperienceTracker*                ExperienceTracker;                                       // 0x0170(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       FireTinySharkVariantDefeatedStats;                       // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J3DF[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestVariableTinySharkExperience                   TinySharkExperience;                                     // 0x0180(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TaleQuestTinySharkExperienceTracker
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UTaleQuestTinySharkExperienceTracker : public UObject
	{
	public:
		unsigned char                                              UnknownData_AVO4[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpdateFrequency;                                         // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0XSX[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TaleQuestShroudedDeepSGExperienceTracker
	 * Size -> 0x00C0 (FullSize[0x0130] - InheritedSize[0x0070])
	 */
	class UTaleQuestShroudedDeepSGExperienceTracker : public UTaleQuestTinySharkExperienceTracker
	{
	public:
		struct FVector2D                                           TrackingLocation;                                        // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      InnerSafezoneRadius;                                     // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetWeightSloop;                                       // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetWeightBrig;                                        // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetWeightGaleon;                                      // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExperienceRadiusConsiderationRatio;                      // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShipInsideExperiencePreference;                          // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShipNearExperiencePreference;                            // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShipNearKillerWhalePreference;                           // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   ForceRetargetFrequency;                                  // 0x0098(0x0030) Edit
		TAssetPtr<class AActor>                                    ExperienceCenterActor;                                   // 0x00C8(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_NPFS[0x4];                                   // 0x00E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_VPUK[0x48];                                  // 0x00E8(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TinySharkTelemetryComponent
	 * Size -> 0x0110 (FullSize[0x01D8] - InheritedSize[0x00C8])
	 */
	class UTinySharkTelemetryComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_QBAU[0x110];                                 // 0x00C8(0x0110) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TinySharkExperience
	 * Size -> 0x0418 (FullSize[0x07E0] - InheritedSize[0x03C8])
	 */
	class ATinySharkExperience : public AActor
	{
	public:
		unsigned char                                              UnknownData_HLJ5[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RelevancyDistance;                                       // 0x03D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TrackingMovementCheckInterval;                           // 0x03DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           TrackingMovementValidQuery;                              // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldBlockMigrationForAllAttackingCrewsFromAnyDistance; // 0x03E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1SR7[0xA7];                                  // 0x03E9(0x00A7) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIOnDemandSpawner*                                  TinySharkSpawner;                                        // 0x0490(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class ASharkPawn*                                          TinySharkPawn;                                           // 0x0498(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash
		class FName                                                HealthRTPC;                                              // 0x04A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_9XZA[0x8];                                   // 0x04A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTinySharkParams                                    Params;                                                  // 0x04B0(0x00B8) Transient, Protected
		class UTinySharkTelemetryComponent*                        TinySharkTelemetryComponent;                             // 0x0568(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AShip*                                               TrackedShip;                                             // 0x0570(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_5GR6[0x80];                                  // 0x0578(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEncounterParams                                    SightingEncounterParams;                                 // 0x05F8(0x000C) Edit, DisableEditOnInstance, Protected
		struct FEncounterParams                                    CloseEncounterParams;                                    // 0x0604(0x000C) Edit, DisableEditOnInstance, Protected
		unsigned char                                              UnknownData_IKQ9[0x190];                                 // 0x0610(0x0190) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UAthenaAIControllerParamsDataAsset>        CachedControllerParamsAsset;                             // 0x07A0(0x001C) ELEMENT_SIZE_MISMATCH UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_I1RW[0x4];                                   // 0x07BC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_8DT2[0x20];                                  // 0x07C0(0x0020) MISSED OFFSET (PADDING)

	public:
		void TinySharkPawnDestroyed(class AActor* InDestroyedActor);
		void OnRep_TinySharkPawn(class ASharkPawn* LastTinySharkPawn);
		class AShip* GetTrackedShip();
		ETinySharkState GetCurrentState();
		ETinySharkActiveState GetActiveState();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TinySharkParamsDataAsset
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UTinySharkParamsDataAsset : public UDataAsset
	{
	public:
		struct FTinySharkParams                                    Params;                                                  // 0x0028(0x00B8) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TinySharkServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTinySharkServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TinySharkService
	 * Size -> 0x01C8 (FullSize[0x0590] - InheritedSize[0x03C8])
	 */
	class ATinySharkService : public AActor
	{
	public:
		unsigned char                                              UnknownData_6320[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTinySharkServiceParamsDataAsset*                    TinySharkServiceParams;                                  // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_49UL[0x170];                                 // 0x03E0(0x0170) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ATinySharkExperience*>                        TinySharkExperiences;                                    // 0x0550(0x0010) Net, ZeroConstructor
		TArray<class ATinySharkExperience*>                        ExternallyManagedTinySharkExperiences;                   // 0x0560(0x0010) Net, ZeroConstructor
		unsigned char                                              UnknownData_DKC5[0x20];                                  // 0x0570(0x0020) MISSED OFFSET (PADDING)

	public:
		bool RequestTinySharkWithShip(class AShip* InTrackedShip, int32_t OverrideControllerParamIndex, int32_t PartIndex);
		bool RequestTinySharkWithLocation(const struct FVector& SpawnLocation, int32_t PartIndex);
		void DismissAllTinySharks();
		bool CanSpawnTinySharkExperience();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TinySharkServiceParamsDataAsset
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UTinySharkServiceParamsDataAsset : public UDataAsset
	{
	public:
		struct FTinySharkServiceParams                             Params;                                                  // 0x0028(0x0028) Edit, DisableEditOnInstance
		int32_t                                                    MaxNumTinySharkExperiences;                              // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_77EY[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.MeshMemoryConstraintsAIPartsDesc
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UMeshMemoryConstraintsAIPartsDesc : public UAIPartsDesc
	{
	public:
		unsigned char                                              UnknownData_41RZ[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringAssetReference                               Mesh;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		int64_t                                                    CachedMeshResourceSize;                                  // 0x0048(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              MeshFallbackCategory;                                    // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              BudgetToCountMemoryAgainstIfNoFallback;                  // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x0060(0x0010) ZeroConstructor
		TArray<struct FStringAssetReference>                       FallbackOverrideMaterials;                               // 0x0070(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.TeleportAIAbility
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UTeleportAIAbility : public UAthenaAIAbility
	{
	public:
		unsigned char                                              UnknownData_002V[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIItemParameterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIItemParameterInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UAthenaAIControllerSharedParamValuesDataAsset : public UDataAsset
	{
	public:
		bool                                                       OverrideMeshScale;                                       // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PHQ0[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MeshScale;                                               // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideCurrentTargetPerceivedNotVisibleAge;             // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C7O7[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentTargetPerceivedNotVisibleAge;                     // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAthenaAIControllerSenseSettingOverride>     AIStrategySenseSettingOverrides;                         // 0x0038(0x0010) Edit, ZeroConstructor
		struct FAthenaAIControllerHealthCustomisation              HealthCustomisationValues;                               // 0x0048(0x000C) Edit
		unsigned char                                              UnknownData_NBIC[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAthenaAIControllerParamValue>               InitialBlackboardValues;                                 // 0x0058(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAIControllerParamValue>               NamedControllerParams;                                   // 0x0068(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAIControllerWeightedRangesParamValue> NamedWeightedRangesControllerParams;                     // 0x0078(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset
	 * Size -> 0x00D0 (FullSize[0x0158] - InheritedSize[0x0088])
	 */
	class UAthenaAICharacterControllerSharedParamValuesDataAsset : public UAthenaAIControllerSharedParamValuesDataAsset
	{
	public:
		bool                                                       OverrideUseRVOAvoidance;                                 // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseRVOAvoidance;                                         // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverridePrioritiseInteractablesBeforeEnemies;            // 0x008A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       PrioritiseInteractablesBeforeEnemies;                    // 0x008B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JSF9[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DistanceInMToCannonShotHitChanceCurve;                   // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIStrategyMovementProperties>               AIStrategyMovementProperties;                            // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> ItemCategoryAIStrategyMovementPropertiesOverrides;       // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FAthenaAICharacterCannonTargetingParams             CannonTargetingParams;                                   // 0x00B8(0x0010) Edit
		TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> WieldedItemProjectileEffectivenessProperties;            // 0x00C8(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> WieldedItemOverrideNamedControllerParams;                // 0x00D8(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAIItemParamValue>                     NamedItemParams;                                         // 0x00E8(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                          // 0x00F8(0x0010) Edit, ZeroConstructor
		TArray<class UAthenaAIAbilityParams*>                      AIAbilityParams;                                         // 0x0108(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
		TArray<struct FAthenaAIEngageEnemyData>                    NonItemEngageOptions;                                    // 0x0118(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               AnimationDataOverrideAsset;                              // 0x0128(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               CustomAnimationAsset;                                    // 0x0138(0x0010) Edit, ZeroConstructor
		bool                                                       OverrideNoInitialItem;                                   // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       NoInitialItem;                                           // 0x0149(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideBeginFleeing;                                    // 0x014A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BeginFleeing;                                            // 0x014B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_81CD[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQuery*                                           FleeingEQS;                                              // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAICharacterControllerParamsDataAsset
	 * Size -> 0x00F8 (FullSize[0x01F8] - InheritedSize[0x0100])
	 */
	class UAthenaAICharacterControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
	{
	public:
		bool                                                       IndividualOverrideUseRVOAvoidance;                       // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IndividualUseRVOAvoidance;                               // 0x0101(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IndividualOverridePrioritiseInteractablesBeforeEnemies;  // 0x0102(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IndividualPrioritiseInteractablesBeforeEnemies;          // 0x0103(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OB9S[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         IndividualDistanceInMToCannonShotHitChanceCurve;         // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIStrategyMovementProperties>               IndividualAIStrategyMovementProperties;                  // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> IndividualItemCategoryAIStrategyMovementPropertiesOverrides; // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FAthenaAICharacterCannonTargetingParams             IndividualCannonTargetingParams;                         // 0x0130(0x0010) Edit
		TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> IndividualWieldedItemProjectileEffectivenessProperties;  // 0x0140(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> IndividualWieldedItemOverrideNamedControllerParams;      // 0x0150(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAIItemParamValue>                     IndividualNamedItemParams;                               // 0x0160(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> IndividualSpawnItemDescForItemCategories;                // 0x0170(0x0010) Edit, ZeroConstructor
		bool                                                       UseDamageBasedAbilityStages;                             // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GUZ4[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              HealthStages;                                            // 0x0188(0x0010) Edit, ZeroConstructor
		TArray<struct FAthenaAIAbilityDamageStage>                 IndividualDamageBasedAIAbilityStages;                    // 0x0198(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		TArray<class UAthenaAIAbilityParams*>                      IndividualAIAbilityParams;                               // 0x01A8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
		TArray<struct FAthenaAIEngageEnemyData>                    IndividualNonItemEngageOptions;                          // 0x01B8(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               IndividualAnimationDataOverrideAsset;                    // 0x01C8(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               IndividualCustomAnimationAsset;                          // 0x01D8(0x0010) Edit, ZeroConstructor
		bool                                                       IndividualOverrideNoInitialItem;                         // 0x01E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IndividualNoInitialItem;                                 // 0x01E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IndividualOverrideBeginFleeing;                          // 0x01EA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IndividualBeginFleeing;                                  // 0x01EB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EXZ7[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQuery*                                           IndividualFleeingEQS;                                    // 0x01F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIAmmoDataAsset
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UAthenaAIAmmoDataAsset : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_I3SS[0x90];                                  // 0x0028(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAthenaAICharacterControllerWeightedAmmoType> AmmoWeights;                                             // 0x00B8(0x0010) Edit, ZeroConstructor
		class FName                                                FeatureName;                                             // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIAmmoRankProgression
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIAmmoRankProgression : public UDataAsset
	{
	public:
		TArray<struct FAIAmmoRankMapping>                          RankMappings;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    NumberOfRanks;                                           // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CMV5[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIAmmoProgressionTypeList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIAmmoProgressionTypeList : public UDataAsset
	{
	public:
		TArray<class UAIAmmoRankProgression*>                      AllProgressions;                                         // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIAmmoTypeList
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIAmmoTypeList : public UDataAsset
	{
	public:
		TArray<class UAthenaAIAmmoDataAsset*>                      AllAmmo;                                                 // 0x0028(0x0010) Edit, ZeroConstructor
		class UAthenaAIAmmoDataAsset*                              DefaultAmmo;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIAnimationStateInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIAnimationStateInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIChargeUpInterruptedStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAIChargeUpInterruptedStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIClassId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIClassId : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPartsCategory
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAIPartsCategory : public UDataAsset
	{
	public:
		TArray<class UAIPartsDesc*>                                Parts;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference
		int32_t                                                    NextPartsIndex;                                          // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseWeightedArray;                                        // 0x003C(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FXIX[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                UseWeightedArrayFeatureName;                             // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRange                           WeightedArray;                                           // 0x0048(0x0020) Edit, DisableEditOnTemplate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPartsServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPartsServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEncounterServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIEncounterServiceInterface : public UInterface
	{
	public:
		void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
		void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
		void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
		void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
		void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIClassIdTypeList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIClassIdTypeList : public UDataAsset
	{
	public:
		TArray<class UClass*>                                      AllClassIds;                                             // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIColorVariantPool
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIColorVariantPool : public UDataAsset
	{
	public:
		TArray<struct FStringAssetReference>                       AvailableColors;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AICombatEncounterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAICombatEncounterInterface : public UInterface
	{
	public:
		void OnVulnerabilityStateEntered();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDeathInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIDeathInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIDebugVisualisationComponent
	 * Size -> 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
	 */
	class UAIDebugVisualisationComponent : public UActorComponent
	{
	public:
		TArray<struct FAIDebugVisualisationLine>                   Lines;                                                   // 0x00C8(0x0010) Edit, Net, ZeroConstructor
		TArray<struct FAIDebugVisualisationBox>                    Boxes;                                                   // 0x00D8(0x0010) Edit, Net, ZeroConstructor
		TArray<struct FAIDebugVisualisationCylinder>               Cylinders;                                               // 0x00E8(0x0010) Edit, Net, ZeroConstructor
		TArray<struct FAIDebugVisualisationSphere>                 Spheres;                                                 // 0x00F8(0x0010) Edit, Net, ZeroConstructor
		TArray<struct FAIDebugVisualisationCone>                   Cones;                                                   // 0x0108(0x0010) Edit, Net, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIElectricProjectileInterruptedStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAIElectricProjectileInterruptedStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEncounterGenerationRecipe
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UAIEncounterGenerationRecipe : public UDataAsset
	{
	public:
		TArray<struct FAIFormVarietyEntry>                         Forms;                                                   // 0x0028(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               SkillsetProgression;                                     // 0x0038(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               ItemDropProgression;                                     // 0x0048(0x0010) Edit, ZeroConstructor
		struct FTargetSkillsetProgressionPair                      TargetSkillsetOverrides;                                 // 0x0058(0x0020) Edit
		struct FTargetItemDropProgressionPair                      TargetItemDropOverrides;                                 // 0x0078(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEncounterGenerationRecipeRankOrderList
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAIEncounterGenerationRecipeRankOrderList : public UDataAsset
	{
	public:
		TArray<class UAIEncounterGenerationRecipe*>                Recipes;                                                 // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList> FeatureBasedRecipeLists;                                 // 0x0038(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEncounterGenerationRecipeTypeList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIEncounterGenerationRecipeTypeList : public UDataAsset
	{
	public:
		TArray<class UAIEncounterGenerationRecipe*>                AllRecipes;                                              // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEncounterGenerationServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIEncounterGenerationServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEncounterGenerationService
	 * Size -> 0x0088 (FullSize[0x0450] - InheritedSize[0x03C8])
	 */
	class AAIEncounterGenerationService : public AActor
	{
	public:
		unsigned char                                              UnknownData_9LHT[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIEncounterGenerationRecipeTypeList*                GenerationRecipes;                                       // 0x03D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              EncounterService[0x10];                                  // 0x03D8(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.AIEncounterGenerationService.EncounterService
		unsigned char                                              UnknownData_VD5W[0x68];                                  // 0x03E8(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIFormRankProgression
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIFormRankProgression : public UDataAsset
	{
	public:
		TArray<struct FAIFormRankMapping>                          RankMappings;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    NumberOfRanks;                                           // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ELV7[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIFormProgressionTypeList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIFormProgressionTypeList : public UDataAsset
	{
	public:
		TArray<class UAIFormRankProgression*>                      AllProgressions;                                         // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIFormTypeList
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIFormTypeList : public UDataAsset
	{
	public:
		TArray<class UAthenaAIFormDataAsset*>                      AllForms;                                                // 0x0028(0x0010) Edit, ZeroConstructor
		class UAthenaAIFormDataAsset*                              DefaultForm;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AILoadoutProgressionTypeList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAILoadoutProgressionTypeList : public UDataAsset
	{
	public:
		TArray<class UAILoadoutRankProgression*>                   AllProgressions;                                         // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AILoadoutTypeList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAILoadoutTypeList : public UDataAsset
	{
	public:
		TArray<class ULoadoutAsset*>                               AllLoadouts;                                             // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISkillsetProgressionTypeList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAISkillsetProgressionTypeList : public UDataAsset
	{
	public:
		TArray<class UAISkillsetRankProgression*>                  AllProgressions;                                         // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISkillsetTypeList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAISkillsetTypeList : public UDataAsset
	{
	public:
		TArray<class UAthenaAIControllerParamsDataAsset*>          AllSkillsets;                                            // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPartsCategoryTypeList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIPartsCategoryTypeList : public UDataAsset
	{
	public:
		TArray<class UAIPartsCategory*>                            AllPartsCategories;                                      // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEncounterService
	 * Size -> 0x03D0 (FullSize[0x0798] - InheritedSize[0x03C8])
	 */
	class AAIEncounterService : public AActor
	{
	public:
		unsigned char                                              UnknownData_VPW4[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIPartsCategoryMapping>                     DefaultPartsCategories;                                  // 0x03D0(0x0010) Edit, ZeroConstructor
		TArray<struct FAIPartsCategoryFormMapping>                 FormPartsCategories;                                     // 0x03E0(0x0010) Edit, ZeroConstructor
		class UAIAmmoTypeList*                                     Ammo;                                                    // 0x03F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIAmmoProgressionTypeList*                          AmmoProgressions;                                        // 0x03F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIFormTypeList*                                     Forms;                                                   // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIFormProgressionTypeList*                          FormProgressions;                                        // 0x0408(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAILoadoutTypeList*                                  Loadouts;                                                // 0x0410(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAILoadoutProgressionTypeList*                       LoadoutProgressions;                                     // 0x0418(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAISkillsetTypeList*                                 Skillsets;                                               // 0x0420(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAISkillsetProgressionTypeList*                      SkillsetProgressions;                                    // 0x0428(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIClassIdTypeList*                                  ClassIds;                                                // 0x0430(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIPartsCategoryTypeList*                            PartsCategories;                                         // 0x0438(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIColorVariantPool*                                 TeamColors;                                              // 0x0440(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIItemDropComponentList*                            AIItemDropSpawners;                                      // 0x0448(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIItemDropComponentRankProgressionList*             AIItemDropSpawnerProgressions;                           // 0x0450(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UAIEncounterSettings*>                        DebugSpawnableEncounterSettings;                         // 0x0458(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_1313[0x330];                                 // 0x0468(0x0330) MISSED OFFSET (PADDING)

	public:
		void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
		void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
		void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
		void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
		void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISkillsetRankProgression
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAISkillsetRankProgression : public UDataAsset
	{
	public:
		TArray<struct FAISkillsetRankMapping>                      RankMappings;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    NumberOfRanks;                                           // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YN1S[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEncounterSettings
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAIEncounterSettings : public UDataAsset
	{
	public:
		TAssetPtr<class UClass>                                    PawnClass;                                               // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_BCRX[0x4];                                   // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UClass*                                              AIClass;                                                 // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FStringAssetReference                               TeamColor;                                               // 0x0050(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEncounterSettingsFixed
	 * Size -> 0x00B0 (FullSize[0x0110] - InheritedSize[0x0060])
	 */
	class UAIEncounterSettingsFixed : public UAIEncounterSettings
	{
	public:
		struct FStringAssetReference                               SpecificSkillset;                                        // 0x0060(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               Loadout;                                                 // 0x0070(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               Form;                                                    // 0x0080(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               Ammo;                                                    // 0x0090(0x0010) Edit, ZeroConstructor
		class FName                                                DioramaRole;                                             // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                LocalisableName;                                         // 0x00A8(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_XGC9[0x20];                                  // 0x00C0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FEncounterParams                                    EncounterTrackingParams;                                 // 0x00E0(0x000C) Edit
		unsigned char                                              UnknownData_9ZU3[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UClass>                                    ItemDropComponentClass;                                  // 0x00F0(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_E55C[0x4];                                   // 0x010C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEncounterSettingsRankProgression
	 * Size -> 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
	 */
	class UAIEncounterSettingsRankProgression : public UAIEncounterSettings
	{
	public:
		struct FStringAssetReference                               SkillsetProgression;                                     // 0x0060(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               LoadoutProgression;                                      // 0x0070(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               FormProgression;                                         // 0x0080(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               AmmoProgression;                                         // 0x0090(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               ItemDropComponentProgression;                            // 0x00A0(0x0010) Edit, ZeroConstructor
		struct FEncounterParams                                    EncounterTrackingParams;                                 // 0x00B0(0x000C) Edit
		unsigned char                                              UnknownData_2OOH[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIFormItemSpawnRequirement
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAIFormItemSpawnRequirement : public USpawnRequirement
	{
	public:
		TArray<class UAthenaAIFormDataAsset*>                      AllowedForms;                                            // 0x0050(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIIdentifierOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIIdentifierOwnerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIInteractableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIInteractableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIInteractableOperatorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIInteractableOperatorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIItemDropComponentList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIItemDropComponentList : public UDataAsset
	{
	public:
		TArray<TAssetPtr<class UClass>>                            AllSpawners;                                             // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIItemDropComponentRankProgressionList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIItemDropComponentRankProgressionList : public UDataAsset
	{
	public:
		TArray<class UAIItemSpawnRankProgression*>                 AllProgressions;                                         // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIItemSpawnDataSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIItemSpawnDataSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIItemSpawnDataSourceComponent
	 * Size -> 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
	 */
	class UAIItemSpawnDataSourceComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_CY2T[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemSpawnTransformWithRandomQuantityDataAssset*     ItemSpawnDataAsset;                                      // 0x02E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIItemSpawnRankProgression
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIItemSpawnRankProgression : public UDataAsset
	{
	public:
		TArray<struct FAIDropSpawnerRankMapping>                   RankMappings;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    NumberOfRanks;                                           // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_85ML[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AILoadoutInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAILoadoutInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AILoadoutItemSpawnRequirement
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAILoadoutItemSpawnRequirement : public USpawnRequirement
	{
	public:
		TArray<class ULoadoutAsset*>                               AllowedLoadouts;                                         // 0x0050(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AILoadoutRankProgression
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAILoadoutRankProgression : public UDataAsset
	{
	public:
		TArray<struct FAILoadoutRankMapping>                       RankMappings;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    NumberOfRanks;                                           // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C1IO[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AILoadoutWithNonStorableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAILoadoutWithNonStorableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIManagerBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIManagerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class AItemInfo* STATIC_SpawnItemFromAI(class APawn* Pawn, class UClass* ItemDesc);
		int32_t STATIC_GetFrameCounter();
		void STATIC_AddNameplateToAIWithLocalisedName(class AActor* Actor, const class FText& DisplayName);
		void STATIC_AddNameplateToAI(class AActor* Actor, const class FString& DisplayName);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIManagerServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIManagerServiceInterface : public UInterface
	{
	public:
		void StartDespawnAI(class APawn* AIActor, ECharacterDeathType DeathType);
		int32_t GetNumOfSpawnedPawns();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAITypeListDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAthenaAITypeListDataAsset : public UDataAsset
	{
	public:
		TArray<struct FAITypeData>                                 AITypes;                                                 // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<struct FStringClassReference>                       AdditionalAIActors;                                      // 0x0038(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnWaveSequence
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAISpawnWaveSequence : public UDataAsset
	{
	public:
		TArray<struct FAISpawnerWave>                              Waves;                                                   // 0x0028(0x0010) Edit, ZeroConstructor
		class FName                                                FeatureName;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnWaveSequenceRankProgression
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAISpawnWaveSequenceRankProgression : public UDataAsset
	{
	public:
		TArray<struct FAISpawnWaveSequenceRankMapping>             RankMappings;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    NumberOfRanks;                                           // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6A9Z[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAIWeightedProbabilityRangeOfRangesAsset : public UDataAsset
	{
	public:
		float                                                      RespawnChance;                                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q7GP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   RespawnTimerRanges;                                      // 0x0030(0x0030) Edit
		class FName                                                FeatureName;                                             // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIWeightedProbabilityRangeOfRangesRankProgression : public UDataAsset
	{
	public:
		TArray<struct FAIWeightedProbabilityRangeOfRangesRankMapping> RankMappings;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    NumberOfRanks;                                           // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OFQF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPlayerTrackerObservedInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPlayerTrackerObservedInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPlayerTrackerObserverInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPlayerTrackerObserverInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnRequestResultLoggerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISpawnRequestResultLoggerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAISettings
	 * Size -> 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
	 */
	class UAthenaAISettings : public UDeveloperSettings
	{
	public:
		struct FStringAssetReference                               AITypesAsset;                                            // 0x0038(0x0010) Edit, ZeroConstructor, Config
		struct FStringAssetReference                               AISpawnContextListAsset;                                 // 0x0048(0x0010) Edit, ZeroConstructor, Config
		int32_t                                                    FallbackAIDifficultyRank;                                // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumOfSpawnedActors;                                   // 0x005C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxPlayerEquivalentAIsPerRegion;                         // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxWorldAICostUnitsForWorld;                             // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AIRegionCostUnitsForPlayer;                              // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CharacterNetRelevancy;                                   // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CharacterRegionDensityCheckTimer;                        // 0x0070(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CharacterWorldDensityCheckTimer;                         // 0x0074(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceToPlayerToRaiseSpawnPriority;                    // 0x0078(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinRetryingCanSpawnRequestTime;                          // 0x007C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxRetryingCanSpawnRequestTime;                          // 0x0080(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinRetryingLocationCheckTime;                            // 0x0084(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxRetryingLocationCheckTime;                            // 0x0088(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CharacterAINoiseTickInterval;                            // 0x008C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PeriodicAINoiseComponentTickInterval;                    // 0x0090(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FaunaPlayerProximityDormancyRange;                       // 0x0094(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FaunaPlayerProximityTickTime;                            // 0x0098(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FaunaTimeOutOfPlayerProximityForDormancy;                // 0x009C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultNavAgentCapsuleRadius;                            // 0x00A0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultNavAgentCapsuleHalfHeight;                        // 0x00A4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinDelayBeforeRetryingUnsuccessfulWave;                  // 0x00A8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDelayBeforeRetryingUnsuccessfulWave;                  // 0x00AC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               AIEncounterServiceAssetClassFileLocation;                // 0x00B0(0x0010) Edit, ZeroConstructor, Config
		struct FStringAssetReference                               AIEncounterGenerationServiceAssetClassFileLocation;      // 0x00C0(0x0010) Edit, ZeroConstructor, Config
		class FName                                                AICharacterWaterInteractionCollisionProfileName;         // 0x00D0(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AICountTelemetryEventFrequency;                          // 0x00D8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VKGS[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnContextId
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAISpawnContextId : public UObject
	{
	public:
		int32_t                                                    Weighting;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RA7B[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.CustomizableAIManagerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomizableAIManagerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIManagerService
	 * Size -> 0x0650 (FullSize[0x0A18] - InheritedSize[0x03C8])
	 */
	class AAIManagerService : public AActor
	{
	public:
		unsigned char                                              UnknownData_GC6X[0x108];                                 // 0x03C8(0x0108) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      LoadedAIPawnClasses;                                     // 0x04D0(0x0010) ZeroConstructor, Protected
		TArray<class UClass*>                                      LoadedAIItemDropComponentClasses;                        // 0x04E0(0x0010) ZeroConstructor, Protected
		unsigned char                                              UnknownData_842J[0x8];                                   // 0x04F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAmbientWaterSpawnerManager*                         AmbientWaterSpawnerManager;                              // 0x04F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AMKC[0x300];                                 // 0x0500(0x0300) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAIPlayerTracker*>                            PlayerTrackers;                                          // 0x0800(0x0010) ZeroConstructor
		TArray<struct FCustomPlayersAITrackerData>                 CustomPlayersTrackerDatas;                               // 0x0810(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_A96K[0x100];                                 // 0x0820(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAISpawner*>                                  SpawnersPendingShutdown;                                 // 0x0920(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_Y53V[0xA8];                                  // 0x0930(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAthenaAITypeListDataAsset*                          AITypeList;                                              // 0x09D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAISpawnContextList*                                 AISpawnContextList;                                      // 0x09E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AV3H[0x30];                                  // 0x09E8(0x0030) MISSED OFFSET (PADDING)

	public:
		void TickService(float DeltaSeconds);
		void StartDespawnAI(class APawn* AIActor, ECharacterDeathType DeathType);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.DebugAIManagerServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugAIManagerServiceInterface : public UInterface
	{
	public:
		void SetMaxNumOfSpawnedActors(int32_t InMaxNumOfSpawnedActors);
		void SetMaxAICostUnitsPerRegion(int32_t InMaxAICostUnitsPerRegion);
		void SetMaxAICostUnitsForWorld(int32_t InMaxAICostUnitsForWorld);
		void SetIgnoreCharacterLimits(bool Ignore);
		void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
		void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
		void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
		void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
		bool BlockAIAbility(class UClass* InExclusive, bool InBlockState);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.DebugAIManagerService
	 * Size -> 0x0100 (FullSize[0x0B18] - InheritedSize[0x0A18])
	 */
	class ADebugAIManagerService : public AAIManagerService
	{
	public:
		unsigned char                                              UnknownData_F763[0xF0];                                  // 0x0A18(0x00F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      BlockedAIAbilities;                                      // 0x0B08(0x0010) ZeroConstructor, UObjectWrapper

	public:
		void SetMaxNumOfSpawnedActors(int32_t InMaxNumOfSpawnedActors);
		void SetMaxAICostUnitsPerRegion(int32_t InMaxAICostUnitsPerRegion);
		void SetMaxAICostUnitsForWorld(int32_t InMaxAICostUnitsForWorld);
		void SetIgnoreCharacterLimits(bool Ignore);
		void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
		void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
		void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
		void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
		bool BlockAIAbility(class UClass* InExclusive, bool InBlockState);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AINoiseFireInstigator
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AAINoiseFireInstigator : public AActor
	{
	public:
		unsigned char                                              UnknownData_K8E8[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPartsService
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIPartsService : public UObject
	{
	public:
		unsigned char                                              UnknownData_6CLE[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPartsCategoryTypeList*                            PartsCategoriesList;                                     // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UAIColorVariantPool*                                 TeamColors;                                              // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPartCustomizationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPartCustomizationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPartIdListingAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIPartIdListingAsset : public UDataAsset
	{
	public:
		TArray<struct FAIPartIdNumVariantInfo>                     AIPartIdsVariantInfo;                                    // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPartsRetrievalInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPartsRetrievalInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPartsRetrievalComponent
	 * Size -> 0x00A8 (FullSize[0x0170] - InheritedSize[0x00C8])
	 */
	class UAIPartsRetrievalComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_HJ1U[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPartsCategory*                                    PartsCategory;                                           // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FReplicatedAIPartsData                              ReplicatedAIPartsData;                                   // 0x00D8(0x0018) Net, RepNotify
		unsigned char                                              UnknownData_L7IO[0x80];                                  // 0x00F0(0x0080) MISSED OFFSET (PADDING)

	public:
		void RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int32_t PartsIndexToUse, int32_t TeamColorIndex);
		void OnRep_ReplicatedAIPartsData();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPawnInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPawnInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPawnTurnActiveInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPawnTurnActiveInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPerCrewSpawnerSettingsStoryOverrideAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIPerCrewSpawnerSettingsStoryOverrideAsset : public UDataAsset
	{
	public:
		TArray<struct FAIPerCrewSpawnerStoryBasedRespawnSettings>  StoryOverrides;                                          // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPerCrewSpawnerSettingsStoryOverrideCollectionAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAIPerCrewSpawnerSettingsStoryOverrideCollectionAsset : public UDataAsset
	{
	public:
		TArray<class UAIPerCrewSpawnerSettingsStoryOverrideAsset*> StoryOverrideAssetList;                                  // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UAIPerCrewSpawnerSettingsStoryOverrideCollectionAsset*> StoryoverrideAssetCollectionList;                        // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIProximityPlayerTracker
	 * Size -> 0x01E0 (FullSize[0x0228] - InheritedSize[0x0048])
	 */
	class UAIProximityPlayerTracker : public UAISpawnerPlayerTracker
	{
	public:
		unsigned char                                              UnknownData_5GOY[0x1E0];                                 // 0x0048(0x01E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	class UFilterFirstPlayerEnterPlayerTrackerDecorator : public UAISpawnerPlayerTracker
	{
	public:
		unsigned char                                              UnknownData_45YG[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIProjectileInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIProjectileInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIRegionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIRegionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIRegionComponent
	 * Size -> 0x0070 (FullSize[0x0350] - InheritedSize[0x02E0])
	 */
	class UAIRegionComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_U8II[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       UpdateRegionPosition;                                    // 0x02E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36AJ[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NavMeshAgentType;                                        // 0x02EC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RegionRadius;                                            // 0x02F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSpawnLocationGroup>                         SpawnLocationGroups;                                     // 0x02F8(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_V3AT[0x48];                                  // 0x0308(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIShipInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIShipInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISkillsetItemSpawnRequirement
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAISkillsetItemSpawnRequirement : public USpawnRequirement
	{
	public:
		TArray<class UAthenaAIControllerParamsDataAsset*>          DisallowedSkillsets;                                     // 0x0050(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnContextContainerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISpawnContextContainerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnContextContainerComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UAISpawnContextContainerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XTF4[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnContextList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAISpawnContextList : public UDataAsset
	{
	public:
		TArray<struct FAISpawnContextData>                         SpawnContextList;                                        // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnContextProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISpawnContextProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIFixedWavesSpawner
	 * Size -> 0x0040 (FullSize[0x0478] - InheritedSize[0x0438])
	 */
	class UAIFixedWavesSpawner : public UAISpawner
	{
	public:
		TArray<struct FAIPersistentSpawnerWave>                    SpawnedWaves;                                            // 0x0438(0x0010) Edit, ZeroConstructor
		int32_t                                                    NumWavesToSpawnOnSpottedNewTarget;                       // 0x0448(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F8CV[0x2C];                                  // 0x044C(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIIncrementalWaveSpawner
	 * Size -> 0x0118 (FullSize[0x0550] - InheritedSize[0x0438])
	 */
	class UAIIncrementalWaveSpawner : public UAISpawner
	{
	public:
		struct FAISpawnerWave                                      SpawnedWave;                                             // 0x0438(0x0100) Edit
		unsigned char                                              UnknownData_ZXKG[0x18];                                  // 0x0538(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIInteractableSpawner
	 * Size -> 0x0100 (FullSize[0x0538] - InheritedSize[0x0438])
	 */
	class UAIInteractableSpawner : public UAISpawner
	{
	public:
		class UClass*                                              AIInteractableType;                                      // 0x0438(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      InhabitedChance;                                         // 0x0440(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X92C[0x4];                                   // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   DelayAfterSuccessfulInhabitedCheck;                      // 0x0448(0x0030) Edit
		struct FWeightedProbabilityRangeOfRanges                   DelayAfterFailedInhabitedCheck;                          // 0x0478(0x0030) Edit
		float                                                      SpawnForInteractableChance;                              // 0x04A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K472[0x4];                                   // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   DelayAfterSuccessfulSpawnOnInteractableCheck;            // 0x04B0(0x0030) Edit
		struct FWeightedProbabilityRangeOfRanges                   DelayAfterFailedSpawnOnInteractableCheck;                // 0x04E0(0x0030) Edit
		bool                                                       RunInhabitedSimulation;                                  // 0x0510(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       RunSpawnForInteractableSimulation;                       // 0x0511(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9UN9[0x2];                                   // 0x0512(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumIterations;                                           // 0x0514(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UFPU[0x18];                                  // 0x0518(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPlayMode                                                  CachedPlaymode;                                          // 0x0530(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A6XQ[0x7];                                   // 0x0531(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIOnDemandSpawner
	 * Size -> 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
	 */
	class UAIOnDemandSpawner : public UAISpawner
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIPerPlayerSpawner
	 * Size -> 0x01E8 (FullSize[0x0620] - InheritedSize[0x0438])
	 */
	class UAIPerPlayerSpawner : public UAISpawner
	{
	public:
		bool                                                       CheckSpawnedActorsInRadiusBeforeSpawning;                // 0x0438(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IUIT[0x3];                                   // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadiusToCheckForExistingPopulation;                      // 0x043C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxExistingPopulationInRadius;                           // 0x0440(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DespawnAllPawnsWhenAllPlayersLeave;                      // 0x0444(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AXAT[0x3];                                   // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxActorsTotalPerPlayer;                                 // 0x0448(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RunSimulation;                                           // 0x044C(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QTDX[0x3];                                   // 0x044D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RankForSimulation;                                       // 0x0450(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumIterations;                                           // 0x0454(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WantsToTemporarilyRememberPlayers;                       // 0x0458(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1YCP[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   TemporaryPlayerMemoryTimeRange;                          // 0x0460(0x0030) Edit
		unsigned char                                              UnknownData_9QVS[0xE8];                                  // 0x0490(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AActor*, struct FAIPerPlayerSpawnerPlayerDetailsUnit> PlayerDetails;                                           // 0x0578(0x0050) ZeroConstructor, Transient
		TMap<class AController*, struct FTemporaryPlayerDetailsUnitEntry> TemporaryPlayerDetails;                                  // 0x05C8(0x0050) ZeroConstructor, Transient
		unsigned char                                              UnknownData_LQ87[0x8];                                   // 0x0618(0x0008) MISSED OFFSET (PADDING)

	public:
		void PlayerDeath(class AActor* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.NamedAIDataAsset
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UNamedAIDataAsset : public UDataAsset
	{
	public:
		TArray<class FText>                                        MaleCaptainNames;                                        // 0x0028(0x0010) Edit, ZeroConstructor
		TArray<class FText>                                        FemaleCaptainNames;                                      // 0x0038(0x0010) Edit, ZeroConstructor
		TArray<class FText>                                        MaleCrewNames;                                           // 0x0048(0x0010) Edit, ZeroConstructor
		TArray<class FText>                                        FemaleCrewNames;                                         // 0x0058(0x0010) Edit, ZeroConstructor
		TArray<struct FAICustomNameTitleMapping>                   CustomNameTitles;                                        // 0x0068(0x0010) Edit, ZeroConstructor
		TArray<struct FAICustomClassIdNameOverrides>               CustomNameOverrides;                                     // 0x0078(0x0010) Edit, ZeroConstructor
		class UClass*                                              DefaultClassId;                                          // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              FemaleCaptainClassId;                                    // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              MaleCaptainClassId;                                      // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              FemaleCrewClassId;                                       // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              MaleCrewClassId;                                         // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIBoobyTrapSpawner
	 * Size -> 0x00D0 (FullSize[0x06F0] - InheritedSize[0x0620])
	 */
	class UAIBoobyTrapSpawner : public UAIPerPlayerSpawner
	{
	public:
		int32_t                                                    NumberOfWavesToSpawn;                                    // 0x0620(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BN9U[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         NewWaveSpawnSfx;                                         // 0x0628(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewWaveSpawnSfxTriggerRadius;                            // 0x0630(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PR97[0x4];                                   // 0x0634(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ShowNameplatesFor;                                       // 0x0638(0x0010) Edit, ZeroConstructor, UObjectWrapper
		class UNamedAIDataAsset*                                   NamedAIDataAsset;                                        // 0x0648(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ActorToTrack;                                            // 0x0650(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M3ET[0x98];                                  // 0x0658(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIProgressiveWavesSpawner
	 * Size -> 0x0038 (FullSize[0x0470] - InheritedSize[0x0438])
	 */
	class UAIProgressiveWavesSpawner : public UAISpawner
	{
	public:
		bool                                                       ApplyLocalisableNamesToNameplates;                       // 0x0438(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7P9U[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIPersistentSpawnerWave>                    Waves;                                                   // 0x0440(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_E03Y[0x18];                                  // 0x0450(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TriggerActor;                                            // 0x0468(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISpawnerSpawnInteractableAssignmentInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIEscalatingWaveSpawner
	 * Size -> 0x0020 (FullSize[0x0590] - InheritedSize[0x0570])
	 */
	class UAIEscalatingWaveSpawner : public UAIWaveSpawner
	{
	public:
		TArray<struct FEscalatingWave>                             EscalatingWaves;                                         // 0x0570(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              UnknownData_B8EG[0x10];                                  // 0x0580(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnerList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAISpawnerList : public UDataAsset
	{
	public:
		TArray<class UAISpawner*>                                  Spawners;                                                // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnOverrideCondition
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAISpawnOverrideCondition : public UObject
	{
	public:
		bool                                                       InvertResult;                                            // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A9IO[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnCampaignCondition
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAISpawnCampaignCondition : public UAISpawnOverrideCondition
	{
	public:
		class FName                                                CampaignName;                                            // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3VLT[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnComplexCondition
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAISpawnComplexCondition : public UAISpawnOverrideCondition
	{
	public:
		TArray<class UAISpawnOverrideCondition*>                   Conditions;                                              // 0x0030(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnAndCondition
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAISpawnAndCondition : public UAISpawnComplexCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnOrCondition
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAISpawnOrCondition : public UAISpawnComplexCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnMatchesAllContextsCondition
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAISpawnMatchesAllContextsCondition : public UAISpawnOverrideCondition
	{
	public:
		TArray<class UClass*>                                      Contexts;                                                // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnMatchesAnyContextCondition
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAISpawnMatchesAnyContextCondition : public UAISpawnOverrideCondition
	{
	public:
		TArray<class UClass*>                                      Contexts;                                                // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnStoryCondition
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAISpawnStoryCondition : public UAISpawnOverrideCondition
	{
	public:
		struct FStoryFlag                                          StoryFlag;                                               // 0x0030(0x0008) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_5Q7B[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.StaticAISpawnCondition
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UStaticAISpawnCondition : public UAISpawnOverrideCondition
	{
	public:
		bool                                                       ShouldApplyOverride;                                     // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J48K[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnPointSeedComponent
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class UAISpawnPointSeedComponent : public USceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AISpawnRegionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISpawnRegionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AITargetServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAITargetServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AITargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAITargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AITargetActor
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class AAITargetActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_CE1E[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Root;                                                    // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAthenaAITeam                                              Team;                                                    // 0x03D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CWJC[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AITargetService
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class AAITargetService : public AActor
	{
	public:
		unsigned char                                              UnknownData_KN76[0x18];                                  // 0x03C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AITargetWeaponInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAITargetWeaponInterface : public UInterface
	{
	public:
		bool FindAimConfigToHitTarget(const struct FVector& Target, bool CheckYaw, struct FRotator* OutAimConfig);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AIWithFormInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIWithFormInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AmbientWaterSpawnerManager
	 * Size -> 0x0250 (FullSize[0x0618] - InheritedSize[0x03C8])
	 */
	class AAmbientWaterSpawnerManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_IMQP[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Root;                                                    // 0x03D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAthenaAISettings*                                   AthenaAISettings;                                        // 0x03E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        AISpawnBlockingContextNames;                             // 0x03E8(0x0010) Edit, ZeroConstructor
		class UAIPerPlayerSpawner*                                 SharkPerPlayerSpawnerTemplate;                           // 0x03F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIPerPlayerSpawner*                                 SirenPerPlayerSpawnerTemplate;                           // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SirenEncounterRegionRadius;                              // 0x0408(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SirenEncounterShutdownTime;                              // 0x040C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   InitialSirenSpawningWeightedTimeRange;                   // 0x0410(0x0030) Edit, Config
		struct FWeightedProbabilityRangeOfRanges                   UnsuccessfulSirenSpawningWeightedTimeRange;              // 0x0440(0x0030) Edit, Config
		struct FWeightedProbabilityRangeOfRanges                   SuccessfulSirenSpawningWeightedTimeRange;                // 0x0470(0x0030) Edit, Config
		struct FChanceForSharksToBlockSirenEncounterData           SharkEncounterSpawnBlockingData;                         // 0x04A0(0x000C) Edit
		unsigned char                                              UnknownData_MFHZ[0x4];                                   // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPerDepthSpawnChance>                        PerDepthSpawnChances;                                    // 0x04B0(0x0010) Edit, ZeroConstructor
		class UAIPerPlayerSpawner*                                 SharkPerPlayerSpawner;                                   // 0x04C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DUB9[0x130];                                 // 0x04C8(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerInWaterData>                          PlayersInWater;                                          // 0x05F8(0x0010) ZeroConstructor, Transient
		TArray<struct FSirenEncounterData>                         SirenEncounters;                                         // 0x0608(0x0010) ZeroConstructor, Transient

	public:
		void OnPlayerDeath(class AActor* InActorDying);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AmmunitionItemClassProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAmmunitionItemClassProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UAppliedStatusToMultipleAIWithFormsStatCondition : public UStatCondition
	{
	public:
		TArray<class UClass*>                                      Status;                                                  // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		int32_t                                                    AICountMinimum;                                          // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowAllForms;                                           // 0x003C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X88K[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TAssetPtr<class UClass>>                            AllowedAIForms;                                          // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		TArray<class UClass*>                                      AIClassesToIgnore;                                       // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		TArray<TAssetPtr<class UClass>>                            AllowedSources;                                          // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AquaticAITargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAquaticAITargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BurrowAIAbility
	 * Size -> 0x00C8 (FullSize[0x0140] - InheritedSize[0x0078])
	 */
	class UBurrowAIAbility : public UAthenaAIAbility
	{
	public:
		TArray<struct FVector>                                     LocationsToSpawnCrack;                                   // 0x0078(0x0010) ZeroConstructor
		struct FTimerHandle                                        TimerHandleStartNextSpawnWave;                           // 0x0088(0x0004)
		unsigned char                                              UnknownData_KFZ4[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CachedTarget;                                            // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QNNJ[0x8C];                                  // 0x0098(0x008C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExecuting;                                              // 0x0124(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bProcessingSpawnLocations;                               // 0x0125(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_STMF[0x1A];                                  // 0x0126(0x001A) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BurrowCrack
	 * Size -> 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
	 */
	class ABurrowCrack : public AActor
	{
	public:
		class USceneComponent*                                     DefaultSceneComponent;                                   // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     DecalComponent;                                          // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOutTimeSeconds;                                      // 0x03D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasFadeStarted;                                          // 0x03DC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_8BB9[0x2B];                                  // 0x03DD(0x002B) MISSED OFFSET (PADDING)

	public:
		void OnRep_StartFadeAndLifeSpan();
		void OnLifeSpanPercentLeft(float PercentLeft);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BurrowAIAbilityParams
	 * Size -> 0x0078 (FullSize[0x0140] - InheritedSize[0x00C8])
	 */
	class UBurrowAIAbilityParams : public UAthenaAIAbilityParams
	{
	public:
		TArray<EPhysicalSurface>                                   ValidBurrowSurfaceTypes;                                 // 0x00C8(0x0010) Edit, ZeroConstructor
		class UClass*                                              BurrowCrackToSpawn;                                      // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              BurrowEruptArea;                                         // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UEnvQuery*                                           EnvQueryLinesToTarget;                                   // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           EnvQueryAroundTarget;                                    // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OffsetPositionForStartTrace;                             // 0x00F8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SurfaceDetectRaycastLength;                              // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BurrowAroundTargetRange;                                 // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSurfaceAngleForBurrow;                                // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEruptFromClosestSpawn;                                  // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8YRF[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxBurrowAbility                                EruptionDelayRndBetweenMinMaxSeconds;                    // 0x0114(0x0008) Edit
		struct FMinMaxBurrowAbility                                NumberOfCrackWavesMinMax;                                // 0x011C(0x0008) Edit
		struct FMinMaxBurrowAbility                                RndSecondsBetweenCrackWaves;                             // 0x0124(0x0008) Edit
		struct FMinMaxBurrowAbility                                NumberOfCracksPerWaveMinMax;                             // 0x012C(0x0008) Edit
		struct FMinMaxBurrowAbility                                RndSecondsBetweenEachCrackSpawn;                         // 0x0134(0x0008) Edit
		unsigned char                                              UnknownData_86CK[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BurrowHealAIAbilityParams
	 * Size -> 0x0030 (FullSize[0x0170] - InheritedSize[0x0140])
	 */
	class UBurrowHealAIAbilityParams : public UBurrowAIAbilityParams
	{
	public:
		class UClass*                                              AllyTypeToHeal;                                          // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      HealDuration;                                            // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadiusForValidTargets;                                   // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfTargetsToHeal;                                   // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7S8W[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatus                                             StatusToApplyOnHeal;                                     // 0x0158(0x0018) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BurrowHealAIAbility
	 * Size -> 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
	 */
	class UBurrowHealAIAbility : public UBurrowAIAbility
	{
	public:
		unsigned char                                              UnknownData_ITYD[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIBuffAbilityInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAIBuffAbilityInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.CoralShieldAbility
	 * Size -> 0x00B0 (FullSize[0x0128] - InheritedSize[0x0078])
	 */
	class UCoralShieldAbility : public UAthenaAIAbility
	{
	public:
		TArray<TWeakObjectPtr<class APawn>>                        PotentialTargets;                                        // 0x0078(0x0010) ZeroConstructor, UObjectWrapper
		unsigned char                                              CachedAIManager[0x10];                                   // 0x0088(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.CoralShieldAbility.CachedAIManager
		unsigned char                                              CachedBuffReceiver[0x10];                                // 0x0098(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.CoralShieldAbility.CachedBuffReceiver
		TArray<struct FBuffedTargetData>                           BuffedTargets;                                           // 0x00A8(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_Z966[0x70];                                  // 0x00B8(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.ElectricShieldAbility
	 * Size -> 0x0098 (FullSize[0x0110] - InheritedSize[0x0078])
	 */
	class UElectricShieldAbility : public UAthenaAIAbility
	{
	public:
		unsigned char                                              UnknownData_LZCA[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SelectedTargets[0x10];                                   // 0x0080(0x0010) UNKNOWN PROPERTY: ArrayProperty AthenaAI.ElectricShieldAbility.SelectedTargets
		unsigned char                                              CachedAIManager[0x10];                                   // 0x0090(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.ElectricShieldAbility.CachedAIManager
		unsigned char                                              OwnerChainLightningSourceInterface[0x10];                // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty AthenaAI.ElectricShieldAbility.OwnerChainLightningSourceInterface
		unsigned char                                              UnknownData_M7DF[0x60];                                  // 0x00B0(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SporeBreathAIAbility
	 * Size -> 0x0038 (FullSize[0x00B0] - InheritedSize[0x0078])
	 */
	class USporeBreathAIAbility : public UAthenaAIAbility
	{
	public:
		class AStatusEffectOverlapZone*                            BreathActor;                                             // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVFXSpawnerComponent*                                BreathVFX;                                               // 0x0080(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SFQ9[0x28];                                  // 0x0088(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIAbilityHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAIAbilityHandlerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIAbilityComponent
	 * Size -> 0x0108 (FullSize[0x01D0] - InheritedSize[0x00C8])
	 */
	class UAthenaAIAbilityComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_QTN0[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAthenaAIAbility*>                            AIAbilities;                                             // 0x00D0(0x0010) ZeroConstructor, Transient
		TArray<class UAthenaAIAbility*>                            ActivatableAbilitiesInCurrentStage;                      // 0x00E0(0x0010) ZeroConstructor, Transient
		class UAthenaAIAbility*                                    CurrentAIAbility;                                        // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              QueuedAbilityType;                                       // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              DebugAlwaysOnAbility;                                    // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FAthenaAIAbilityDamageStage>                 AbilityDamageStages;                                     // 0x0108(0x0010) ZeroConstructor, Transient, ContainsInstancedReference
		unsigned char                                              UnknownData_VPLF[0xB8];                                  // 0x0118(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIAbilityHandlerComponent
	 * Size -> 0x0118 (FullSize[0x01E0] - InheritedSize[0x00C8])
	 */
	class UAthenaAIAbilityHandlerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_DRNM[0xB0];                                  // 0x00C8(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAthenaAIAbilityDamageStage>                 AbilityStages;                                           // 0x0178(0x0010) ZeroConstructor, ContainsInstancedReference, Protected
		TArray<class UAthenaAIAbility*>                            AIAbilities;                                             // 0x0188(0x0010) ZeroConstructor
		TArray<class UClass*>                                      ReadyAbilitiesPool;                                      // 0x0198(0x0010) ZeroConstructor, UObjectWrapper
		unsigned char                                              UnknownData_XVSE[0x20];                                  // 0x01A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DebugAlwaysOnAbility;                                    // 0x01C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              RequiresActivation;                                      // 0x01D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_DZBC[0x8];                                   // 0x01D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.CoralShieldAbilityParams
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	class UCoralShieldAbilityParams : public UAthenaAIAbilityParams
	{
	public:
		float                                                      ShieldEffectRadius;                                      // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageNeededToBreakShield;                               // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShieldLifeTime;                                          // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JH82[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatus                                             CoralShieldStatusEffect;                                 // 0x00D8(0x0018) Edit
		class UDamageableVulnerabilityLayer*                       VulnerabilityToApplyToSelf;                              // 0x00F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      DelayBeforeSFXPlays;                                     // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A3ZH[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.ElectricShieldAbilityParams
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	class UElectricShieldAbilityParams : public UAthenaAIAbilityParams
	{
	public:
		float                                                      ChargeUpTime;                                            // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_27IK[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatus                                             BuffInterruptedStatusEffect;                             // 0x00D0(0x0018) Edit
		struct FStatus                                             ElectricShieldStatusEffect;                              // 0x00E8(0x0018) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SporeBreathAIAbilityParams
	 * Size -> 0x0080 (FullSize[0x0148] - InheritedSize[0x00C8])
	 */
	class USporeBreathAIAbilityParams : public UAthenaAIAbilityParams
	{
	public:
		struct FAthenaAIAbilityPlayerBasedRanges                   BreathMaxDuration;                                       // 0x00C8(0x0010) Edit
		float                                                      BreathContinueThresholdDistance;                         // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HR9O[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BreathActor;                                             // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVFXHandlerComponentParams                          BreathVFXParams;                                         // 0x00E8(0x0040) Edit
		struct FVector                                             BreathCollisionVolumeSize;                               // 0x0128(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BreathCollisionForwardOffset;                            // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BreathStartDelay;                                        // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KQ1L[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              VfxSpawner;                                              // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BurrowAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBurrowAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BurrowHealAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBurrowHealAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.CoralShieldAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCoralShieldAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.ElectricShieldAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UElectricShieldAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SporeBreathAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USporeBreathAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIRangeBasedAmmoDataAsset
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	class UAthenaAIRangeBasedAmmoDataAsset : public UAthenaAIAmmoDataAsset
	{
	public:
		TArray<struct FWeightedAmmoTypeRange>                      AmmoTypeRanges;                                          // 0x00D0(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAICharacterStatsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAICharacterStatsInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SpawnItemDescProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnItemDescProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAICharacterController
	 * Size -> 0x0220 (FullSize[0x0B10] - InheritedSize[0x08F0])
	 */
	class AAthenaAICharacterController : public AAthenaAIController
	{
	public:
		unsigned char                                              UnknownData_DFIL[0x8];                                   // 0x08F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAthenaAIItemParamsDataAsset*                        ItemParamsDataAsset;                                     // 0x08F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULoadoutAsset*                                       FallbackLoadoutIfAllEngageItemsDropped;                  // 0x0900(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ControlRotationInterpSpeed;                              // 0x0908(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ControlRotationUseConstantInterp;                        // 0x090C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FaceTargetDisabled;                                      // 0x090D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0TIN[0x2];                                   // 0x090E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinTurnAngleToPlayTurnAnim;                              // 0x0910(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3YF6[0x14];                                  // 0x0914(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAthenaAICharacterControllerParamsDataAsset*         CharacterParamsDataAsset;                                // 0x0928(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HFYO[0x90];                                  // 0x0930(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories;                          // 0x09C0(0x0010) ZeroConstructor
		TArray<class UAthenaAIAbilityParams*>                      AIAbilityParams;                                         // 0x09D0(0x0010) ZeroConstructor
		TArray<struct FAthenaAIEngageEnemyData>                    NonItemEngageOptions;                                    // 0x09E0(0x0010) ZeroConstructor
		class UCurveFloat*                                         DistanceInMToCannonShotHitChanceCurve;                   // 0x09F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6TGE[0x118];                                 // 0x09F8(0x0118) MISSED OFFSET (PADDING)

	public:
		void SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies);
		void SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const class FName& ParamName, float Value);
		void SetDisableTurningForTest(bool InDisableTurningForTest);
		void ClearOverridePrioritiseInteractablesBeforeEnemies();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIControllerNavMeshTogglesInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAIControllerNavMeshTogglesInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.FaunaAIContollerParamsDataAsset
	 * Size -> 0x0088 (FullSize[0x0188] - InheritedSize[0x0100])
	 */
	class UFaunaAIContollerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
	{
	public:
		struct FWeightedProbabilityRange                           Courage;                                                 // 0x0100(0x0020) Edit
		TArray<struct FCarriedItemThreatOverride>                  CarriedItemThreatOverrides;                              // 0x0120(0x0010) Edit, ZeroConstructor
		bool                                                       ThreatenedBySightOfCarrier;                              // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C5E6[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHearingThreat>                              KnownHearingDangers;                                     // 0x0138(0x0010) Edit, ZeroConstructor
		float                                                      CarrierHearingThreatSpeedThreshold;                      // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageThreat;                                            // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         CharacterDistanceToDangerRatingCurve;                    // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DangerRatingToAgitationDurationCurve;                    // 0x0158(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToBecomeAgitatedMin;                                 // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToBecomeAgitatedMax;                                 // 0x0164(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AgitationDurationVariance;                               // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AlertThreshold;                                          // 0x016C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FleeThreshold;                                           // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToBecomeCalm;                                        // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CalmCooldownTime;                                        // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDistanceFromLeaderForIdle;                            // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DistanceToLeaderPatrolChanceCurve;                       // 0x0180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIControllerParamsDataProvider
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAthenaAIControllerParamsDataProvider : public UAIDataProvider
	{
	public:
		class FName                                                ParamName;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FloatValue;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IntValue;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BoolValue;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P7HY[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIControllerParamsTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAIControllerParamsTargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIFormComponentContainerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAIFormComponentContainerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIInteractableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAIInteractableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIPerceptionComponent
	 * Size -> 0x0000 (FullSize[0x01C8] - InheritedSize[0x01C8])
	 */
	class UAthenaAIPerceptionComponent : public UAIPerceptionComponent
	{
	public:
		bool IsPerceptionSenseEnabled(class UClass* Sense);
		bool IsAnyPerceptionEnabled();
		void EnablePerceptionSense(class UClass* Sense, bool Enable);
		void EnableAllPerception(bool Enable);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAISightTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAthenaAISightTargetInterface : public UAISightTargetInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.AthenaAIWeightedRangesDataProvider
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAthenaAIWeightedRangesDataProvider : public UAIDataProvider
	{
	public:
		class FName                                                ParamName;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   WeightedRangesValue;                                     // 0x0030(0x0030)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BlackboardAIDataProvider
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UBlackboardAIDataProvider : public UAIDataProvider
	{
	public:
		class FName                                                ParamName;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FloatValue;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    IntValue;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BoolValue;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LVOJ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_ActionState
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ActionState : public UBTDecorator
	{
	public:
		EActionStateMachineTrackId                                 TrackId;                                                 // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_953P[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              StateId;                                                 // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_GL3X[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_ActorInWater
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTDecorator_ActorInWater : public UBTDecorator_BlackboardBase
	{
	public:
		bool                                                       ReverseLogic;                                            // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OTET[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_CurrentAIStrategy
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_CurrentAIStrategy : public UBTDecorator_BaseConditional
	{
	public:
		TArray<class UClass*>                                      Strategies;                                              // 0x0068(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_IsActorInExpectedActionState
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_IsActorInExpectedActionState : public UBTDecorator_BaseConditional
	{
	public:
		class UClass*                                              ExpectedActionState;                                     // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EActionStateMachineTrackId                                 ExpectedTrackId;                                         // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RDM7[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_ItemReadyToUse
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ItemReadyToUse : public UBTDecorator_BaseConditional
	{
	public:
		class UClass*                                              NotificationId;                                          // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_LeftOfAIPawn
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class UBTDecorator_LeftOfAIPawn : public UBTDecorator_BaseConditional
	{
	public:
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x0068(0x0028) Edit
		bool                                                       ReverseLogic;                                            // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RX91[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_LineOfSightToTarget
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_LineOfSightToTarget : public UBTDecorator_BaseConditional
	{
	public:
		float                                                      Interval;                                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EO62[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              TargetActorKey;                                          // 0x0070(0x0028) Edit
		bool                                                       UseTargetPosition;                                       // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LR6P[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              TargetPositionKey;                                       // 0x00A0(0x0028) Edit
		struct FVector                                             OffsetToApplyToTargetPosition;                           // 0x00C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W1MF[0x1C];                                  // 0x00D4(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_CompareBlackboardClassValue
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UBTDecorator_CompareBlackboardClassValue : public UBTDecorator_BlackboardBase
	{
	public:
		class UClass*                                              Class;                                                   // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Invert;                                                  // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9XKG[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CachedDescription;                                       // 0x00A0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash
		EBTBlackboardRestart                                       NotifyObserver;                                          // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_6DKO[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_CompareBlackboardIntValue
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class UBTDecorator_CompareBlackboardIntValue : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0068(0x0028) Edit
		int32_t                                                    Value;                                                   // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBlackboardIntValueComparisonType                          ComparisonType;                                          // 0x0094(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9GPV[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_CompareBlackboardValues
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UBTDecorator_CompareBlackboardValues : public UBTDecorator
	{
	public:
		TArray<struct FBlackboardValueCondition>                   FloatConditions;                                         // 0x0068(0x0010) Edit, ZeroConstructor
		EBlackboardValueCompositeType                              FloatConditionComposite;                                 // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_06F5[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_CompareFloatValueBase
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UBTDecorator_CompareFloatValueBase : public UBTDecorator_CompareBlackboardValues
	{
	public:
		EFloatValueComparisonType                                  Comparison;                                              // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z0YH[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           Value;                                                   // 0x0088(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UBTDecorator_CompareBlackboardActorSpeed : public UBTDecorator_CompareFloatValueBase
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x00B8(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_CompareBlackboardFloatValue
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UBTDecorator_CompareBlackboardFloatValue : public UBTDecorator_CompareFloatValueBase
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x00B8(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_CompareCurrentHealth
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UBTDecorator_CompareCurrentHealth : public UBTDecorator_CompareFloatValueBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_TargetInRange
	 * Size -> 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
	 */
	class UBTDecorator_TargetInRange : public UBTDecorator_CompareBlackboardValues
	{
	public:
		struct FAIDataProviderFloatValue                           EnterRange;                                              // 0x0080(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           ExitRange;                                               // 0x00B0(0x0030) Edit, ContainsInstancedReference
		struct FBlackboardKeySelector                              TargetKey;                                               // 0x00E0(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_TargetInRangeOfPoint
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UBTDecorator_TargetInRangeOfPoint : public UBTDecorator_TargetInRange
	{
	public:
		struct FBlackboardKeySelector                              ReferencePointKey;                                       // 0x0108(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_TestRange
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UBTDecorator_TestRange : public UBTDecorator_CompareBlackboardValues
	{
	public:
		struct FAIDataProviderFloatValue                           EnterRange;                                              // 0x0080(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           ExitRange;                                               // 0x00B0(0x0030) Edit, ContainsInstancedReference
		bool                                                       TestForOutsideRange;                                     // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WES6[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_TestRangeOfSeenActors
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UBTDecorator_TestRangeOfSeenActors : public UBTDecorator_TestRange
	{
	public:
		unsigned char                                              UnknownData_R7VJ[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_ConeCheck3D
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ConeCheck3D : public UBTDecorator
	{
	public:
		float                                                      ConeHalfAngle;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FP61[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              ConeOrigin;                                              // 0x0070(0x0028) Edit
		struct FBlackboardKeySelector                              Observed;                                                // 0x0098(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_DockedToInteractable
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UBTDecorator_DockedToInteractable : public UBTDecorator_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_FeatureToggle
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_FeatureToggle : public UBTDecorator
	{
	public:
		struct FFeatureFlag                                        Feature;                                                 // 0x0068(0x0008) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_IsAbilityAvailable
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_IsAbilityAvailable : public UBTDecorator
	{
	public:
		class UClass*                                              AIAbilityType;                                           // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_IsLocationInWater
	 * Size -> 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
	 */
	class UBTDecorator_IsLocationInWater : public UBTDecorator_BlackboardBase
	{
	public:
		struct FBlackboardKeySelector                              WaterVolumeActor;                                        // 0x0090(0x0028) Edit
		struct FBlackboardKeySelector                              TargetLocation;                                          // 0x00B8(0x0028) Edit
		bool                                                       OnlyConsidersSwimmableWater;                             // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CASG[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_MultipleRandomDiceRolls
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_MultipleRandomDiceRolls : public UBTDecorator
	{
	public:
		TArray<struct FChanceAndBlackboardKeyPair>                 ChanceKeyPairs;                                          // 0x0068(0x0010) Edit, ZeroConstructor, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_RandomDiceRoll
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class UBTDecorator_RandomDiceRoll : public UBTDecorator
	{
	public:
		struct FAIDataProviderFloatValue                           Chance;                                                  // 0x0068(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_RandomLoop
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_RandomLoop : public UBTDecorator
	{
	public:
		int32_t                                                    MinNumLoops;                                             // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumLoops;                                             // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         RandomNumLoopCurve;                                      // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_RollAgainstPatrolChance
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_RollAgainstPatrolChance : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTDecorator_TestAIInteractableType
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTDecorator_TestAIInteractableType : public UBTDecorator_BlackboardBase
	{
	public:
		class UClass*                                              Type;                                                    // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_AimAIInteractable
	 * Size -> 0x0078 (FullSize[0x00E8] - InheritedSize[0x0070])
	 */
	class UBTService_AimAIInteractable : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              Interactable;                                            // 0x0070(0x0028) Edit
		struct FBlackboardKeySelector                              TargetForInteractable;                                   // 0x0098(0x0028) Edit
		struct FBlackboardKeySelector                              TargetRelativeAimVector;                                 // 0x00C0(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_DefaultFocusToPosAtRelativeAngleToObject
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UBTService_DefaultFocusToPosAtRelativeAngleToObject : public UBTService_DefaultFocus
	{
	public:
		float                                                      RelativeYawAngleOffset;                                  // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RelativeDistance;                                        // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_DetermineAIAbility
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTService_DetermineAIAbility : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              BlockChangeAIAbilitiesKey;                               // 0x0070(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_DisableCollisions
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTService_DisableCollisions : public UBTService
	{
	public:
		TArray<ECollisionChannel>                                  ChannelsToLeaveUnaffected;                               // 0x0070(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_DisableDamageResponses
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTService_DisableDamageResponses : public UBTService
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_DisableStun
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTService_DisableStun : public UBTService
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_EnableFaceFocusActor
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	class UBTService_EnableFaceFocusActor : public UBTService_BlackboardBase
	{
	public:
		bool                                                       DisableUpdateMoveFocusForCurrentPathOnExit;              // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XJMT[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConditionalBasedOnBlackboardKey                    Conditional;                                             // 0x00A0(0x0038) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UBTService_IncrementFloatValueWithTimeSpentInBranch : public UBTService_BlackboardBase
	{
	public:
		float                                                      TimeMultiplier;                                          // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WM4B[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_OverrideTurnSpeed
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	class UBTService_OverrideTurnSpeed : public UBTService
	{
	public:
		struct FAIDataProviderFloatValue                           TurnSpeed;                                               // 0x0070(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_PlayCustomMontageId
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTService_PlayCustomMontageId : public UBTService
	{
	public:
		struct FCustomAnimationMontageId                           CustomAnimationMontageId;                                // 0x0070(0x0008) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_QueryPerceptionForTarget
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTService_QueryPerceptionForTarget : public UBTService
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_RunEQSQuery
	 * Size -> 0x0050 (FullSize[0x00E8] - InheritedSize[0x0098])
	 */
	class UBTService_RunEQSQuery : public UBTService_BlackboardBase
	{
	public:
		bool                                                       OverrideQueryTemplateWithBlackboardValue;                // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_MHRS[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              OverrideEQSKey;                                          // 0x00A0(0x0028) Edit, Protected
		class UEnvQuery*                                           QueryTemplate;                                           // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FEnvNamedValue>                              QueryParams;                                             // 0x00D0(0x0010) Edit, ZeroConstructor
		EEnvQueryRunMode                                           RunMode;                                                 // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ThrottleQueryTimePerFrame;                               // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I49U[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSecondsToSpendOnQueryPerFrame;                        // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_DoesEQSQuerySucceed
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UBTService_DoesEQSQuerySucceed : public UBTService_RunEQSQuery
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_RunEQSQueryOnActorMovement
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UBTService_RunEQSQueryOnActorMovement : public UBTService_RunEQSQuery
	{
	public:
		struct FBlackboardKeySelector                              MovingActorKey;                                          // 0x00E8(0x0028) Edit, Protected
		float                                                      MinimumActorMovementToRunEQS;                            // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      MinimumActorVelocityChangeToRunEQS;                      // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		bool                                                       RunEQSForYawChanges;                                     // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_R2SG[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumActorYawChangeToRunEQS;                           // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_R3Z0[0x8];                                   // 0x0120(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_SetAIAnimationState
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UBTService_SetAIAnimationState : public UBTService_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_SetAIStrategy
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTService_SetAIStrategy : public UBTService
	{
	public:
		class UClass*                                              NewStrategy;                                             // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              BoolValueKey;                                            // 0x0070(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTService_SetBoolBlackboardValueTrueWhileRelevant : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              BoolValueKey;                                            // 0x0070(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	class UBTService_SetNameBlackboardValueWhileRelevant : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              NameValueKey;                                            // 0x0070(0x0028) Edit
		class FName                                                Value;                                                   // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_TriggerNotifications
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTService_TriggerNotifications : public UBTService
	{
	public:
		class UClass*                                              EnterBranchNotificationId;                               // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              LeaveBranchNotificationId;                               // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_HNCG[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_UpdateFocusOnBBChange
	 * Size -> 0x0040 (FullSize[0x00E0] - InheritedSize[0x00A0])
	 */
	class UBTService_UpdateFocusOnBBChange : public UBTService_DefaultFocus
	{
	public:
		bool                                                       DisableUpdateMoveFocusForCurrentPathOnExit;              // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6ZLH[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConditionalBasedOnBlackboardKey                    Conditional;                                             // 0x00A8(0x0038) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UBTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile : public UBTService_UpdateFocusOnBBChange
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_UpdateTargetForInteractable
	 * Size -> 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
	 */
	class UBTService_UpdateTargetForInteractable : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              Interactable;                                            // 0x0070(0x0028) Edit
		struct FBlackboardKeySelector                              TargetForInteractable;                                   // 0x0098(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UBTService_UpdateViewPitchForWieldedProjectileToHitTarget : public UBTService_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_ApplyStatusComposite
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UBTTask_ApplyStatusComposite : public UBTTaskNode
	{
	public:
		bool                                                       bOneShot;                                                // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FWK5[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           ContinuousStatusDuration;                                // 0x0068(0x0030) Edit, ContainsInstancedReference
		struct FStatus                                             StatusToApply;                                           // 0x0098(0x0018) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_AthenaMoveTo
	 * Size -> 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
	 */
	class UBTTask_AthenaMoveTo : public UBTTask_MoveTo
	{
	public:
		bool                                                       ShouldFailBeforeSlowDown;                                // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TXBC[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExitBeforeSlowDownDistanceTolerance;                     // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldOverrideMaxSpeedToSlow;                            // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JAVN[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideMaxSpeedToSlowDistanceFactor;                    // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MaintainFacingBeforeMove;                                // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TKFO[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_MoveToFailOnDistanceChange
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UBTTask_MoveToFailOnDistanceChange : public UBTTask_AthenaMoveTo
	{
	public:
		bool                                                       FailOnDistanceBeingLess;                                 // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_79MF[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FailDistance;                                            // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors
	 * Size -> 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
	 */
	class UBTTask_MoveToFailOnDistanceToSeenActors : public UBTTask_MoveToFailOnDistanceChange
	{
	public:
		unsigned char                                              UnknownData_05Q4[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged
	 * Size -> 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
	 */
	class UBTTask_MoveToFailOnDistanceToTargetChanged : public UBTTask_MoveToFailOnDistanceChange
	{
	public:
		struct FBlackboardKeySelector                              TargetBlackboardKey;                                     // 0x00C0(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_MoveToMovingLocation
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UBTTask_MoveToMovingLocation : public UBTTask_AthenaMoveTo
	{
	public:
		float                                                      MinimumLocationMovementForRePath;                        // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumTimeBeforeRePath;                                 // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsContinuous;                                            // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SQWG[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_AthenaWait
	 * Size -> 0x0098 (FullSize[0x00F8] - InheritedSize[0x0060])
	 */
	class UBTTask_AthenaWait : public UBTTaskNode
	{
	public:
		bool                                                       UseMinMax;                                               // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9I8I[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           Min;                                                     // 0x0068(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           Max;                                                     // 0x0098(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           FixedWaitTime;                                           // 0x00C8(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_AthenaWaitWithFloor
	 * Size -> 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
	 */
	class UBTTask_AthenaWaitWithFloor : public UBTTask_AthenaWait
	{
	public:
		struct FAIDataProviderFloatValue                           Floor;                                                   // 0x00F8(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_BurrowAbilityTriggerEruptAreaFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBTTask_BurrowAbilityTriggerEruptAreaFromBlackboard : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_BurrowIntoGround
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBTTask_BurrowIntoGround : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_ClearBlackboardValue
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UBTTask_ClearBlackboardValue : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_ClearPerceptualData
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBTTask_ClearPerceptualData : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard
	 * Size -> 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
	 */
	class UBTTask_CopyAIInteractionPointAndFocusToBlackboard : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              SourceInteractable;                                      // 0x0060(0x0028) Edit
		struct FBlackboardKeySelector                              InteractionPosition;                                     // 0x0088(0x0028) Edit
		struct FBlackboardKeySelector                              InteractionFocusPosition;                                // 0x00B0(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_CopyBlackboardActor
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UBTTask_CopyBlackboardActor : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              SrcBlackboardKey;                                        // 0x0060(0x0028) Edit
		struct FBlackboardKeySelector                              TargetBlackboardKey;                                     // 0x0088(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_CopyBlackboardVector
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UBTTask_CopyBlackboardVector : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              SrcBlackboardKey;                                        // 0x0060(0x0028) Edit
		struct FBlackboardKeySelector                              TargetBlackboardKey;                                     // 0x0088(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_DetermineFollowUpAIAbility
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_DetermineFollowUpAIAbility : public UBTTaskNode
	{
	public:
		class UClass*                                              AIAbilityTypeToFollowUp;                                 // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_ExecuteAIAbility
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_ExecuteAIAbility : public UBTTaskNode
	{
	public:
		class UClass*                                              AIAbilityType;                                           // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_GetCurrentHealth
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UBTTask_GetCurrentHealth : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_IgnoreActorTemporarily
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_IgnoreActorTemporarily : public UBTTask_BlackboardBase
	{
	public:
		float                                                      TimeToForget;                                            // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5ZL8[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_IncrementBlackboardFloatValue
	 * Size -> 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
	 */
	class UBTTask_IncrementBlackboardFloatValue : public UBTTask_BlackboardBase
	{
	public:
		struct FAIDataProviderFloatValue                           FloatValueDelta;                                         // 0x0088(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_IncrementBlackboardIntValue
	 * Size -> 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
	 */
	class UBTTask_IncrementBlackboardIntValue : public UBTTask_BlackboardBase
	{
	public:
		struct FAIDataProviderIntValue                             IntegerValueDelta;                                       // 0x0088(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_InteractWith
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_InteractWith : public UBTTask_BlackboardBase
	{
	public:
		class UClass*                                              NotificationId;                                          // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_MoveToTarget
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	class UBTTask_MoveToTarget : public UBTTask_MoveTo
	{
	public:
		float                                                      MaxDistFromDestinationPosToTargetPos;                    // 0x00A0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverrideMaxSpeedToSlowDistanceFactor;                    // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              TargetBlackboardKey;                                     // 0x00A8(0x0028) Edit, Protected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_NetworkTriggerAnim
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBTTask_NetworkTriggerAnim : public UBTTaskNode
	{
	public:
		class UAnimSequence*                                       Anim;                                                    // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimLength;                                              // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimPlayRate;                                            // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_NOP
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_NOP : public UBTTaskNode
	{
	public:
		int32_t                                                    Id;                                                      // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6B96[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_PlayCustomMontageId
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBTTask_PlayCustomMontageId : public UBTTaskNode
	{
	public:
		struct FCustomAnimationMontageId                           CustomAnimationMontageId;                                // 0x0060(0x0008) Edit
		float                                                      TimeToWaitOnServer;                                      // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7C1C[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_PlayMontage
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBTTask_PlayMontage : public UBTTaskNode
	{
	public:
		class UObject*                                             MontageToPlay;                                           // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayAsDynamicMontage;                                    // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S0L5[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_RequestDespawn
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBTTask_RequestDespawn : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetAIStrategy
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_SetAIStrategy : public UBTTaskNode
	{
	public:
		class UClass*                                              NewStrategy;                                             // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBTTask_SetAIStrategyFromWeightedArray : public UBTTaskNode
	{
	public:
		TArray<struct FWeightedAIStrategyChance>                   WeightedStrategies;                                      // 0x0060(0x0010) Edit, ZeroConstructor, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetBlackboardActor
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_SetBlackboardActor : public UBTTask_BlackboardBase
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetBlackboardBoolValue
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_SetBlackboardBoolValue : public UBTTask_BlackboardBase
	{
	public:
		bool                                                       NewValue;                                                // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HC03[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetBlackboardClassValue
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_SetBlackboardClassValue : public UBTTask_BlackboardBase
	{
	public:
		class UClass*                                              ClassValue;                                              // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetBlackboardEQSValue
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_SetBlackboardEQSValue : public UBTTask_BlackboardBase
	{
	public:
		class UEnvQuery*                                           EQS;                                                     // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetBlackboardFloatValue
	 * Size -> 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
	 */
	class UBTTask_SetBlackboardFloatValue : public UBTTask_BlackboardBase
	{
	public:
		struct FAIDataProviderFloatValue                           FloatValue;                                              // 0x0088(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax
	 * Size -> 0x0060 (FullSize[0x00E8] - InheritedSize[0x0088])
	 */
	class UBTTask_SetBlackboardFloatValueFromMinMax : public UBTTask_BlackboardBase
	{
	public:
		struct FAIDataProviderFloatValue                           MinValue;                                                // 0x0088(0x0030) Edit, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MaxValue;                                                // 0x00B8(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray
	 * Size -> 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
	 */
	class UBTTask_SetBlackboardFloatValueFromWeightedArray : public UBTTask_BlackboardBase
	{
	public:
		struct FAIDataProviderStructValue                          WeightedArrayFromParams;                                 // 0x0088(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetBlackboardIntValue
	 * Size -> 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
	 */
	class UBTTask_SetBlackboardIntValue : public UBTTask_BlackboardBase
	{
	public:
		struct FAIDataProviderIntValue                             IntValue;                                                // 0x0088(0x0030) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetBlackboardVectorValue
	 * Size -> 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
	 */
	class UBTTask_SetBlackboardVectorValue : public UBTTask_BlackboardBase
	{
	public:
		bool                                                       UseVectorFromBlackboard;                                 // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3WEQ[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StaticValue;                                             // 0x008C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FBlackboardKeySelector                              BlackboardKeyToUseForVector;                             // 0x0098(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetFollowUpAbility
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_SetFollowUpAbility : public UBTTaskNode
	{
	public:
		class UClass*                                              AIAbilityType;                                           // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetInHiddenActionState
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_SetInHiddenActionState : public UBTTaskNode
	{
	public:
		bool                                                       EnableHiddenActionState;                                 // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_37KM[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetIsHeadingOffNavMeshCheck
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_SetIsHeadingOffNavMeshCheck : public UBTTaskNode
	{
	public:
		bool                                                       DisableIsHeadingOffNavMeshCheck;                         // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJW5[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot
	 * Size -> 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
	 */
	class UBTTask_SetupAITargetWeaponForNextShot : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              Interactable;                                            // 0x0060(0x0028) Edit
		struct FBlackboardKeySelector                              TargetForInteractable;                                   // 0x0088(0x0028) Edit
		struct FBlackboardKeySelector                              TargetRelativeAimVector;                                 // 0x00B0(0x0028) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SetVelocity
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UBTTask_SetVelocity : public UBTTask_BlackboardBase
	{
	public:
		bool                                                       UseBlackboardKey;                                        // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DP65[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NewVelocity;                                             // 0x008C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_SpawnActorAndStore
	 * Size -> 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
	 */
	class UBTTask_SpawnActorAndStore : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BlackBoardKeyNameToStoreActor;                           // 0x0060(0x0028) Edit
		class UClass*                                              ActorToSpawn;                                            // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             SpawnOffset;                                             // 0x0090(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KDDG[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_StopMovementImmediately
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UBTTask_StopMovementImmediately : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_StorePawnLocationInBlackboard
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UBTTask_StorePawnLocationInBlackboard : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_TeleportTo
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UBTTask_TeleportTo : public UBTTask_BlackboardBase
	{
	public:
		bool                                                       UseNavMesh;                                              // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XFRD[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_TriggerNotification
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBTTask_TriggerNotification : public UBTTaskNode
	{
	public:
		class UClass*                                              NotificationId;                                          // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_0N8Z[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BTTask_UnwieldCurrentWeapon
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTTask_UnwieldCurrentWeapon : public UBTTaskNode
	{
	public:
		bool                                                       WaitForSuccessfulUnwield;                                // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShouldUnwieldFast;                                       // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H48Z[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BurrowInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBurrowInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BurrowComponent
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	class UBurrowComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_404C[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BurrowCrackClass;                                        // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              BurrowEruptClass;                                        // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      BurrowFadeoutTime;                                       // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S08T[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABurrowCrack*>                                BurrowCracks;                                            // 0x00E8(0x0010) ZeroConstructor, Transient
		class ABurrowEruptBase*                                    BurrowErupt;                                             // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HMNB[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.CoralShieldVFXComponent
	 * Size -> 0x00E0 (FullSize[0x01A8] - InheritedSize[0x00C8])
	 */
	class UCoralShieldVFXComponent : public UActorComponent
	{
	public:
		class UParticleSystem*                                     VFXAsset;                                                // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                VfxSocketName;                                           // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            SpawnedVFXSystem;                                        // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECoralShieldVFXRole                                        CurrentCoralShieldRole;                                  // 0x00E0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UZKU[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         OffToOnCurve;                                            // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OffToOnDuration;                                         // 0x00F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HLML[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         OnToOffCurve;                                            // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OnToOffDuration;                                         // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                OffToOnParamOverrideName;                                // 0x0104(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                OnToOffParamOverrideName;                                // 0x010C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ReceiverMeshComponentName;                               // 0x0114(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CasterMeshComponentName;                                 // 0x011C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_65PC[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    OverriddenMaterialsForReceive;                           // 0x0128(0x0010) ZeroConstructor, Transient
		TArray<class UMaterialInstanceDynamic*>                    OverriddenMaterialsForCast;                              // 0x0138(0x0010) ZeroConstructor, Transient
		unsigned char                                              UnknownData_Q9ZM[0x60];                                  // 0x0148(0x0060) MISSED OFFSET (PADDING)

	public:
		void OnRep_CurrentCoralShieldRole();
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.CustomSkeletonAnimationDataList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCustomSkeletonAnimationDataList : public UDataAsset
	{
	public:
		TArray<struct FStringAssetReference>                       CustomAnimationAssets;                                   // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_ContextLocationFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_HomePositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_KnockbackPosFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryContext_ThrowableTargetPositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_SeenActors
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_SeenActors : public UEnvQueryContext
	{
	public:
		unsigned char                                              UnknownData_6P1K[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_SeenActorsProjectedToGround : public UEnvQueryContext
	{
	public:
		TArray<class AActor*>                                      SeenActors;                                              // 0x0028(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_CCJ9[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_SpawnedForActorFromBlackboard : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_TargetActorFromBlackboard : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_TargetActorFromBlackboardPredictedLocation : public UEnvQueryContext_TargetActorFromBlackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryContext_TargetActorFromParams
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_TargetActorFromParams : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryGenerator_AIRegionLocations
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_AIRegionLocations : public UEnvQueryGenerator
	{
	public:
		bool                                                       UseOverrideSpawnType;                                    // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RLSP[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OverrideSpawnType;                                       // 0x0054(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H97Z[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryGenerator_FromContext
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_FromContext : public UEnvQueryGenerator
	{
	public:
		class UClass*                                              Context;                                                 // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryGenerator_Line
	 * Size -> 0x00A8 (FullSize[0x0138] - InheritedSize[0x0090])
	 */
	class UEnvQueryGenerator_Line : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		class UClass*                                              FromContext;                                             // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              ToContext;                                               // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FAIDataProviderFloatValue                           PointSpacing;                                            // 0x00A0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderIntValue                             NumExtraPairsOfParallelLines;                            // 0x00D0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           ParallelLineSpacing;                                     // 0x0100(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		float                                                      MaxValidLineLength;                                      // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceIncludeEndPoint;                                    // 0x0134(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ProjectPointsToWaterSurface;                             // 0x0135(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_132H[0x2];                                   // 0x0136(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryGenerator_PointsAtContext
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UEnvQueryGenerator_PointsAtContext : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		class UClass*                                              Context;                                                 // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryGenerator_Sphere
	 * Size -> 0x00D0 (FullSize[0x0160] - InheritedSize[0x0090])
	 */
	class UEnvQueryGenerator_Sphere : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		TArray<struct FAIDataProviderFloatValue>                   Radiuses;                                                // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderIntValue                             NumberOfVerticalCircles;                                 // 0x00A0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderIntValue                             NumberOfHorizontalCircles;                               // 0x00D0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              DefineFirstPointDirection : 1;                           // 0x0100(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_3OQQ[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvDirection                                       FirstPointDirection;                                     // 0x0108(0x0020) Edit, DisableEditOnInstance
		class UClass*                                              Centre;                                                  // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FAIDataProviderFloatValue                           ZOffsetFromCentre;                                       // 0x0130(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryGenerator_WaterArc
	 * Size -> 0x0180 (FullSize[0x0210] - InheritedSize[0x0090])
	 */
	class UEnvQueryGenerator_WaterArc : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		class UClass*                                              Origin;                                                  // 0x0090(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FAIDataProviderIntValue                             NumberOfArcsToGenerate;                                  // 0x0098(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MinArcRadius;                                            // 0x00C8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MaxArcRadius;                                            // 0x00F8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MinArcTiltDegrees;                                       // 0x0128(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MaxArcTiltDegrees;                                       // 0x0158(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MinArcPercentage;                                        // 0x0188(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MaxArcPercentage;                                        // 0x01B8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       IncludeDirectArcToTarget;                                // 0x01E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EIAP[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DirectArcTarget;                                         // 0x01F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_WK6D[0x18];                                  // 0x01F8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryGenerator_WaterDonut
	 * Size -> 0x0160 (FullSize[0x01F0] - InheritedSize[0x0090])
	 */
	class UEnvQueryGenerator_WaterDonut : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           InnerRadius;                                             // 0x0090(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           OuterRadius;                                             // 0x00C0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderIntValue                             NumberOfRings;                                           // 0x00F0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderIntValue                             PointsPerRing;                                           // 0x0120(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FEnvDirection                                       ArcDirection;                                            // 0x0150(0x0020) Edit, DisableEditOnInstance
		struct FAIDataProviderFloatValue                           ArcAngle;                                                // 0x0170(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           ZOffsetFromCentre;                                       // 0x01A0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              Center;                                                  // 0x01D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              bDefineArc : 1;                                          // 0x01D8(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              ProjectPointsToWaterSurface : 1;                         // 0x01D8(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_TL5R[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WaterPlaneSourceContext;                                 // 0x01E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              ApplyZOffsetToProjectPoints : 1;                         // 0x01E8(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_GBFP[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing
	 * Size -> 0x0078 (FullSize[0x0108] - InheritedSize[0x0090])
	 */
	class UEnvQueryGenerator_WaterMultiDeckerRing : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           Radius;                                                  // 0x0090(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FAIDataProviderFloatValue>                   ZOffsetOfRingsFromContext;                               // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderIntValue                             PointsPerRing;                                           // 0x00D0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              Center;                                                  // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryTest_HasLineOfSight
	 * Size -> 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_HasLineOfSight : public UEnvQueryTest
	{
	public:
		ETraceDirection                                            TraceDirection;                                          // 0x0170(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7P99[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Context;                                                 // 0x0178(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryTest_InGameEventExclusionZone
	 * Size -> 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_InGameEventExclusionZone : public UEnvQueryTest
	{
	public:
		float                                                      Radius;                                                  // 0x0170(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T00Y[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryTest_IsAngleInRange2D
	 * Size -> 0x00A0 (FullSize[0x0210] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_IsAngleInRange2D : public UEnvQueryTest
	{
	public:
		struct FEnvDirection                                       LineA;                                                   // 0x0170(0x0020) Edit, DisableEditOnInstance
		struct FEnvDirection                                       LineB;                                                   // 0x0190(0x0020) Edit, DisableEditOnInstance
		struct FAIDataProviderFloatValue                           MinAngleDegrees;                                         // 0x01B0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference
		struct FAIDataProviderFloatValue                           MaxAngleDegrees;                                         // 0x01E0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.EnvQueryTest_WaterHeight
	 * Size -> 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
	 */
	class UEnvQueryTest_WaterHeight : public UEnvQueryTest
	{
	public:
		float                                                      WaterHeightCheckOffset;                                  // 0x0170(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1XNB[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ActorWithWaterPlaneContext;                              // 0x0178(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.HealthGemComponent
	 * Size -> 0x0138 (FullSize[0x0200] - InheritedSize[0x00C8])
	 */
	class UHealthGemComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_L5D6[0x118];                                 // 0x00C8(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    OverridenMaterials;                                      // 0x01E0(0x0010) ZeroConstructor
		class FName                                                EmissiveMaterialParameterName;                           // 0x01F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BuildMaterialMapOnBeginPlay;                             // 0x01F8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZK8J[0x7];                                   // 0x01F9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.IsAIOfClassStatCondition
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIsAIOfClassStatCondition : public UTargetedStatCondition
	{
	public:
		TArray<class UClass*>                                      AIClasses;                                               // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.IsAIOfFormStatCondition
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIsAIOfFormStatCondition : public UTargetedStatCondition
	{
	public:
		TArray<TAssetPtr<class UClass>>                            AllowedAIForms;                                          // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.IsAIOfSkillsetStatCondition
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIsAIOfSkillsetStatCondition : public UTargetedStatCondition
	{
	public:
		TArray<class UAthenaAIControllerParamsDataAsset*>          AISkillsets;                                             // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.IsAIUsingFormDataAssetStatCondition
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIsAIUsingFormDataAssetStatCondition : public UTargetedStatCondition
	{
	public:
		TArray<class UAthenaAIFormDataAsset*>                      AllowedAIDataAssetForms;                                 // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PeriodicAINoiseEventComponent
	 * Size -> 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
	 */
	class UPeriodicAINoiseEventComponent : public UActorComponent
	{
	public:
		class FName                                                NoiseTag;                                                // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoiseRangeBasedOnMovementSpeed;                          // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HYD3[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConstantNoiseRange;                                      // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         MovementSpeedToNoiseRange;                               // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              OwnerActor;                                              // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_08SZ[0x28];                                  // 0x00E8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.PlayerProximityObservedSpawnContextProvider
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UPlayerProximityObservedSpawnContextProvider : public UObject
	{
	public:
		unsigned char                                              UnknownData_N4KD[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SimpleAIRegion
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USimpleAIRegion : public UObject
	{
	public:
		unsigned char                                              UnknownData_NGIE[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SpawnContextProviderZone
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class ASpawnContextProviderZone : public AActor
	{
	public:
		TArray<class FName>                                        SpawnContextIDs;                                         // 0x03C8(0x0010) Edit, ZeroConstructor
		class UBoxComponent*                                       BoundingBox;                                             // 0x03D8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveContextsFromTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex);
		void AddContextsToTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.BaseSpawnBlockingBehaviourStrategy
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UBaseSpawnBlockingBehaviourStrategy : public USpawnerBehaviourStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.SirenEncounterSpawnBlockingBehaviourStrategy
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class USirenEncounterSpawnBlockingBehaviourStrategy : public UBaseSpawnBlockingBehaviourStrategy
	{
	public:
		float                                                      ChanceToSpawn;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FGPP[0xC];                                   // 0x004C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.StatusResponseSetBlackboardBoolKey
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UStatusResponseSetBlackboardBoolKey : public UStatusResponse
	{
	public:
		class FName                                                BlackboardBoolKeyName;                                   // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bValueWhenActive;                                        // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShouldClearKeyOnEnd;                                     // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GKOD[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.StatusResponseSetBlackboardClassKey
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UStatusResponseSetBlackboardClassKey : public UStatusResponse
	{
	public:
		class FName                                                BlackboardClassKeyName;                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ValueWhenActive;                                         // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       SetValueOnDeactivate;                                    // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HN5J[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ValueWhenDeactivated;                                    // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.StatusResponseSetBlackboardFloatKey
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UStatusResponseSetBlackboardFloatKey : public UStatusResponse
	{
	public:
		class FName                                                BlackboardFloatKeyName;                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ValueWhenActive;                                         // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldClearKeyOnEnd;                                     // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X5MO[0xB];                                   // 0x003D(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.VulnerabilityDuringAIStrategyComponent
	 * Size -> 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
	 */
	class UVulnerabilityDuringAIStrategyComponent : public UActorComponent
	{
	public:
		TArray<struct FAIStrategyVulnerabilityData>                StrategyVulnerabilities;                                 // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UHealthComponent*                                    HealthComponent;                                         // 0x00D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K2AM[0x70];                                  // 0x00E0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AthenaAI.WaterbasedAISupplier
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AWaterbasedAISupplier : public AActor
	{
	public:
		class UAISpawnerList*                                      Spawners;                                                // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
