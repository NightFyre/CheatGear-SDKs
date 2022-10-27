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
	 * Enum AIModule.EPathFollowingResult
	 */
	enum class EPathFollowingResult : uint8_t
	{
		Success = 0,
		Blocked = 1,
		OffPath = 2,
		Aborted = 3,
		Skipped = 4,
		Invalid = 5,
		MAX     = 6
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
	 * Enum AIModule.EAILockSource
	 */
	enum class EAILockSource : uint8_t
	{
		Animation = 0,
		Logic     = 1,
		Script    = 2,
		Gameplay  = 3,
		MAX       = 4,
		MAX01     = 5
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
		MAX        = 5,
		MAX01      = 6
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
	 * Enum AIModule.EPawnActionAbortState
	 */
	enum class EPawnActionAbortState : uint8_t
	{
		NeverStarted          = 0,
		NotBeingAborted       = 1,
		MarkPendingAbort      = 2,
		LatentAbortInProgress = 3,
		AbortDone             = 4,
		MAX                   = 5,
		MAX01                 = 6
	};

	/**
	 * Enum AIModule.EAIOptionFlag
	 */
	enum class EAIOptionFlag : uint8_t
	{
		Default = 0,
		Enable  = 1,
		Disable = 2,
		MAX     = 3,
		MAX01   = 4
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
	 * Enum AIModule.EBasicKeyOperation
	 */
	enum class EBasicKeyOperation : uint8_t
	{
		Set    = 0,
		NotSet = 1,
		MAX    = 2
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
	 * Enum AIModule.ETeamAttitude
	 */
	enum class ETeamAttitude : uint8_t
	{
		Friendly = 0,
		Neutral  = 1,
		Hostile  = 2,
		Alliance = 3,
		MAX      = 4
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
	 * Enum AIModule.EBTChildIndex
	 */
	enum class EBTChildIndex : uint8_t
	{
		FirstNode = 0,
		TaskNode  = 1,
		MAX       = 2
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
	 * Enum AIModule.EBTParallelMode
	 */
	enum class EBTParallelMode : uint8_t
	{
		AbortBackground   = 0,
		WaitForBackground = 1,
		MAX               = 2
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
	 * Enum AIModule.EEnvDirection
	 */
	enum class EEnvDirection : uint8_t
	{
		TwoPoints = 0,
		Rotation  = 1,
		MAX       = 2
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
	 * Enum AIModule.EEnvQueryTrace
	 */
	enum class EEnvQueryTrace : uint8_t
	{
		None           = 0,
		Navigation     = 1,
		Geometry       = 2,
		RejectGeometry = 3,
		MAX            = 4
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
	 * Enum AIModule.EEnvQueryRunMode
	 */
	enum class EEnvQueryRunMode : uint8_t
	{
		SingleResult          = 0,
		RandomBest5Pct        = 1,
		RandomBest25Pct       = 2,
		AllMatching           = 3,
		RandomFromAllMatching = 4,
		MAX                   = 5
	};

	/**
	 * Enum AIModule.EEnvTestScoreOperator
	 */
	enum class EEnvTestScoreOperator : uint8_t
	{
		AverageScore = 0,
		MinScore     = 1,
		MaxScore     = 2,
		MAX          = 3
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
	 * Enum AIModule.EEnvTestScoreEquation
	 */
	enum class EEnvTestScoreEquation : uint8_t
	{
		Linear        = 0,
		Square        = 1,
		InverseLinear = 2,
		Constant      = 3,
		MAX           = 4
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
	 * Enum AIModule.EPawnActionFailHandling
	 */
	enum class EPawnActionFailHandling : uint8_t
	{
		RequireSuccess = 0,
		IgnoreFailure  = 1,
		MAX            = 2
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
	 * Enum AIModule.EEnvTestDistance
	 */
	enum class EEnvTestDistance : uint8_t
	{
		Distance3D = 0,
		Distance2D = 1,
		DistanceZ  = 2,
		MAX        = 3
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
	 * ScriptStruct AIModule.BlackboardKeySelector
	 * Size -> 0x0028
	 */
	struct FBlackboardKeySelector
	{
	public:
		TArray<class UBlackboardKeyType*>                          AllowedTypes;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient
		class FName                                                SelectedKeyName;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              SelectedKeyType;                                         // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              SelectedKeyID;                                           // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_0SIV[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bNoneIsAllowedValue : 1;                                 // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, Protected
		unsigned char                                              UnknownData_KZH3[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvNamedValue
	 * Size -> 0x0010
	 */
	struct FEnvNamedValue
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryParam                                             ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AEI4[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderValue
	 * Size -> 0x0020
	 */
	struct FAIDataProviderValue
	{
	public:
		unsigned char                                              UnknownData_9JD7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProperty*                                           CachedProperty;                                          // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIDataProvider*                                     DataBinding;                                             // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                DataField;                                               // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderTypedValue
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAIDataProviderTypedValue : public FAIDataProviderValue
	{
	public:
		class UClass*                                              PropertyType;                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderBoolValue
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
	{
	public:
		bool                                                       DefaultValue;                                            // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6VYY[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderFloatValue
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
	{
	public:
		float                                                      DefaultValue;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BDLW[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIRequestID
	 * Size -> 0x0004
	 */
	struct FAIRequestID
	{
	public:
		uint32_t                                                   RequestID;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.PawnActionStack
	 * Size -> 0x0008
	 */
	struct FPawnActionStack
	{
	public:
		class UPawnAction*                                         TopAction;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.PawnActionEvent
	 * Size -> 0x0018
	 */
	struct FPawnActionEvent
	{
	public:
		class UPawnAction*                                         Action;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JSHB[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.CustomDataProviderObjectPropertySelector
	 * Size -> 0x0010
	 */
	struct FCustomDataProviderObjectPropertySelector
	{
	public:
		class UClass*                                              ObjectClass;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                PropertyName;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.AIStimulus
	 * Size -> 0x003C
	 */
	struct FAIStimulus
	{
	public:
		float                                                      Age;                                                     // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      ExpirationAge;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      Strength;                                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StimulusLocation;                                        // 0x000C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ReceiverLocation;                                        // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                Tag;                                                     // 0x0024(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DIKP[0xC];                                   // 0x002C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UnknownData_ETBS : 1;                                    // 0x0038(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bSuccessfullySensed : 1;                                 // 0x0038(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, Protected
		unsigned char                                              UnknownData_E5RO[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.ActorPerceptionBlueprintInfo
	 * Size -> 0x0020
	 */
	struct FActorPerceptionBlueprintInfo
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIStimulus>                                 LastSensedStimuli;                                       // 0x0008(0x0010) BlueprintVisible, ZeroConstructor
		unsigned char                                              bIsHostile : 1;                                          // 0x0018(0x0001) BIT_FIELD BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_PFKX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDamageEvent
	 * Size -> 0x0030
	 */
	struct FAIDamageEvent
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U7LA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Instigator;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.AINoiseEvent
	 * Size -> 0x0030
	 */
	struct FAINoiseEvent
	{
	public:
		unsigned char                                              UnknownData_HZNZ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NoiseLocation;                                           // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Loudness;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxRange;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Instigator;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Tag;                                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MTEC[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIPredictionEvent
	 * Size -> 0x0018
	 */
	struct FAIPredictionEvent
	{
	public:
		class AActor*                                              Requestor;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              PredictedActor;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4DBJ[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AITeamStimulusEvent
	 * Size -> 0x0038
	 */
	struct FAITeamStimulusEvent
	{
	public:
		unsigned char                                              UnknownData_Z8EM[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Broadcaster;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Enemy;                                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.AITouchEvent
	 * Size -> 0x0020
	 */
	struct FAITouchEvent
	{
	public:
		unsigned char                                              UnknownData_YAKA[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TouchReceiver;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              OtherActor;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.AISenseAffiliationFilter
	 * Size -> 0x0004
	 */
	struct FAISenseAffiliationFilter
	{
	public:
		unsigned char                                              bDetectEnemies : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor
		unsigned char                                              bDetectNeutrals : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor
		unsigned char                                              bDetectFriendlies : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_VN32[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.BTDecoratorLogic
	 * Size -> 0x0004
	 */
	struct FBTDecoratorLogic
	{
	public:
		EBTDecoratorLogic                                          Operation;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2MSV[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   Number;                                                  // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.BTCompositeChild
	 * Size -> 0x0030
	 */
	struct FBTCompositeChild
	{
	public:
		class UBTCompositeNode*                                    ChildComposite;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBTTaskNode*                                         ChildTask;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UBTDecorator*>                                Decorators;                                              // 0x0010(0x0010) ZeroConstructor
		TArray<struct FBTDecoratorLogic>                           DecoratorOps;                                            // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct AIModule.BehaviorTreeTemplateInfo
	 * Size -> 0x0018
	 */
	struct FBehaviorTreeTemplateInfo
	{
	public:
		class UBehaviorTree*                                       Asset;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBTCompositeNode*                                    Template;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PX3K[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.BlackboardEntry
	 * Size -> 0x0018
	 */
	struct FBlackboardEntry
	{
	public:
		class FName                                                EntryName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlackboardKeyType*                                  KeyType;                                                 // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              bInstanceSynced : 1;                                     // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_261B[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.CrowdAvoidanceConfig
	 * Size -> 0x001C
	 */
	struct FCrowdAvoidanceConfig
	{
	public:
		float                                                      VelocityBias;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredVelocityWeight;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentVelocityWeight;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SideBiasWeight;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ImpactTimeWeight;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ImpactTimeRange;                                         // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CustomPatternIdx;                                        // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              AdaptiveDivisions;                                       // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              AdaptiveRings;                                           // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              AdaptiveDepth;                                           // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
	 * Size -> 0x0020
	 */
	struct FCrowdAvoidanceSamplingPattern
	{
	public:
		TArray<float>                                              Angles;                                                  // 0x0000(0x0010) Edit, ZeroConstructor
		TArray<float>                                              Radii;                                                   // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AIModule.EnvQueryInstanceCache
	 * Size -> 0x0290
	 */
	struct FEnvQueryInstanceCache
	{
	public:
		class UEnvQuery*                                           Template;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R42C[0x288];                                 // 0x0008(0x0288) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvTraceData
	 * Size -> 0x0040
	 */
	struct FEnvTraceData
	{
	public:
		int32_t                                                    VersionNum;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L7ZI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NavigationFilter;                                        // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                OverrideNavMesh;                                         // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectDown;                                             // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectUp;                                               // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExtentX;                                                 // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExtentY;                                                 // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExtentZ;                                                 // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PostProjectionVerticalOffset;                            // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETraceTypeQuery                                            TraceChannel;                                            // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionChannel                                          SerializedChannel;                                       // 0x0031(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvTraceShape                                             TraceShape;                                              // 0x0032(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEnvQueryTrace                                             TraceMode;                                               // 0x0033(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bTraceComplex : 1;                                       // 0x0034(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		unsigned char                                              bOnlyBlockingHits : 1;                                   // 0x0034(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		unsigned char                                              bCanTraceOnNavMesh : 1;                                  // 0x0034(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              bCanTraceOnGeometry : 1;                                 // 0x0034(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              bCanDisableTrace : 1;                                    // 0x0034(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              bCanProjectDown : 1;                                     // 0x0034(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_10N9[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseUpDownAsAbsoluteZStartAndEnd;                        // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       bUseSourceZAsEnd;                                        // 0x0039(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_TD3G[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderIntValue
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
	{
	public:
		int32_t                                                    DefaultValue;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WB74[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvDirection
	 * Size -> 0x0020
	 */
	struct FEnvDirection
	{
	public:
		class UClass*                                              LineFrom;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              LineTo;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              Rotation;                                                // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EEnvDirection                                              DirMode;                                                 // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y6ST[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIMoveRequest
	 * Size -> 0x0040
	 */
	struct FAIMoveRequest
	{
	public:
		class AActor*                                              GoalActor;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_6Z6W[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.GenericTeamId
	 * Size -> 0x0001
	 */
	struct FGenericTeamId
	{
	public:
		unsigned char                                              TeamID;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderStructValue
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FAIDataProviderStructValue : public FAIDataProviderValue
	{
	public:
		unsigned char                                              UnknownData_QTBT[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.IgnoreActorInfo
	 * Size -> 0x000C
	 */
	struct FIgnoreActorInfo
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		float                                                      TimeRemaining;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.AISightEvent
	 * Size -> 0x0018
	 */
	struct FAISightEvent
	{
	public:
		unsigned char                                              UnknownData_AGGW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SeenActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Observer;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.EnvBoolParam_DEPRECATED
	 * Size -> 0x000C
	 */
	struct FEnvBoolParam_DEPRECATED
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RWPF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParamName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.EnvBoolParam
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FEnvBoolParam : public FEnvBoolParam_DEPRECATED
	{	};

	/**
	 * ScriptStruct AIModule.EnvIntParam_DEPRECATED
	 * Size -> 0x000C
	 */
	struct FEnvIntParam_DEPRECATED
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ParamName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.EnvIntParam
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FEnvIntParam : public FEnvIntParam_DEPRECATED
	{	};

	/**
	 * ScriptStruct AIModule.EnvFloatParam_DEPRECATED
	 * Size -> 0x000C
	 */
	struct FEnvFloatParam_DEPRECATED
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ParamName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIModule.EnvFloatParam
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FEnvFloatParam : public FEnvFloatParam_DEPRECATED
	{	};

	/**
	 * ScriptStruct AIModule.EnvQueryResult
	 * Size -> 0x0040
	 */
	struct FEnvQueryResult
	{
	public:
		unsigned char                                              UnknownData_QSBW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemType;                                                // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_PXIM[0x14];                                  // 0x0018(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OptionIndex;                                             // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    QueryID;                                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WSGP[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvQueryRequest
	 * Size -> 0x0170
	 */
	struct FEnvQueryRequest
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UObject*                                             Owner;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UWorld*                                              World;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_THBK[0x158];                                 // 0x0018(0x0158) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
