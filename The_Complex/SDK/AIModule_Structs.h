﻿#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Enum AIModule.EPathFollowingResult
	 */
	enum class EPathFollowingResult : uint8_t
	{
		Success            = 0,
		Blocked            = 1,
		OffPath            = 2,
		Aborted            = 3,
		Skipped_DEPRECATED = 4,
		Invalid            = 5,
		MAX                = 6
	};

	/**
	 * Enum AIModule.EEnvQueryStatus
	 */
	enum class EEnvQueryStatus : uint8_t
	{
		Processing   = 0,
		Success      = 1,
		Failed       = 2,
		Aborted      = 3,
		OwnerLost    = 4,
		MissingParam = 5,
		MAX          = 6
	};

	/**
	 * Enum AIModule.EAISenseNotifyType
	 */
	enum class EAISenseNotifyType : uint8_t
	{
		OnEveryPerception  = 0,
		OnPerceptionChange = 1,
		MAX                = 2
	};

	/**
	 * Enum AIModule.EAITaskPriority
	 */
	enum class EAITaskPriority : uint8_t
	{
		Lowest       = 0,
		Low          = 1,
		AutonomousAI = 2,
		High         = 3,
		Ultimate     = 4,
		MAX          = 5
	};

	/**
	 * Enum AIModule.EAIOptionFlag
	 */
	enum class EAIOptionFlag : uint8_t
	{
		Default = 0,
		Enable  = 1,
		Disable = 2,
		MAX     = 3
	};

	/**
	 * Enum AIModule.FAIDistanceType
	 */
	enum class EFAIDistanceType : uint8_t
	{
		FAIDistanceType_Distance3D = 0,
		FAIDistanceType_Distance2D = 1,
		FAIDistanceType_DistanceZ  = 2,
		FAIDistanceType_MAX        = 3
	};

	/**
	 * Enum AIModule.EPawnActionAbortState
	 */
	enum class EPawnActionAbortState : uint8_t
	{
		NeverStarted          = 0,
		NotBeingAborted       = 1,
		MarkPendingAbort      = 2,
		LatentAbortInProgress = 3,
		AbortDone             = 4,
		MAX                   = 5
	};

	/**
	 * Enum AIModule.EPawnActionResult
	 */
	enum class EPawnActionResult : uint8_t
	{
		NotStarted = 0,
		InProgress = 1,
		Success    = 2,
		Failed     = 3,
		Aborted    = 4,
		MAX        = 5
	};

	/**
	 * Enum AIModule.EPawnActionEventType
	 */
	enum class EPawnActionEventType : uint8_t
	{
		Invalid           = 0,
		FailedToStart     = 1,
		InstantAbort      = 2,
		FinishedAborting  = 3,
		FinishedExecution = 4,
		Push              = 5,
		MAX               = 6
	};

	/**
	 * Enum AIModule.EAIRequestPriority
	 */
	enum class EAIRequestPriority : uint8_t
	{
		SoftScript = 0,
		Logic      = 1,
		HardScript = 2,
		Reaction   = 3,
		Ultimate   = 4,
		MAX        = 5
	};

	/**
	 * Enum AIModule.EAILockSource
	 */
	enum class EAILockSource : uint8_t
	{
		Animation = 0,
		Logic     = 1,
		Script    = 2,
		Gameplay  = 3,
		MAX       = 4
	};

	/**
	 * Enum AIModule.EGenericAICheck
	 */
	enum class EGenericAICheck : uint8_t
	{
		Less           = 0,
		LessOrEqual    = 1,
		Equal          = 2,
		NotEqual       = 3,
		GreaterOrEqual = 4,
		Greater        = 5,
		IsTrue         = 6,
		MAX            = 7
	};

	/**
	 * Enum AIModule.EBTNodeResult
	 */
	enum class EBTNodeResult : uint8_t
	{
		Succeeded  = 0,
		Failed     = 1,
		Aborted    = 2,
		InProgress = 3,
		MAX        = 4
	};

	/**
	 * Enum AIModule.EBTFlowAbortMode
	 */
	enum class EBTFlowAbortMode : uint8_t
	{
		None          = 0,
		LowerPriority = 1,
		Self          = 2,
		Both          = 3,
		MAX           = 4
	};

	/**
	 * Enum AIModule.EBasicKeyOperation
	 */
	enum class EBasicKeyOperation : uint8_t
	{
		Set    = 0,
		NotSet = 1,
		MAX    = 2
	};

	/**
	 * Enum AIModule.EArithmeticKeyOperation
	 */
	enum class EArithmeticKeyOperation : uint8_t
	{
		Equal          = 0,
		NotEqual       = 1,
		Less           = 2,
		LessOrEqual    = 3,
		Greater        = 4,
		GreaterOrEqual = 5,
		MAX            = 6
	};

	/**
	 * Enum AIModule.ETextKeyOperation
	 */
	enum class ETextKeyOperation : uint8_t
	{
		Equal      = 0,
		NotEqual   = 1,
		Contain    = 2,
		NotContain = 3,
		MAX        = 4
	};

	/**
	 * Enum AIModule.EBTChildIndex
	 */
	enum class EBTChildIndex : uint8_t
	{
		FirstNode = 0,
		TaskNode  = 1,
		MAX       = 2
	};

	/**
	 * Enum AIModule.EBTDecoratorLogic
	 */
	enum class EBTDecoratorLogic : uint8_t
	{
		Invalid = 0,
		Test    = 1,
		And     = 2,
		Or      = 3,
		Not     = 4,
		MAX     = 5
	};

	/**
	 * Enum AIModule.EBTParallelMode
	 */
	enum class EBTParallelMode : uint8_t
	{
		AbortBackground   = 0,
		WaitForBackground = 1,
		MAX               = 2
	};

	/**
	 * Enum AIModule.EBTBlackboardRestart
	 */
	enum class EBTBlackboardRestart : uint8_t
	{
		ValueChange  = 0,
		ResultChange = 1,
		MAX          = 2
	};

	/**
	 * Enum AIModule.EBlackBoardEntryComparison
	 */
	enum class EBlackBoardEntryComparison : uint8_t
	{
		Equal    = 0,
		NotEqual = 1,
		MAX      = 2
	};

	/**
	 * Enum AIModule.EPathExistanceQueryType
	 */
	enum class EPathExistanceQueryType : uint8_t
	{
		NavmeshRaycast2D   = 0,
		HierarchicalQuery  = 1,
		RegularPathFinding = 2,
		MAX                = 3
	};

	/**
	 * Enum AIModule.EPointOnCircleSpacingMethod
	 */
	enum class EPointOnCircleSpacingMethod : uint8_t
	{
		BySpaceBetween   = 0,
		ByNumberOfPoints = 1,
		MAX              = 2
	};

	/**
	 * Enum AIModule.EEQSNormalizationType
	 */
	enum class EEQSNormalizationType : uint8_t
	{
		Absolute         = 0,
		RelativeToScores = 1,
		MAX              = 2
	};

	/**
	 * Enum AIModule.EEnvTestDistance
	 */
	enum class EEnvTestDistance : uint8_t
	{
		Distance3D        = 0,
		Distance2D        = 1,
		DistanceZ         = 2,
		DistanceAbsoluteZ = 3,
		MAX               = 4
	};

	/**
	 * Enum AIModule.EEnvTestDot
	 */
	enum class EEnvTestDot : uint8_t
	{
		Dot3D = 0,
		Dot2D = 1,
		MAX   = 2
	};

	/**
	 * Enum AIModule.EEnvTestPathfinding
	 */
	enum class EEnvTestPathfinding : uint8_t
	{
		PathExist  = 0,
		PathCost   = 1,
		PathLength = 2,
		MAX        = 3
	};

	/**
	 * Enum AIModule.EEnvTestPurpose
	 */
	enum class EEnvTestPurpose : uint8_t
	{
		Filter         = 0,
		Score          = 1,
		FilterAndScore = 2,
		MAX            = 3
	};

	/**
	 * Enum AIModule.EEnvTestFilterType
	 */
	enum class EEnvTestFilterType : uint8_t
	{
		Minimum = 0,
		Maximum = 1,
		Range   = 2,
		Match   = 3,
		MAX     = 4
	};

	/**
	 * Enum AIModule.EEnvTestScoreEquation
	 */
	enum class EEnvTestScoreEquation : uint8_t
	{
		Linear        = 0,
		Square        = 1,
		InverseLinear = 2,
		SquareRoot    = 3,
		Constant      = 4,
		MAX           = 5
	};

	/**
	 * Enum AIModule.EEnvTestWeight
	 */
	enum class EEnvTestWeight : uint8_t
	{
		None     = 0,
		Square   = 1,
		Inverse  = 2,
		Unused   = 3,
		Constant = 4,
		Skip     = 5,
		MAX      = 6
	};

	/**
	 * Enum AIModule.EEnvTestCost
	 */
	enum class EEnvTestCost : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		MAX    = 3
	};

	/**
	 * Enum AIModule.EEnvTestFilterOperator
	 */
	enum class EEnvTestFilterOperator : uint8_t
	{
		AllPass = 0,
		AnyPass = 1,
		MAX     = 2
	};

	/**
	 * Enum AIModule.EEnvTestScoreOperator
	 */
	enum class EEnvTestScoreOperator : uint8_t
	{
		AverageScore = 0,
		MinScore     = 1,
		MaxScore     = 2,
		Multiply     = 3,
		MAX          = 4
	};

	/**
	 * Enum AIModule.EEnvQueryRunMode
	 */
	enum class EEnvQueryRunMode : uint8_t
	{
		SingleResult    = 0,
		RandomBest5Pct  = 1,
		RandomBest25Pct = 2,
		AllMatching     = 3,
		MAX             = 4
	};

	/**
	 * Enum AIModule.EEnvQueryParam
	 */
	enum class EEnvQueryParam : uint8_t
	{
		Float = 0,
		Int   = 1,
		Bool  = 2,
		MAX   = 3
	};

	/**
	 * Enum AIModule.EAIParamType
	 */
	enum class EAIParamType : uint8_t
	{
		Float = 0,
		Int   = 1,
		Bool  = 2,
		MAX   = 3
	};

	/**
	 * Enum AIModule.EEnvQueryTrace
	 */
	enum class EEnvQueryTrace : uint8_t
	{
		None                 = 0,
		Navigation           = 1,
		GeometryByChannel    = 2,
		GeometryByProfile    = 3,
		NavigationOverLedges = 4,
		MAX                  = 5
	};

	/**
	 * Enum AIModule.EEnvTraceShape
	 */
	enum class EEnvTraceShape : uint8_t
	{
		Line    = 0,
		Box     = 1,
		Sphere  = 2,
		Capsule = 3,
		MAX     = 4
	};

	/**
	 * Enum AIModule.EEnvOverlapShape
	 */
	enum class EEnvOverlapShape : uint8_t
	{
		Box     = 0,
		Sphere  = 1,
		Capsule = 2,
		MAX     = 3
	};

	/**
	 * Enum AIModule.EEnvDirection
	 */
	enum class EEnvDirection : uint8_t
	{
		TwoPoints = 0,
		Rotation  = 1,
		MAX       = 2
	};

	/**
	 * Enum AIModule.EEnvQueryTestClamping
	 */
	enum class EEnvQueryTestClamping : uint8_t
	{
		None            = 0,
		SpecifiedValue  = 1,
		FilterThreshold = 2,
		MAX             = 3
	};

	/**
	 * Enum AIModule.EEnvQueryHightlightMode
	 */
	enum class EEnvQueryHightlightMode : uint8_t
	{
		All       = 0,
		Best5Pct  = 1,
		Best25Pct = 2,
		MAX       = 3
	};

	/**
	 * Enum AIModule.ETeamAttitude
	 */
	enum class ETeamAttitude : uint8_t
	{
		Friendly = 0,
		Neutral  = 1,
		Hostile  = 2,
		MAX      = 3
	};

	/**
	 * Enum AIModule.EPathFollowingStatus
	 */
	enum class EPathFollowingStatus : uint8_t
	{
		Idle    = 0,
		Waiting = 1,
		Paused  = 2,
		Moving  = 3,
		MAX     = 4
	};

	/**
	 * Enum AIModule.EPathFollowingAction
	 */
	enum class EPathFollowingAction : uint8_t
	{
		Error       = 0,
		NoMove      = 1,
		DirectMove  = 2,
		PartialPath = 3,
		PathToGoal  = 4,
		MAX         = 5
	};

	/**
	 * Enum AIModule.EPathFollowingRequestResult
	 */
	enum class EPathFollowingRequestResult : uint8_t
	{
		Failed            = 0,
		AlreadyAtGoal     = 1,
		RequestSuccessful = 2,
		MAX               = 3
	};

	/**
	 * Enum AIModule.EPawnSubActionTriggeringPolicy
	 */
	enum class EPawnSubActionTriggeringPolicy : uint8_t
	{
		CopyBeforeTriggering = 0,
		ReuseInstances       = 1,
		MAX                  = 2
	};

	/**
	 * Enum AIModule.EPawnActionFailHandling
	 */
	enum class EPawnActionFailHandling : uint8_t
	{
		RequireSuccess = 0,
		IgnoreFailure  = 1,
		MAX            = 2
	};

	/**
	 * Enum AIModule.EPawnActionMoveMode
	 */
	enum class EPawnActionMoveMode : uint8_t
	{
		UsePathfinding = 0,
		StraightLine   = 1,
		MAX            = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AIModule.AIDataProviderValue
	 * Size -> 0x0020
	 */
	struct FAIDataProviderValue
	{
	public:
		unsigned char                                              UnknownData_W9LV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIDataProvider*                                     DataBinding;                                             // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DataField;                                               // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderTypedValue
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FAIDataProviderTypedValue : public FAIDataProviderValue
	{
	public:
		class UClass*                                              PropertyType;                                            // 0x0020(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRG2[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderBoolValue
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
	{
	public:
		bool                                                       DefaultValue;                                            // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TP7V[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderFloatValue
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
	{
	public:
		float                                                      DefaultValue;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCTZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AISenseAffiliationFilter
	 * Size -> 0x0004
	 */
	struct FAISenseAffiliationFilter
	{
	public:
		unsigned char                                              bDetectEnemies : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDetectNeutrals : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDetectFriendlies : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D142[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDamageEvent
	 * Size -> 0x0050
	 */
	struct FAIDamageEvent
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQDI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitLocation;                                             // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamagedActor;                                            // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AINoiseEvent
	 * Size -> 0x0040
	 */
	struct FAINoiseEvent
	{
	public:
		unsigned char                                              UnknownData_9GJW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NoiseLocation;                                           // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Loudness;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YPL[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIPredictionEvent
	 * Size -> 0x0018
	 */
	struct FAIPredictionEvent
	{
	public:
		class AActor*                                              Requestor;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              PredictedActor;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KY39[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AITeamStimulusEvent
	 * Size -> 0x0050
	 */
	struct FAITeamStimulusEvent
	{
	public:
		unsigned char                                              UnknownData_TCRB[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Broadcaster;                                             // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              Enemy;                                                   // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AITouchEvent
	 * Size -> 0x0028
	 */
	struct FAITouchEvent
	{
	public:
		unsigned char                                              UnknownData_C9KC[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TouchReceiver;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              OtherActor;                                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AIMoveRequest
	 * Size -> 0x0048
	 */
	struct FAIMoveRequest
	{
	public:
		class AActor*                                              GoalActor;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_92T5[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.BTDecoratorLogic
	 * Size -> 0x0004
	 */
	struct FBTDecoratorLogic
	{
	public:
		EBTDecoratorLogic                                          Operation;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MVXM[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   Number;                                                  // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.BehaviorTreeTemplateInfo
	 * Size -> 0x0018
	 */
	struct FBehaviorTreeTemplateInfo
	{
	public:
		class UBehaviorTree*                                       Asset;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBTCompositeNode*                                    Template;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KX0G[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.BlackboardEntry
	 * Size -> 0x0018
	 */
	struct FBlackboardEntry
	{
	public:
		class FName                                                EntryName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlackboardKeyType*                                  KeyType;                                                 // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInstanceSynced : 1;                                     // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YRQO[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.BTCompositeChild
	 * Size -> 0x0030
	 */
	struct FBTCompositeChild
	{
	public:
		class UBTCompositeNode*                                    ChildComposite;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBTTaskNode*                                         ChildTask;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UBTDecorator*>                                Decorators;                                              // 0x0010(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FBTDecoratorLogic>                           DecoratorOps;                                            // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.BlackboardKeySelector
	 * Size -> 0x0028
	 */
	struct FBlackboardKeySelector
	{
	public:
		TArray<class UBlackboardKeyType*>                          AllowedTypes;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
		class FName                                                SelectedKeyName;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SelectedKeyType;                                         // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SelectedKeyID;                                           // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L1E9[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bNoneIsAllowedValue : 1;                                 // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A5EK[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDynamicParam
	 * Size -> 0x0038
	 */
	struct FAIDynamicParam
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIParamType                                               ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0I0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBKey;                                                   // 0x0010(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
	 * Size -> 0x0048
	 */
	struct FEQSParametrizedQueryExecutionRequest
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIDynamicParam>                             QueryConfig;                                             // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              EQSQueryBlackboardKey;                                   // 0x0018(0x0028) Edit, NativeAccessSpecifierPublic
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFMY[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseBBKeyForQueryTemplate : 1;                           // 0x0044(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0Z0[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.IntervalCountdown
	 * Size -> 0x0008
	 */
	struct FIntervalCountdown
	{
	public:
		float                                                      Interval;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVS7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvNamedValue
	 * Size -> 0x0010
	 */
	struct FEnvNamedValue
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIParamType                                               ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HBOW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.CrowdAvoidanceConfig
	 * Size -> 0x001C
	 */
	struct FCrowdAvoidanceConfig
	{
	public:
		float                                                      VelocityBias;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesiredVelocityWeight;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentVelocityWeight;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SideBiasWeight;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactTimeWeight;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactTimeRange;                                         // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomPatternIdx;                                        // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdaptiveDivisions;                                       // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdaptiveRings;                                           // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdaptiveDepth;                                           // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
	 * Size -> 0x0020
	 */
	struct FCrowdAvoidanceSamplingPattern
	{
	public:
		TArray<float>                                              Angles;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Radii;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.EnvTraceData
	 * Size -> 0x0040
	 */
	struct FEnvTraceData
	{
	public:
		int32_t                                                    VersionNum;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9HL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NavigationFilter;                                        // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectDown;                                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectUp;                                               // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentX;                                                 // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentY;                                                 // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentZ;                                                 // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostProjectionVerticalOffset;                            // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETraceTypeQuery                                            TraceChannel;                                            // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          SerializedChannel;                                       // 0x0029(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y87Z[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TraceProfileName;                                        // 0x002C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvTraceShape                                             TraceShape;                                              // 0x0034(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvQueryTrace                                             TraceMode;                                               // 0x0035(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E6RQ[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bTraceComplex : 1;                                       // 0x0038(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlyBlockingHits : 1;                                   // 0x0038(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanTraceOnNavMesh : 1;                                  // 0x0038(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanTraceOnGeometry : 1;                                 // 0x0038(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanDisableTrace : 1;                                    // 0x0038(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanProjectDown : 1;                                     // 0x0038(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BESS[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderIntValue
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
	{
	public:
		int32_t                                                    DefaultValue;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8CZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvDirection
	 * Size -> 0x0020
	 */
	struct FEnvDirection
	{
	public:
		class UClass*                                              LineFrom;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LineTo;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Rotation;                                                // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvDirection                                              DirMode;                                                 // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWHP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvQueryInstanceCache
	 * Size -> 0x0178
	 */
	struct FEnvQueryInstanceCache
	{
	public:
		class UEnvQuery*                                           Template;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7AO6[0x170];                                 // 0x0008(0x0170) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvOverlapData
	 * Size -> 0x0030
	 */
	struct FEnvOverlapData
	{
	public:
		float                                                      ExtentX;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentY;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentZ;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJNJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ShapeOffset;                                             // 0x0010(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          OverlapChannel;                                          // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvOverlapShape                                           OverlapShape;                                            // 0x0029(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBDN[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOnlyBlockingHits : 1;                                   // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverlapComplex : 1;                                     // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSkipOverlapQuerier : 1;                                 // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONJ8[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.PawnActionStack
	 * Size -> 0x0008
	 */
	struct FPawnActionStack
	{
	public:
		class UPawnAction*                                         TopAction;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct AIModule.PawnActionEvent
	 * Size -> 0x0018
	 */
	struct FPawnActionEvent
	{
	public:
		class UPawnAction*                                         Action;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFN5[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIStimulus
	 * Size -> 0x0058
	 */
	struct FAIStimulus
	{
	public:
		float                                                      Age;                                                     // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ExpirationAge;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Strength;                                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5WQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StimulusLocation;                                        // 0x0010(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ReceiverLocation;                                        // 0x0028(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SK5[0xC];                                   // 0x0048(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UnknownData_W6Z4 : 1;                                    // 0x0054(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bSuccessfullySensed : 1;                                 // 0x0054(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B7UR[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.ActorPerceptionUpdateInfo
	 * Size -> 0x0068
	 */
	struct FActorPerceptionUpdateInfo
	{
	public:
		int32_t                                                    TargetId;                                                // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Target;                                                  // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHDV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIStimulus                                         Stimulus;                                                // 0x0010(0x0058) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AIRequestID
	 * Size -> 0x0004
	 */
	struct FAIRequestID
	{
	public:
		uint32_t                                                   RequestID;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderStructValue
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FAIDataProviderStructValue : public FAIDataProviderValue
	{
	public:
		unsigned char                                              UnknownData_MRII[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.ActorPerceptionBlueprintInfo
	 * Size -> 0x0020
	 */
	struct FActorPerceptionBlueprintInfo
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIStimulus>                                 LastSensedStimuli;                                       // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bIsHostile : 1;                                          // 0x0018(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPUU[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AISightEvent
	 * Size -> 0x0018
	 */
	struct FAISightEvent
	{
	public:
		unsigned char                                              UnknownData_GNLB[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SeenActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Observer;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.EnvQueryManagerConfig
	 * Size -> 0x0030
	 */
	struct FEnvQueryManagerConfig
	{
	public:
		float                                                      MaxAllowedTestingTime;                                   // 0x0000(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTestQueriesUsingBreadth;                                // 0x0004(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVKO[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QueryCountWarningThreshold;                              // 0x0008(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60WM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     QueryCountWarningInterval;                               // 0x0010(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExecutionTimeWarningSeconds;                             // 0x0018(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     HandlingResultTimeWarningSeconds;                        // 0x0020(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     GenerationTimeWarningSeconds;                            // 0x0028(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.EnvQueryRequest
	 * Size -> 0x0068
	 */
	struct FEnvQueryRequest
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             Owner;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWorld*                                              World;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KQDM[0x50];                                  // 0x0018(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvQueryResult
	 * Size -> 0x0040
	 */
	struct FEnvQueryResult
	{
	public:
		unsigned char                                              UnknownData_RVEV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemType;                                                // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78NK[0x14];                                  // 0x0018(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OptionIndex;                                             // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QueryID;                                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QH0[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.GenericTeamId
	 * Size -> 0x0001
	 */
	struct FGenericTeamId
	{
	public:
		unsigned char                                              TeamID;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct AIModule.SimpleIndexedHandleBase
	 * Size -> 0x0004
	 */
	struct FSimpleIndexedHandleBase
	{
	public:
		unsigned char                                              UnknownData_L714[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.IndexedHandleBase
	 * Size -> 0x0004 (FullSize[0x0008] - InheritedSize[0x0004])
	 */
	struct FIndexedHandleBase : public FSimpleIndexedHandleBase
	{
	public:
		unsigned char                                              UnknownData_CLVV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.CompactIndexedHandleBase
	 * Size -> 0x0004
	 */
	struct FCompactIndexedHandleBase
	{
	public:
		unsigned char                                              UnknownData_4MYP[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.RecastGraphWrapper
	 * Size -> 0x00B0
	 */
	struct FRecastGraphWrapper
	{
	public:
		class ARecastNavMesh*                                      RecastNavMeshActor;                                      // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A15W[0xA8];                                  // 0x0008(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.SequentialIDBase
	 * Size -> 0x0004
	 */
	struct FSequentialIDBase
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
