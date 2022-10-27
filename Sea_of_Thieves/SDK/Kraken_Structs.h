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
	 * Enum Kraken.ECoordinatedKrakenSpecialEventTypes
	 */
	enum class ECoordinatedKrakenSpecialEventTypes : uint8_t
	{
		None                = 0,
		OverrideTargetActor = 1,
		ReleaseTargetActor  = 2,
		BiteAttackImpact    = 3,
		BreathingIn         = 4,
		RoarVisuals         = 5,
		RoarAttack          = 6,
		EnableHeadDamage    = 7,
		MAX                 = 8
	};

	/**
	 * Enum Kraken.ECoordinatedKrakenActionType
	 */
	enum class ECoordinatedKrakenActionType : uint8_t
	{
		Normal    = 0,
		Appear    = 1,
		Disappear = 2,
		MAX       = 3
	};

	/**
	 * Enum Kraken.EKrakenBehaviourType
	 */
	enum class EKrakenBehaviourType : uint8_t
	{
		Idle           = 0,
		ShipHitting    = 1,
		ShipWrapping   = 2,
		PlayerGrabbing = 3,
		MAX            = 4
	};

	/**
	 * Enum Kraken.EKrakenShipWrappingTentacleState
	 */
	enum class EKrakenShipWrappingTentacleState : uint8_t
	{
		Dormant             = 0,
		Wrapping            = 1,
		AmbientWobble       = 2,
		EnteringShakeAttack = 3,
		ShakeAttack         = 4,
		ExitingShakeAttack  = 5,
		HeavyAttack         = 6,
		Unwrapping          = 7,
		MAX                 = 8
	};

	/**
	 * Enum Kraken.EKrakenDynamicsStateEvent
	 */
	enum class EKrakenDynamicsStateEvent : uint8_t
	{
		Damage    = 0,
		Knockback = 1,
		MAX       = 2
	};

	/**
	 * Enum Kraken.EKrakenEQSLockReason
	 */
	enum class EKrakenEQSLockReason : uint8_t
	{
		Spawning = 0,
		MAX      = 1
	};

	/**
	 * Enum Kraken.EKrakenDespawnReason
	 */
	enum class EKrakenDespawnReason : uint8_t
	{
		Invalid               = 0,
		Defeated              = 1,
		TimedOutWithNoTargets = 2,
		TimedOutWithTarget    = 3,
		Dismissed             = 4,
		MAX                   = 5
	};

	/**
	 * Enum Kraken.EKrakenState
	 */
	enum class EKrakenState : uint8_t
	{
		Spawning   = 0,
		Active     = 1,
		Despawning = 2,
		MAX        = 3
	};

	/**
	 * Enum Kraken.EKrakenTentacleBehaviourDamageActions
	 */
	enum class EKrakenTentacleBehaviourDamageActions : uint8_t
	{
		StayActive   = 0,
		MoveActive   = 1,
		FleeInactive = 2,
		MAX          = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Kraken.CoordinatedKrakenSpecialEvent
	 * Size -> 0x000C
	 */
	struct FCoordinatedKrakenSpecialEvent
	{
	public:
		ECoordinatedKrakenSpecialEventTypes                        Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IVXZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeOffset;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5O4N[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.CoordinatedKrakenTentacleAction
	 * Size -> 0x0018
	 */
	struct FCoordinatedKrakenTentacleAction
	{
	public:
		class UClass*                                              State;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    TentacleIndex;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeOffset;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2QZ8[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.CoordinatedKrakenHeadAction
	 * Size -> 0x0010
	 */
	struct FCoordinatedKrakenHeadAction
	{
	public:
		class UClass*                                              State;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TimeOffset;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YANG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.CoordinatedKrakenExplosionEvent
	 * Size -> 0x000C
	 */
	struct FCoordinatedKrakenExplosionEvent
	{
	public:
		int32_t                                                    ExplosionPointIndex;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeOffset;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S8TM[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.CoordinatedKrakenAction
	 * Size -> 0x0330
	 */
	struct FCoordinatedKrakenAction
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActionLength;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECoordinatedKrakenActionType                               ActionType;                                              // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QXRH[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCoordinatedKrakenSpecialEvent>              SpecialEvents;                                           // 0x0010(0x0010) Edit, ZeroConstructor
		TArray<struct FCoordinatedKrakenTentacleAction>            TentacleActions;                                         // 0x0020(0x0010) Edit, ZeroConstructor
		TArray<struct FCoordinatedKrakenHeadAction>                HeadActions;                                             // 0x0030(0x0010) Edit, ZeroConstructor
		TArray<struct FCoordinatedKrakenExplosionEvent>            ExplosionEvents;                                         // 0x0040(0x0010) Edit, ZeroConstructor
		struct FRuntimeVectorCurve                                 TargetActorLocationAnimation;                            // 0x0050(0x0170) Edit
		struct FRuntimeVectorCurve                                 TargetActorRotationAnimation;                            // 0x01C0(0x0170) Edit
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationStateParams
	 * Size -> 0x0010
	 */
	struct FKrakenShipWrappingTentacleAnimationStateParams
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SHK3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StartFrame;                                              // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EndFrame;                                                // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Duration;                                                // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationPhaseCollection
	 * Size -> 0x0080
	 */
	struct FKrakenShipWrappingTentacleAnimationPhaseCollection
	{
	public:
		struct FKrakenShipWrappingTentacleAnimationStateParams     Dormant;                                                 // 0x0000(0x0010) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingTentacleAnimationStateParams     Wrapping;                                                // 0x0010(0x0010) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingTentacleAnimationStateParams     AmbientWobble;                                           // 0x0020(0x0010) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingTentacleAnimationStateParams     EnteringShakeAttack;                                     // 0x0030(0x0010) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingTentacleAnimationStateParams     ShakeAttack;                                             // 0x0040(0x0010) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingTentacleAnimationStateParams     ExitingShakeAttack;                                      // 0x0050(0x0010) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingTentacleAnimationStateParams     HeavyAttack;                                             // 0x0060(0x0010) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingTentacleAnimationStateParams     Unwrapping;                                              // 0x0070(0x0010) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingTentacleVFXParams
	 * Size -> 0x0028
	 */
	struct FKrakenShipWrappingTentacleVFXParams
	{
	public:
		class UParticleSystem*                                     VFX;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TriggerTime;                                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x000C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x0018(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XDAO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingTentacleParams
	 * Size -> 0x00F0
	 */
	struct FKrakenShipWrappingTentacleParams
	{
	public:
		struct FKrakenShipWrappingTentacleAnimationPhaseCollection AnimationStates;                                         // 0x0000(0x0080) Edit, DisableEditOnInstance
		float                                                      TimeIntoWrappingToDisableInteractables;                  // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeIntoUnwrappingToEnableInteractables;                 // 0x0084(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeIntoWrappingToEnableCollisions;                      // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeIntoUnwrappingToDisableCollisions;                   // 0x008C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeIntoEnteringShakeAttackToEnableCollisions;           // 0x0090(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeIntoExitingShakeAttackToDisableCollisions;           // 0x0094(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HighDetailAnimationStreamingDistance;                    // 0x0098(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JL6K[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKrakenShipWrappingTentacleVFXParams                WrappingOutOfWaterSplashVFX;                             // 0x00A0(0x0028) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingTentacleVFXParams                WrappingIntoWaterSplashVFX;                              // 0x00C8(0x0028) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationState
	 * Size -> 0x0010
	 */
	struct FKrakenShipWrappingTentacleAnimationState
	{
	public:
		uint32_t                                                   EpochId;                                                 // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EKrakenShipWrappingTentacleState                           State;                                                   // 0x0004(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V1CP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     EndTime;                                                 // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenTentaclesChanceParams
	 * Size -> 0x0028
	 */
	struct FKrakenTentaclesChanceParams
	{
	public:
		int32_t                                                    NumberOfTentaclesSpawned;                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PRAG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRange                           ProbabilityRange;                                        // 0x0008(0x0020) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenTentacleParams
	 * Size -> 0x0050
	 */
	struct FKrakenTentacleParams
	{
	public:
		struct FWeightedProbabilityRangeOfRanges                   TentacleHealth;                                          // 0x0000(0x0030) Edit, DisableEditOnInstance
		struct FFloatRange                                         InactiveToActiveTentacleTimeout;                         // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InactiveToActiveTentacleTimeoutThresholdInSeconds;       // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceOfInactiveToActiveTentacle;                        // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceOfInactiveToActiveTentacleOnDeathOrFlee;           // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E6KI[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.KrakenWeightedBehaviour
	 * Size -> 0x0008
	 */
	struct FKrakenWeightedBehaviour
	{
	public:
		int32_t                                                    Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EKrakenBehaviourType                                       BehaviourType;                                           // 0x0004(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2ITH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourParamsCollection
	 * Size -> 0x0010
	 */
	struct FKrakenShipWrappingBehaviourParamsCollection
	{
	public:
		TArray<class UKrakenShipWrappingBehaviourParamsDataAsset*> Params;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenShipHittingBehaviourParamsCollection
	 * Size -> 0x0010
	 */
	struct FKrakenShipHittingBehaviourParamsCollection
	{
	public:
		TArray<class UKrakenShipHittingBehaviourParamsDataAsset*>  Params;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenBehaviourParams
	 * Size -> 0x0068
	 */
	struct FKrakenBehaviourParams
	{
	public:
		EKrakenBehaviourType                                       Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YS7Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxInstancesOfBehaviourAllowed;                          // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   TargetTimeout;                                           // 0x0008(0x0030) Edit, DisableEditOnInstance
		class UKrakenIdleBehaviourParamsDataAsset*                 IdleParams;                                              // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKrakenShipWrappingBehaviourParamsCollection        ShipWrappingParams;                                      // 0x0040(0x0010) Edit, DisableEditOnInstance
		struct FKrakenShipHittingBehaviourParamsCollection         ShipHittingParams;                                       // 0x0050(0x0010) Edit, DisableEditOnInstance
		class UKrakenPlayerGrabbingBehaviourParamsDataAsset*       PlayerGrabbingParams;                                    // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenParams
	 * Size -> 0x0160
	 */
	struct FKrakenParams
	{
	public:
		class UClass*                                              MurkClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGeneratedLocationsDataAsset*                        PotentialTentacleSpawnLocations;                         // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRange                           NumberOfTentaclesToSpawn;                                // 0x0010(0x0020) Edit, DisableEditOnInstance
		TArray<struct FKrakenTentaclesChanceParams>                TentaclesRequiredToDismissKraken;                        // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      TickFrequencyToLookForNewBehaviours;                     // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OperatingAreaRadius;                                     // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumOperatingAreaMovementDeltaToInvalidateLocations;  // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadiusToleranceBeforeOperatingAreaDespawn;               // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FKrakenTentaclesChanceParams>                NumTentacleInstancesToAssignToShip;                      // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      GlobalPlayRateScale;                                     // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         NewTargetTimeout;                                        // 0x0064(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FFloatRange                                         UnavailableTargetTimeout;                                // 0x0074(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GAME[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKrakenTentacleParams                               TentacleParams;                                          // 0x0088(0x0050) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   DismissTimeoutWhenNoTargets;                             // 0x00D8(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   DismissTimeoutWithNewTarget;                             // 0x0108(0x0030) Edit, DisableEditOnInstance
		TArray<struct FKrakenWeightedBehaviour>                    ShipInteractingBehaviourWeights;                         // 0x0138(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FKrakenBehaviourParams>                      Behaviours;                                              // 0x0148(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      DamageAmountToTriggerAudioComponentNotification;         // 0x0158(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H0YA[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneFrame
	 * Size -> 0x000C
	 */
	struct FKrakenAnimatedTentacleAnimationBoneFrame
	{
	public:
		struct FVector                                             BoneLocation;                                            // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneTrack
	 * Size -> 0x0010
	 */
	struct FKrakenAnimatedTentacleAnimationBoneTrack
	{
	public:
		TArray<struct FKrakenAnimatedTentacleAnimationBoneFrame>   Frames;                                                  // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Kraken.KrakenAnimatedTentacleMappedAnimation
	 * Size -> 0x0010
	 */
	struct FKrakenAnimatedTentacleMappedAnimation
	{
	public:
		class UAnimSequence*                                       ClientAnimation;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKrakenAnimatedTentacleAnimationDataAsset*           AnimationAsset;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenAnimatedTentacleAnimationSpecBone
	 * Size -> 0x0008
	 */
	struct FKrakenAnimatedTentacleAnimationSpecBone
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenAnimatedTentacleTransitionAnimation
	 * Size -> 0x0020
	 */
	struct FKrakenAnimatedTentacleTransitionAnimation
	{
	public:
		class UClass*                                              FromState;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      BranchAnimationTimeRemaining;                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZMUK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               TransitionAnimations;                                    // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Kraken.KrakenAnimatedTentacleStateAnimationMapping
	 * Size -> 0x0028
	 */
	struct FKrakenAnimatedTentacleStateAnimationMapping
	{
	public:
		class UClass*                                              State;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAnimSequence*                                       Animation;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Loop;                                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QS7I[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKrakenAnimatedTentacleTransitionAnimation>  Transitions;                                             // 0x0018(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Kraken.KrakenHeadTransitionAnimation
	 * Size -> 0x0010
	 */
	struct FKrakenHeadTransitionAnimation
	{
	public:
		class UClass*                                              FromState;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAnimSequence*                                       TransitionAnimation;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenHeadStateAnimationMapping
	 * Size -> 0x0028
	 */
	struct FKrakenHeadStateAnimationMapping
	{
	public:
		class UClass*                                              State;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAnimSequence*                                       Animation;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Loop;                                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5LAK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKrakenHeadTransitionAnimation>              Transitions;                                             // 0x0018(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Kraken.HeadStateChangeRequest
	 * Size -> 0x0018
	 */
	struct FHeadStateChangeRequest
	{
	public:
		class UClass*                                              RequestedState;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FGuid                                               StateChangeID;                                           // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Kraken.KrakenHeadHealthPair
	 * Size -> 0x0008
	 */
	struct FKrakenHeadHealthPair
	{
	public:
		int32_t                                                    PlayerCount;                                             // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KrakenHeadHealth;                                        // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenHeadHitReactAnimations
	 * Size -> 0x0010
	 */
	struct FKrakenHeadHitReactAnimations
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_709M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       HitReactAnimation;                                       // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenTentacleBehaviourActionChances
	 * Size -> 0x0008
	 */
	struct FKrakenTentacleBehaviourActionChances
	{
	public:
		EKrakenTentacleBehaviourDamageActions                      ActionToTransitionTo;                                    // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XVQO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeightedChance;                                          // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenTentacleBehaviourParams
	 * Size -> 0x00C0
	 */
	struct FKrakenTentacleBehaviourParams
	{
	public:
		class UEnvQuery*                                           InactiveSpawnQueryTemplate;                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceOfCannonSideSpawn;                                 // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YZW3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQuery*                                           ActiveCannonSideSpawnQueryTemplate;                      // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           ActiveNonCannonSideSpawnQueryTemplate;                   // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              TentacleClass;                                           // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      MinScale;                                                // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxScale;                                                // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinPlayRateScale;                                        // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxPlayRateScale;                                        // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PanicDespawnShipRangeRadius;                             // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PanicDespawnWatercraftRangeRadius;                       // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PanicDespawnTentacleRadius;                              // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PanicDespawnAnimationPlayRateScale;                      // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreDeathAnimationPlayRateScale;                          // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2RA9[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKrakenTentacleBehaviourActionChances>       OnDamageActionChances;                                   // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   TimeToSpendInInactiveState;                              // 0x0060(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   TimeToSpendInActiveState;                                // 0x0090(0x0030) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenIdleBehaviourParams
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	struct FKrakenIdleBehaviourParams : public FKrakenTentacleBehaviourParams
	{	};

	/**
	 * ScriptStruct Kraken.KrakenPlayerGrabbingHoldingStateTransitionChance
	 * Size -> 0x0010
	 */
	struct FKrakenPlayerGrabbingHoldingStateTransitionChance
	{
	public:
		float                                                      WeightedChance;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QSN0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              StateToTransitionTo;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenPlayerGrabbingBehaviourParams
	 * Size -> 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
	 */
	struct FKrakenPlayerGrabbingBehaviourParams : public FKrakenTentacleBehaviourParams
	{
	public:
		float                                                      MinUnsuccessfulTargetTimeout;                            // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxUnsuccessfulTargetTimeout;                            // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FKrakenPlayerGrabbingHoldingStateTransitionChance> HoldingTransitionChances;                                // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      MinTargetHoldingTime;                                    // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTargetHoldingTime;                                    // 0x00DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetThrowingSpeed;                                     // 0x00E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ONHU[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.KrakenServiceSpawnParams
	 * Size -> 0x0080
	 */
	struct FKrakenServiceSpawnParams
	{
	public:
		float                                                      SpawnLocationDistributionRadius;                         // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnLocationDistributionMinDistanceBetweenPoints;       // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnDistanceInFrontOfShip;                              // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K797[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenSpawnAttemptsRange;                           // 0x0010(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenSpawnAttemptsPostSpawnFailure;                // 0x0040(0x0030) Edit, DisableEditOnInstance
		float                                                      SpawnChance;                                             // 0x0070(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxConsecutiveFailedSpawnAttempts;                       // 0x0074(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           SpawnLocationQuery;                                      // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenServiceShipParams
	 * Size -> 0x0020
	 */
	struct FKrakenServiceShipParams
	{
	public:
		class FName                                                Feature;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      ValidShipTypes;                                          // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		class UKrakenParamsDataAsset*                              KrakenParams;                                            // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenServiceParams
	 * Size -> 0x00A0
	 */
	struct FKrakenServiceParams
	{
	public:
		class UClass*                                              KrakenType;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FKrakenServiceSpawnParams                           SpawnParams;                                             // 0x0008(0x0080) Edit, DisableEditOnInstance
		class UKrakenParamsDataAsset*                              DefaultKrakenParams;                                     // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FKrakenServiceShipParams>                    KrakenParams;                                            // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenShipHittingBehaviourImpactParams
	 * Size -> 0x00A0
	 */
	struct FKrakenShipHittingBehaviourImpactParams
	{
	public:
		int32_t                                                    Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q5I5[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TentacleTransform;                                       // 0x0010(0x0030) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ImpactLocation;                                          // 0x0040(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ImpactForce;                                             // 0x004C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             DamageLocation;                                          // 0x0058(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I30J[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   NumZonesToDamage;                                        // 0x0068(0x0030) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_HSN2[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.KrakenShipHittingBehaviourParams
	 * Size -> 0x0060
	 */
	struct FKrakenShipHittingBehaviourParams
	{
	public:
		class UClass*                                              ShipSize;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              TentacleType;                                            // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   DamageRequiredToCancelImpact;                            // 0x0010(0x0030) Edit, DisableEditOnInstance
		float                                                      CancellationThreshold;                                   // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ImpactTime;                                              // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LevelsOfDamage;                                          // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2YRY[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKrakenShipHittingBehaviourImpactParams>     Configurations;                                          // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourNamedTransform
	 * Size -> 0x0040
	 */
	struct FKrakenShipWrappingBehaviourNamedTransform
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_10XQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourWarningParams
	 * Size -> 0x00A0
	 */
	struct FKrakenShipWrappingBehaviourWarningParams
	{
	public:
		class UClass*                                              TentacleType;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TickDuration;                                            // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         TentacleTimeoutRange;                                    // 0x000C(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LE2Y[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   TentacleHealthRange;                                     // 0x0020(0x0030) Edit, DisableEditOnInstance
		TArray<struct FKrakenShipWrappingBehaviourNamedTransform>  TentacleLocations;                                       // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      TentacleTimeout;                                         // 0x0060(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TentacleHealth;                                          // 0x0064(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YJEW[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TentacleLocation;                                        // 0x0070(0x0030) Transient, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Kraken.KrakenAnchorDynamicsParams
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FKrakenAnchorDynamicsParams : public FStandardAnchorDynamicsParameters
	{	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadLocations
	 * Size -> 0x0020
	 */
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations
	{
	public:
		TArray<struct FKrakenShipWrappingBehaviourNamedTransform>  Near;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FKrakenShipWrappingBehaviourNamedTransform>  Far;                                                     // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenDynamicsStateEvent
	 * Size -> 0x000C
	 */
	struct FKrakenDynamicsStateEvent
	{
	public:
		EKrakenDynamicsStateEvent                                  Event;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X1II[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Time;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenDynamicsStateFragmentParams
	 * Size -> 0x0020
	 */
	struct FKrakenDynamicsStateFragmentParams
	{
	public:
		class UCurveVector*                                        TorqueCurve;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaselineTorque;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_00BG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKrakenDynamicsStateEvent>                   Events;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenDynamicsStateParams
	 * Size -> 0x0010
	 */
	struct FKrakenDynamicsStateParams
	{
	public:
		TArray<struct FKrakenDynamicsStateFragmentParams>          FragmentParams;                                          // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenDynamicsParams
	 * Size -> 0x0050
	 */
	struct FKrakenDynamicsParams
	{
	public:
		struct FKrakenDynamicsStateParams                          AmbientWobble;                                           // 0x0000(0x0010) Edit, DisableEditOnInstance
		struct FKrakenDynamicsStateParams                          EnteringShakeAttack;                                     // 0x0010(0x0010) Edit, DisableEditOnInstance
		struct FKrakenDynamicsStateParams                          ShakeAttack;                                             // 0x0020(0x0010) Edit, DisableEditOnInstance
		struct FKrakenDynamicsStateParams                          ExitingShakeAttack;                                      // 0x0030(0x0010) Edit, DisableEditOnInstance
		struct FKrakenDynamicsStateParams                          HeavyAttack;                                             // 0x0040(0x0010) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationParams
	 * Size -> 0x00E0
	 */
	struct FKrakenShipWrappingBehaviourWrapLocationParams
	{
	public:
		class UClass*                                              TentacleType;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             WrapLocationAnchorPoint;                                 // 0x0008(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YIYT[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TentacleHeadHoldShipLocation;                            // 0x0020(0x0030) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FKrakenShipWrappingBehaviourTentacleHeadLocations   PortTentacleHeadLocations;                               // 0x0050(0x0020) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingBehaviourTentacleHeadLocations   StarboardTentacleHeadLocations;                          // 0x0070(0x0020) Edit, DisableEditOnInstance
		struct FKrakenDynamicsParams                               DynamicsParams;                                          // 0x0090(0x0050) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationWeightedParams
	 * Size -> 0x00F0
	 */
	struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7Z60[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKrakenShipWrappingBehaviourWrapLocationParams      Params;                                                  // 0x0010(0x00E0) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapParams
	 * Size -> 0x0140
	 */
	struct FKrakenShipWrappingBehaviourWrapParams
	{
	public:
		struct FFloatRange                                         WrapTimeBeforeGivingUpRange;                             // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ShipInternalWaterLevelToTriggerUnwrap;                   // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8J9Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKrakenAnchorDynamicsParams                         AnchorDynamicsParams;                                    // 0x0018(0x0028) Edit, DisableEditOnInstance
		TArray<struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams> WrapLocations;                                           // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      WrapTimeBeforeGivingUp;                                  // 0x0050(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2VTB[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKrakenShipWrappingBehaviourWrapLocationParams      WrapLocation;                                            // 0x0060(0x00E0) Transient
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadParams
	 * Size -> 0x0048
	 */
	struct FKrakenShipWrappingBehaviourTentacleHeadParams
	{
	public:
		class UClass*                                              TentacleType;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   DamageRequiredToRelocate;                                // 0x0008(0x0030) Edit, DisableEditOnInstance
		float                                                      RelocationThreshold;                                     // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceOfSwitchingSides;                                  // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceOfSelectingNearLocationAfterSwitchingSides;        // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceOfSelectingSelectingDifferentDistanceFromShipWhenRemaningOnSameSide; // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourShakeAttackParams
	 * Size -> 0x0068
	 */
	struct FKrakenShipWrappingBehaviourShakeAttackParams
	{
	public:
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenShakeAttackAttempts;                          // 0x0000(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   AttackDuration;                                          // 0x0030(0x0030) Edit, DisableEditOnInstance
		uint32_t                                                   MaxFailedShakeAttackAttempts;                            // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceOfShake;                                           // 0x0064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourHeavyAttackParams
	 * Size -> 0x00D8
	 */
	struct FKrakenShipWrappingBehaviourHeavyAttackParams
	{
	public:
		struct FWeightedProbabilityRangeOfRanges                   AttackDuration;                                          // 0x0000(0x0030) Edit, DisableEditOnInstance
		float                                                      ChanceOfEnteringHeavyAttack;                             // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnockBackInfo                                      ExteriorKnockbackParams;                                 // 0x0034(0x0050) Edit, DisableEditOnInstance
		struct FKnockBackInfo                                      InteriorKnockbackParams;                                 // 0x0084(0x0050) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_6YWX[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourDamageParams
	 * Size -> 0x0070
	 */
	struct FKrakenShipWrappingBehaviourDamageParams
	{
	public:
		float                                                      ChanceOfDamagingBottomDeckDamageHoles;                   // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceThatExistingHolesWillBeDamaged;                    // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LevelsOfDamage;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_39XQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   NumHolesToDamageRange;                                   // 0x0010(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   DamageIntervalRange;                                     // 0x0040(0x0030) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourHealthParams
	 * Size -> 0x0038
	 */
	struct FKrakenShipWrappingBehaviourHealthParams
	{
	public:
		struct FWeightedProbabilityRangeOfRanges                   HealthReductionRequiredToUnwrapTheShipRange;             // 0x0000(0x0030) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_YKTB[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.KrakenShipWrappingBehaviourParams
	 * Size -> 0x0420
	 */
	struct FKrakenShipWrappingBehaviourParams
	{
	public:
		class UClass*                                              ShipSize;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_JUUC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKrakenShipWrappingBehaviourWarningParams           WarningParams;                                           // 0x0010(0x00A0) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingBehaviourWrapParams              WrapParams;                                              // 0x00B0(0x0140) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingBehaviourTentacleHeadParams      TentacleHeadParams;                                      // 0x01F0(0x0048) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingBehaviourShakeAttackParams       ShakeAttackParams;                                       // 0x0238(0x0068) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingBehaviourHeavyAttackParams       HeavyAttackParams;                                       // 0x02A0(0x00D8) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingBehaviourDamageParams            DamageParams;                                            // 0x0378(0x0070) Edit, DisableEditOnInstance
		struct FKrakenShipWrappingBehaviourHealthParams            HealthParams;                                            // 0x03E8(0x0038) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Kraken.KrakenWorldSettingsParams
	 * Size -> 0x0001
	 */
	struct FKrakenWorldSettingsParams
	{
	public:
		bool                                                       KrakenEnabled;                                           // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Kraken.CoordinatedKrakenPhaseAssetEntry
	 * Size -> 0x0040
	 */
	struct FCoordinatedKrakenPhaseAssetEntry
	{
	public:
		struct FTransform                                          RelativeAnimationOrigin;                                 // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor
		class UCoordinatedKrakenPhaseActionsDataAsset*             Asset;                                                   // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TLHG[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleTriggerHitReaction
	 * Size -> 0x0004
	 */
	struct FEventKrakenAnimatedTentacleTriggerHitReaction
	{
	public:
		int32_t                                                    CollisionBoneIndex;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleTentacleDead
	 * Size -> 0x0004
	 */
	struct FEventKrakenAnimatedTentacleTentacleDead
	{
	public:
		int32_t                                                    TentacleIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleTakenDamage
	 * Size -> 0x0004
	 */
	struct FEventKrakenAnimatedTentacleTakenDamage
	{
	public:
		int32_t                                                    TentacleIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleTargetVomit
	 * Size -> 0x0004
	 */
	struct FEventKrakenAnimatedTentacleTargetVomit
	{
	public:
		unsigned char                                              UnknownData_8BHR[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentaclePlayerInMouthEnd
	 * Size -> 0x0001
	 */
	struct FEventKrakenAnimatedTentaclePlayerInMouthEnd
	{
	public:
		unsigned char                                              UnknownData_RHAS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentaclePlayerInMouthBegin
	 * Size -> 0x0001
	 */
	struct FEventKrakenAnimatedTentaclePlayerInMouthBegin
	{
	public:
		unsigned char                                              UnknownData_QW29[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingEnd
	 * Size -> 0x0001
	 */
	struct FEventKrakenAnimatedTentacleSuckingEnd
	{
	public:
		unsigned char                                              UnknownData_CWJG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingStart
	 * Size -> 0x0001
	 */
	struct FEventKrakenAnimatedTentacleSuckingStart
	{
	public:
		unsigned char                                              UnknownData_LDIR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenWrappingTentacleTellEnd
	 * Size -> 0x0001
	 */
	struct FEventKrakenWrappingTentacleTellEnd
	{
	public:
		unsigned char                                              UnknownData_G2LK[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenWrappingTentacleTellBegin
	 * Size -> 0x0001
	 */
	struct FEventKrakenWrappingTentacleTellBegin
	{
	public:
		unsigned char                                              UnknownData_K132[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTellEnd
	 * Size -> 0x0001
	 */
	struct FEventKrakenAnimatedTentacleSuckingTellEnd
	{
	public:
		unsigned char                                              UnknownData_6FP2[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTellBegin
	 * Size -> 0x0001
	 */
	struct FEventKrakenAnimatedTentacleSuckingTellBegin
	{
	public:
		unsigned char                                              UnknownData_AUUD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTell
	 * Size -> 0x0001
	 */
	struct FEventKrakenAnimatedTentacleSuckingTell
	{
	public:
		unsigned char                                              UnknownData_QBPY[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleSubmerge
	 * Size -> 0x0001
	 */
	struct FEventKrakenAnimatedTentacleSubmerge
	{
	public:
		unsigned char                                              UnknownData_7738[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleEmerge
	 * Size -> 0x0001
	 */
	struct FEventKrakenAnimatedTentacleEmerge
	{
	public:
		unsigned char                                              UnknownData_ZT5Y[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenTentacleEndPlay
	 * Size -> 0x0001
	 */
	struct FEventKrakenTentacleEndPlay
	{
	public:
		unsigned char                                              UnknownData_LLK2[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleAnimationStopped
	 * Size -> 0x0001
	 */
	struct FEventKrakenAnimatedTentacleAnimationStopped
	{
	public:
		unsigned char                                              UnknownData_7IBQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleAnimationStarted
	 * Size -> 0x0010
	 */
	struct FEventKrakenAnimatedTentacleAnimationStarted
	{
	public:
		class UAnimSequence*                                       Animation;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QRHO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleAuthoritativeAnimationTime
	 * Size -> 0x0004
	 */
	struct FEventKrakenAnimatedTentacleAuthoritativeAnimationTime
	{
	public:
		unsigned char                                              UnknownData_TCN2[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenAnimatedTentacleStateEntered
	 * Size -> 0x0018
	 */
	struct FEventKrakenAnimatedTentacleStateEntered
	{
	public:
		class UClass*                                              State;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              PreviousState;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       SkipTransitions;                                         // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I1NB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenHeadHit
	 * Size -> 0x0001
	 */
	struct FEventKrakenHeadHit
	{
	public:
		unsigned char                                              UnknownData_O1FP[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventCoordinatedKrakenPhaseEnded
	 * Size -> 0x0001
	 */
	struct FEventCoordinatedKrakenPhaseEnded
	{
	public:
		unsigned char                                              UnknownData_VIQZ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.EventKrakenTentacleDestroyed
	 * Size -> 0x0008
	 */
	struct FEventKrakenTentacleDestroyed
	{
	public:
		class AActor*                                              KillingBlowInstigator;                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.EventKrakenDespawned
	 * Size -> 0x0001
	 */
	struct FEventKrakenDespawned
	{
	public:
		EKrakenDespawnReason                                       DespawnReason;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.EventKrakenSpawned
	 * Size -> 0x0018
	 */
	struct FEventKrakenSpawned
	{
	public:
		class AShip*                                               PrimaryShipTarget;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               ConfigSpawnId;                                           // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Kraken.EventKrakenShipWrappingTentacleStateChanged
	 * Size -> 0x0002
	 */
	struct FEventKrakenShipWrappingTentacleStateChanged
	{
	public:
		EKrakenShipWrappingTentacleState                           PreviousState;                                           // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EKrakenShipWrappingTentacleState                           NewState;                                                // 0x0001(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.EventKrakenTentaclePreUninitializeComponents
	 * Size -> 0x0001
	 */
	struct FEventKrakenTentaclePreUninitializeComponents
	{
	public:
		unsigned char                                              UnknownData_HMPS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.KrakenTentacleDestroyedTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FKrakenTentacleDestroyedTelemetryEvent
	{
	public:
		class FString                                              KrakenId;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Kraken.KrakenDespawnTelemetryEvent
	 * Size -> 0x0018
	 */
	struct FKrakenDespawnTelemetryEvent
	{
	public:
		class FString                                              KrakenId;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		EKrakenDespawnReason                                       KrakenDespawnReason;                                     // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PH62[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Kraken.KrakenSpawnTelemetryEvent
	 * Size -> 0x0030
	 */
	struct FKrakenSpawnTelemetryEvent
	{
	public:
		class FString                                              KrakenId;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		struct FVector                                             SpawnLocation;                                           // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               ConfigSpawnId;                                           // 0x001C(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NWH2[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
