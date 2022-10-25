#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Enum GbxGameSystemCore.EGbxActionEndState
	 */
	enum class EGbxActionEndState : uint8_t
	{
		NotFinished = 0,
		Success     = 1,
		Interrupted = 2,
		Aborted     = 3,
		Denied      = 4,
		Error       = 5,
		MAX         = 6
	};

	/**
	 * Enum GbxGameSystemCore.EStanceStackLayer
	 */
	enum class EStanceStackLayer : uint8_t
	{
		Default   = 0,
		AITree    = 1,
		Blueprint = 2,
		Scripted  = 3,
		Count     = 4,
		MAX       = 5
	};

	/**
	 * Enum GbxGameSystemCore.EFacingChannel
	 */
	enum class EFacingChannel : uint8_t
	{
		Body  = 0,
		Aim   = 1,
		Look  = 2,
		Count = 3,
		MAX   = 4
	};

	/**
	 * Enum GbxGameSystemCore.EFacingInfoType
	 */
	enum class EFacingInfoType : uint8_t
	{
		None          = 0,
		Actor         = 1,
		ActorEyes     = 2,
		Component     = 3,
		Location      = 4,
		Direction     = 5,
		Rotation      = 6,
		Controller    = 7,
		ControllerAim = 8,
		Path          = 9,
		Count         = 10,
		MAX           = 11
	};

	/**
	 * Enum GbxGameSystemCore.ENavAnimState
	 */
	enum class ENavAnimState : uint8_t
	{
		None       = 0,
		Idle       = 1,
		Hop        = 2,
		Start      = 3,
		Move       = 4,
		Stop       = 5,
		TurnIdle   = 6,
		TurnMoving = 7,
		TurnBlend  = 8,
		Max        = 9
	};

	/**
	 * Enum GbxGameSystemCore.EScriptedLadderType
	 */
	enum class EScriptedLadderType : uint8_t
	{
		None               = 0,
		GettingOnAtBottom  = 1,
		GettingOffAtBottom = 2,
		GettingOnAtTop     = 3,
		GettingOffAtTop    = 4,
		MAX                = 5
	};

	/**
	 * Enum GbxGameSystemCore.EUsabilityType
	 */
	enum class EUsabilityType : uint8_t
	{
		Primary   = 0,
		Secondary = 1,
		Count     = 2,
		MAX       = 3
	};

	/**
	 * Enum GbxGameSystemCore.EAIDodgeType
	 */
	enum class EAIDodgeType : uint8_t
	{
		None    = 0,
		Bullet  = 1,
		Grenade = 2,
		Random  = 3,
		Zone    = 4,
		MAX     = 5
	};

	/**
	 * Enum GbxGameSystemCore.EGbxGlyphSetOption
	 */
	enum class EGbxGlyphSetOption : uint8_t
	{
		AutoDetect = 0,
		Set1       = 1,
		Set2       = 2,
		Set3       = 3,
		Set4       = 4,
		Set5       = 5,
		Set6       = 6,
		MAX        = 7
	};

	/**
	 * Enum GbxGameSystemCore.EStatusEffectDurationType
	 */
	enum class EStatusEffectDurationType : uint8_t
	{
		Timed    = 0,
		Infinite = 1,
		MAX      = 2
	};

	/**
	 * Enum GbxGameSystemCore.EHoldToUseMode
	 */
	enum class EHoldToUseMode : uint8_t
	{
		Disabled = 0,
		HoldOnly = 1,
		Both     = 2,
		MAX      = 3
	};

	/**
	 * Enum GbxGameSystemCore.EPawnAttachStatus
	 */
	enum class EPawnAttachStatus : uint8_t
	{
		Unoccupied = 0,
		Attaching  = 1,
		Attached   = 2,
		Detaching  = 3,
		MAX        = 4
	};

	/**
	 * Enum GbxGameSystemCore.ESpawnCostSelection
	 */
	enum class ESpawnCostSelection : uint8_t
	{
		Preset = 0,
		Custom = 1,
		MAX    = 2
	};

	/**
	 * Enum GbxGameSystemCore.EMassSelection
	 */
	enum class EMassSelection : uint8_t
	{
		Automatic = 0,
		Custom    = 1,
		Preset    = 2,
		MAX       = 3
	};

	/**
	 * Enum GbxGameSystemCore.EDamageCausedModificationStrategy
	 */
	enum class EDamageCausedModificationStrategy : uint8_t
	{
		UseSelfModifier       = 0,
		UseInstigatorModifier = 1,
		MAX                   = 2
	};

	/**
	 * Enum GbxGameSystemCore.ECriticalHitDamageOverride
	 */
	enum class ECriticalHitDamageOverride : uint8_t
	{
		None         = 0,
		ForceCrit    = 1,
		ForceNotCrit = 2,
		MAX          = 3
	};

	/**
	 * Enum GbxGameSystemCore.ETeamCollisionChannel
	 */
	enum class ETeamCollisionChannel : uint8_t
	{
		One   = 0,
		Two   = 1,
		Three = 2,
		Four  = 3,
		MAX   = 4
	};

	/**
	 * Enum GbxGameSystemCore.EStanceValueOverrideType
	 */
	enum class EStanceValueOverrideType : uint8_t
	{
		None     = 0,
		Relative = 1,
		Absolute = 2,
		MAX      = 3
	};

	/**
	 * Enum GbxGameSystemCore.ERecentDamageFlags
	 */
	enum class ERecentDamageFlags : uint8_t
	{
		None           = 0,
		CriticalHit    = 1,
		Healing        = 2,
		Shield         = 3,
		Armor          = 4,
		DamageOverTime = 5,
		Resist         = 6,
		ZeroDamage     = 7,
		Weapon         = 8,
		MAX            = 9
	};

	/**
	 * Enum GbxGameSystemCore.EUIStatComparisonResult
	 */
	enum class EUIStatComparisonResult : uint8_t
	{
		None   = 0,
		Better = 1,
		Worse  = 2,
		Same   = 3,
		MAX    = 4
	};

	/**
	 * Enum GbxGameSystemCore.EActorPartTypeSelectionOverrideMode
	 */
	enum class EActorPartTypeSelectionOverrideMode : uint8_t
	{
		PreferredParts = 0,
		OverrideParts  = 1,
		MAX            = 2
	};

	/**
	 * Enum GbxGameSystemCore.EActorPartReplacementMode
	 */
	enum class EActorPartReplacementMode : uint8_t
	{
		Additive  = 0,
		Selective = 1,
		Complete  = 2,
		MAX       = 3
	};

	/**
	 * Enum GbxGameSystemCore.EActorTagQueryMode
	 */
	enum class EActorTagQueryMode : uint8_t
	{
		HasAny  = 0,
		HasNone = 1,
		HasAll  = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxGameSystemCore.EChargeCurveType
	 */
	enum class EChargeCurveType : uint8_t
	{
		Relative = 0,
		Absolute = 1,
		MAX      = 2
	};

	/**
	 * Enum GbxGameSystemCore.ERelativeSizeCharge
	 */
	enum class ERelativeSizeCharge : uint8_t
	{
		Everyone      = 0,
		SameAndBigger = 1,
		OnlyBigger    = 2,
		None          = 3,
		MAX           = 4
	};

	/**
	 * Enum GbxGameSystemCore.EAnimActionDefInput
	 */
	enum class EAnimActionDefInput : uint8_t
	{
		AnimAsset     = 0,
		AnimAssetName = 1,
		MAX           = 2
	};

	/**
	 * Enum GbxGameSystemCore.EAnimNotifyAlignType
	 */
	enum class EAnimNotifyAlignType : uint8_t
	{
		Self    = 0,
		Partner = 1,
		MAX     = 2
	};

	/**
	 * Enum GbxGameSystemCore.EAttributeInitializerUsageMode
	 */
	enum class EAttributeInitializerUsageMode : uint8_t
	{
		Set    = 0,
		Add    = 1,
		Scale  = 2,
		Offset = 3,
		MAX    = 4
	};

	/**
	 * Enum GbxGameSystemCore.EBalanceValueType
	 */
	enum class EBalanceValueType : uint8_t
	{
		GameStage       = 0,
		ExperienceLevel = 1,
		MAX             = 2
	};

	/**
	 * Enum GbxGameSystemCore.EChallengeType
	 */
	enum class EChallengeType : uint8_t
	{
		ECT_Stat              = 0,
		ECT_LevelObject       = 1,
		ECT_DesignerTriggered = 2,
		ECT_Blueprint         = 3,
		ECT_MAX               = 4
	};

	/**
	 * Enum GbxGameSystemCore.ECharacterMovementAttributeValueType
	 */
	enum class ECharacterMovementAttributeValueType : uint8_t
	{
		Speed   = 0,
		Speed2D = 1,
		MAX     = 2
	};

	/**
	 * Enum GbxGameSystemCore.ECinematicAudioMode
	 */
	enum class ECinematicAudioMode : uint8_t
	{
		NormalWorldAudio  = 0,
		StandardCinematic = 1,
		ExclusiveMode     = 2,
		MAX               = 3
	};

	/**
	 * Enum GbxGameSystemCore.EConditionalAreaDamageFilter
	 */
	enum class EConditionalAreaDamageFilter : uint8_t
	{
		MustNotBeRadiusDamage = 0,
		MustBeRadiusDamage    = 1,
		MAX                   = 2
	};

	/**
	 * Enum GbxGameSystemCore.EConditionalDamageCriticalFilter
	 */
	enum class EConditionalDamageCriticalFilter : uint8_t
	{
		HitRegionMustBeCritical     = 0,
		HitRegioneMustNotBeCritical = 1,
		MustBeAnyCritical           = 2,
		MustNotBeAnyCritical        = 3,
		MAX                         = 4
	};

	/**
	 * Enum GbxGameSystemCore.EDamageFilterExprMode
	 */
	enum class EDamageFilterExprMode : uint8_t
	{
		MustMatch    = 0,
		MustNotMatch = 1,
		MAX          = 2
	};

	/**
	 * Enum GbxGameSystemCore.EConditionalDamageTypeBonusMode
	 */
	enum class EConditionalDamageTypeBonusMode : uint8_t
	{
		AddBonusDamage                          = 0,
		AddBonusDamage_BackToAttacker           = 1,
		AddBonusDamage_BackToAttackerInstigator = 2,
		ConvertPartialDamage                    = 3,
		ConvertAllDamage                        = 4,
		MAX                                     = 5
	};

	/**
	 * Enum GbxGameSystemCore.EConditionalDamageModifierType
	 */
	enum class EConditionalDamageModifierType : uint8_t
	{
		Scale       = 0,
		Add         = 1,
		ScaleSimple = 2,
		MAX         = 3
	};

	/**
	 * Enum GbxGameSystemCore.ECMInheritVelocityType
	 */
	enum class ECMInheritVelocityType : uint8_t
	{
		Forward  = 0,
		Backward = 1,
		Right    = 2,
		Left     = 3,
		Up       = 4,
		Down     = 5,
		MAX      = 6
	};

	/**
	 * Enum GbxGameSystemCore.ECMTerminalVelocityModificationType
	 */
	enum class ECMTerminalVelocityModificationType : uint8_t
	{
		OverrideTerminalVelocity = 0,
		ScaleTerminalVelocity    = 1,
		MAX                      = 2
	};

	/**
	 * Enum GbxGameSystemCore.ECMGravityModificationType
	 */
	enum class ECMGravityModificationType : uint8_t
	{
		ScaleGravity        = 0,
		ScaleDefaultGravity = 1,
		OverrideGravity     = 2,
		MAX                 = 3
	};

	/**
	 * Enum GbxGameSystemCore.ECMLedgeBehavior
	 */
	enum class ECMLedgeBehavior : uint8_t
	{
		CanWalkOffLedges    = 0,
		CannotWalkOffLedges = 1,
		StopOnReachedLedge  = 2,
		MAX                 = 3
	};

	/**
	 * Enum GbxGameSystemCore.ECMTeleportPreferenceType
	 */
	enum class ECMTeleportPreferenceType : uint8_t
	{
		Behind_TargetFacing  = 0,
		Ahead_TargetFacing   = 1,
		Behind_MoveDirection = 2,
		Ahead_MoveDirection  = 3,
		MAX                  = 4
	};

	/**
	 * Enum GbxGameSystemCore.ECMMoveLRControlType
	 */
	enum class ECMMoveLRControlType : uint8_t
	{
		None  = 0,
		Yaw   = 1,
		Speed = 2,
		MAX   = 3
	};

	/**
	 * Enum GbxGameSystemCore.ECMMoveFBControlType
	 */
	enum class ECMMoveFBControlType : uint8_t
	{
		None  = 0,
		Pitch = 1,
		Speed = 2,
		MAX   = 3
	};

	/**
	 * Enum GbxGameSystemCore.ECMMovementType
	 */
	enum class ECMMovementType : uint8_t
	{
		Ground             = 0,
		Flying             = 1,
		Falling            = 2,
		MoveNoneRootMotion = 3,
		MAX                = 4
	};

	/**
	 * Enum GbxGameSystemCore.EDamageAreaBoxOriginType
	 */
	enum class EDamageAreaBoxOriginType : uint8_t
	{
		Centered      = 0,
		OffsetByDepth = 1,
		MAX           = 2
	};

	/**
	 * Enum GbxGameSystemCore.EDamageAreaOverlapFilterType
	 */
	enum class EDamageAreaOverlapFilterType : uint8_t
	{
		AllDynamicObjects = 0,
		Profile           = 1,
		Custom            = 2,
		MAX               = 3
	};

	/**
	 * Enum GbxGameSystemCore.EDamageComponentHealthMode
	 */
	enum class EDamageComponentHealthMode : uint8_t
	{
		ResourcePools = 0,
		SimpleHealth  = 1,
		MAX           = 2
	};

	/**
	 * Enum GbxGameSystemCore.EAdditionalDamageClassifier
	 */
	enum class EAdditionalDamageClassifier : uint8_t
	{
		None                 = 0,
		BonusDamage          = 1,
		ReflectedBonusDamage = 2,
		ConvertedDamage      = 3,
		MAX                  = 4
	};

	/**
	 * Enum GbxGameSystemCore.EDebugDisplayVerbosityLevel
	 */
	enum class EDebugDisplayVerbosityLevel : uint8_t
	{
		Normal  = 0,
		Verbose = 1,
		MAX     = 2
	};

	/**
	 * Enum GbxGameSystemCore.EExplosionTinnitusDuration
	 */
	enum class EExplosionTinnitusDuration : uint8_t
	{
		None   = 0,
		Short  = 1,
		Medium = 2,
		Long   = 3,
		MAX    = 4
	};

	/**
	 * Enum GbxGameSystemCore.EFeedbackDataFirstPersonImpulseType
	 */
	enum class EFeedbackDataFirstPersonImpulseType : uint8_t
	{
		None   = 0,
		Custom = 1,
		MAX    = 2
	};

	/**
	 * Enum GbxGameSystemCore.EFeedbackType
	 */
	enum class EFeedbackType : uint8_t
	{
		Ranged       = 0,
		Directional  = 1,
		RandomRumble = 2,
		Continuous   = 3,
		RandomShake  = 4,
		MAX          = 5
	};

	/**
	 * Enum GbxGameSystemCore.EForceSelection
	 */
	enum class EForceSelection : uint8_t
	{
		Custom    = 0,
		Attribute = 1,
		Preset    = 2,
		MAX       = 3
	};

	/**
	 * Enum GbxGameSystemCore.EContainsTagComponent
	 */
	enum class EContainsTagComponent : uint8_t
	{
		HasTagComponent = 0,
		NoTagComponent  = 1,
		MAX             = 2
	};

	/**
	 * Enum GbxGameSystemCore.EGameResourcePoolState
	 */
	enum class EGameResourcePoolState : uint8_t
	{
		RPS_Depleted     = 0,
		RPS_Depleting    = 1,
		RPS_Filled       = 2,
		RPS_Regenerating = 3,
		RPS_MAX          = 4
	};

	/**
	 * Enum GbxGameSystemCore.GameResourcePoolReplicationType
	 */
	enum class EGameResourcePoolReplicationType : uint8_t
	{
		GRPRT_None  = 0,
		GRPRT_Basic = 1,
		GRPRT_Full  = 2,
		GRPRT_MAX   = 3
	};

	/**
	 * Enum GbxGameSystemCore.EAIChargeAnim
	 */
	enum class EAIChargeAnim : uint8_t
	{
		None            = 0,
		Start           = 1,
		Loop            = 2,
		Miss            = 3,
		Strike          = 4,
		HitWall         = 5,
		ReachCliff      = 6,
		StopForFriendly = 7,
		MAX             = 8
	};

	/**
	 * Enum GbxGameSystemCore.EActionSelectionMethod
	 */
	enum class EActionSelectionMethod : uint8_t
	{
		FIRST  = 0,
		RANDOM = 1,
		MAX    = 2
	};

	/**
	 * Enum GbxGameSystemCore.ECoordinatedOwnedParticleAction
	 */
	enum class ECoordinatedOwnedParticleAction : uint8_t
	{
		None     = 0,
		Hide     = 1,
		Suppress = 2,
		MAX      = 3
	};

	/**
	 * Enum GbxGameSystemCore.ECoordinatedParticleScaleMode
	 */
	enum class ECoordinatedParticleScaleMode : uint8_t
	{
		None           = 0,
		LargestAxis    = 1,
		SmallestAxis   = 2,
		HorizontalAxis = 3,
		VerticalAxis   = 4,
		EachAxis       = 5,
		MAX            = 6
	};

	/**
	 * Enum GbxGameSystemCore.ECoordinatedEffectParamScaleMode
	 */
	enum class ECoordinatedEffectParamScaleMode : uint8_t
	{
		None    = 0,
		XBounds = 1,
		YBounds = 2,
		ZBounds = 3,
		MAX     = 4
	};

	/**
	 * Enum GbxGameSystemCore.EDirectionPlane
	 */
	enum class EDirectionPlane : uint8_t
	{
		Horizontal = 0,
		Vertical   = 1,
		MAX        = 2
	};

	/**
	 * Enum GbxGameSystemCore.EGbxPhysicalActionMovementLockMode
	 */
	enum class EGbxPhysicalActionMovementLockMode : uint8_t
	{
		MLM_None          = 0,
		MLM_AquireOnBegin = 1,
		MLM_ReleaseOnEnd  = 2,
		MLM_AquireRelease = 3,
		MLM_MAX           = 4
	};

	/**
	 * Enum GbxGameSystemCore.EGbxPhysicalActionDynamicBodyState
	 */
	enum class EGbxPhysicalActionDynamicBodyState : uint8_t
	{
		DBS_Upright  = 0,
		DBS_FaceDown = 1,
		DBS_FaceUp   = 2,
		DBS_Unknown  = 3,
		DBS_MAX      = 4
	};

	/**
	 * Enum GbxGameSystemCore.EGbxPhysicalActionDynamicBoneActivationMode
	 */
	enum class EGbxPhysicalActionDynamicBoneActivationMode : uint8_t
	{
		DBAM_HitBone   = 0,
		DBAM_Recursive = 1,
		DBAM_FullBody  = 2,
		DBAM_MAX       = 3
	};

	/**
	 * Enum GbxGameSystemCore.EGbxPhysicalActionEndCondition
	 */
	enum class EGbxPhysicalActionEndCondition : uint8_t
	{
		EndCondition_AnimationMatch   = 0,
		EndCondition_NoFatigue        = 1,
		EndCondition_FullFatigue      = 2,
		EndCondition_AnimationEnd     = 3,
		EndCondition_NotAllFlagsMatch = 4,
		EndCondition_NotAnyFlagsMatch = 5,
		EndCondition_Undetermined     = 6,
		EndCondition_MAX              = 7
	};

	/**
	 * Enum GbxGameSystemCore.EGbxPhysicalActionBeginCondition
	 */
	enum class EGbxPhysicalActionBeginCondition : uint8_t
	{
		BeginCondition_Immediate          = 0,
		BeginCondition_WaitUntilPoseMatch = 1,
		BeginCondition_NotAllFlagsMatch   = 2,
		BeginCondition_NotAnyFlagsMatch   = 3,
		BeginCondition_MAX                = 4
	};

	/**
	 * Enum GbxGameSystemCore.ERagdollState
	 */
	enum class ERagdollState : uint8_t
	{
		Start           = 0,
		Anim            = 1,
		Ragdoll         = 2,
		IdlePoseDriving = 3,
		StartBlend      = 4,
		Blend           = 5,
		Getup           = 6,
		Done            = 7,
		MAX             = 8
	};

	/**
	 * Enum GbxGameSystemCore.EDynamicToKinematicTransition
	 */
	enum class EDynamicToKinematicTransition : uint8_t
	{
		NoTransition             = 0,
		RagdollLandToStandUp     = 1,
		PredictiveLanding        = 2,
		AttemptPredictiveLanding = 3,
		MAX                      = 4
	};

	/**
	 * Enum GbxGameSystemCore.EGbxActionEndCondition
	 */
	enum class EGbxActionEndCondition : uint8_t
	{
		EndCondition_BlendOut  = 0,
		EndCondition_LastFrame = 1,
		EndCondition_Loop      = 2,
		EndCondition_MAX       = 3
	};

	/**
	 * Enum GbxGameSystemCore.EGbxActionPriority
	 */
	enum class EGbxActionPriority : uint8_t
	{
		Low       = 0,
		Normal    = 1,
		High      = 2,
		Important = 3,
		MAX       = 4
	};

	/**
	 * Enum GbxGameSystemCore.EGbxActionNetMode
	 */
	enum class EGbxActionNetMode : uint8_t
	{
		ServerAuth   = 0,
		AlwaysRep    = 1,
		LocalOnly    = 2,
		SkipNetOwner = 3,
		MAX          = 4
	};

	/**
	 * Enum GbxGameSystemCore.EActionRegisterType
	 */
	enum class EActionRegisterType : uint8_t
	{
		NoType = 0,
		Float  = 1,
		Int    = 2,
		Object = 3,
		Name   = 4,
		Vector = 5,
		MAX    = 6
	};

	/**
	 * Enum GbxGameSystemCore.EAnimBPProfileImport
	 */
	enum class EAnimBPProfileImport : uint8_t
	{
		All             = 0,
		FootIK          = 1,
		LookAt          = 2,
		ForwardDynamics = 3,
		MAX             = 4
	};

	/**
	 * Enum GbxGameSystemCore.EForwardDynamicsActivation
	 */
	enum class EForwardDynamicsActivation : uint8_t
	{
		PhysicsAssetSimulated            = 0,
		ForwardDynamicsProfileDefinition = 1,
		MAX                              = 2
	};

	/**
	 * Enum GbxGameSystemCore.EGbxAreaDrawStyle
	 */
	enum class EGbxAreaDrawStyle : uint8_t
	{
		None         = 0,
		Wire         = 1,
		Solid        = 2,
		SolidAndWire = 3,
		MAX          = 4
	};

	/**
	 * Enum GbxGameSystemCore.EGbxAttributeModifierActionExecOutput
	 */
	enum class EGbxAttributeModifierActionExecOutput : uint8_t
	{
		Success = 0,
		Failure = 1,
		MAX     = 2
	};

	/**
	 * Enum GbxGameSystemCore.EGbxBoneModifyProfile_PoseMode
	 */
	enum class EGbxBoneModifyProfile_PoseMode : uint8_t
	{
		Override                  = 0,
		Additive                  = 1,
		EGbxBoneModifyProfile_MAX = 2
	};

	/**
	 * Enum GbxGameSystemCore.EBoneModifyTransition_TransformType
	 */
	enum class EBoneModifyTransition_TransformType : uint8_t
	{
		Translation               = 0,
		Rotation                  = 1,
		Scale                     = 2,
		EBoneModifyTransition_MAX = 3
	};

	/**
	 * Enum GbxGameSystemCore.EGbxCharacterBlendPoints
	 */
	enum class EGbxCharacterBlendPoints : uint8_t
	{
		SixPoint   = 0,
		EightPoint = 1,
		MAX        = 2
	};

	/**
	 * Enum GbxGameSystemCore.EMantleUpCheckState
	 */
	enum class EMantleUpCheckState : uint8_t
	{
		Unknown                                                  = 0,
		WallCheck_NoWall                                         = 1,
		WallCheck_TooFlat                                        = 2,
		WallCheck_InvalidHitComponent                            = 3,
		HeadRoomCheck_BlockedAhead                               = 4,
		HeadRoomCheck_BlockedAbove                               = 5,
		StandingSpotCheck_Initial_Ahead_NoFloor                  = 6,
		StandingSpotCheck_Initial_Ahead_InitiallyPenetrating     = 7,
		StandingSpotCheck_Initial_Ahead_InvalidHitComponent      = 8,
		StandingSpotCheck_Final_Ahead_NoFloor                    = 9,
		StandingSpotCheck_Final_Ahead_InitiallyPenetrating       = 10,
		StandingSpotCheck_Final_Ahead_InvalidHitComponent        = 11,
		StandingSpotCheck_Final_Ahead_UnwalkableSlope            = 12,
		StandingSpotCheck_Final_Ahead_OutsideOfHeightTolerance   = 13,
		StandingSpotCheck_Final_Ahead_BlockedAtHead              = 14,
		StandingSpotCheck_Initial_Rotated_NoFloor                = 15,
		StandingSpotCheck_Initial_Rotated_InitiallyPenetrating   = 16,
		StandingSpotCheck_Initial_Rotated_InvalidHitComponent    = 17,
		StandingSpotCheck_Final_Rotated_NoFloor                  = 18,
		StandingSpotCheck_Final_Rotated_InitiallyPenetrating     = 19,
		StandingSpotCheck_Final_Rotated_InvalidHitComponent      = 20,
		StandingSpotCheck_Final_Rotated_UnwalkableSlope          = 21,
		StandingSpotCheck_Final_Rotated_OutsideOfHeightTolerance = 22,
		StandingSpotCheck_Final_Rotated_BlockedAtHead            = 23,
		Good                                                     = 24,
		MAX                                                      = 25
	};

	/**
	 * Enum GbxGameSystemCore.EGbxMovementMode
	 */
	enum class EGbxMovementMode : uint8_t
	{
		GBXMOVE_Ladder             = 0,
		GBXMOVE_Mantle             = 1,
		GBXMOVE_PawnAttached       = 2,
		GBXMOVE_PretendWalk        = 3,
		GBXMOVE_NoneWithRootMotion = 4,
		GBXMOVE_MAX                = 5
	};

	/**
	 * Enum GbxGameSystemCore.EMassComparison
	 */
	enum class EMassComparison : uint8_t
	{
		LessThanOrEqual    = 0,
		LessThan           = 1,
		EqualTo            = 2,
		NotEqualTo         = 3,
		GreaterThan        = 4,
		GreaterThanOrEqual = 5,
		MAX                = 6
	};

	/**
	 * Enum GbxGameSystemCore.EConditionComparisonOperatorType
	 */
	enum class EConditionComparisonOperatorType : uint8_t
	{
		EqualTo            = 0,
		NotEqualTo         = 1,
		LessThan           = 2,
		LessThanOrEqual    = 3,
		GreaterThan        = 4,
		GreaterThanOrEqual = 5,
		MAX                = 6
	};

	/**
	 * Enum GbxGameSystemCore.ECompoundConditionOperatorType
	 */
	enum class ECompoundConditionOperatorType : uint8_t
	{
		And = 0,
		Or  = 1,
		Xor = 2,
		Not = 3,
		MAX = 4
	};

	/**
	 * Enum GbxGameSystemCore.ELinkedParameterType
	 */
	enum class ELinkedParameterType : uint8_t
	{
		Scalar  = 0,
		Vector  = 1,
		Texture = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxGameSystemCore.EGbxCustomizationComponentInitSourceType
	 */
	enum class EGbxCustomizationComponentInitSourceType : uint8_t
	{
		None                      = 0,
		CopyFromInstigatorOnSpawn = 1,
		LinkToInstigatorOnSpawn   = 2,
		MAX                       = 3
	};

	/**
	 * Enum GbxGameSystemCore.EDamageSurfaceType
	 */
	enum class EDamageSurfaceType : uint8_t
	{
		Default = 0,
		Flesh   = 1,
		Armor   = 2,
		Shield  = 3,
		MAX     = 4
	};

	/**
	 * Enum GbxGameSystemCore.EGbxFeedbackType
	 */
	enum class EGbxFeedbackType : uint8_t
	{
		Ranged            = 0,
		Directional       = 1,
		RandomRumble      = 2,
		Continuous        = 3,
		RandomShake       = 4,
		EFeedbackType_MAX = 5,
		MAX               = 6
	};

	/**
	 * Enum GbxGameSystemCore.EGbxFlagEval
	 */
	enum class EGbxFlagEval : uint8_t
	{
		IsTrue              = 0,
		IsFalse             = 1,
		TrueForXSeconds     = 2,
		FalseForXSeconds    = 3,
		TrueWithinXSeconds  = 4,
		FalseWithinXSeconds = 5,
		MAX                 = 6
	};

	/**
	 * Enum GbxGameSystemCore.EPlayersOverlappingActorOutput
	 */
	enum class EPlayersOverlappingActorOutput : uint8_t
	{
		Overlapping    = 0,
		NotOverlapping = 1,
		MAX            = 2
	};

	/**
	 * Enum GbxGameSystemCore.EPlayersInVolumeOutput
	 */
	enum class EPlayersInVolumeOutput : uint8_t
	{
		InVolume    = 0,
		NotInVolume = 1,
		MAX         = 2
	};

	/**
	 * Enum GbxGameSystemCore.EIsAutonomousOuput
	 */
	enum class EIsAutonomousOuput : uint8_t
	{
		Autonomous    = 0,
		NotAutonomous = 1,
		MAX           = 2
	};

	/**
	 * Enum GbxGameSystemCore.EIsPlayerExecOutput
	 */
	enum class EIsPlayerExecOutput : uint8_t
	{
		Player    = 0,
		NotPlayer = 1,
		MAX       = 2
	};

	/**
	 * Enum GbxGameSystemCore.EGbxParamValueFlags
	 */
	enum class EGbxParamValueFlags : uint8_t
	{
		ClampPositive = 0,
		AllBBKeyTypes = 1,
		MAX           = 2
	};

	/**
	 * Enum GbxGameSystemCore.EGbxParamValueType
	 */
	enum class EGbxParamValueType : uint8_t
	{
		Float           = 0,
		Bool            = 1,
		Int             = 2,
		EnvQueryContext = 3,
		Object          = 4,
		Count           = 5,
		MAX             = 6
	};

	/**
	 * Enum GbxGameSystemCore.EGbxParamValueMode
	 */
	enum class EGbxParamValueMode : uint8_t
	{
		Value                       = 0,
		ValueVariance               = 1,
		MinMax                      = 2,
		Actor                       = 3,
		None                        = 4,
		BlackboardKey               = 5,
		Condition                   = 6,
		AttributeInitializationData = 7,
		Count                       = 8,
		MAX                         = 9
	};

	/**
	 * Enum GbxGameSystemCore.EDestructibleDamageThresholdMagnitude
	 */
	enum class EDestructibleDamageThresholdMagnitude : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		Legacy = 3,
		MAX    = 4
	};

	/**
	 * Enum GbxGameSystemCore.EGraphicsMode
	 */
	enum class EGraphicsMode : uint8_t
	{
		Performance = 0,
		Resolution  = 1,
		MAX         = 2
	};

	/**
	 * Enum GbxGameSystemCore.ESpeakerSetup
	 */
	enum class ESpeakerSetup : uint8_t
	{
		SmallSpeaker = 0,
		Hifi         = 1,
		NightTime    = 2,
		Mono         = 3,
		Headphones   = 4,
		Logitech     = 5,
		MAX          = 6
	};

	/**
	 * Enum GbxGameSystemCore.ETimedUpdateBehavior
	 */
	enum class ETimedUpdateBehavior : uint8_t
	{
		DontDoTimedUpdates                  = 0,
		UpdateRegularlyEvenWhenNavigating   = 1,
		UpdateRegularlyExceptWhenNavigating = 2,
		MAX                                 = 3
	};

	/**
	 * Enum GbxGameSystemCore.EQueryOwnerLocationUse
	 */
	enum class EQueryOwnerLocationUse : uint8_t
	{
		Never  = 0,
		Always = 1,
		Only   = 2,
		MAX    = 3
	};

	/**
	 * Enum GbxGameSystemCore.ESimpleMotionType
	 */
	enum class ESimpleMotionType : uint8_t
	{
		None         = 0,
		ScaleByValue = 1,
		Interpolate  = 2,
		Loop         = 3,
		Alternate    = 4,
		MAX          = 5
	};

	/**
	 * Enum GbxGameSystemCore.EGlobalBoneModifyProfile_PoseMode
	 */
	enum class EGlobalBoneModifyProfile_PoseMode : uint8_t
	{
		Override                     = 0,
		Multiplicative               = 1,
		EGlobalBoneModifyProfile_MAX = 2
	};

	/**
	 * Enum GbxGameSystemCore.EHitReactionConditionCombine
	 */
	enum class EHitReactionConditionCombine : uint8_t
	{
		And = 0,
		Or  = 1,
		MAX = 2
	};

	/**
	 * Enum GbxGameSystemCore.EHitReactionConditionContext
	 */
	enum class EHitReactionConditionContext : uint8_t
	{
		ReceiverOwner = 0,
		Receiver      = 1,
		CauserOwner   = 2,
		Causer        = 3,
		DamageType    = 4,
		DamageSource  = 5,
		HitRegion     = 6,
		MAX           = 7
	};

	/**
	 * Enum GbxGameSystemCore.EDamageReactionEventType
	 */
	enum class EDamageReactionEventType : uint8_t
	{
		Health           = 0,
		HealthPersistent = 1,
		Damage           = 2,
		DamageOverTime   = 3,
		MAX              = 4
	};

	/**
	 * Enum GbxGameSystemCore.EHitRegionDamageRule
	 */
	enum class EHitRegionDamageRule : uint8_t
	{
		IndependentHealth       = 0,
		OwnerHealth_DamageCap   = 1,
		OwnerHealth_NoDamageCap = 2,
		MAX                     = 3
	};

	/**
	 * Enum GbxGameSystemCore.EImpactUsage
	 */
	enum class EImpactUsage : uint8_t
	{
		Default  = 0,
		Footstep = 1,
		MAX      = 2
	};

	/**
	 * Enum GbxGameSystemCore.EInstigatorAttributeEffectModifierValueContext
	 */
	enum class EInstigatorAttributeEffectModifierValueContext : uint8_t
	{
		Instigator         = 0,
		ThisInventoryActor = 1,
		MAX                = 2
	};

	/**
	 * Enum GbxGameSystemCore.EInstigatorAttributeEffectAttributeToModifyContextSource
	 */
	enum class EInstigatorAttributeEffectAttributeToModifyContextSource : uint8_t
	{
		ThisInventoryActorWithInstigatorFallback = 0,
		InstigatorOnly                           = 1,
		MAX                                      = 2
	};

	/**
	 * Enum GbxGameSystemCore.EInterpMode
	 */
	enum class EInterpMode : uint8_t
	{
		None      = 0,
		Linear    = 1,
		NonLinear = 2,
		Count     = 3,
		MAX       = 4
	};

	/**
	 * Enum GbxGameSystemCore.EMantleType
	 */
	enum class EMantleType : uint8_t
	{
		MantleUp = 0,
		WallHop  = 1,
		MAX      = 2
	};

	/**
	 * Enum GbxGameSystemCore.ENavAnimType
	 */
	enum class ENavAnimType : uint8_t
	{
		None        = 0,
		Direction   = 1,
		Destination = 2,
		Rotation    = 3,
		MAX         = 4
	};

	/**
	 * Enum GbxGameSystemCore.EAttachmentTransitionTiming
	 */
	enum class EAttachmentTransitionTiming : uint8_t
	{
		ChangePawnBeforeTransition = 0,
		ChangePawnAfterTransition  = 1,
		AttachBaseDuringTransition = 2,
		MAX                        = 3
	};

	/**
	 * Enum GbxGameSystemCore.EAttachmentPossessionRule
	 */
	enum class EAttachmentPossessionRule : uint8_t
	{
		PossessBase = 0,
		Unchanged   = 1,
		MAX         = 2
	};

	/**
	 * Enum GbxGameSystemCore.EPhysicalAnimationBlendToKinematicMode
	 */
	enum class EPhysicalAnimationBlendToKinematicMode : uint8_t
	{
		KinematicLerp           = 0,
		DynamicMatchesAnimation = 1,
		Immediate               = 2,
		MAX                     = 3
	};

	/**
	 * Enum GbxGameSystemCore.EPhysicalAnimationRootMotionControl
	 */
	enum class EPhysicalAnimationRootMotionControl : uint8_t
	{
		PARMC_DrivenByAnimated          = 0,
		PARMC_PureDynamic               = 1,
		PARMC_SimulatedPointDrive       = 2,
		PARMC_SimulatedOrientationDrive = 3,
		PARMC_MAX                       = 4
	};

	/**
	 * Enum GbxGameSystemCore.EAggregateBoneStatusFlag
	 */
	enum class EAggregateBoneStatusFlag : uint8_t
	{
		ABS_HasDynamic          = 0,
		ABS_HasMotion           = 1,
		ABS_HasPoseVariance     = 2,
		ABS_HasFatigue          = 3,
		ABS_HasPlayingAnimation = 4,
		ABS_MAX                 = 5
	};

	/**
	 * Enum GbxGameSystemCore.EAggregateBoneFatigueStatus
	 */
	enum class EAggregateBoneFatigueStatus : uint8_t
	{
		ABFS_FullyFatigued        = 0,
		ABFS_NoFatigue            = 1,
		ABFS_FullyDivergedFatigue = 2,
		ABFS_VariedFatigue        = 3,
		ABFS_MAX                  = 4
	};

	/**
	 * Enum GbxGameSystemCore.ECycleDirection
	 */
	enum class ECycleDirection : uint8_t
	{
		Backward = 0,
		Forward  = 1,
		MAX      = 2
	};

	/**
	 * Enum GbxGameSystemCore.ERelativeDirectionType
	 */
	enum class ERelativeDirectionType : uint8_t
	{
		Default                     = 0,
		ParentOrientation           = 1,
		ParentOrientation2D         = 2,
		InverseParentOrientation    = 3,
		ParentVelocity              = 4,
		ParentVelocity2D            = 5,
		InverseParentVelocity       = 6,
		InverseParentVelocity2D     = 7,
		Random                      = 8,
		RandomUpwards               = 9,
		RandomDownwards             = 10,
		RandomOnHorizontalPlane     = 11,
		StraightUp                  = 12,
		StraightDown                = 13,
		StraightTowardTarget        = 14,
		StraightAwayFromTarget      = 15,
		ParentAimDirection          = 16,
		InverseParentAimDirection   = 17,
		ParentAimDirection2D        = 18,
		InverseParentAimDirection2D = 19,
		ParentAcceleration2D        = 20,
		InverseParentAimOffset      = 21,
		MAX                         = 22
	};

	/**
	 * Enum GbxGameSystemCore.EScreenParticleScalingMode
	 */
	enum class EScreenParticleScalingMode : uint8_t
	{
		FitToHorizontal                        = 0,
		FitToVertical                          = 1,
		FitToExterior                          = 2,
		FitToInterior                          = 3,
		FitToViewport                          = 4,
		DontAdjustScaling                      = 5,
		FitToViewportAndKeepContentAspectRatio = 6,
		MAX                                    = 7
	};

	/**
	 * Enum GbxGameSystemCore.ESimpleMathValueResolverOperatorType
	 */
	enum class ESimpleMathValueResolverOperatorType : uint8_t
	{
		Add      = 0,
		Subtract = 1,
		Multiply = 2,
		Divide   = 3,
		MAX      = 4
	};

	/**
	 * Enum GbxGameSystemCore.ESplitScreenViewportType
	 */
	enum class ESplitScreenViewportType : uint8_t
	{
		Standard   = 0,
		Horizontal = 1,
		Vertical   = 2,
		Quad       = 3,
		MAX        = 4
	};

	/**
	 * Enum GbxGameSystemCore.EStatusEffectStackingInstanceReplacementCriteria
	 */
	enum class EStatusEffectStackingInstanceReplacementCriteria : uint8_t
	{
		ChooseSpec            = 0,
		ChooseLowerDPS        = 1,
		ChooseHigherDPS       = 2,
		ChooseLongerDuration  = 3,
		ChooseShorterDuration = 4,
		MAX                   = 5
	};

	/**
	 * Enum GbxGameSystemCore.EStatusEffectStackingInstanceSelectionCriteria
	 */
	enum class EStatusEffectStackingInstanceSelectionCriteria : uint8_t
	{
		NewestInstance     = 0,
		OldestInstance     = 1,
		MostTimeRemaining  = 2,
		LeastTimeRemaining = 3,
		MAX                = 4
	};

	/**
	 * Enum GbxGameSystemCore.EStretchBonesMarkerMode
	 */
	enum class EStretchBonesMarkerMode : uint8_t
	{
		BeforeMarker   = 0,
		AttachedMarker = 1,
		AfterMarker    = 2,
		MAX            = 3
	};

	/**
	 * Enum GbxGameSystemCore.EStretchBonesActorTrackingStyle
	 */
	enum class EStretchBonesActorTrackingStyle : uint8_t
	{
		FirstFrame          = 0,
		PredictedFirstFrame = 1,
		Track               = 2,
		TrackUntilNotify    = 3,
		NavEntry            = 4,
		NavExit             = 5,
		NavMidpoint         = 6,
		MAX                 = 7
	};

	/**
	 * Enum GbxGameSystemCore.EAimAssistSnapTargetType
	 */
	enum class EAimAssistSnapTargetType : uint8_t
	{
		Default    = 0,
		Disabled   = 1,
		Horizontal = 2,
		Center     = 3,
		MAX        = 4
	};

	/**
	 * Enum GbxGameSystemCore.EAITargetScoringBoost
	 */
	enum class EAITargetScoringBoost : uint8_t
	{
		ReduceExtreme   = 0,
		ReduceModerate  = 1,
		ReduceLight     = 2,
		NoBoost         = 3,
		AmplifyLight    = 4,
		AmplifyModerate = 5,
		AmplifyExtreme  = 6,
		MAX             = 7
	};

	/**
	 * Enum GbxGameSystemCore.ETerritoryCombatProxyType
	 */
	enum class ETerritoryCombatProxyType : uint8_t
	{
		Threat = 0,
		Patrol = 1,
		MAX    = 2
	};

	/**
	 * Enum GbxGameSystemCore.ETerritoryType
	 */
	enum class ETerritoryType : uint8_t
	{
		Patrol = 0,
		Threat = 1,
		Combat = 2,
		MAX    = 3
	};

	/**
	 * Enum GbxGameSystemCore.ETerritoryDrawStyle
	 */
	enum class ETerritoryDrawStyle : uint8_t
	{
		None         = 0,
		Wire         = 1,
		Solid        = 2,
		SolidAndWire = 3,
		MAX          = 4
	};

	/**
	 * Enum GbxGameSystemCore.EThreatReason
	 */
	enum class EThreatReason : uint8_t
	{
		ThreatReason_None                      = 0,
		ThreatReason_TerritoryEverywhereThreat = 1,
		ThreatReason_TerritoryIncursionAuto    = 2,
		ThreatReason_TerritoryIncursionSeen    = 3,
		ThreatReason_ShotAt                    = 4,
		ThreatReason_Damaged                   = 5,
		ThreatReason_Proximity                 = 6,
		ThreatReason_TeamNotification          = 7,
		ThreatReason_Scripted                  = 8,
		ThreatReason_MAX                       = 9
	};

	/**
	 * Enum GbxGameSystemCore.EUIStatCombinationMethod
	 */
	enum class EUIStatCombinationMethod : uint8_t
	{
		Multiply    = 0,
		Divide      = 1,
		Add         = 2,
		Subtract    = 3,
		DontCombine = 4,
		MAX         = 5
	};

	/**
	 * Enum GbxGameSystemCore.EUIStatValueRoundingMode
	 */
	enum class EUIStatValueRoundingMode : uint8_t
	{
		None       = 0,
		RoundToInt = 1,
		FloorToInt = 2,
		CeilToInt  = 3,
		MAX        = 4
	};

	/**
	 * Enum GbxGameSystemCore.EUIStatValueSignStyle
	 */
	enum class EUIStatValueSignStyle : uint8_t
	{
		AsIs         = 0,
		Positive     = 1,
		Negative     = 2,
		OppositeSign = 3,
		MAX          = 4
	};

	/**
	 * Enum GbxGameSystemCore.EUIStatValueStyle
	 */
	enum class EUIStatValueStyle : uint8_t
	{
		AttributeValue       = 0,
		AbsoluteModification = 1,
		ScaleModification    = 2,
		MAX                  = 3
	};

	/**
	 * Enum GbxGameSystemCore.EUsableTypeCostContext
	 */
	enum class EUsableTypeCostContext : uint8_t
	{
		UsableObject = 0,
		Player       = 1,
		MAX          = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxGameSystemCore.StanceFloatValue
	 * Size -> 0x0008
	 */
	struct FStanceFloatValue
	{
	public:
		EStanceValueOverrideType                                   ValueType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4L2M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PreviewActorManager
	 * Size -> 0x0080
	 */
	struct FPreviewActorManager
	{
	public:
		class USceneComponent*                                     AttachComponent;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ActorClass;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              ActorTemplate;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B4AX[0x60];                                  // 0x0020(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PreviewState
	 * Size -> 0x00D8
	 */
	struct FPreviewState
	{
	public:
		unsigned char                                              UnknownData_V5H9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnabled;                                                // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2BN0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPreviewActorManager                                PreviewActorManager;                                     // 0x0010(0x0080) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UClass*                                              PreviewClass;                                            // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBox                                                PreviewBounds;                                           // 0x0098(0x001C) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bAutoCycle;                                              // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_95W4[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PreviewIdx;                                              // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DVIR[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PreviewAction;                                           // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElapsedTime;                                             // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayingAction;                                          // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bQueuedAction;                                           // 0x00D1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowAction;                                             // 0x00D2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRepeatAction;                                           // 0x00D3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8C0G[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AnimActionDef
	 * Size -> 0x0018
	 */
	struct FAnimActionDef
	{
	public:
		EAnimActionDefInput                                        InputType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCU1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationAsset*                                     AnimAsset;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AnimAssetName;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AnimMeshExtra
	 * Size -> 0x0040
	 */
	struct FAnimMeshExtra
	{
	public:
		struct FAnimActionDef                                      Anim;                                                    // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                MeshName;                                                // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AnimSlotOverride;                                        // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasAnimSlotOverride;                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5EF[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendInOverride;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBlendInOverride;                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F1K2[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendOutOverride;                                        // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBlendOutOverride;                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZOY[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AnimMeshList
	 * Size -> 0x0078
	 */
	struct FAnimMeshList
	{
	public:
		struct FAnimActionDef                                      Body3rd;                                                 // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAnimActionDef                                      Body1st;                                                 // 0x0018(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAnimActionDef                                      Weapon3rd;                                               // 0x0030(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAnimActionDef                                      Weapon1st;                                               // 0x0048(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAnimMeshExtra>                              Extras;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3X8F[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MassSelection
	 * Size -> 0x0018
	 */
	struct FMassSelection
	{
	public:
		EMassSelection                                             Selection;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XTUA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Preset;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PK7Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SpawnCostSelection
	 * Size -> 0x0018
	 */
	struct FSpawnCostSelection
	{
	public:
		ESpawnCostSelection                                        Selection;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_421A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Preset;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnCost;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBSQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ReplicatedPawnAttachState
	 * Size -> 0x0010
	 */
	struct FReplicatedPawnAttachState
	{
	public:
		class UPawnAttachSlotComponent*                            Slot;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPawnAttachStatus                                          Status;                                                  // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TK8[0x1];                                   // 0x0009(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   StatusFlag;                                              // 0x000A(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGCS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RemoteFacingChannel
	 * Size -> 0x0002
	 */
	struct FRemoteFacingChannel
	{
	public:
		unsigned char                                              Pitch;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Yaw;                                                     // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.FacingController
	 * Size -> 0x0110
	 */
	struct FFacingController
	{
	public:
		unsigned char                                              UnknownData_BGUQ[0x109];                                 // 0x0000(0x0109) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRemoteFacingChannel                                RemoteChannels[0x3];                                     // 0x0109(0x0006) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AKDF[0x1];                                   // 0x010F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SavedCollisionItem
	 * Size -> 0x0028
	 */
	struct FSavedCollisionItem
	{
	public:
		class UPrimitiveComponent*                                 Primitive;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCollisionResponseContainer                         Responses;                                               // 0x0008(0x0020) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SavedTeamCollision
	 * Size -> 0x0010
	 */
	struct FSavedTeamCollision
	{
	public:
		class UTeamComponent*                                      TeamComponent;                                           // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTeamCollision;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCollideWithTeam;                                        // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHFH[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SavedCollision
	 * Size -> 0x0020
	 */
	struct FSavedCollision
	{
	public:
		TArray<struct FSavedCollisionItem>                         SavedItems;                                              // 0x0000(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FSavedTeamCollision>                         SavedTeamItems;                                          // 0x0010(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AnimGraphBoneSet
	 * Size -> 0x0010
	 */
	struct FAnimGraphBoneSet
	{
	public:
		class UGbxBoneSet*                                         BoneSet;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AnimGraphMachineName;                                    // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.LandingInfo
	 * Size -> 0x0028
	 */
	struct FLandingInfo
	{
	public:
		bool                                                       bNoMinVelIfJumped;                                       // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6WR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LandedMinVel;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         LandedImpact;                                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayLandedImpactAtSpecificFeet;                         // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVK9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LandedAction;                                            // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCharacterSoundTag*                                  VocalizationTag;                                         // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RuntimeStateMachineData
	 * Size -> 0x0018
	 */
	struct FRuntimeStateMachineData
	{
	public:
		unsigned char                                              UnknownData_U9GO[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAnimTableMapItem
	 * Size -> 0x0018
	 */
	struct FGbxAnimTableMapItem
	{
	public:
		bool                                                       bCanUse;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5F2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   LastFrame;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJ6E[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UIStatPriorityData
	 * Size -> 0x0010
	 */
	struct FUIStatPriorityData
	{
	public:
		class UUIStatData*                                         UIStat;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PriorityIncrease;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OK3A[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DataTableValueHandle
	 * Size -> 0x0018
	 */
	struct FDataTableValueHandle
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RowName;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ValueName;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttributeInitializationData
	 * Size -> 0x0038
	 */
	struct FAttributeInitializationData
	{
	public:
		float                                                      BaseValueConstant;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6HI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableValueHandle                               DataTableValue;                                          // 0x0008(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UGbxAttributeData*                                   BaseValueAttribute;                                      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AttributeInitializer;                                    // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseValueScale;                                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61QB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CustomizationAssetInfo
	 * Size -> 0x0020
	 */
	struct FCustomizationAssetInfo
	{
	public:
		class FName                                                AssetReferenceTargetName;                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AssetReference;                                          // 0x0008(0x0018) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CustomizationAssetEntry
	 * Size -> 0x0040
	 */
	struct FCustomizationAssetEntry
	{
	public:
		class UGbxCustomizationTargetData*                         CustomizationTarget;                                     // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             CustomizationAssetReferences;                            // 0x0008(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FCustomizationAssetInfo>                     CustomizationAssetInfoReferences;                        // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FSoftClassPath>                              CustomizationClassReferences;                            // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       LoadForPreview;                                          // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGF0[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_Base
	 * Size -> 0x00C8
	 */
	struct FActionState_Base
	{
	public:
		unsigned char                                              UnknownData_51M0[0xC8];                                  // 0x0000(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RuntimeActorPartListPartTypeData
	 * Size -> 0x0008
	 */
	struct FRuntimeActorPartListPartTypeData
	{
	public:
		int32_t                                                    StartIndex;                                              // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumParts;                                                // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.WeightedActorPartData
	 * Size -> 0x0040
	 */
	struct FWeightedActorPartData
	{
	public:
		class UActorPartData*                                      PartData;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        Weight;                                                  // 0x0008(0x0038) Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RuntimeActorPartListData
	 * Size -> 0x0028
	 */
	struct FRuntimeActorPartListData
	{
	public:
		unsigned char                                              bIsInitialized : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W9HT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRuntimeActorPartListPartTypeData>           PartTypeTOC;                                             // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FWeightedActorPartData>                      AllParts;                                                // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActorTagQuery
	 * Size -> 0x0018
	 */
	struct FActorTagQuery
	{
	public:
		bool                                                       bIncludeComponents;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EActorTagQueryMode                                         Mode;                                                    // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45V2[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Tags;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActorTagCompositeQuery
	 * Size -> 0x0010
	 */
	struct FActorTagCompositeQuery
	{
	public:
		TArray<struct FActorTagQuery>                              Queries;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HoldToUseSettings
	 * Size -> 0x0014
	 */
	struct FHoldToUseSettings
	{
	public:
		EHoldToUseMode                                             Mode;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGDC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoldToUseStartTime;                                      // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldToUseTime;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseInteractionBreakDistance;                            // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4V5[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteractionBreakDistance;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UseDefinitionConditional
	 * Size -> 0x0010
	 */
	struct FUseDefinitionConditional
	{
	public:
		class UUsableTypeDefinition*                               UseDefinition;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       UseCondition;                                            // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UseDefSelection
	 * Size -> 0x0020
	 */
	struct FUseDefSelection
	{
	public:
		unsigned char                                              bOverrideDefaultUseDefinition : 1;                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideConditionalDefs : 1;                            // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4IPW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUsableTypeDefinition*                               DefaultUseDefinition;                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FUseDefinitionConditional>                   ConditionalUseDefs;                                      // 0x0010(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UsableAngleRestriction
	 * Size -> 0x0008
	 */
	struct FUsableAngleRestriction
	{
	public:
		float                                                      AngleOffset;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleWidth;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UsabilityQuery
	 * Size -> 0x0018
	 */
	struct FUsabilityQuery
	{
	public:
		class AController*                                         UserController;                                          // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 UsedComponent;                                           // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUsabilityType                                             UseType;                                                 // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHeld;                                                // 0x0011(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTE9[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DefaultExplosionSettings
	 * Size -> 0x0010
	 */
	struct FDefaultExplosionSettings
	{
	public:
		float                                                      ExplosionSize;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRadialBlurSelection                                RadialBlur;                                              // 0x0004(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleGlobalData
	 * Size -> 0x0090
	 */
	struct FMantleGlobalData
	{
	public:
		int32_t                                                    DistanceToLookAheadForWalls;                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootCollisionHeight;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadCollisionHeight;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWallSlope;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAngleToKeepMantleCache;                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToHoldValidClimbLocationSeconds;                     // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDegreeAngleFromForward;                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAngleRange;                                          // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowPromptWhenAvailable : 1;                            // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A54E[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayBeforeShowingPrompt;                                // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ValidActorClasses;                                       // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      InvalidActorClasses;                                     // 0x0038(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ValidPrimitiveComponentClasses;                          // 0x0048(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<EMovementMode>                                      ValidMovementModes;                                      // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MaxAscendingSpeedZ;                                      // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDescendingSpeedZ;                                     // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinLedgeHeightToStillAllowMantle;                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPossibleLedgeHeight;                                  // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPossibleLedgeDistance;                                // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClientValidationTolerance;                               // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPassiveMantleHeight_Default;                          // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPassiveMantleHeight_ForwardInput;                     // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreTeamCollision;                                    // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NM2S[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ReplicatedImpactHitResult
	 * Size -> 0x0040
	 */
	struct FReplicatedImpactHitResult
	{
	public:
		bool                                                       bLocalSpace;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZL7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize                                 ImpactPoint;                                             // 0x0004(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           Normal;                                                  // 0x0010(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPhysicalMaterial>                    PhysMaterial;                                            // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  Component;                                               // 0x002C(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98W2[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BoneName;                                                // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ImpactAudioParam
	 * Size -> 0x0018
	 */
	struct FImpactAudioParam
	{
	public:
		class UWwiseRtpc*                                          Parameter;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseSwitch*                                        Switch;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2P3I[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ImpactResponseParams
	 * Size -> 0x00B0
	 */
	struct FImpactResponseParams
	{
	public:
		TArray<struct FParticleSysParam>                           ParticleParameters;                                      // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FImpactAudioParam>                           AudioParameters;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UWwiseSwitch*                                        AudioSurfaceSwitch;                                      // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8ZM[0x70];                                  // 0x0028(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  DecalOverride;                                           // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_38OE[0x10];                                  // 0x00A0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.NavAnimServerData
	 * Size -> 0x00A0
	 */
	struct FNavAnimServerData
	{
	public:
		unsigned char                                              UnknownData_O5J9[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Areas;                                                   // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             UserEdges;                                               // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.NavAnimClientData
	 * Size -> 0x001C
	 */
	struct FNavAnimClientData
	{
	public:
		struct FVector_NetQuantizeNormal                           Direction;                                               // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 GoalLoc;                                                 // 0x000C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GoalRadius;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ForceSelection
	 * Size -> 0x0020
	 */
	struct FForceSelection
	{
	public:
		EForceSelection                                            Selection;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y29I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Preset;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxAttributeData*                                   Attribute;                                               // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Force;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJM1[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttitudeDamageRules
	 * Size -> 0x0004
	 */
	struct FAttitudeDamageRules
	{
	public:
		unsigned char                                              bAllowHostileDamage : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowNeutralDamage : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowFriendlyDamage : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNJX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxSignificanceEvent
	 * Size -> 0x0008
	 */
	struct FGbxSignificanceEvent
	{
	public:
		class FName                                                Event;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ScreenParticleInitParams
	 * Size -> 0x0030
	 */
	struct FScreenParticleInitParams
	{
	public:
		class UParticleSystem*                                     Template;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHideWhenFinished : 1;                                   // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDestroyWhenFinished : 1;                                // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlyOwnerSee : 1;                                       // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlwaysVisible : 1;                                      // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowMultipleInstances : 1;                             // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTickEvenWhenPaused : 1;                                 // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHideDuringInGameMenu : 1;                               // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDepthPriorityWorld : 1;                                 // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XN7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ContentDims;                                             // 0x000C(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleDepth;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScreenParticleScalingMode                                 ScalingMode;                                             // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EB5B[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Tag;                                                     // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              OwnerOverride;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HealthTypeDamageSummary
	 * Size -> 0x0010
	 */
	struct FHealthTypeDamageSummary
	{
	public:
		class UHealthTypeData*                                     HealthType;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXY1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageDataEventDetails
	 * Size -> 0x0048
	 */
	struct FDamageDataEventDetails
	{
	public:
		float                                                      DamageDealt;                                             // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QQA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHealthTypeDamageSummary>                    DamagePerHealthType;                                     // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UGbxDamageType*                                      DamageType;                                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageSource*                                       DamageSource;                                            // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitDirection;                                            // 0x0028(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitLocation;                                             // 0x0034(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasCrit;                                                // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQ1V[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SpawnPatternInputs
	 * Size -> 0x0038
	 */
	struct FSpawnPatternInputs
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaseLocation;                                            // 0x0010(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            BaseRotation;                                            // 0x001C(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             IncomingImpulse;                                         // 0x0028(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6I2[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SpawnPatternResult
	 * Size -> 0x002C
	 */
	struct FSpawnPatternResult
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearImpulse;                                           // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinearVelocityChange;                                   // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMPX[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AngularImpulse;                                          // 0x001C(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAngularVelocityChange;                                  // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I90J[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RelativeDirectionData
	 * Size -> 0x0050
	 */
	struct FRelativeDirectionData
	{
	public:
		ERelativeDirectionType                                     RelativeDirection;                                       // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YA5M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ConeAroundDirection;                                     // 0x0008(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            AdditionalRotation;                                      // 0x0040(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TKX2[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttributeEffect
	 * Size -> 0x0050
	 */
	struct FAttributeEffect
	{
	public:
		class UGbxAttributeData*                                   AttributeData;                                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxAttributeModifierType                                  ModifierType;                                            // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RT20[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        BaseModifierValue;                                       // 0x0010(0x0038) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UAttributeEffectMutatorData*                         Mutator;                                                 // 0x0048(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UIStatCollector
	 * Size -> 0x0590
	 */
	struct FUIStatCollector
	{
	public:
		unsigned char                                              UnknownData_35E1[0x590];                                 // 0x0000(0x0590) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UIStatValueRemappingData
	 * Size -> 0x00E8
	 */
	struct FUIStatValueRemappingData
	{
	public:
		unsigned char                                              bUseContextOverride : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YK6W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        InputValueMin;                                           // 0x0008(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        InputValueMax;                                           // 0x0040(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        OutputValueMin;                                          // 0x0078(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        OutputValueMax;                                          // 0x00B0(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CoordinatedConditionalMaterialData
	 * Size -> 0x0030
	 */
	struct FCoordinatedConditionalMaterialData
	{
	public:
		class UMaterial*                                           BaseMaterial;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeshElementIndex;                                        // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZXHQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMatchMaterialStaticParameters : 1;                      // 0x0018(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseGlobalInheritedMaterialParameters : 1;               // 0x0018(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInheritAllMaterialParameters : 1;                       // 0x0018(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHVC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        InheritedMaterialParameters;                             // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CoordinatedScalarParameter
	 * Size -> 0x0158
	 */
	struct FCoordinatedScalarParameter
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  ParamValueOverTime;                                      // 0x0008(0x0078) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		ECoordinatedEffectParamScaleMode                           ScaleMode;                                               // 0x0080(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      WorldSpaceAxis;                                          // 0x0081(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLoop : 1;                                               // 0x0082(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBlendFromInitialValue : 1;                              // 0x0082(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SK8U[0x5];                                   // 0x0083(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  BlendCurve;                                              // 0x0088(0x0078) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              bApplyAttribute : 1;                                     // 0x0100(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleAttributeByValueOverTime : 1;                      // 0x0100(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZSE[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ParamAttributeValue;                                     // 0x0108(0x0038) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bSpecificMaterial : 1;                                   // 0x0140(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CNA0[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            SpecificMaterialList;                                    // 0x0148(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CoordinatedVectorParameter
	 * Size -> 0x0268
	 */
	struct FCoordinatedVectorParameter
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeCurveLinearColor                            ParamValueOverTime;                                      // 0x0008(0x01C8) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              bLoop : 1;                                               // 0x01D0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBlendFromInitialValue : 1;                              // 0x01D0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBlendUsingHSV : 1;                                      // 0x01D0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4UW[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  BlendCurve;                                              // 0x01D8(0x0078) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              bSpecificMaterial : 1;                                   // 0x0250(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SK0E[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            SpecificMaterialList;                                    // 0x0258(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CoordinatedParticleSystemData
	 * Size -> 0x0080
	 */
	struct FCoordinatedParticleSystemData
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWR8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0030) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AttachmentName;                                          // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeactivateTime;                                          // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCoordinatedScalarParameter>                 ScalarParameters;                                        // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FCoordinatedVectorParameter>                 VectorParameters;                                        // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		ECoordinatedParticleScaleMode                              ScaleMode;                                               // 0x0070(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlyPlayerOwnerCanSee : 1;                              // 0x0071(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bForegroundLayer : 1;                                    // 0x0071(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInheritViewFlags : 1;                                   // 0x0071(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPermanent : 1;                                          // 0x0071(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YBYM[0xE];                                   // 0x0072(0x000E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CoordinatedParticleSystemParameterData
	 * Size -> 0x0030
	 */
	struct FCoordinatedParticleSystemParameterData
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCoordinatedScalarParameter>                 ScalarParameters;                                        // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FCoordinatedVectorParameter>                 VectorParameters;                                        // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CoordinatedAudioData
	 * Size -> 0x0098
	 */
	struct FCoordinatedAudioData
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachmentName;                                          // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeactivateTime;                                          // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          RtpcParam;                                               // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  RtpcValueOverTime;                                       // 0x0020(0x0078) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CoordinatedLightParameterData
	 * Size -> 0x03D0
	 */
	struct FCoordinatedLightParameterData
	{
	public:
		class FName                                                LightName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSetColor : 1;                                           // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSetIntensity : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LPQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoordinatedVectorParameter                         Color;                                                   // 0x0010(0x0268) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCoordinatedScalarParameter                         Intensity;                                               // 0x0278(0x0158) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GibData
	 * Size -> 0x0028
	 */
	struct FGibData
	{
	public:
		int32_t                                                    MaxCount;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelectionWeight;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideGlobalScale;                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0FQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinScale;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxScale;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUAO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Mesh;                                                    // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceConstant*                           MaterialOverride;                                        // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ImpactResponseEffect
	 * Size -> 0x0140
	 */
	struct FImpactResponseEffect
	{
	public:
		bool                                                       bHighPriority;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCensorThisEffect;                                       // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GHF[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImpactData*                                         CensoredEffectAlternative;                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideImpactWwiseEvent;                               // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REFS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         ImpactWwiseEvent;                                        // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ParticleTemplate;                                        // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAttachParticleToHitActor : 1;                           // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAttachParticleToHitBone : 1;                            // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHideEffectFromHitActor : 1;                             // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNoOverlapDecal : 1;                                     // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTG3[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NoOverlapDecalGroupName;                                 // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          DecalMaterials;                                          // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DecalWidth;                                              // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalHeight;                                             // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalThickness;                                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalMinScale;                                           // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalMaxScale;                                           // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDecalRandomRotation;                                    // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC9R[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DecalRandomRotationLimit;                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalLifetime;                                           // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalFadeDuration;                                       // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQ4I[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxSignificanceEvent                               SignificanceEvent;                                       // 0x0070(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPlayFeedbackOnHitActor;                                 // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3A4[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFeedbackData*                                       HitFeedback;                                             // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFeedbackData*                                       AreaFeedback;                                            // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FImpactResponseParams                               EffectParameters;                                        // 0x0090(0x00B0) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.WeightedAnim
	 * Size -> 0x00B0
	 */
	struct FWeightedAnim
	{
	public:
		struct FAnimMeshList                                       Anims;                                                   // 0x0000(0x0078) Edit, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        Weight;                                                  // 0x0078(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxBlackboardKeySelector
	 * Size -> 0x0010
	 */
	struct FGbxBlackboardKeySelector
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRuntimeKey;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4T7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxParam
	 * Size -> 0x0080
	 */
	struct FGbxParam
	{
	public:
		EGbxParamValueType                                         ValueType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DisabledValueModes;                                      // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ValueFlags;                                              // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxParamValueMode                                         ValueMode;                                               // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNumericRange                                       Range;                                                   // 0x0004(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46DL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AttributeInitializer;                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxAttributeData*                                   AttributeData;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAttributeInitializationData                        AttributeInitializationData;                             // 0x0020(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           BlackboardKey;                                           // 0x0058(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UGbxCondition*                                       Condition;                                               // 0x0068(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7HA[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.LoopAnimData
	 * Size -> 0x0018
	 */
	struct FLoopAnimData
	{
	public:
		class UAnimSequenceBase*                                   AnimStart;                                               // 0x0000(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   AnimLoop;                                                // 0x0008(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   AnimStop;                                                // 0x0010(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.BoneFatigueParams
	 * Size -> 0x0014
	 */
	struct FBoneFatigueParams
	{
	public:
		float                                                      CurrentFatigue;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FatigueDissipationRate;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N986[0xC];                                   // 0x0008(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RangedDistanceOverrides
	 * Size -> 0x000C
	 */
	struct FRangedDistanceOverrides
	{
	public:
		bool                                                       bOverrideRangedDistances;                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M5XF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDistanceOverride;                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistanceOverride;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActiveTrackedFeedback
	 * Size -> 0x0060
	 */
	struct FActiveTrackedFeedback
	{
	public:
		class UFeedbackData*                                       FeedbackData;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastStartTime;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastRandomShakeTime;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomCameraShake;                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseScale;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentScale;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentCameraShakeScale;                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraShakeXScale;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraShakeYScale;                                       // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SourceLocation;                                          // 0x0028(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRangedDistanceOverrides                            RangedDistanceOverrides;                                 // 0x0034(0x000C) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRumbleFinished;                                         // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShakeFinished;                                          // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2DR9[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              AdditionalCameraShakeScales;                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              SourceContext;                                           // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PlayerDamageDataPresentation
	 * Size -> 0x0018
	 */
	struct FPlayerDamageDataPresentation
	{
	public:
		class UParticleSystem*                                     ScreenParticle;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           HitDirection;                                            // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2V2V[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StartupAssetTypeData
	 * Size -> 0x0038
	 */
	struct FStartupAssetTypeData
	{
	public:
		class FName                                                Path;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ClassType;                                               // 0x0008(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ResolvedClassType;                                       // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bBlueprint;                                              // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4MO[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AssetCategory;                                           // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ChallengeGoalValue
	 * Size -> 0x0008
	 */
	struct FChallengeGoalValue
	{
	public:
		int32_t                                                    GoalValue;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NotificationThreshold;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StatChallengeTest
	 * Size -> 0x0030
	 */
	struct FStatChallengeTest
	{
	public:
		class UGameStatData*                                       StatId;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FChallengeGoalValue>                         GoalInfo;                                                // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            GoalValues;                                              // 0x0018(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		bool                                                       bUseLocalStat;                                           // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetLocalStatWhenGoalReached;                          // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FTW[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ChallengeStatInstanceData
	 * Size -> 0x0038
	 */
	struct FChallengeStatInstanceData
	{
	public:
		class UGameStatData*                                       StatId;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ChallengeStatPath[0x28];                                 // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxGameSystemCore.ChallengeStatInstanceData.ChallengeStatPath
		int32_t                                                    CurrentStatValue;                                        // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QHA[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ChallengePersistentState
	 * Size -> 0x0060
	 */
	struct FChallengePersistentState
	{
	public:
		class UClass*                                              ChallengeClass;                                          // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ChallengeClassPath[0x28];                                // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxGameSystemCore.ChallengePersistentState.ChallengeClassPath
		int32_t                                                    CompletedCount;                                          // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CompletedProgressLevel;                                  // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FChallengeStatInstanceData>                  StatInstanceState;                                       // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsActive;                                               // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyCompleted;                                     // 0x0049(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OVMS[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ProgressCounter;                                         // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCustomChallengePersistentState*                     CustomPersistentData;                                    // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZ36[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ChallengeInstanceData
	 * Size -> 0x0080
	 */
	struct FChallengeInstanceData
	{
	public:
		class AActor*                                              CCOwner;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChallengePersistentState                           ChallengeState;                                          // 0x0008(0x0060) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UChallenge*                                          ChallengeInstance;                                       // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASFV[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CharacterMoveToCommand
	 * Size -> 0x001C
	 */
	struct FCharacterMoveToCommand
	{
	public:
		TWeakObjectPtr<class AActor>                               TargetActor;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bContinuouslyUpdate : 1;                                 // 0x0018(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnforceMaxSpeed : 1;                                    // 0x0018(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnforceMaxSpeedOnEnding : 1;                            // 0x0018(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMoveZAxis : 1;                                          // 0x0018(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JI1[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CharacterMoveToState
	 * Size -> 0x0030
	 */
	struct FCharacterMoveToState
	{
	public:
		struct FCharacterMoveToCommand                             CommandData;                                             // 0x0000(0x001C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45SI[0x14];                                  // 0x001C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxEasingFunc
	 * Size -> 0x000C
	 */
	struct FGbxEasingFunc
	{
	public:
		EEasingFunc                                                Func;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MX2S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendExp;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Steps;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CharacterRotateToCommand
	 * Size -> 0x0050
	 */
	struct FCharacterRotateToCommand
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetSocket;                                            // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetLocation;                                          // 0x0010(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3GL[0x10];                                  // 0x001C(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x002C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeRotation;                                         // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMDF[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpSpeed;                                             // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxYawRate;                                              // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPitchRate;                                            // 0x003C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEasing;                                              // 0x0040(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QHV[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxEasingFunc                                      Easing;                                                  // 0x0044(0x000C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CharacterRotateToState
	 * Size -> 0x0068
	 */
	struct FCharacterRotateToState
	{
	public:
		struct FCharacterRotateToCommand                           CommandData;                                             // 0x0000(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32RM[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CharacterScriptedMeshOffsetCommand
	 * Size -> 0x0138
	 */
	struct FCharacterScriptedMeshOffsetCommand
	{
	public:
		unsigned char                                              UnknownData_76PL[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       RootMotionSourceAnim;                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  HorzCurv;                                                // 0x0018(0x0078) NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  VertCurv;                                                // 0x0090(0x0078) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GK84[0x30];                                  // 0x0108(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CharacterScriptedMeshOffsetState
	 * Size -> 0x0140
	 */
	struct FCharacterScriptedMeshOffsetState
	{
	public:
		unsigned char                                              UnknownData_HAI5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterScriptedMeshOffsetCommand                 Cmd;                                                     // 0x0008(0x0138) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.LadderAnimState
	 * Size -> 0x0028
	 */
	struct FLadderAnimState
	{
	public:
		EScriptedLadderType                                        PendingType;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHWD[0x1F];                                  // 0x0001(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EScriptedLadderType                                        CurrentType;                                             // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6TF[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ReplicatedLadderState
	 * Size -> 0x0002
	 */
	struct FReplicatedLadderState
	{
	public:
		unsigned char                                              DirtyCounter;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScriptedLadderType                                        LadderType;                                              // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ControlledMoveState
	 * Size -> 0x0160
	 */
	struct FControlledMoveState
	{
	public:
		class UGbxCharacterMovementComponent*                      MovementComponentOwner;                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UControlledMove*                                     CurrentMove;                                             // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseSpeed;                                               // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIDJ[0x30];                                  // 0x0020(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Runtime;                                                 // 0x0050(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YK8A[0x34];                                  // 0x0054(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TargetActor;                                             // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MG0[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialDirection;                                        // 0x00A8(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurrentDirection;                                        // 0x00B4(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJQC[0x30];                                  // 0x00C0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FrameMoveVelocity;                                       // 0x00F0(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VQ5[0x34];                                  // 0x00FC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastHitActor;                                            // 0x0130(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S627[0x4];                                   // 0x0138(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      aForwardInput;                                           // 0x013C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      aStrafeInput;                                            // 0x0140(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQ9U[0x1C];                                  // 0x0144(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ControlledMoveParameters
	 * Size -> 0x0028
	 */
	struct FControlledMoveParameters
	{
	public:
		float                                                      SpeedOverride;                                           // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DurationOverride;                                        // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LaunchAngleOverride;                                     // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_54SD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TargetActor;                                             // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             TargetLocation;                                          // 0x0018(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BHP9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ControlledMoveReplicationData
	 * Size -> 0x0048
	 */
	struct FControlledMoveReplicationData
	{
	public:
		unsigned char                                              DirtyCounter;                                            // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GGJF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ControlledMove;                                          // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FControlledMoveParameters                           Parameters;                                              // 0x0010(0x0028) Transient, NoDestructor, NativeAccessSpecifierPrivate
		struct FVector                                             PackedDirection;                                         // 0x0038(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bZeroVelocity : 1;                                       // 0x0044(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bInterrupted : 1;                                        // 0x0044(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8VPI[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleAttemptInfo
	 * Size -> 0x0018
	 */
	struct FMantleAttemptInfo
	{
	public:
		int32_t                                                    ActionIndex;                                             // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0004(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 MovementBase;                                            // 0x0010(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleActiveActionData
	 * Size -> 0x0020
	 */
	struct FMantleActiveActionData
	{
	public:
		struct FMantleAttemptInfo                                  MantleAttempt;                                           // 0x0000(0x0018) Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRNU[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleTraceInputs
	 * Size -> 0x0068
	 */
	struct FMantleTraceInputs
	{
	public:
		unsigned char                                              UnknownData_FFW2[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              World;                                                   // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMantleData*                                         MantleData;                                              // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxGameplayGlobals*                                 Globals;                                                 // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              SourceActor;                                             // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleTraceCheck
	 * Size -> 0x0278
	 */
	struct FMantleTraceCheck
	{
	public:
		struct FMantleTraceInputs                                  Inputs;                                                  // 0x0000(0x0068) Transient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWWX[0x210];                                 // 0x0068(0x0210) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleState
	 * Size -> 0x06E8
	 */
	struct FMantleState
	{
	public:
		class UGbxCharacterMovementComponent*                      MovementComponentOwner;                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMantleData*                                         MantleData;                                              // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxGameplayGlobals*                                 GameplayGlobals;                                         // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4BT9[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMantleActiveActionData                             ActiveActionData;                                        // 0x0020(0x0020) Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IQLN[0x430];                                 // 0x0040(0x0430) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMantleTraceCheck                                   CurrentTrace;                                            // 0x0470(0x0278) Transient, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ReplicatedMantleState
	 * Size -> 0x0008
	 */
	struct FReplicatedMantleState
	{
	public:
		unsigned char                                              Counter;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K8H5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ActionIndex;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxCharacterNavWalking
	 * Size -> 0x00B0
	 */
	struct FGbxCharacterNavWalking
	{
	public:
		class UGbxCharacterMovementComponent*                      MoveComp;                                                // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q679[0xA8];                                  // 0x0008(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.NavAnimMachineData
	 * Size -> 0x0008
	 */
	struct FNavAnimMachineData
	{
	public:
		int32_t                                                    MachineIdx;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENavAnimState                                              ServerBaseState;                                         // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENavAnimState                                              CurrState;                                               // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0CKP[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.NavAnimDesiredInfo
	 * Size -> 0x0010
	 */
	struct FNavAnimDesiredInfo
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 FaceLoc;                                                 // 0x0004(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.NavAnimTransition
	 * Size -> 0x0028
	 */
	struct FNavAnimTransition
	{
	public:
		ENavAnimState                                              State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RC9H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNavAnimDesiredInfo                                 Info;                                                    // 0x0004(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKVX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RowName;                                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MachineIdx;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RunIdx;                                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.NavAnimState
	 * Size -> 0x0050
	 */
	struct FNavAnimState
	{
	public:
		unsigned char                                              UnknownData_CN5T[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       CachedAnimInst;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FNavAnimMachineData>                         MachineList;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FNavAnimTransition                                  ServerTransition;                                        // 0x0020(0x0028) NoDestructor, NativeAccessSpecifierPrivate
		int32_t                                                    ClientTransitionIdx;                                     // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U8CE[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RotationDeltaMatchingInfo
	 * Size -> 0x00C0
	 */
	struct FRotationDeltaMatchingInfo
	{
	public:
		struct FFloatCurve                                         RotationTimeCurve;                                       // 0x0000(0x0090) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HB6[0x30];                                  // 0x0090(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxInterpData
	 * Size -> 0x0140
	 */
	struct FGbxInterpData
	{
	public:
		unsigned char                                              UnknownData_YGYU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AController*                                         Controller;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovementComponent*                                  MoveComp;                                                // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OKJN[0x120];                                 // 0x0020(0x0120) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.IdleVelocityData
	 * Size -> 0x0018
	 */
	struct FIdleVelocityData
	{
	public:
		unsigned char                                              UnknownData_7WC5[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RootMotionStateData
	 * Size -> 0x0058
	 */
	struct FRootMotionStateData
	{
	public:
		unsigned char                                              UnknownData_TWGG[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCharacterMovementComponent*                      GbxCharMoveComp;                                         // 0x0048(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCharacterAnimInstance*                           GbxAnimInstance;                                         // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.FacingInfo
	 * Size -> 0x003C
	 */
	struct FFacingInfo
	{
	public:
		EFacingInfoType                                            Type;                                                    // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCYB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      Component;                                               // 0x000C(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x0014(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotator;                                                 // 0x0020(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Offset;                                                  // 0x002C(0x000C) BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9HP[0x4];                                   // 0x0038(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StanceChangedEventArgs
	 * Size -> 0x0030
	 */
	struct FStanceChangedEventArgs
	{
	public:
		EStanceStackLayer                                          PreviousLayer;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R13J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStanceType*                                         PreviousStanceType;                                      // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStanceData*                                         PreviousStance;                                          // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStanceStackLayer                                          NextLayer;                                               // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9U0E[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStanceType*                                         NextStanceType;                                          // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStanceData*                                         NextStance;                                              // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ControlledMoveNetCorrection
	 * Size -> 0x0010
	 */
	struct FControlledMoveNetCorrection
	{
	public:
		float                                                      Runtime;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84SM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ControlledMove;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CMMotionData
	 * Size -> 0x0168
	 */
	struct FCMMotionData
	{
	public:
		struct FRuntimeFloatCurve                                  X;                                                       // 0x0000(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  Y;                                                       // 0x0078(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  Z;                                                       // 0x00F0(0x0078) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CustomizationColorEntry
	 * Size -> 0x0038
	 */
	struct FCustomizationColorEntry
	{
	public:
		TArray<class UGbxCustomizationTargetData*>                 ColorCustomizationTargets;                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                ColorCustomizationParameter;                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SplitColorCustomizationParameter;                        // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ColorCustomizationDisplayName;                           // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CustomizationLinkedParameter
	 * Size -> 0x0010
	 */
	struct FCustomizationLinkedParameter
	{
	public:
		class FName                                                LinkedParameterName;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELinkedParameterType                                       LinkedParameterType;                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0T5Y[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CustomizationLinkedParameterEntry
	 * Size -> 0x0030
	 */
	struct FCustomizationLinkedParameterEntry
	{
	public:
		TArray<struct FCustomizationLinkedParameter>               LinkedParameters;                                        // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UGbxCustomizationTargetData*                         LinkedParameterSource;                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCustomizationTargetData*                         LinkedParameterTarget;                                   // 0x0018(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGbxCustomizationTargetData*>                 LinkedParameterTargets;                                  // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CustomizationInheritedTextureBaseMaterial
	 * Size -> 0x0018
	 */
	struct FCustomizationInheritedTextureBaseMaterial
	{
	public:
		class UGbxCustomizationTargetData*                         Target;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaterialIndex;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YI85[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  BaseMaterial;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.InheritedCustomizationTextureExtraParam
	 * Size -> 0x0018
	 */
	struct FInheritedCustomizationTextureExtraParam
	{
	public:
		class UGbxCustomizationTargetData*                         Target;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParamName;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            Texture;                                                 // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CustomizationTextureInheritanceSettings
	 * Size -> 0x0038
	 */
	struct FCustomizationTextureInheritanceSettings
	{
	public:
		TArray<class FName>                                        OnlyInheritCustomizationTextureParameters;               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  BaseMaterial;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCustomizationInheritedTextureBaseMaterial>  CustomizationTargetSpecificBaseMaterials;                // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInheritedCustomizationTextureExtraParam>    ExtraParams;                                             // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxCustomizationContainerEntry
	 * Size -> 0x001C (FullSize[0x0028] - InheritedSize[0x000C])
	 */
	struct FGbxCustomizationContainerEntry : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_I9F4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCustomizationData*                               CustomizationData;                                       // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OptionalCustomizationId;                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0HN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCustomizationData*                               ClientCachedCustomizationData;                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxCustomizationCacheEntry
	 * Size -> 0x0018
	 */
	struct FGbxCustomizationCacheEntry
	{
	public:
		TArray<class UObject*>                                     AssetRefs;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UGbxCustomizationData*                               CustomizationData;                                       // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxCustomizationContainer
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	struct FGbxCustomizationContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FGbxCustomizationContainerEntry>             Customizations;                                          // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGbxCustomizationCacheEntry>                 CustomizationCache;                                      // 0x00C0(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		class UGbxCustomizationComponent*                          Owner;                                                   // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CustomizationColorApplication
	 * Size -> 0x0034
	 */
	struct FCustomizationColorApplication
	{
	public:
		bool                                                       bUseDefaultColor;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDefaultSplitColor;                                   // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsSplitColor;                                     // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXLM[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AppliedColor;                                            // 0x0004(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SplitColor;                                              // 0x0010(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DefaultColor;                                            // 0x001C(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DefaultSplitColor;                                       // 0x0028(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MaterialArray
	 * Size -> 0x0010
	 */
	struct FMaterialArray
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CustomizationStreamingEntry
	 * Size -> 0x0040
	 */
	struct FCustomizationStreamingEntry
	{
	public:
		class UGbxCustomizationData*                               CustomizationData;                                       // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWUJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxCustomizationComponent*>                  WaitingComponents;                                       // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XH39[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RegisteredConditionalDamageValueModifier
	 * Size -> 0x0010
	 */
	struct FRegisteredConditionalDamageValueModifier
	{
	public:
		class UConditionalDamageValueModifier*                     Modifier;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             DamageValueContextOverride;                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RegisteredConditionalDamageCriticalModifier
	 * Size -> 0x0010
	 */
	struct FRegisteredConditionalDamageCriticalModifier
	{
	public:
		class UConditionalDamageCriticalModifier*                  Modifier;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ModifierValueContextOverride;                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StatusEffectModifiers
	 * Size -> 0x0030
	 */
	struct FStatusEffectModifiers
	{
	public:
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  EffectChanceModifier;                                    // 0x0008(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  EffectDurationModifier;                                  // 0x0014(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  EffectDamageModifier;                                    // 0x0020(0x000C) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBJS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ReflectedDamageParams
	 * Size -> 0x0018
	 */
	struct FReflectedDamageParams
	{
	public:
		float                                                      DamageScale;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageTakenScale;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReflectTowardAttacker;                                  // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5M6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitReactionParams
	 * Size -> 0x0058
	 */
	struct FHitReactionParams
	{
	public:
		class UDamageComponent*                                    Receiver;                                                // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageCauserComponent*                              Causer;                                                  // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageAmount;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q2V[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxDamageType*                                      DamageType;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageSource*                                       DamageSource;                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0028(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Force;                                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHitRegionData*                                      HitRegion;                                               // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitBoneIndex;                                            // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitLocation;                                             // 0x0044(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreCooldowns;                                        // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceInterruptSelf;                                     // 0x0051(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8K0[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitReactionState
	 * Size -> 0x0290
	 */
	struct FHitReactionState
	{
	public:
		unsigned char                                              UnknownData_CTR1[0x130];                                 // 0x0000(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHitReactionData*                                    HitReactionData;                                         // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UHitReactionTag*>                             NoLockTags;                                              // 0x0138(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class UHitReactionTag*                                     BackupDeathTag;                                          // 0x0148(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              DefaultDeathAction;                                      // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCensorDeaths;                                           // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FFIF[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHitReactionData*                                    CurrHitReactionData;                                     // 0x0160(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDamageComponent*                                    DamageComp;                                              // 0x0168(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIDodgeComponent*                                   DodgeComp;                                               // 0x0170(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxActionComponent*                                 ActionComp;                                              // 0x0178(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBrainComponent*                                     BrainComp;                                               // 0x0180(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                DeathOverrideId;                                         // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHitReactionTag*                                     DeathOverride;                                           // 0x0190(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      LiveLayers;                                              // 0x0198(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      DeathLayers;                                             // 0x01A8(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		TMap<class UHitReactionTag*, float>                        TagTimeStartMap;                                         // 0x01B8(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class UHitReactionTag*, float>                        TagTimeEndMap;                                           // 0x0208(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UHitReactionTag*                                     ActiveTag;                                               // 0x0258(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M70N[0x10];                                  // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHitReactionParams>                          Hits;                                                    // 0x0270(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class AGbxCharacter*                                       SoundCharacter;                                          // 0x0280(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EC6Q[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GameResourcePoolReference
	 * Size -> 0x0018
	 */
	struct FGameResourcePoolReference
	{
	public:
		unsigned char                                              PoolIndexInManager;                                      // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5924[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameResourcePoolManagerComponent*                   PoolManager;                                             // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MR6N[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HealthType
	 * Size -> 0x0078
	 */
	struct FHealthType
	{
	public:
		class UHealthTypeData*                                     HealthTypeData;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameResourcePoolData*                               HealthPoolData;                                          // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              HealthSectionPercentages;                                // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bResetIdleTimerIfNoDamage : 1;                           // 0x0020(0x0001) BIT_FIELD Edit, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseChanceToExist : 1;                                   // 0x0020(0x0001) BIT_FIELD Edit, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DV6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ChanceToExist;                                           // 0x0028(0x0038) Edit, RepSkip, NoDestructor, NativeAccessSpecifierPublic
		struct FGameResourcePoolReference                          HealthPool;                                              // 0x0060(0x0018) Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SimpleHealthInfo
	 * Size -> 0x0058
	 */
	struct FSimpleHealthInfo
	{
	public:
		struct FAttributeInitializationData                        MaxHealthFormula;                                        // 0x0000(0x0038) Edit, RepSkip, NoDestructor, NativeAccessSpecifierPublic
		class UHealthTypeData*                                     HealthType;                                              // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  MaxHealth;                                               // 0x0040(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentHealth;                                           // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5CPH[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SyncedHitReactionData
	 * Size -> 0x0040
	 */
	struct FSyncedHitReactionData
	{
	public:
		class UHitReactionTag*                                     Tag;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Action;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CensoredAction;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageAmount;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           Direction;                                               // 0x001C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Force;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitBoneIndex;                                            // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              HitLocation;                                             // 0x0030(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Flags;                                                   // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageGoreModifiers
	 * Size -> 0x0008
	 */
	struct FDamageGoreModifiers
	{
	public:
		float                                                      GoreModifier;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GibModifier;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageReactionEvent_DamageComponent
	 * Size -> 0x0048
	 */
	struct FDamageReactionEvent_DamageComponent
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameResourcePoolData*                               HealthPool;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventHealthPercent;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageReactionEventType                                   EVENTTYPE;                                               // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y26R[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageFilter*                                       Filter;                                                  // 0x0018(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageTime;                                              // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RetriggerDelay;                                          // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTriggerCount;                                         // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0LT[0x1C];                                  // 0x002C(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ReceivedDamageDetails
	 * Size -> 0x0058
	 */
	struct FReceivedDamageDetails
	{
	public:
		bool                                                       bWasCrit;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4S4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0004(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitDirection;                                            // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0A7[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0020(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHitRegionData*                                      HitRegion;                                               // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FHealthTypeDamageSummary>                    DamagePerHealthType;                                     // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             RadiusDamageOrigin;                                      // 0x0040(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageRadius;                                            // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasBulletReflected;                                     // 0x0050(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVLI[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ProtectionTimerSettings
	 * Size -> 0x000C
	 */
	struct FProtectionTimerSettings
	{
	public:
		float                                                      TimerDuration;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Threshold;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaintainedMaxHealthPct;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.LevelBasedDamageScale
	 * Size -> 0x000C
	 */
	struct FLevelBasedDamageScale
	{
	public:
		int32_t                                                    LevelDifference;                                         // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HigherLevelAttackerDmgScale;                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowerLevelAttackerDmgScale;                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageLocalizationSettings
	 * Size -> 0x0018
	 */
	struct FDamageLocalizationSettings
	{
	public:
		class UTexture2D*                                          CriticalTexture;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ResistTexture;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ImmuneTexture;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageOverTimeInstance
	 * Size -> 0x0270
	 */
	struct FDamageOverTimeInstance
	{
	public:
		unsigned char                                              UnknownData_HIF2[0x220];                                 // 0x0000(0x0220) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageData*                                         DamageData;                                              // 0x0220(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T3OB[0x48];                                  // 0x0228(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageModifierAttributeCollection
	 * Size -> 0x0010
	 */
	struct FDamageModifierAttributeCollection
	{
	public:
		class UGbxAttributeData*                                   InstigatedModifier;                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGbxAttributeData*                                   ReceivedModifier;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageSourceHealthTypeModifier
	 * Size -> 0x0010
	 */
	struct FDamageSourceHealthTypeModifier
	{
	public:
		class UHealthTypeData*                                     HealthTypeData;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxAttributeData*                                   InstigatedFriendlyFireHealingModifier;                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageSurfaceModifier
	 * Size -> 0x0040
	 */
	struct FDamageSurfaceModifier
	{
	public:
		EDamageSurfaceType                                         PhysicalSurface;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATN4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        Modifier;                                                // 0x0008(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ViewLeadingTranslationInfo
	 * Size -> 0x002C
	 */
	struct FViewLeadingTranslationInfo
	{
	public:
		struct FVector                                             Effect;                                                  // 0x0000(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelRate;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecelRate;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Max;                                                     // 0x0014(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Min;                                                     // 0x0020(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ViewLeadingRotationInfo
	 * Size -> 0x003C
	 */
	struct FViewLeadingRotationInfo
	{
	public:
		struct FRotator                                            Effect;                                                  // 0x0000(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             EffectFromTranslation;                                   // 0x000C(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TiltFromRotationYaw;                                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelRate;                                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecelRate;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Max;                                                     // 0x0024(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Min;                                                     // 0x0030(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.TrackedFirstPersonComponent
	 * Size -> 0x0040
	 */
	struct FTrackedFirstPersonComponent
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIPL[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MenuStash
	 * Size -> 0x0010
	 */
	struct FMenuStash
	{
	public:
		TArray<class UBaseMenuStackMenuInfo*>                      StashedMenus;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SharedPickupInventoryActor
	 * Size -> 0x0010
	 */
	struct FSharedPickupInventoryActor
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6FL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageReactionEvent
	 * Size -> 0x0050
	 */
	struct FDamageReactionEvent
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventHealthPercent;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageReactionEventType                                   EVENTTYPE;                                               // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQ8J[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageFilter*                                       Filter;                                                  // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageTime;                                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RetriggerDelay;                                          // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTriggerCount;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GGU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DamageBoneName;                                          // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIncludeDamageBoneChildren : 1;                          // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCensored : 1;                                           // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTriggerOnlyOnDeath : 1;                                 // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8TD[0x1F];                                  // 0x0031(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitRegionState
	 * Size -> 0x0070
	 */
	struct FHitRegionState
	{
	public:
		class UHitRegionData*                                      HitRegion;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        AssociatedComponentNames;                                // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDamageReactionEvent>                        DamageEvents;                                            // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    StateIndex;                                              // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9YX[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPrimitiveComponent*>                         AssociatedPrimitives;                                    // 0x0030(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UChildActorComponent*>                        AssociatedChildActorComponents;                          // 0x0040(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x0050(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurrentHealth;                                           // 0x0054(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0058(0x0018) Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitRegionInfo
	 * Size -> 0x0010
	 */
	struct FHitRegionInfo
	{
	public:
		class UHitRegionData*                                      Data;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCEF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageReactionEventSummary
	 * Size -> 0x0060
	 */
	struct FDamageReactionEventSummary
	{
	public:
		class APawn*                                               DamageCauser;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitDirection;                                            // 0x0014(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0030(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitRegionInfo                                      HitRegion;                                               // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Origin;                                                  // 0x0048(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventIndex;                                              // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2057[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitRegionHealthParams
	 * Size -> 0x0018
	 */
	struct FHitRegionHealthParams
	{
	public:
		float                                                      OwnerHealthPercent;                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RG9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameResourcePoolData*                               ResourcePool;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHitRegionDamageRule                                       DamageRule;                                              // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQU2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ConditionalMultiSelectionGestaltPartNameData
	 * Size -> 0x0020
	 */
	struct FConditionalMultiSelectionGestaltPartNameData
	{
	public:
		TArray<class UActorPartData*>                              OtherParts;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        GestaltMeshPartNames;                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MultiSelectionGestaltPartNameData
	 * Size -> 0x0028
	 */
	struct FMultiSelectionGestaltPartNameData
	{
	public:
		int32_t                                                    IndexOfType;                                             // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8Q69[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        GestaltMeshPartNames;                                    // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		TArray<struct FConditionalMultiSelectionGestaltPartNameData> ConditionalGestaltMeshPartNames;                         // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ReplicatedGestaltPartsData
	 * Size -> 0x0018
	 */
	struct FReplicatedGestaltPartsData
	{
	public:
		unsigned char                                              UnknownData_46TY[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StretchBonesInstance
	 * Size -> 0x00A0
	 */
	struct FStretchBonesInstance
	{
	public:
		class FName                                                StartBoneName;                                           // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBoneName;                                             // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUniformStretch;                                         // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1E7K[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TargetActor;                                             // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UECA[0x4];                                   // 0x0020(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetPosition;                                          // 0x0024(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJ0N[0x6C];                                  // 0x0034(0x006C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.BoneModifyState_RepData
	 * Size -> 0x000C
	 */
	struct FBoneModifyState_RepData
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_164X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0004(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.BoneModifyProfileData
	 * Size -> 0x0018
	 */
	struct FBoneModifyProfileData
	{
	public:
		class UGbxBoneModifyProfile*                               Profile;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBoneModifyState_RepData>                    States;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.BMPOverrideBone
	 * Size -> 0x0020
	 */
	struct FBMPOverrideBone
	{
	public:
		struct FBoneReference                                      BoneRef;                                                 // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8P2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.BMPOverride
	 * Size -> 0x0018
	 */
	struct FBMPOverride
	{
	public:
		TArray<struct FBMPOverrideBone>                            Bones;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EGlobalBoneModifyProfile_PoseMode                          PoseMode;                                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PIBX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StretchAnimData
	 * Size -> 0x01E0
	 */
	struct FStretchAnimData
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimSequence*                                       AnimSeq;                                                 // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XIVC[0x1D0];                                 // 0x0010(0x01D0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAnimPoseMatch
	 * Size -> 0x0020
	 */
	struct FGbxAnimPoseMatch
	{
	public:
		TArray<class FName>                                        PoseMatchBones;                                          // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZQ2F[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PawnAttachSlotState
	 * Size -> 0x0040
	 */
	struct FPawnAttachSlotState
	{
	public:
		class UPawnAttachSlotComponent*                            Owner;                                                   // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AController*                                         Controller;                                              // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPawnAttachStatus                                          Status;                                                  // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSkipDetachPlacement;                                    // 0x0019(0x0001) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSkipStopTransitionAction;                               // 0x001A(0x0001) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CBBZ[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DetachTransitionIndex;                                   // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6L2T[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PawnSceneAttachmentInfo
	 * Size -> 0x0028
	 */
	struct FPawnSceneAttachmentInfo
	{
	public:
		bool                                                       bAttachToBaseOwner;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainWorldLocation;                                  // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyMeshOffset;                                        // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z64H[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AttachOffset;                                            // 0x0010(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddOffsetFromSocket;                                    // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGZH[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketNameForAdditionalOffset;                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttachSlotAnimSet
	 * Size -> 0x0030
	 */
	struct FAttachSlotAnimSet
	{
	public:
		unsigned char                                              AssociatedCharacter[0x28];                               // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxGameSystemCore.AttachSlotAnimSet.AssociatedCharacter
		class UGbxAnimSet*                                         AnimSet;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PawnAttachmentTransition
	 * Size -> 0x0048
	 */
	struct FPawnAttachmentTransition
	{
	public:
		class UClass*                                              BaseAction;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PawnAction;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceStopTransitionActions;                             // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentTransitionTiming                                AttachTiming;                                            // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAttachInfo;                                     // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4UX[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPawnSceneAttachmentInfo                            AttachInfo;                                              // 0x0018(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UGbxCondition*                                       Conditions;                                              // 0x0040(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PawnAttachTransition
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FPawnAttachTransition : public FPawnAttachmentTransition
	{	};

	/**
	 * ScriptStruct GbxGameSystemCore.PawnDetachTransition
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	struct FPawnDetachTransition : public FPawnAttachmentTransition
	{
	public:
		bool                                                       bValidateDetachLocation;                                 // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35KB[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ValidationMaxOffset;                                     // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValidationToleranceSize;                                 // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComputeDetachLocationFromAction;                        // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAbsoluteDetachLocation;                                 // 0x0055(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JSV[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DetachLocationOffset;                                    // 0x0058(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UE71[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PlayerInputBinding_Button
	 * Size -> 0x0020
	 */
	struct FPlayerInputBinding_Button
	{
	public:
		class FString                                              RebindDataPath;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        KeyNames;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PlayerInputBinding_Axis_Key
	 * Size -> 0x0018
	 */
	struct FPlayerInputBinding_Axis_Key
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale3D;                                                 // 0x0008(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IXR0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PlayerInputBinding_Axis
	 * Size -> 0x0020
	 */
	struct FPlayerInputBinding_Axis
	{
	public:
		class FString                                              RebindDataPath;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlayerInputBinding_Axis_Key>                Keys;                                                    // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PlayerInputBinding_Category
	 * Size -> 0x0040
	 */
	struct FPlayerInputBinding_Category
	{
	public:
		class FString                                              CategoryDataPath;                                        // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContextDataPath;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlayerInputBinding_Button>                  ButtonBindings;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPlayerInputBinding_Axis>                    AxisBindings;                                            // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PlayerInputBindings
	 * Size -> 0x0010
	 */
	struct FPlayerInputBindings
	{
	public:
		TArray<struct FPlayerInputBinding_Category>                Categories;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RecentlyCausedDamageInstance
	 * Size -> 0x0048
	 */
	struct FRecentlyCausedDamageInstance
	{
	public:
		class UClass*                                              DamageType;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 DamageLocation;                                          // 0x0010(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalDamage;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DirtyCounter;                                            // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0UX[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHitRegionData*                                      HitRegion;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERecentDamageFlags                                         DamageFlags;                                             // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UGRK[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DamagedActor;                                            // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGWA[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CachedInterp
	 * Size -> 0x0020
	 */
	struct FCachedInterp
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Interp;                                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JB83[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ConditionalStance
	 * Size -> 0x0010
	 */
	struct FConditionalStance
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStanceDataProvider*                                 StanceProvider;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttributeEffectReference
	 * Size -> 0x0010
	 */
	struct FAttributeEffectReference
	{
	public:
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1BJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AppliedAttributeEffect
	 * Size -> 0x0038
	 */
	struct FAppliedAttributeEffect
	{
	public:
		struct FAttributeEffectReference                           AttributeEffectRef;                                      // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		class UObject*                                             AttributeResolutionContext;                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStatusEffectManagerComponent*                       Owner;                                                   // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55G5[0x18];                                  // 0x0020(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CriticalHitDamageOverrides
	 * Size -> 0x0008
	 */
	struct FCriticalHitDamageOverrides
	{
	public:
		ECriticalHitDamageOverride                                 Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDefaultCriticalHitMultiplier;                        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKD3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdditionalCriticalMultiplier;                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PipelineDamageInput
	 * Size -> 0x01B0
	 */
	struct FPipelineDamageInput
	{
	public:
		class UDamageComponent*                                    DamageReceiverComp;                                      // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Damageable[0x10];                                        // 0x0008(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxGameSystemCore.PipelineDamageInput.Damageable
		class APawn*                                               InstigatorPawn;                                          // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               AdditionalEventListenerPawn;                             // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamageCauser;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageModifierComponent*                            DamageModifierComp;                                      // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         InstigatorController;                                    // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPNY[0x90];                                  // 0x0050(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImpactData*                                         ImpactData;                                              // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFeedbackData*                                       InstigatorFeedback;                                      // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSimulatedOnClient : 1;                                  // 0x00F0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XU7J[0x9F];                                  // 0x00F1(0x009F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCriticalHitDamageOverrides                         CriticalHitOverrides;                                    // 0x0190(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FDamageGoreModifiers                                GoreModifiers;                                           // 0x0198(0x0008) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LD7[0x10];                                  // 0x01A0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageOverTimeContribution
	 * Size -> 0x01C0
	 */
	struct FDamageOverTimeContribution
	{
	public:
		struct FPipelineDamageInput                                PipelineInput;                                           // 0x0000(0x01B0) ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYI3[0x10];                                  // 0x01B0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StatusEffectSpec
	 * Size -> 0x0038
	 */
	struct FStatusEffectSpec
	{
	public:
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              EffectOwner;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              EffectOwnerContextOverride;                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectDurationType                                  DurationType;                                            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3PS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         EffectInstigator;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamageCauser;                                            // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamagePerSecond;                                         // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CROU[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StatusEffectInstance
	 * Size -> 0x0048
	 */
	struct FStatusEffectInstance
	{
	public:
		struct FStatusEffectSpec                                   Spec;                                                    // 0x0000(0x0038) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QX3X[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StatusEffectInstanceStack
	 * Size -> 0x0070
	 */
	struct FStatusEffectInstanceStack
	{
	public:
		class UStatusEffectManagerComponent*                       Owner;                                                   // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageComponent*                                    DoTDamageComponent;                                      // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAppliedAttributeEffect>                     AttributeEffects;                                        // 0x0018(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYE2[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDamageOverTimeContribution>                 DPSContributions;                                        // 0x0038(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FStatusEffectInstance>                       Instances;                                               // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z214[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StatusEffectInstanceReference
	 * Size -> 0x0018
	 */
	struct FStatusEffectInstanceReference
	{
	public:
		class UStatusEffectManagerComponent*                       StatusEffectManagerComponent;                            // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    StatusEffectInstanceID;                                  // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P9OH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StatusEffectRemoveSpec
	 * Size -> 0x0010
	 */
	struct FStatusEffectRemoveSpec
	{
	public:
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             EffectOwner;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StatusEffectQuery
	 * Size -> 0x0018
	 */
	struct FStatusEffectQuery
	{
	public:
		class UStatusEffectData*                                   StatusEffectData;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Owner;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSBT[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StatusEffectQueryResult
	 * Size -> 0x0010
	 */
	struct FStatusEffectQueryResult
	{
	public:
		int32_t                                                    NumberOfInstances;                                       // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DPS;                                                     // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RR4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UsabilityInfo
	 * Size -> 0x0040
	 */
	struct FUsabilityInfo
	{
	public:
		bool                                                       bCanUse;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanInteractWith;                                        // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanPrimaryUse;                                          // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanPrimaryHoldUse;                                      // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanSecondaryUse;                                        // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanSecondaryHoldUse;                                    // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanShowUseDef;                                          // 0x0006(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZL2Y[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OptionalErrorText;                                       // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		class UUsableTypeDefinition*                               PrimaryUseDef;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUsableTypeDefinition*                               PrimaryHoldUseDef;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUsableTypeDefinition*                               SecondaryUseDef;                                         // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUsableTypeDefinition*                               SecondaryHoldUseDef;                                     // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UseTraceResult
	 * Size -> 0x0060
	 */
	struct FUseTraceResult
	{
	public:
		class UUsableComponent*                                    UsableComponent;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUsabilityInfo                                      Usability;                                               // 0x0010(0x0040) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9Q5[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.LatentUseState
	 * Size -> 0x0010
	 */
	struct FLatentUseState
	{
	public:
		class UUsableComponent*                                    UsableComponent;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OELD[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UsableCostCache
	 * Size -> 0x0010
	 */
	struct FUsableCostCache
	{
	public:
		int32_t                                                    PrimaryCost;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondaryCost;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimaryHoldUseCost;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondaryHoldUseCost;                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ResourceLock
	 * Size -> 0x0098
	 */
	struct FGbxGameSystemCore_FResourceLock
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3IYD[0x97];                                  // 0x0001(0x0097) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActorPartListData
	 * Size -> 0x0028
	 */
	struct FActorPartListData
	{
	public:
		class UEnum*                                               PartTypeEnum;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              PartType;                                                // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanSelectMultipleParts;                                 // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseWeightWithMultiplePartSelection;                     // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_16NZ[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInt32Interval                                      MultiplePartSelectionRange;                              // 0x000C(0x0008) Edit, DisableEditOnTemplate, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnabled;                                                // 0x0014(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MW2R[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeightedActorPartData>                      Parts;                                                   // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AIDodgeBasicData
	 * Size -> 0x0098
	 */
	struct FAIDodgeBasicData
	{
	public:
		struct FGbxParam                                           Cooldown;                                                // 0x0000(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              Action;                                                  // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       Condition;                                               // 0x0088(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_479Y[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AIDodgeData
	 * Size -> 0x0120 (FullSize[0x01B8] - InheritedSize[0x0098])
	 */
	struct FAIDodgeData : public FAIDodgeBasicData
	{
	public:
		struct FGbxParam                                           Chance;                                                  // 0x0098(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           Delay;                                                   // 0x0118(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bRemoveAllDelay;                                         // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZKU[0x3];                                   // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAngle;                                                // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitAngle;                                             // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70SS[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistance;                                             // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitDistance;                                          // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRPH[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinShooterDistance;                                      // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitShooterDistance;                                   // 0x01B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X75D[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AIDodgeInstance
	 * Size -> 0x0020
	 */
	struct FAIDodgeInstance
	{
	public:
		class UClass*                                              Action;                                                  // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              SourceActor;                                             // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D8H1[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AimSensitivityLevelParameters
	 * Size -> 0x001C
	 */
	struct FAimSensitivityLevelParameters
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawMaxRotationRate;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMaxRotationRate;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurningExtraYaw;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurningExtraPitch;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurningRampUpTime;                                       // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurningRampUpDelay;                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AIBulletEvent
	 * Size -> 0x0038
	 */
	struct FAIBulletEvent
	{
	public:
		unsigned char                                              UnknownData_LOF0[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYYY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Instigator;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DNY[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AsyncExplosionImpactRequest
	 * Size -> 0x0170
	 */
	struct FAsyncExplosionImpactRequest
	{
	public:
		class UImpactData*                                         ExplosionImpact;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ExplodingActor;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorld*                                              World;                                                   // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFT3[0x150];                                 // 0x0020(0x0150) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttributePropertyValueResolverTestStruct
	 * Size -> 0x0050
	 */
	struct FAttributePropertyValueResolverTestStruct
	{
	public:
		float                                                      FloatProp;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatPropStaticArray[0x3];                               // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              FloatPropDynamicArray;                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UAttributePropertyValueResolverTestContext*          ObjectProp;                                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttributePropertyValueResolverTestContext*          ObjectPropStaticArray[0x3];                              // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAttributePropertyValueResolverTestContext*>  ObjectPropDynamicArray;                                  // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttributeDefinedValueRow
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAttributeDefinedValueRow : public FTableRowBase
	{	};

	/**
	 * ScriptStruct GbxGameSystemCore.BalanceFormulaDefinedValueRow
	 * Size -> 0x0118 (FullSize[0x0120] - InheritedSize[0x0008])
	 */
	struct FBalanceFormulaDefinedValueRow : public FAttributeDefinedValueRow
	{
	public:
		struct FAttributeInitializationData                        Multiplier;                                              // 0x0008(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        Level;                                                   // 0x0040(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        Power;                                                   // 0x0078(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        Offset;                                                  // 0x00B0(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAttributeInitializationData                        Scalar;                                                  // 0x00E8(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttributeConditionalValue
	 * Size -> 0x0048
	 */
	struct FAttributeConditionalValue
	{
	public:
		struct FAttributeInitializationData                        ValueIfAllConditionsAreTrue;                             // 0x0000(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<class UGbxCondition*>                               Conditions;                                              // 0x0038(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ConditionalDamageDamageTypeConditional
	 * Size -> 0x0010
	 */
	struct FConditionalDamageDamageTypeConditional
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ConditionalDamageDamageConditionalValue
	 * Size -> 0x0040
	 */
	struct FConditionalDamageDamageConditionalValue
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        DamageValue;                                             // 0x0008(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageContextSource
	 * Size -> 0x0010
	 */
	struct FDamageContextSource
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               Instigator;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CauseDamageAsyncRequest
	 * Size -> 0x0230
	 */
	struct FCauseDamageAsyncRequest
	{
	public:
		class UDamageData*                                         DamageData;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDamageContextSource                                DamageContext;                                           // 0x0008(0x0010) NoDestructor, NativeAccessSpecifierPublic
		class AActor*                                              DamageTarget;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCYD[0x210];                                 // 0x0020(0x0210) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamagedActor
	 * Size -> 0x00E0
	 */
	struct FDamagedActor
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageComponent*                                    DamageComponent;                                         // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9C9[0xD0];                                  // 0x0010(0x00D0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageTargetResult
	 * Size -> 0x0190
	 */
	struct FDamageTargetResult
	{
	public:
		class UDamageComponent*                                    DamageComponent;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S84V[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamagedActor                                       AsyncDamagedActor;                                       // 0x0018(0x00E0) ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G9EJ[0x98];                                  // 0x00F8(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CauseDamageAsyncRequestEntry
	 * Size -> 0x00B0 (FullSize[0x02E0] - InheritedSize[0x0230])
	 */
	struct FCauseDamageAsyncRequestEntry : public FCauseDamageAsyncRequest
	{
	public:
		unsigned char                                              UnknownData_6PJN[0x98];                                  // 0x0230(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDamageTargetResult>                         Results;                                                 // 0x02C8(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GOYB[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.FloatWaveform
	 * Size -> 0x000C
	 */
	struct FFloatWaveform
	{
	public:
		float                                                      Frequency;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amplitude;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Phase;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.Vector2DWaveform
	 * Size -> 0x0018
	 */
	struct FVector2DWaveform
	{
	public:
		struct FFloatWaveform                                      X;                                                       // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFloatWaveform                                      Y;                                                       // 0x000C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxNamedParam
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	struct FGbxNamedParam : public FGbxParam
	{
	public:
		class FName                                                Name;                                                    // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.EnvQueryParams
	 * Size -> 0x00B8
	 */
	struct FEnvQueryParams
	{
	public:
		class UEnvQuery*                                           Query;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UEnvQueryTest*>                               AdditionalTests;                                         // 0x0008(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UEnvQueryTestAsset*>                          AdditionalTestAssets;                                    // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableRunModeEditing;                                  // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TOA6[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxNamedParam>                              Contexts;                                                // 0x0030(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NoClear, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bDisableContextEditing;                                  // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowEmptyContexts;                                     // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4P9[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, int32_t>                               ContextTypeTable;                                        // 0x0048(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBVG[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxNamedParam>                              Params;                                                  // 0x00A0(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NoClear, ContainsInstancedReference, NativeAccessSpecifierPublic
		EGbxSignificance                                           RequiredSignificanceRating;                              // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAVP[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageInfo
	 * Size -> 0x0058
	 */
	struct FDamageInfo
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B3RX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageSource;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageRadius;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactForce;                                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFeedbackData*                                       InstigatorFeedback;                                      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageModifierComponent*                            DamageModifierComponent;                                 // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, RepSkip, NativeAccessSpecifierPublic
		bool                                                       bApplyCriticalHitModsToAoEDamage;                        // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7VI[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCriticalHitDamageOverrides                         CriticalHitOverrides;                                    // 0x004C(0x0008) Edit, BlueprintVisible, RepSkip, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OEUN[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SoundPerceptionProperties
	 * Size -> 0x000C
	 */
	struct FSoundPerceptionProperties
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9POO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Loudness;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageTypeExplosionAssociation
	 * Size -> 0x0010
	 */
	struct FDamageTypeExplosionAssociation
	{
	public:
		class UClass*                                              DamageType;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UExplosionSizeSelectionData*                         ExplosionSizeData;                                       // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ExplosionSizeProperties
	 * Size -> 0x0050
	 */
	struct FExplosionSizeProperties
	{
	public:
		float                                                      ExplosionSize;                                           // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F36N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFeedbackData*                                       ExplosionFeedback;                                       // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ExplosionParticleSystem;                                 // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     CensoredExplosionParticleSystem;                         // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         ExplosionAudioEvent;                                     // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImpactData*                                         ExplosionImpact;                                         // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCensorThisExplosion : 1;                                // 0x0030(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseExplosionRadialBlur : 1;                             // 0x0030(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideTinnitusDuration : 1;                           // 0x0030(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1WV[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRadialBlurSelection                                ExplosionRadialBlur;                                     // 0x0034(0x000C) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EExplosionTinnitusDuration                                 TinnitusDuration;                                        // 0x0040(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQZW[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxSignificanceEvent                               SignificanceEvent;                                       // 0x0048(0x0008) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ShakeScaleAssociation
	 * Size -> 0x0170
	 */
	struct FShakeScaleAssociation
	{
	public:
		class UClass*                                              CameraShake;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        BaseScale;                                               // 0x0008(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bContinuous;                                             // 0x0040(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleDownOverTime;                                      // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseScaleOverTimeCurve;                                  // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRDW[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  ScaleOverTimeCurve;                                      // 0x0048(0x0078) Edit, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        ContinuousScale;                                         // 0x00C0(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  ContinuousScaleCurve;                                    // 0x00F8(0x0078) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.FeedbackDataFirstPersonImpulse
	 * Size -> 0x0060
	 */
	struct FFeedbackDataFirstPersonImpulse
	{
	public:
		bool                                                       bUseDurationFromCameraShake;                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ON6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraShakeDurationEaseInWeight;                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EaseInDuration;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EaseOutDuration;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxEasingFunc                                      EaseInFunc;                                              // 0x0010(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxEasingFunc                                      EaseOutFunc;                                             // 0x001C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            RandomRotationOffset;                                    // 0x0028(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            RotationExtent;                                          // 0x0034(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOffsetRotationByDirection;                              // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0DY[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RandomTranslationOffset;                                 // 0x0044(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TranslationExtent;                                       // 0x0050(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZoomedEffectScale;                                       // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxHUDFeedbackImpulse
	 * Size -> 0x0060
	 */
	struct FGbxHUDFeedbackImpulse
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationalVelocity;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Springiness;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCircularMotion;                                         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyCameraTranslation;                                 // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16MV[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraTranslationWeight;                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyCameraRotation;                                    // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YG7V[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraRotationWeight;                                    // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyOriginWorldSpace;                                  // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MABV[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OriginWorldSpace;                                        // 0x002C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OriginWorldSpaceWeight;                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GTP[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Tag;                                                     // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HU4J[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.LoopingShakeInfo
	 * Size -> 0x0038
	 */
	struct FLoopingShakeInfo
	{
	public:
		class APlayerController*                                   AssociatedController;                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRZZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             ContextObject;                                           // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        TimerHandle;                                             // 0x0018(0x0008) Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             FeedbackLocation;                                        // 0x0020(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_02RD[0xC];                                   // 0x002C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.FeedbackTableRowHandle
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FFeedbackTableRowHandle : public FDataTableRowHandle
	{	};

	/**
	 * ScriptStruct GbxGameSystemCore.GameplayTagToValueMap
	 * Size -> 0x0040
	 */
	struct FGameplayTagToValueMap
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        ValueIfContextHasTag;                                    // 0x0008(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GameResourcePool
	 * Size -> 0x00F8
	 */
	struct FGameResourcePool
	{
	public:
		unsigned char                                              UnknownData_6D9Z[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameResourcePoolData*                               ResourcePoolData;                                        // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  MinValue;                                                // 0x0010(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  MaxValue;                                                // 0x001C(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  PercentOfMaxValueReserved;                               // 0x0028(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  ConsumptionRate;                                         // 0x0034(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  ActiveRegenerationRate;                                  // 0x0040(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  OnIdleRegenerationRate;                                  // 0x004C(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  OnIdleRegenerationDelay;                                 // 0x0058(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  OnDepletedIdleRegenerationDelay;                         // 0x0064(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  PassiveRegenerationRate;                                 // 0x0070(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  PassivePercentRegenerationRate;                          // 0x007C(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeFloat                                  PassiveMissingPercentRegenerationRate;                   // 0x0088(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxAttributeInteger                                RegenerationDisabled;                                    // 0x0094(0x000C) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentValue;                                            // 0x00A0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastTotalRegenerationRateValue;                          // 0x00A4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastTotalPercentRegenerationRateValue;                   // 0x00A8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastEffectiveMaxValue;                                   // 0x00AC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGbxAttributeFloat                                  PostAddedRegenerationRate;                               // 0x00B0(0x000C) Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGbxAttributeFloat                                  PostAddedPercentRegenerationRate;                        // 0x00BC(0x000C) Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I4QK[0x30];                                  // 0x00C8(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GameResourcePoolNet
	 * Size -> 0x0010
	 */
	struct FGameResourcePoolNet
	{
	public:
		class UGameResourcePoolManagerComponent*                   Manager;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93N4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GameResourceUserEvent
	 * Size -> 0x0098
	 */
	struct FGameResourceUserEvent
	{
	public:
		class UGameResourceData*                                   ResourceData;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResourceNowDepleted;                                   // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResourceNowNotDepleted;                                // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResourceNowFilled;                                     // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResourceNowNotFilled;                                  // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResourceNowRegenerating;                               // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResourceNowNotRegenerating;                            // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResourceNowDepleting;                                  // 0x0068(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResourceNowNotDepleting;                               // 0x0078(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResourceNowIdle;                                       // 0x0088(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GameStat
	 * Size -> 0x0010
	 */
	struct FGameStat
	{
	public:
		class UGameStatData*                                       GameStat;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StatValue;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPC5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ConditionActionPair
	 * Size -> 0x0010
	 */
	struct FConditionActionPair
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActionClass;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DirectionActionData
	 * Size -> 0x0010
	 */
	struct FDirectionActionData
	{
	public:
		struct FNumericRange                                       AngleRange;                                              // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              ActionClass;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttachedObjectFollow
	 * Size -> 0x0018
	 */
	struct FAttachedObjectFollow
	{
	public:
		class FName                                                ObjectBoneName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ObjectHoldBoneName;                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ObjectHoldBodyName;                                      // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RandomActionPair
	 * Size -> 0x0010
	 */
	struct FRandomActionPair
	{
	public:
		class UClass*                                              ActionClass;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XOMY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StretchBonesSettings
	 * Size -> 0x0030
	 */
	struct FStretchBonesSettings
	{
	public:
		bool                                                       bUniformStretch;                                         // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OL1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxBlackboardKeySelector                           TargetKey;                                               // 0x0008(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TargetOffset;                                            // 0x0018(0x000C) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStretchBonesActorTrackingStyle                            ActorTrackingStyle;                                      // 0x0024(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceToGround;                                          // 0x0025(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0HFF[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceToGroundDistance;                                   // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPredictionDistance;                                   // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxActionRegister
	 * Size -> 0x0038
	 */
	struct FGbxActionRegister
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EActionRegisterType                                        Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5IF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntValue;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FE4E[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             ObjectValue;                                             // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NameValue;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VecValue;                                                // 0x0028(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REOE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxActionSlot
	 * Size -> 0x0018
	 */
	struct FGbxActionSlot
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SR3[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DataActionPair_Base
	 * Size -> 0x0008
	 */
	struct FDataActionPair_Base
	{
	public:
		class UClass*                                              ActionValue;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DataActionPair
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FDataActionPair : public FDataActionPair_Base
	{
	public:
		struct FGameplayTag                                        ActionKey;                                               // 0x0008(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DataActionPair_Spawn
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FDataActionPair_Spawn : public FDataActionPair_Base
	{
	public:
		struct FGameplayTag                                        ActionKey;                                               // 0x0008(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DataActionPair_SpawnMesh
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FDataActionPair_SpawnMesh : public FDataActionPair_Base
	{
	public:
		struct FGameplayTag                                        ActionKey;                                               // 0x0008(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DataActionPair_SmartObject
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FDataActionPair_SmartObject : public FDataActionPair_Base
	{
	public:
		struct FGameplayTag                                        ActionKey;                                               // 0x0008(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxBoneSet*                                         BoneSetFilter;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionStateNet
	 * Size -> 0x0108
	 */
	struct FActionStateNet
	{
	public:
		unsigned char                                              UnknownData_UXPU[0x108];                                 // 0x0000(0x0108) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ForwardDynamicsNodeProfile
	 * Size -> 0x0078
	 */
	struct FForwardDynamicsNodeProfile
	{
	public:
		class UPhysicalAnimationProfileAsset*                      ForwardDynamicsProfile;                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EForwardDynamicsActivation                                 ForwardDynamicsActivation;                               // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQTJ[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_FUKV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PhysicsAssetStrengthDefinitionProfileName;               // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetSimulationFrequency;                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSubstepCount;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTranslationDistanceUntilReset;                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearJointDivergentTolerence;                           // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldSpaceVelocityBlend;                                 // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldSpaceAngularVelocityBlend;                          // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBypassSkelMeshSimulatePhysOption;                       // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStripAnimationFromNonSimulationRelevantBones;           // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SQR[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicsAsset*                                       OverridePhysicsAsset;                                    // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OverrideWorldGravity;                                    // 0x0040(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x004C(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          OverlapChannel;                                          // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWorldGeometry;                                    // 0x0059(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1B4[0x2];                                   // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESimulationSpace                                           SimulationSpace;                                         // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APSW[0x3];                                   // 0x005D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bOverrideWorldGravity;                                   // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSML[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CachedBoundsScale;                                       // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTransferBoneVelocities;                                 // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeIncomingPoseOnStart;                              // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_162B[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODThreshold;                                            // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LODInterpolationSpeed;                                   // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B4BJ[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AnimStateGroup
	 * Size -> 0x0018
	 */
	struct FAnimStateGroup
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        States;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAttributeDelegateBindingHandle
	 * Size -> 0x0030
	 */
	struct FGbxAttributeDelegateBindingHandle
	{
	public:
		unsigned char                                              UnknownData_N3NG[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAttributeModifierHandle
	 * Size -> 0x0010
	 */
	struct FGbxAttributeModifierHandle
	{
	public:
		unsigned char                                              UnknownData_AO3L[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttributeEffectData
	 * Size -> 0x0048
	 */
	struct FAttributeEffectData
	{
	public:
		class UGbxAttributeData*                                   AttributeToModify;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxAttributeModifierType                                  ModifierType;                                            // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7L1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ModifierValue;                                           // 0x0010(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttributeBaseValueData
	 * Size -> 0x0040
	 */
	struct FAttributeBaseValueData
	{
	public:
		class UGbxAttributeData*                                   AttributeToSetBaseValueOf;                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        BaseValue;                                               // 0x0008(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PropertyToAttributeMapping
	 * Size -> 0x0030
	 */
	struct FPropertyToAttributeMapping
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PropertyGuid;                                            // 0x0008(0x0010) Edit, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     AttributeDataReference;                                  // 0x0018(0x0018) Edit, DisableEditOnInstance, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GbxGameSystemCore.TargetActorInfo
	 * Size -> 0x0390
	 */
	struct FTargetActorInfo
	{
	public:
		TWeakObjectPtr<class AActor>                               Target;                                                  // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class USceneComponent>                      Proxy;                                                   // 0x0008(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UTargetableComponent>                 TargetableComponent;                                     // 0x0010(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UTargetingComponent>                  OwnerTargetingComponent;                                 // 0x0018(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1O1[0x35C];                                 // 0x0020(0x035C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetScore;                                             // 0x037C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamAttitude                                              AttitudeTowardTarget;                                    // 0x0380(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamAttitude                                              AttitudeFromTarget;                                      // 0x0381(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UBQ[0x2];                                   // 0x0382(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TargetListIndex;                                         // 0x0384(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45Y0[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.BoneModifyInfo
	 * Size -> 0x0030
	 */
	struct FBoneModifyInfo
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0008(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0020(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMQQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.BoneModifyState
	 * Size -> 0x0058
	 */
	struct FBoneModifyState
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxBoneModifyProfile_PoseMode                             PoseMode;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartActive;                                            // 0x0009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FSIO[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         Blend;                                                   // 0x0010(0x0038) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneModifyInfo>                             Bones;                                                   // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxFlagEval
	 * Size -> 0x0048
	 */
	struct FGbxFlagEval
	{
	public:
		class UGbxFlagData*                                        FlagData;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxFlagEval                                               EvalType;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LIBL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        TimeSeconds;                                             // 0x0010(0x0038) Edit, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxBlueprintlegateBinding
	 * Size -> 0x0118
	 */
	struct FGbxBlueprintlegateBinding
	{
	public:
		class FString                                              SubobjectPath;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FParsedProperty                                     ParsedDelegateOwnerPath;                                 // 0x0010(0x0080) NoDestructor, NativeAccessSpecifierPublic
		struct FParsedProperty                                     ParsedDelegatePath;                                      // 0x0090(0x0080) NoDestructor, NativeAccessSpecifierPublic
		class FName                                                FunctionNameToBind;                                      // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxFlag
	 * Size -> 0x000C
	 */
	struct FGbxFlag
	{
	public:
		unsigned char                                              UnknownData_WAUG[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.FlagPropertyTestStruct
	 * Size -> 0x000C
	 */
	struct FFlagPropertyTestStruct
	{
	public:
		struct FGbxFlag                                            TestFlag;                                                // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SurfaceTypeInfo
	 * Size -> 0x0010
	 */
	struct FSurfaceTypeInfo
	{
	public:
		EDamageSurfaceType                                         DamageSurfaceType;                                       // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SW3K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseSwitch*                                        AudioMaterialSwitch;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PhysicalMaterialImpactPair
	 * Size -> 0x0010
	 */
	struct FPhysicalMaterialImpactPair
	{
	public:
		class UPhysicalMaterial*                                   MaterialA;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   MaterialB;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RigidBodyImpactSettings
	 * Size -> 0x00B0
	 */
	struct FRigidBodyImpactSettings
	{
	public:
		TMap<struct FPhysicalMaterialImpactPair, class UImpactData*> RigidBodyImpactData;                                     // 0x0000(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class UPhysicalMaterial*, class UImpactData*>         DefaultRigidBodyImpactData;                              // 0x0050(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          ImpactSpeedAudioParameter;                               // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseRtpc*                                          ImpactMassAudioParameter;                                // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DestructionForceSmoothing
	 * Size -> 0x000C
	 */
	struct FDestructionForceSmoothing
	{
	public:
		float                                                      MaxResultantVelocity;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalizationFactor;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalScale;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxQueryOriginOptions
	 * Size -> 0x0108
	 */
	struct FGbxQueryOriginOptions
	{
	public:
		struct FGbxParam                                           UpdatePeriod;                                            // 0x0000(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           UpdateCondition;                                         // 0x0080(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bInvertCondition;                                        // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9T3[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxQueryOptions
	 * Size -> 0x0238
	 */
	struct FGbxQueryOptions
	{
	public:
		EQueryOwnerLocationUse                                     OwnerLocationUse;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CI6F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReplaceLastResultThreshold;                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceLastResult;                                      // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepValidValues;                                        // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMOE[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinUpdatePeriod;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PauseUpdatesWhenNotPingedForTime;                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateAlways;                                           // 0x0014(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETimedUpdateBehavior                                       WhenToDoFullQueryUpdates;                                // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUpdateWhileActive;                                   // 0x0016(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SY6C[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           OwnerMoveThreshold;                                      // 0x0018(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUpdateWhenOwnerMoves;                                   // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G55P[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           PrimaryContextMoveThreshold;                             // 0x00A0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUpdateWhenPrimaryContextMoves;                          // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NBB5[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxQueryOriginOptions                              Origin;                                                  // 0x0128(0x0108) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUpdateOrigin;                                           // 0x0230(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUpdateWhenCanPath;                                  // 0x0231(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateWhenHotSpotsListChanges;                          // 0x0232(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96EM[0x5];                                   // 0x0233(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxQuery
	 * Size -> 0x03B0
	 */
	struct FGbxQuery
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEnvQueryParams                                     Params;                                                  // 0x0008(0x00B8) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxQueryOptions                                    Options;                                                 // 0x00C0(0x0238) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class AActor*                                              PrimaryContext;                                          // 0x02F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlackboardComponent*                                BlackboardComp;                                          // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNavComponent*                                       NavComp;                                                 // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSA4[0xA0];                                  // 0x0310(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxSignificanceEventData
	 * Size -> 0x0018
	 */
	struct FGbxSignificanceEventData
	{
	public:
		bool                                                       bTestVisibility;                                         // 0x0000(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DE9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlwaysSignificantDistance;                               // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0008(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinScreenPercent;                                        // 0x000C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistantThreshold;                                        // 0x0010(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerSourceInfluence;                                   // 0x0014(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SimpleMotionState
	 * Size -> 0x0020
	 */
	struct FSimpleMotionState
	{
	public:
		ESimpleMotionType                                          MotionType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WDY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinSpeed;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTWT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SpeedControlCurve;                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleTransformByValue : 1;                              // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleSpeedByValue : 1;                                  // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleAccelerationByValue : 1;                           // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BIL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SimpleMotionInstanceState
	 * Size -> 0x0008
	 */
	struct FSimpleMotionInstanceState
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMotionReversed : 1;                                     // 0x0004(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReachedTarget : 1;                                      // 0x0004(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReachedMaxSpeed : 1;                                    // 0x0004(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInTransition : 1;                                       // 0x0004(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HT3B[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GestaltChildPartData
	 * Size -> 0x0010
	 */
	struct FGestaltChildPartData
	{
	public:
		class UGestaltPartData*                                    GestaltPart;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Probability;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JUOE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GestaltPartFoleyAccessory
	 * Size -> 0x0018
	 */
	struct FGestaltPartFoleyAccessory
	{
	public:
		int32_t                                                    Priority;                                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36M7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachmentPoint;                                         // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GestaltRandomPartData
	 * Size -> 0x0010
	 */
	struct FGestaltRandomPartData
	{
	public:
		class UGestaltPartData*                                    GestaltPart;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3N30[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GesaltOptionalPartData
	 * Size -> 0x0010
	 */
	struct FGesaltOptionalPartData
	{
	public:
		class UGestaltPartData*                                    GestaltPart;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Probability;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSuppressChildParts;                                     // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_STDU[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitReactionPair
	 * Size -> 0x0010
	 */
	struct FHitReactionPair
	{
	public:
		class UHitReactionTag*                                     Tag;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Action;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitReactionCondition
	 * Size -> 0x0010
	 */
	struct FHitReactionCondition
	{
	public:
		class UGbxCondition*                                       Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHitReactionConditionContext                               Context;                                                 // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHitReactionConditionContext                               OptionalContext;                                         // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KQB[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitReactionCooldownData
	 * Size -> 0x0020
	 */
	struct FHitReactionCooldownData
	{
	public:
		class UHitReactionTag*                                     Tag;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cooldown;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DHC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHitReactionTag*                                     TagFallback;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCooldownFromStartTime;                                  // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VKRK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitReactionMapItem
	 * Size -> 0x0010
	 */
	struct FHitReactionMapItem
	{
	public:
		class UHitReactionTag*                                     FromTag;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHitReactionTag*                                     ToTag;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.InspectionInfo
	 * Size -> 0x0020
	 */
	struct FInspectionInfo
	{
	public:
		unsigned char                                              UnknownData_05TS[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ImpactResponseInfo
	 * Size -> 0x0150
	 */
	struct FImpactResponseInfo
	{
	public:
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0VG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FImpactResponseEffect                               Response;                                                // 0x0010(0x0140) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ImpactTriggerInfo
	 * Size -> 0x0008
	 */
	struct FImpactTriggerInfo
	{
	public:
		float                                                      RigidBodyRefireDelay;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RigidBodyMinimumVelocity;                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ImpactFXManagerTrackingData
	 * Size -> 0x0010
	 */
	struct FImpactFXManagerTrackingData
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleActionData
	 * Size -> 0x0110
	 */
	struct FMantleActionData
	{
	public:
		EMantleType                                                Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWW5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Animation;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightMinimum;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlignTime;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  HorizontalCurve;                                         // 0x0018(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  VerticalCurve;                                           // 0x0090(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      PercentThroughAnimationToFinishMantle;                   // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlignRotation : 1;                                      // 0x010C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMustLookAt : 1;                                         // 0x010C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IJY[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ModifierMathAttributeValueResolverStackEntry
	 * Size -> 0x0040
	 */
	struct FModifierMathAttributeValueResolverStackEntry
	{
	public:
		EGbxAttributeModifierType                                  ModifierType;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBH3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        ModifierValue;                                           // 0x0008(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.OrbitOscillationInfo
	 * Size -> 0x0080
	 */
	struct FOrbitOscillationInfo
	{
	public:
		struct FRuntimeFloatCurve                                  Cycle;                                                   // 0x0000(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      OverrideDuration;                                        // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentTime;                                             // 0x007C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PawnAttachmentQueryResult
	 * Size -> 0x0018
	 */
	struct FPawnAttachmentQueryResult
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              AttachBase;                                              // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PhysicalAnimationBoneData
	 * Size -> 0x0020
	 */
	struct FPhysicalAnimationBoneData
	{
	public:
		class FName                                                BodyName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeChildren;                                        // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsLocalSimulation : 1;                                  // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XB9U[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OrientationStrength;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularVelocityStrength;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositionStrength;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VelocityStrength;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TJ6[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PropertyUtilsTestStruct
	 * Size -> 0x0078
	 */
	struct FPropertyUtilsTestStruct
	{
	public:
		float                                                      FloatProp;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatPropStaticArray[0x3];                               // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              FloatPropDynamicArray;                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UPropertyUtilsTestContext*                           ObjectProp;                                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPropertyUtilsTestContext*                           ObjectPropStaticArray[0x3];                              // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPropertyUtilsTestContext*>                   ObjectPropDynamicArray;                                  // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     DoubleProp;                                              // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Int8Prop;                                                // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UInt8Prop;                                               // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Int16Prop;                                               // 0x005A(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   UInt16Prop;                                              // 0x005C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RCA[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Int32Prop;                                               // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   UInt32Prop;                                              // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Int64Prop;                                               // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   UInt64Prop;                                              // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ReplicatedEmitterTemplateOptions
	 * Size -> 0x0018
	 */
	struct FReplicatedEmitterTemplateOptions
	{
	public:
		class UParticleSystem*                                     DefaultTemplate;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     CensoredTemplate;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEligibleForCensoring;                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLG8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.EmitterFloatParam
	 * Size -> 0x0010
	 */
	struct FEmitterFloatParam
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GT9T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.EmitterVectorParam
	 * Size -> 0x0018
	 */
	struct FEmitterVectorParam
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Value;                                                   // 0x0008(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DXAE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.EmitterColorParam
	 * Size -> 0x0010
	 */
	struct FEmitterColorParam
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Value;                                                   // 0x0008(0x0004) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N62U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.EmitterWwiseEventRTPCParam
	 * Size -> 0x0010
	 */
	struct FEmitterWwiseEventRTPCParam
	{
	public:
		class UWwiseRtpc*                                          RTPC;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3M57[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.EmitterWwiseEvent
	 * Size -> 0x0040
	 */
	struct FEmitterWwiseEvent
	{
	public:
		class UObject*                                             ParamsProvider;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         Event;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEmitterWwiseEventRTPCParam>                 RTPCs;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UWwiseSwitch*>                                Switches;                                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             PlaybackLocation;                                        // 0x0030(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_604T[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SceneComponentSwitchRecord
	 * Size -> 0x0070
	 */
	struct FSceneComponentSwitchRecord
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ParentComponent;                                         // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneBodySwitchAction*                              DetachAction;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65YI[0x58];                                  // 0x0018(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ScreenParticleRecord
	 * Size -> 0x0030
	 */
	struct FScreenParticleRecord
	{
	public:
		unsigned char                                              UnknownData_WSTQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     Template;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            Component;                                               // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L67H[0x18];                                  // 0x0018(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ParticlePropertyTracker
	 * Size -> 0x0038
	 */
	struct FParticlePropertyTracker
	{
	public:
		class UParticlePropertyTrackingData*                       TrackingData;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     Template;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatParamValue;                                         // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastUpdateTime;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialPropertyName;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StanceStack
	 * Size -> 0x0050
	 */
	struct FStanceStack
	{
	public:
		unsigned char                                              UnknownData_5AX4[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Owner;                                                   // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EStanceStackLayer                                          Top;                                                     // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PJT6[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStanceDataProvider*                                 Stack[0x4];                                              // 0x0020(0x0020) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EStanceStackLayer                                          LayerCurr;                                               // 0x0040(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LTDB[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStanceData*                                         StanceCurr;                                              // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StatusEffectStackingStrategyData_DurationRefundData
	 * Size -> 0x0008
	 */
	struct FStatusEffectStackingStrategyData_DurationRefundData
	{
	public:
		bool                                                       bApplyReplacementRefund;                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFJM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RefundPercent;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.TargetLocationBoundsSettings
	 * Size -> 0x000C
	 */
	struct FTargetLocationBoundsSettings
	{
	public:
		float                                                      BoundsRadius;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoundsHalfHeight;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBoundsHalfHeight;                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTFS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.TargetLocationSettings
	 * Size -> 0x008C (FullSize[0x0098] - InheritedSize[0x000C])
	 */
	struct FTargetLocationSettings : public FTargetLocationBoundsSettings
	{
	public:
		unsigned char                                              UnknownData_K1UO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           Enabled;                                                 // 0x0010(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                Socket;                                                  // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.OverrideMeleeSocket
	 * Size -> 0x0018
	 */
	struct FOverrideMeleeSocket
	{
	public:
		class UGbxCondition*                                       OverrideCondition;                                       // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        OverrideSockets;                                         // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.TeamAttitudeSetEntry
	 * Size -> 0x0010
	 */
	struct FTeamAttitudeSetEntry
	{
	public:
		class UTeam*                                               OtherTeam;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamAttitude                                              Attitude;                                                // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8D6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.TerritoryData
	 * Size -> 0x0020
	 */
	struct FTerritoryData
	{
	public:
		bool                                                       bEverywhere;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17FL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCVM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AVolume*>                                     Volumes;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UseEvent
	 * Size -> 0x0018
	 */
	struct FUseEvent
	{
	public:
		class AController*                                         UserController;                                          // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 UsedComponent;                                           // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUsabilityType                                             UseType;                                                 // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasHeld;                                                // 0x0011(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAJ8[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CausedDamageDetails
	 * Size -> 0x0060
	 */
	struct FCausedDamageDetails
	{
	public:
		bool                                                       bWasCrit;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KN0F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0004(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitDirection;                                            // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMJC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHitRegionData*                                      HitRegion;                                               // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FHealthTypeDamageSummary>                    DamagePerHealthType;                                     // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             RadiusDamageOrigin;                                      // 0x0048(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageRadius;                                            // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDamageOverTime;                                       // 0x0058(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHGL[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CausedDeathDetails
	 * Size -> 0x0068
	 */
	struct FCausedDeathDetails
	{
	public:
		class UDamageSource*                                       DamageSource;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxDamageType*                                      DamageType;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               DamageInstigator;                                        // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverkillDamage;                                          // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasCrit;                                                // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasAwareOfKiller;                                       // 0x0029(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasFullyHealthy;                                        // 0x002A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28TO[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x002C(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitDirection;                                            // 0x0038(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RadiusDamageOrigin;                                      // 0x0044(0x000C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageRadius;                                            // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVEW[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHealthTypeDamageSummary>                    DamagePerHealthType;                                     // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CausedHealingDetails
	 * Size -> 0x0028
	 */
	struct FCausedHealingDetails
	{
	public:
		class AActor*                                              HealTarget;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              HealInstigator;                                          // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Healing;                                                 // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1MN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxDamageType*                                      DamageType;                                              // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitFriendlyEventDetails
	 * Size -> 0x0020
	 */
	struct FHitFriendlyEventDetails
	{
	public:
		class AActor*                                              HitTarget;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              HitInstigator;                                           // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageSource*                                       DamageSource;                                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxDamageType*                                      DamageType;                                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitByFriendlyEventDetails
	 * Size -> 0x0018
	 */
	struct FHitByFriendlyEventDetails
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxDamageType*                                      DamageType;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageSource*                                       DamageSource;                                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.BulletPerceptionProperties
	 * Size -> 0x0008
	 */
	struct FBulletPerceptionProperties
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHE5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActorPartList
	 * Size -> 0x0018
	 */
	struct FActorPartList
	{
	public:
		unsigned char                                              UnknownData_VS2J[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UActorPartData*>                              Parts;                                                   // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActorPartSelectionOverrideData
	 * Size -> 0x0010
	 */
	struct FActorPartSelectionOverrideData
	{
	public:
		TArray<struct FActorPartList>                              PreferredParts;                                          // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MinimalStaticRigidBodyState
	 * Size -> 0x001C
	 */
	struct FMinimalStaticRigidBodyState
	{
	public:
		uint32_t                                                   BoneIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              Position;                                                // 0x0004(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StaticRagdollReplicationData
	 * Size -> 0x0010
	 */
	struct FStaticRagdollReplicationData
	{
	public:
		TArray<struct FMinimalStaticRigidBodyState>                Bodies;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AimControlParameters
	 * Size -> 0x0078
	 */
	struct FAimControlParameters
	{
	public:
		class UAimControlData*                                     AimControlData;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJGZ[0x70];                                  // 0x0008(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CachedUIStatData
	 * Size -> 0x0040
	 */
	struct FCachedUIStatData
	{
	public:
		class UUIStatData*                                         Stat;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                Description;                                             // 0x0008(0x0018) Transient, NativeAccessSpecifierPrivate
		class FText                                                ValueText;                                               // 0x0020(0x0018) Transient, NativeAccessSpecifierPrivate
		float                                                      ComparisonValue;                                         // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EUIStatComparisonResult                                    ComparisonResult;                                        // 0x003C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6DYE[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CachedUIStatSectionData
	 * Size -> 0x0018
	 */
	struct FCachedUIStatSectionData
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FCachedUIStatData>                           Stats;                                                   // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CachedUIStatCollectionData
	 * Size -> 0x0010
	 */
	struct FCachedUIStatCollectionData
	{
	public:
		TArray<struct FCachedUIStatSectionData>                    Sections;                                                // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UserStatesReplicationData
	 * Size -> 0x0008
	 */
	struct FUserStatesReplicationData
	{
	public:
		bool                                                       bInitialized;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3TB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   PackedStateBits;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UserStateSetRuntimeData
	 * Size -> 0x0028
	 */
	struct FUserStateSetRuntimeData
	{
	public:
		class UByteProperty*                                       Property;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ActiveState;                                             // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGK9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxCondition*>                               EnableConditions;                                        // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLQ7[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UserStatesRuntimeData
	 * Size -> 0x0010
	 */
	struct FUserStatesRuntimeData
	{
	public:
		TArray<struct FUserStateSetRuntimeData>                    States;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CompiledUserSet
	 * Size -> 0x0048
	 */
	struct FCompiledUserSet
	{
	public:
		struct FMemberReference                                    StateProperty;                                           // 0x0000(0x0038) NativeAccessSpecifierPublic
		TArray<class FName>                                        EnableConditionVariableNames;                            // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CompiledUserStatesData
	 * Size -> 0x0010
	 */
	struct FCompiledUserStatesData
	{
	public:
		TArray<struct FCompiledUserSet>                            CompiledSets;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxUIFormattedText
	 * Size -> 0x0068
	 */
	struct FGbxUIFormattedText
	{
	public:
		class FText                                                FormatText;                                              // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              FormatParams[0x50];                                      // 0x0018(0x0050) UNKNOWN PROPERTY: MapProperty GbxGameSystemCore.GbxUIFormattedText.FormatParams
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAnimTableRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGbxAnimTableRow : public FTableRowBase
	{
	public:
		struct FAnimActionDef                                      Animation;                                               // 0x0008(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_SimpleAnim
	 * Size -> 0x03A0 (FullSize[0x0468] - InheritedSize[0x00C8])
	 */
	struct FActionState_SimpleAnim : public FActionState_Base
	{
	public:
		unsigned char                                              UnknownData_4D7N[0x3A0];                                 // 0x00C8(0x03A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_Anim
	 * Size -> 0x0090 (FullSize[0x04F8] - InheritedSize[0x0468])
	 */
	struct FActionState_Anim : public FActionState_SimpleAnim
	{
	public:
		unsigned char                                              UnknownData_A74N[0x90];                                  // 0x0468(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAnimInstanceProxy
	 * Size -> 0x0010 (FullSize[0x06D0] - InheritedSize[0x06C0])
	 */
	struct FGbxAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_D931[0x10];                                  // 0x06C0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxCharacterAnimInstanceProxy
	 * Size -> 0x0000 (FullSize[0x06D0] - InheritedSize[0x06D0])
	 */
	struct FGbxCharacterAnimInstanceProxy : public FGbxAnimInstanceProxy
	{	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_CoordinatedEffect
	 * Size -> 0x00F8 (FullSize[0x01C0] - InheritedSize[0x00C8])
	 */
	struct FActionState_CoordinatedEffect : public FActionState_Base
	{
	public:
		unsigned char                                              UnknownData_EFPH[0xF8];                                  // 0x00C8(0x00F8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_Gib
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FActionState_Gib : public FActionState_Base
	{
	public:
		unsigned char                                              UnknownData_WKWY[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_Loop
	 * Size -> 0x00D0 (FullSize[0x0538] - InheritedSize[0x0468])
	 */
	struct FActionState_Loop : public FActionState_SimpleAnim
	{
	public:
		unsigned char                                              UnknownData_5GDC[0xD0];                                  // 0x0468(0x00D0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_PhysicalAnim
	 * Size -> 0x0018 (FullSize[0x0510] - InheritedSize[0x04F8])
	 */
	struct FActionState_PhysicalAnim : public FActionState_Anim
	{
	public:
		unsigned char                                              UnknownData_7W8W[0x18];                                  // 0x04F8(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_PhysicalDeath
	 * Size -> 0x0028 (FullSize[0x0538] - InheritedSize[0x0510])
	 */
	struct FActionState_PhysicalDeath : public FActionState_PhysicalAnim
	{
	public:
		unsigned char                                              UnknownData_EBBR[0x28];                                  // 0x0510(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HealthTypeBalanceData
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FHealthTypeBalanceData : public FTableRowBase
	{	};

	/**
	 * ScriptStruct GbxGameSystemCore.AIChargeState
	 * Size -> 0x0018
	 */
	struct FAIChargeState
	{
	public:
		unsigned char                                              UnknownData_F4X1[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AimAssistSmoothingProperties
	 * Size -> 0x0020
	 */
	struct FAimAssistSmoothingProperties
	{
	public:
		unsigned char                                              UnknownData_689V[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastTarget;                                              // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTeam*                                               LastTargetTeam;                                          // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EYUW[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.PredictionSource
	 * Size -> 0x000C
	 */
	struct FPredictionSource
	{
	public:
		unsigned char                                              UnknownData_QV30[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAISightEvent
	 * Size -> 0x0018
	 */
	struct FGbxAISightEvent
	{
	public:
		unsigned char                                              UnknownData_O46X[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SeenActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Observer;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AsyncExplosionImpactRequestEntry
	 * Size -> 0x00A0
	 */
	struct FAsyncExplosionImpactRequestEntry
	{
	public:
		unsigned char                                              UnknownData_3W71[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GameStageGradeWeightData
	 * Size -> 0x0070
	 */
	struct FGameStageGradeWeightData
	{
	public:
		struct FAttributeInitializationData                        MinGameStage;                                            // 0x0000(0x0038) Edit, NoDestructor, NativeAccessSpecifierPrivate
		struct FAttributeInitializationData                        MaxGameStage;                                            // 0x0038(0x0038) Edit, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ChallengeDataType
	 * Size -> 0x0010
	 */
	struct FChallengeDataType
	{
	public:
		class UEnum*                                               ChallengeDataTypeEnum;                                   // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ChallengeDataType;                                       // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DH9G[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DamageScaleConditionalData
	 * Size -> 0x0050
	 */
	struct FDamageScaleConditionalData
	{
	public:
		bool                                                       bEvaluateUsingAttacker;                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAG0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCondition*                                       Condition;                                               // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddValueToDamage;                                       // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOAC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        DamageScale;                                             // 0x0018(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HitRegionDamagePreview
	 * Size -> 0x0018
	 */
	struct FHitRegionDamagePreview
	{
	public:
		struct FHitRegionInfo                                      HitRegion;                                               // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UG8G[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DynamicPhysicalAnimationTickFunction
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	struct FDynamicPhysicalAnimationTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_GV5Y[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ExplosionImpactOverride
	 * Size -> 0x0010
	 */
	struct FExplosionImpactOverride
	{
	public:
		class UMaterialInterface*                                  DecalOverride;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TT9N[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HapticFeedbackData
	 * Size -> 0x0010
	 */
	struct FHapticFeedbackData
	{
	public:
		class UHapticFeedbackEffect_Curve*                         HapticFeedbackEffect;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControllerHand                                            Hand;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9B0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.FeedbackAssociationRow
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FFeedbackAssociationRow : public FTableRowBase
	{
	public:
		class UFeedbackData*                                       Feedback;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.QueuedGameStatEvent
	 * Size -> 0x0018
	 */
	struct FQueuedGameStatEvent
	{
	public:
		TWeakObjectPtr<class AActor>                               StatContext;                                             // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UGameStatData>                        GameStat;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPKX[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_AICharge
	 * Size -> 0x0020 (FullSize[0x0488] - InheritedSize[0x0468])
	 */
	struct FActionState_AICharge : public FActionState_SimpleAnim
	{
	public:
		unsigned char                                              UnknownData_8K0O[0x20];                                  // 0x0468(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ExtraAnimationSettings
	 * Size -> 0x0030
	 */
	struct FExtraAnimationSettings
	{
	public:
		class FName                                                SkeletalMeshComponentName;                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimActionDef                                      AnimDef;                                                 // 0x0008(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AnimSlotOverride;                                        // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasAnimSlotOverride;                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3T7[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_BlueprintBase
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	struct FActionState_BlueprintBase : public FActionState_Base
	{	};

	/**
	 * ScriptStruct GbxGameSystemCore.CoordinatedAppliedMesh
	 * Size -> 0x0010
	 */
	struct FCoordinatedAppliedMesh
	{
	public:
		unsigned char                                              UnknownData_IJY1[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_DropshipSpawn
	 * Size -> 0x0068 (FullSize[0x04D0] - InheritedSize[0x0468])
	 */
	struct FActionState_DropshipSpawn : public FActionState_SimpleAnim
	{
	public:
		unsigned char                                              UnknownData_4RZM[0x68];                                  // 0x0468(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_Launch
	 * Size -> 0x0018 (FullSize[0x0480] - InheritedSize[0x0468])
	 */
	struct FActionState_Launch : public FActionState_SimpleAnim
	{
	public:
		unsigned char                                              UnknownData_GJQ7[0x18];                                  // 0x0468(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_Ragdoll
	 * Size -> 0x0148 (FullSize[0x05B0] - InheritedSize[0x0468])
	 */
	struct FActionState_Ragdoll : public FActionState_SimpleAnim
	{
	public:
		unsigned char                                              UnknownData_OIVD[0x148];                                 // 0x0468(0x0148) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttachedObjectCache
	 * Size -> 0x0050
	 */
	struct FAttachedObjectCache
	{
	public:
		unsigned char                                              UnknownData_6YUG[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MotionMatchedAnimationRow
	 * Size -> 0x0060 (FullSize[0x0080] - InheritedSize[0x0020])
	 */
	struct FMotionMatchedAnimationRow : public FGbxAnimTableRow
	{
	public:
		struct FVector                                             Forward;                                                 // 0x0020(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Up;                                                      // 0x002C(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0038(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x0044(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OverrideForward;                                         // 0x0050(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideForward;                                        // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSS4[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OverrideUp;                                              // 0x0060(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideUp;                                             // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDKM[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RootBoneToRootBodyOffset;                                // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      OffsetCalculationAxis;                                   // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOffsetCalculationAxisIsNegative;                        // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOGQ[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SampleTime;                                              // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoseDriverStrength;                                      // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActionState_StretchBones
	 * Size -> 0x0000 (FullSize[0x0468] - InheritedSize[0x0468])
	 */
	struct FActionState_StretchBones : public FActionState_SimpleAnim
	{	};

	/**
	 * ScriptStruct GbxGameSystemCore.ExampleStruct
	 * Size -> 0x0008
	 */
	struct FExampleStruct
	{
	public:
		struct FGameplayTag                                        ActionKey;                                               // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAnimNode_ApplyBoneModifyProfile
	 * Size -> 0x0040 (FullSize[0x0180] - InheritedSize[0x0140])
	 */
	struct FGbxAnimNode_ApplyBoneModifyProfile : public FAnimNode_SkeletalControlBase
	{
	public:
		class UGbxBoneModifyProfile*                               Config;                                                  // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBP9[0x38];                                  // 0x0148(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GlobalBMPCachedTransform
	 * Size -> 0x0020
	 */
	struct FGlobalBMPCachedTransform
	{
	public:
		unsigned char                                              UnknownData_3VCS[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAnimNode_CachedPoseBlend
	 * Size -> 0x0060 (FullSize[0x01A0] - InheritedSize[0x0140])
	 */
	struct FGbxAnimNode_CachedPoseBlend : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_HDSH[0x60];                                  // 0x0140(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAnimNode_ForwardDynamics
	 * Size -> 0x0170 (FullSize[0x0730] - InheritedSize[0x05C0])
	 */
	struct FGbxAnimNode_ForwardDynamics : public FAnimNode_RigidBody
	{
	public:
		class UPhysicalAnimationProfileAsset*                      ForwardDynamicsProfile;                                  // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EForwardDynamicsActivation                                 ForwardDynamicsActivation;                               // 0x05C8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QLU2[0x3];                                   // 0x05C9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_SXO1[0x4];                                   // 0x05CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PhysicsAssetStrengthDefinitionProfileName;               // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetSimulationFrequency;                               // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSubstepCount;                                         // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTranslationDistanceUntilReset;                        // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldSpaceVelocityBlend;                                 // 0x05E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldSpaceAngularVelocityBlend;                          // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JointAnchorPoseAlpha;                                    // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearJointDivergentTolerence;                           // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBypassSkelMeshSimulatePhysOption;                       // 0x05F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStripAnimationFromNonSimulationRelevantBones;           // 0x05F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YY56[0x13A];                                 // 0x05F6(0x013A) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxRefPoseBoneConstraint
	 * Size -> 0x0020
	 */
	struct FGbxRefPoseBoneConstraint
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0SR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAnimNode_RefPoseConstraints
	 * Size -> 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
	 */
	struct FGbxAnimNode_RefPoseConstraints : public FAnimNode_SkeletalControlBase
	{
	public:
		TArray<struct FGbxRefPoseBoneConstraint>                   Constraints;                                             // 0x0140(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4RH[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAnimNode_SimpleMotionBoneControl
	 * Size -> 0x0208 (FullSize[0x0348] - InheritedSize[0x0140])
	 */
	struct FGbxAnimNode_SimpleMotionBoneControl : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      ControlValue;                                            // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsActive;                                               // 0x0144(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoActivate;                                           // 0x0145(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaused;                                                 // 0x0146(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivateAfterRecovery;                                  // 0x0147(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BoneToModify;                                            // 0x0148(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      IdleSpeedControlValue;                                   // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActiveSpeedControlValue;                                 // 0x0164(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoverySpeedControlValue;                               // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      TranslationMode;                                         // 0x016C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TranslationSpace;                                        // 0x016D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QL1T[0x2];                                   // 0x016E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             IdleTranslation;                                         // 0x0170(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ActiveTranslation;                                       // 0x017C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  IdleTranslationState;                                    // 0x0188(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  ActiveTranslationState;                                  // 0x01A8(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  RecoveryTranslationState;                                // 0x01C8(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneModificationMode                                      RotationMode;                                            // 0x01E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          RotationSpace;                                           // 0x01E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKJY[0x2];                                   // 0x01EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            IdleRotation;                                            // 0x01EC(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            ActiveRotation;                                          // 0x01F8(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1QA[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSimpleMotionState                                  IdleRotationState;                                       // 0x0208(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  ActiveRotationState;                                     // 0x0228(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  RecoveryRotationState;                                   // 0x0248(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneModificationMode                                      ScaleMode;                                               // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ScaleSpace;                                              // 0x0269(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWU8[0x2];                                   // 0x026A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             IdleScale;                                               // 0x026C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ActiveScale;                                             // 0x0278(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0NR[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSimpleMotionState                                  IdleScaleState;                                          // 0x0288(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  ActiveScaleState;                                        // 0x02A8(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSimpleMotionState                                  RecoveryScaleState;                                      // 0x02C8(0x0020) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ControlImpulseSpeed;                                     // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlImpulseMaxValue;                                  // 0x02EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlImpulseDecayDelay;                                // 0x02F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlImpulseDecaySpeed;                                // 0x02F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQ5R[0x50];                                  // 0x02F8(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxAnimNode_StretchBones
	 * Size -> 0x0190 (FullSize[0x02D0] - InheritedSize[0x0140])
	 */
	struct FGbxAnimNode_StretchBones : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      StartBone;                                               // 0x0140(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EndBone;                                                 // 0x0158(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUniformStretch;                                         // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHBK[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimatedTargetDistance;                                  // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndAnimatedTargetDistance;                               // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetOffset;                                            // 0x017C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UOA[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUsingStretchDistance;                                   // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7AT9[0x3];                                   // 0x0191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchDistance;                                         // 0x0194(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceToGround;                                          // 0x0198(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCHD[0x3];                                   // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceToGroundDistance;                                   // 0x019C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStretchBonesMarkerMode                                    MarkerMode;                                              // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTI2[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      BoneToModify;                                            // 0x01A8(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LookAtBone;                                              // 0x01C0(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                LookAtSocket;                                            // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LookAtLocation;                                          // 0x01E0(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAXIS                                               LookAt_Axis;                                             // 0x01EC(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAXIS                                               EndLookAt_Axis;                                          // 0x01FC(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseLookUpAxis;                                          // 0x020C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XAV[0x3];                                   // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAXIS                                               LookUp_Axis;                                             // 0x0210(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LookAtClamp;                                             // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpolationBlend                                        InterpolationType;                                       // 0x0224(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXHA[0x3];                                   // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpolationTime;                                       // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTriggerThreashold;                          // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_205O[0xA0];                                  // 0x0230(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.BakedMachineInfo
	 * Size -> 0x0020
	 */
	struct FBakedMachineInfo
	{
	public:
		unsigned char                                              UnknownData_QUQL[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.BoneModifyTransition
	 * Size -> 0x0070
	 */
	struct FBoneModifyTransition
	{
	public:
		struct FBoneReference                                      BoneRef;                                                 // 0x0000(0x0018) NoDestructor, NativeAccessSpecifierPublic
		EBoneModifyTransition_TransformType                        Type;                                                    // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GMP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         Blend;                                                   // 0x0020(0x0038) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Base;                                                    // 0x0058(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Desired;                                                 // 0x0064(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleCheckData
	 * Size -> 0x0208
	 */
	struct FMantleCheckData
	{
	public:
		unsigned char                                              UnknownData_GGB5[0x208];                                 // 0x0000(0x0208) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleCheckTypeData
	 * Size -> 0x00B8
	 */
	struct FMantleCheckTypeData
	{
	public:
		unsigned char                                              UnknownData_FKET[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleCheckTypeData_MantleUp
	 * Size -> 0x0004 (FullSize[0x00BC] - InheritedSize[0x00B8])
	 */
	struct FMantleCheckTypeData_MantleUp : public FMantleCheckTypeData
	{
	public:
		unsigned char                                              UnknownData_EG0X[0x4];                                   // 0x00B8(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MantleStandData
	 * Size -> 0x003C
	 */
	struct FMantleStandData
	{
	public:
		unsigned char                                              UnknownData_XLCJ[0x3C];                                  // 0x0000(0x003C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.DistanceMatchingInfo
	 * Size -> 0x0070
	 */
	struct FDistanceMatchingInfo
	{
	public:
		TMap<int32_t, struct FFloatCurve>                          DistanceCurveMap;                                        // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6D1[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.CachedStoppingInfo
	 * Size -> 0x0014
	 */
	struct FCachedStoppingInfo
	{
	public:
		unsigned char                                              UnknownData_AS3S[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StopDistanceMatchingInfo
	 * Size -> 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
	 */
	struct FStopDistanceMatchingInfo : public FDistanceMatchingInfo
	{
	public:
		TMap<int32_t, struct FCachedStoppingInfo>                  StoppingInfoMap;                                         // 0x0070(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ActiveGbxFeedbackEffect
	 * Size -> 0x0068
	 */
	struct FActiveGbxFeedbackEffect
	{
	public:
		class UGbxFeedbackData*                                    ActiveData;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AGbxPlayerController>                 Controller;                                              // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7CQL[0x38];                                  // 0x0010(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UObject>                              SourceContext;                                           // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MG8Q[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxObjectReplicatorProxyItem
	 * Size -> 0x0018
	 */
	struct FGbxObjectReplicatorProxyItem
	{
	public:
		unsigned char                                              Object[0x10];                                            // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxGameSystemCore.GbxObjectReplicatorProxyItem.Object
		class UActorComponent*                                     Component;                                               // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxObjectReplicatorProxy
	 * Size -> 0x0068
	 */
	struct FGbxObjectReplicatorProxy
	{
	public:
		TArray<struct FGbxObjectReplicatorProxyItem>               Items;                                                   // 0x0000(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M5MB[0x58];                                  // 0x0010(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RecentlyMetPlayer
	 * Size -> 0x0058
	 */
	struct FRecentlyMetPlayer
	{
	public:
		struct FUniqueNetIdRepl                                    FirstPartyPlayerId;                                      // 0x0000(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    ShiftPlayerId;                                           // 0x0028(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseShiftId;                                             // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_024Z[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.HomingTargetedActorInfo
	 * Size -> 0x0010
	 */
	struct FHomingTargetedActorInfo
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProjectileCount;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MR7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ImpactEffectEventInfo
	 * Size -> 0x0028
	 */
	struct FImpactEffectEventInfo
	{
	public:
		class AActor*                                              InstigatorActor;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              HitActor;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   HitMaterial;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JPU[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.InstigatorAttributeEffectData
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FInstigatorAttributeEffectData : public FAttributeEffectData
	{
	public:
		EInstigatorAttributeEffectAttributeToModifyContextSource   AttributeToModifyContextSource;                          // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInstigatorAttributeEffectModifierValueContext             ModifierValueContext;                                    // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DODO[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MontageLoopHelper
	 * Size -> 0x00C0
	 */
	struct FMontageLoopHelper
	{
	public:
		unsigned char                                              UnknownData_1G86[0xC0];                                  // 0x0000(0x00C0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.MontageLoopRecord
	 * Size -> 0x0020
	 */
	struct FMontageLoopRecord
	{
	public:
		unsigned char                                              UnknownData_M8EG[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ArticulatedRigidBodyState
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	struct FArticulatedRigidBodyState : public FRigidBodyState
	{
	public:
		class FName                                                BodyName;                                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZIT[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RagdollReplicationData
	 * Size -> 0x0018
	 */
	struct FRagdollReplicationData
	{
	public:
		unsigned char                                              UnknownData_0AA6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FArticulatedRigidBodyState>                  Bodies;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ReferenceActorClasses
	 * Size -> 0x0020
	 */
	struct FReferenceActorClasses
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ActorAsset;                                              // 0x0008(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.SharedAnimInstanceData
	 * Size -> 0x0020
	 */
	struct FSharedAnimInstanceData
	{
	public:
		unsigned char                                              UnknownData_1JT5[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.StanceVectorValue
	 * Size -> 0x0010
	 */
	struct FStanceVectorValue
	{
	public:
		EStanceValueOverrideType                                   ValueType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MCVQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Value;                                                   // 0x0004(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.RandomValueRow
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FRandomValueRow : public FAttributeDefinedValueRow
	{
	public:
		struct FAttributeInitializationData                        RNG_LowerBound;                                          // 0x0008(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAttributeInitializationData                        RNG_UpperBound;                                          // 0x0040(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIntegerOnlyValues;                                      // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AYAT[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        OptionalOutputMinValue;                                  // 0x0080(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClampToOutputMinValue;                                  // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1S0N[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttributeInitializationData                        OptionalOutputMaxValue;                                  // 0x00C0(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClampToOutputMaxValue;                                  // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OPR[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.GbxParamDefinedSingleValueRow
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FGbxParamDefinedSingleValueRow : public FAttributeDefinedValueRow
	{
	public:
		struct FGbxParam                                           Value;                                                   // 0x0008(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttributeDefinedSingleValueRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FAttributeDefinedSingleValueRow : public FAttributeDefinedValueRow
	{
	public:
		struct FAttributeInitializationData                        Value;                                                   // 0x0008(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.AttributeEffectValueContextHardRef
	 * Size -> 0x0018
	 */
	struct FAttributeEffectValueContextHardRef
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ContextResolverOverride;                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X77U[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.TargetLocationData
	 * Size -> 0x0020
	 */
	struct FTargetLocationData
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C) Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetBoundsCenter;                                      // 0x000C(0x000C) Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetBoundsRadius;                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetBoundsHalfHeight;                                  // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.TargetQueryTestDebugDesc
	 * Size -> 0x0008
	 */
	struct FTargetQueryTestDebugDesc
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Score;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.TargetQueryDebugDesc
	 * Size -> 0x0038
	 */
	struct FTargetQueryDebugDesc
	{
	public:
		class FString                                              DebugGroup;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Actor;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTeam*                                               Team;                                                    // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Score;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7CQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FailReason;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.TargetPersistentNotes
	 * Size -> 0x0048
	 */
	struct FTargetPersistentNotes
	{
	public:
		unsigned char                                              UnknownData_TAR2[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ReplicatedUIStatCollectionData
	 * Size -> 0x0010
	 */
	struct FReplicatedUIStatCollectionData
	{
	public:
		unsigned char                                              UnknownData_4S3V[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.UserStateEnumValue
	 * Size -> 0x0038
	 */
	struct FUserStateEnumValue
	{
	public:
		struct FSimpleMemberReference                              StateProperty;                                           // 0x0000(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0020(0x0008) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEnum*                                               Enum;                                                    // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EnumValue;                                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BV5[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxGameSystemCore.ViewModelOffsetImpulseInfo
	 * Size -> 0x0038
	 */
	struct FViewModelOffsetImpulseInfo
	{
	public:
		float                                                      EaseInDuration;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxEasingFunc                                      EaseInFunc;                                              // 0x0004(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      EaseOutDuration;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxEasingFunc                                      EaseOutFunc;                                             // 0x0014(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            RotationExtent;                                          // 0x0020(0x000C) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TranslationExtent;                                       // 0x002C(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxGameSystemCore.VectorWaveform
	 * Size -> 0x0024
	 */
	struct FVectorWaveform
	{
	public:
		struct FFloatWaveform                                      X;                                                       // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFloatWaveform                                      Y;                                                       // 0x000C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFloatWaveform                                      Z;                                                       // 0x0018(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
